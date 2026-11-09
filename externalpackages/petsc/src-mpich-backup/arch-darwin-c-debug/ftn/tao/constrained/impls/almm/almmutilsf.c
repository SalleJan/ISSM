#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoalmmgettype_ TAOALMMGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoalmmgettype_ taoalmmgettype
#endif
PETSC_EXTERN void taoalmmgettype_(Tao *tao, TaoALMMType *type, PetscErrorCode *ierr)
{
  *ierr = TaoALMMGetType(*tao, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoalmmsettype_ TAOALMMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoalmmsettype_ taoalmmsettype
#endif
PETSC_EXTERN void taoalmmsettype_(Tao *tao, TaoALMMType *type, PetscErrorCode *ierr)
{
  *ierr = TaoALMMSetType(*tao, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoalmmgetsubsolver_ TAOALMMGETSUBSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoalmmgetsubsolver_ taoalmmgetsubsolver
#endif
PETSC_EXTERN void taoalmmgetsubsolver_(Tao *tao, Tao *subsolver, PetscErrorCode *ierr)
{
  PetscBool null_subsolver = !*(void**) subsolver ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subsolver);
  *ierr = TaoALMMGetSubsolver(*tao, subsolver);
  if (*ierr) return;
  if (! null_subsolver && !*(void**) subsolver) *(void **) subsolver = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoalmmsetsubsolver_ TAOALMMSETSUBSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoalmmsetsubsolver_ taoalmmsetsubsolver
#endif
PETSC_EXTERN void taoalmmsetsubsolver_(Tao *tao, Tao *subsolver, PetscErrorCode *ierr)
{
  *ierr = TaoALMMSetSubsolver(*tao, *subsolver);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoalmmgetmultipliers_ TAOALMMGETMULTIPLIERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoalmmgetmultipliers_ taoalmmgetmultipliers
#endif
PETSC_EXTERN void taoalmmgetmultipliers_(Tao *tao, Vec *Y, PetscErrorCode *ierr)
{
  PetscBool null_Y = !*(void**) Y ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Y);
  *ierr = TaoALMMGetMultipliers(*tao, Y);
  if (*ierr) return;
  if (! null_Y && !*(void**) Y) *(void **) Y = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoalmmsetmultipliers_ TAOALMMSETMULTIPLIERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoalmmsetmultipliers_ taoalmmsetmultipliers
#endif
PETSC_EXTERN void taoalmmsetmultipliers_(Tao *tao, Vec *Y, PetscErrorCode *ierr)
{
  *ierr = TaoALMMSetMultipliers(*tao, *Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoalmmgetprimalis_ TAOALMMGETPRIMALIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoalmmgetprimalis_ taoalmmgetprimalis
#endif
PETSC_EXTERN void taoalmmgetprimalis_(Tao *tao, IS *opt_is, IS *slack_is, PetscErrorCode *ierr)
{
  PetscBool null_opt_is = !*(void**) opt_is ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_slack_is = !*(void**) slack_is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(opt_is);
  CHKFORTRANNULLOBJECT(slack_is);
  *ierr = TaoALMMGetPrimalIS(*tao, opt_is, slack_is);
  if (*ierr) return;
  if (! null_opt_is && !*(void**) opt_is) *(void **) opt_is = (void *)-2;
  if (! null_slack_is && !*(void**) slack_is) *(void **) slack_is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoalmmgetdualis_ TAOALMMGETDUALIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoalmmgetdualis_ taoalmmgetdualis
#endif
PETSC_EXTERN void taoalmmgetdualis_(Tao *tao, IS *eq_is, IS *ineq_is, PetscErrorCode *ierr)
{
  PetscBool null_eq_is = !*(void**) eq_is ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_ineq_is = !*(void**) ineq_is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(eq_is);
  CHKFORTRANNULLOBJECT(ineq_is);
  *ierr = TaoALMMGetDualIS(*tao, eq_is, ineq_is);
  if (*ierr) return;
  if (! null_eq_is && !*(void**) eq_is) *(void **) eq_is = (void *)-2;
  if (! null_ineq_is && !*(void**) ineq_is) *(void **) ineq_is = (void *)-2;
}
