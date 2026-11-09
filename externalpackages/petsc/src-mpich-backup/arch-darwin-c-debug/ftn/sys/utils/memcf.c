#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmemcmp_ PETSCMEMCMP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmemcmp_ petscmemcmp
#endif
PETSC_EXTERN void petscmemcmp_(const void *str1, const void *str2, size_t *len, PetscBool *e, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(e);
  *ierr = PetscMemcmp(str1, str2, *len, e);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscprocessplacementview_ PETSCPROCESSPLACEMENTVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscprocessplacementview_ petscprocessplacementview
#endif
PETSC_EXTERN void petscprocessplacementview_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscProcessPlacementView(v_viewer);
  if (*ierr) return;
}
