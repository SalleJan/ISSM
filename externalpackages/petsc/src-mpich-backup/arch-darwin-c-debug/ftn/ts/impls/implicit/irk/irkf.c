#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsirktableaucreate_ TSIRKTABLEAUCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsirktableaucreate_ tsirktableaucreate
#endif
PETSC_EXTERN void tsirktableaucreate_(TS *ts, PetscInt *nstages, const PetscReal *A, const PetscReal *b, const PetscReal *c, const PetscReal *binterp, const PetscScalar *A_inv, const PetscScalar *A_inv_rowsum, const PetscScalar *I_s, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(A);
  CHKFORTRANNULLREAL(b);
  CHKFORTRANNULLREAL(c);
  CHKFORTRANNULLREAL(binterp);
  CHKFORTRANNULLSCALAR(A_inv);
  CHKFORTRANNULLSCALAR(A_inv_rowsum);
  CHKFORTRANNULLSCALAR(I_s);
  *ierr = TSIRKTableauCreate(*ts, *nstages, A, b, c, binterp, A_inv, A_inv_rowsum, I_s);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsirkregisterdestroy_ TSIRKREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsirkregisterdestroy_ tsirkregisterdestroy
#endif
PETSC_EXTERN void tsirkregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = TSIRKRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsirkinitializepackage_ TSIRKINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsirkinitializepackage_ tsirkinitializepackage
#endif
PETSC_EXTERN void tsirkinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSIRKInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsirkfinalizepackage_ TSIRKFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsirkfinalizepackage_ tsirkfinalizepackage
#endif
PETSC_EXTERN void tsirkfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSIRKFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsirksettype_ TSIRKSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsirksettype_ tsirksettype
#endif
PETSC_EXTERN void tsirksettype_(TS *ts, char *irktype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_irktype)
{
  char* c_irktype;
  FIXCHAR(irktype, l_irktype, c_irktype);
  *ierr = TSIRKSetType(*ts, c_irktype);
  if (*ierr) return;
  FREECHAR(irktype, c_irktype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsirkgettype_ TSIRKGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsirkgettype_ tsirkgettype
#endif
PETSC_EXTERN void tsirkgettype_(TS *ts, char *irktype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_irktype)
{
  char* c_irktype = PETSC_NULLPTR;
  *ierr = TSIRKGetType(*ts, (const char **)&c_irktype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)irktype, c_irktype, l_irktype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, irktype, l_irktype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsirksetnumstages_ TSIRKSETNUMSTAGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsirksetnumstages_ tsirksetnumstages
#endif
PETSC_EXTERN void tsirksetnumstages_(TS *ts, PetscInt *nstages, PetscErrorCode *ierr)
{
  *ierr = TSIRKSetNumStages(*ts, *nstages);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsirkgetnumstages_ TSIRKGETNUMSTAGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsirkgetnumstages_ tsirkgetnumstages
#endif
PETSC_EXTERN void tsirkgetnumstages_(TS *ts, PetscInt *nstages, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nstages);
  *ierr = TSIRKGetNumStages(*ts, nstages);
  if (*ierr) return;
}
