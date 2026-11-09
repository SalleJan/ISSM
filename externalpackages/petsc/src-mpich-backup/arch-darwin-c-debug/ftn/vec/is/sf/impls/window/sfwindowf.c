#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfwindowsetflavortype_ PETSCSFWINDOWSETFLAVORTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfwindowsetflavortype_ petscsfwindowsetflavortype
#endif
PETSC_EXTERN void petscsfwindowsetflavortype_(PetscSF *sf, PetscSFWindowFlavorType *flavor, PetscErrorCode *ierr)
{
  *ierr = PetscSFWindowSetFlavorType(*sf, *flavor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfwindowgetflavortype_ PETSCSFWINDOWGETFLAVORTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfwindowgetflavortype_ petscsfwindowgetflavortype
#endif
PETSC_EXTERN void petscsfwindowgetflavortype_(PetscSF *sf, PetscSFWindowFlavorType *flavor, PetscErrorCode *ierr)
{
  *ierr = PetscSFWindowGetFlavorType(*sf, flavor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfwindowsetsynctype_ PETSCSFWINDOWSETSYNCTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfwindowsetsynctype_ petscsfwindowsetsynctype
#endif
PETSC_EXTERN void petscsfwindowsetsynctype_(PetscSF *sf, PetscSFWindowSyncType *sync, PetscErrorCode *ierr)
{
  *ierr = PetscSFWindowSetSyncType(*sf, *sync);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfwindowgetsynctype_ PETSCSFWINDOWGETSYNCTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfwindowgetsynctype_ petscsfwindowgetsynctype
#endif
PETSC_EXTERN void petscsfwindowgetsynctype_(PetscSF *sf, PetscSFWindowSyncType *sync, PetscErrorCode *ierr)
{
  *ierr = PetscSFWindowGetSyncType(*sf, sync);
  if (*ierr) return;
}
