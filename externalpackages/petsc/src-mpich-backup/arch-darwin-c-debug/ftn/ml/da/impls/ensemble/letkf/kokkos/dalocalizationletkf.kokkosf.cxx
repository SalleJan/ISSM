#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaletkfgetlocalizationmatrix_ PETSCDALETKFGETLOCALIZATIONMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaletkfgetlocalizationmatrix_ petscdaletkfgetlocalizationmatrix
#endif
PETSC_EXTERN void petscdaletkfgetlocalizationmatrix_(const PetscInt *n_obs_vertex, const PetscInt *n_dof, Vec Vecxyz[], PetscReal bd[], Mat *H, Mat *Q, PetscErrorCode *ierr)
{
  PetscBool null_Q = !*(void**) Q ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Vecxyz);
  CHKFORTRANNULLREAL(bd);
  CHKFORTRANNULLOBJECT(Q);
  *ierr = PetscDALETKFGetLocalizationMatrix(*n_obs_vertex, *n_dof, Vecxyz, bd, *H, Q);
  if (*ierr) return;
  if (! null_Q && !*(void**) Q) *(void **) Q = (void *)-2;
}
