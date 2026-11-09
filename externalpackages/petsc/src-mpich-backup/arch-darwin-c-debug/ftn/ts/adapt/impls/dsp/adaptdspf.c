#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptdspsetfilter_ TSADAPTDSPSETFILTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptdspsetfilter_ tsadaptdspsetfilter
#endif
PETSC_EXTERN void tsadaptdspsetfilter_(TSAdapt *adapt, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = TSAdaptDSPSetFilter(*adapt, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptdspsetpid_ TSADAPTDSPSETPID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptdspsetpid_ tsadaptdspsetpid
#endif
PETSC_EXTERN void tsadaptdspsetpid_(TSAdapt *adapt, PetscReal *kkI, PetscReal *kkP, PetscReal *kkD, PetscErrorCode *ierr)
{
  *ierr = TSAdaptDSPSetPID(*adapt, *kkI, *kkP, *kkD);
  if (*ierr) return;
}
