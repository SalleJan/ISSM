#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetvaluessection_ VECSETVALUESSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetvaluessection_ vecsetvaluessection
#endif
PETSC_EXTERN void vecsetvaluessection_(Vec *v, PetscSection *s, PetscInt *point, const PetscScalar values[], InsertMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(values);
  *ierr = VecSetValuesSection(*v, *s, *point, values, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionvecview_ PETSCSECTIONVECVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionvecview_ petscsectionvecview
#endif
PETSC_EXTERN void petscsectionvecview_(PetscSection *s, Vec *v, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscSectionVecView(*s, *v, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionvecnorm_ PETSCSECTIONVECNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionvecnorm_ petscsectionvecnorm
#endif
PETSC_EXTERN void petscsectionvecnorm_(PetscSection *s, PetscSection *gs, Vec *x, NormType *type, PetscReal val[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(val);
  *ierr = PetscSectionVecNorm(*s, *gs, *x, *type, val);
  if (*ierr) return;
}
