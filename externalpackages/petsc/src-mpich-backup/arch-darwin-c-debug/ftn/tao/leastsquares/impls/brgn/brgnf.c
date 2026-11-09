#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taobrgngetdampingvector_ TAOBRGNGETDAMPINGVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taobrgngetdampingvector_ taobrgngetdampingvector
#endif
PETSC_EXTERN void taobrgngetdampingvector_(Tao *tao, Vec *d, PetscErrorCode *ierr)
{
  PetscBool null_d = !*(void**) d ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(d);
  *ierr = TaoBRGNGetDampingVector(*tao, d);
  if (*ierr) return;
  if (! null_d && !*(void**) d) *(void **) d = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taobrgngetregularizationtype_ TAOBRGNGETREGULARIZATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taobrgngetregularizationtype_ taobrgngetregularizationtype
#endif
PETSC_EXTERN void taobrgngetregularizationtype_(Tao *tao, TaoBRGNRegularizationType *type, PetscErrorCode *ierr)
{
  *ierr = TaoBRGNGetRegularizationType(*tao, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taobrgnsetregularizationtype_ TAOBRGNSETREGULARIZATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taobrgnsetregularizationtype_ taobrgnsetregularizationtype
#endif
PETSC_EXTERN void taobrgnsetregularizationtype_(Tao *tao, TaoBRGNRegularizationType *type, PetscErrorCode *ierr)
{
  *ierr = TaoBRGNSetRegularizationType(*tao, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taobrgngetsubsolver_ TAOBRGNGETSUBSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taobrgngetsubsolver_ taobrgngetsubsolver
#endif
PETSC_EXTERN void taobrgngetsubsolver_(Tao *tao, Tao *subsolver, PetscErrorCode *ierr)
{
  PetscBool null_subsolver = !*(void**) subsolver ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subsolver);
  *ierr = TaoBRGNGetSubsolver(*tao, subsolver);
  if (*ierr) return;
  if (! null_subsolver && !*(void**) subsolver) *(void **) subsolver = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taobrgnsetregularizerweight_ TAOBRGNSETREGULARIZERWEIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taobrgnsetregularizerweight_ taobrgnsetregularizerweight
#endif
PETSC_EXTERN void taobrgnsetregularizerweight_(Tao *tao, PetscReal *lambda, PetscErrorCode *ierr)
{
  *ierr = TaoBRGNSetRegularizerWeight(*tao, *lambda);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taobrgnsetl1smoothepsilon_ TAOBRGNSETL1SMOOTHEPSILON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taobrgnsetl1smoothepsilon_ taobrgnsetl1smoothepsilon
#endif
PETSC_EXTERN void taobrgnsetl1smoothepsilon_(Tao *tao, PetscReal *epsilon, PetscErrorCode *ierr)
{
  *ierr = TaoBRGNSetL1SmoothEpsilon(*tao, *epsilon);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taobrgnsetdictionarymatrix_ TAOBRGNSETDICTIONARYMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taobrgnsetdictionarymatrix_ taobrgnsetdictionarymatrix
#endif
PETSC_EXTERN void taobrgnsetdictionarymatrix_(Tao *tao, Mat *dict, PetscErrorCode *ierr)
{
  *ierr = TaoBRGNSetDictionaryMatrix(*tao, *dict);
  if (*ierr) return;
}
