#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreatevector_ PETSCFECREATEVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreatevector_ petscfecreatevector
#endif
PETSC_EXTERN void petscfecreatevector_(PetscFE *scalar_fe, PetscInt *num_copies, PetscBool *interleave_basis, PetscBool *interleave_components, PetscFE *vector_fe, PetscErrorCode *ierr)
{
  PetscBool null_vector_fe = !*(void**) vector_fe ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(vector_fe);
  *ierr = PetscFECreateVector(*scalar_fe, *num_copies, *interleave_basis ? PETSC_TRUE : PETSC_FALSE, *interleave_components ? PETSC_TRUE : PETSC_FALSE, vector_fe);
  if (*ierr) return;
  if (! null_vector_fe && !*(void**) vector_fe) *(void **) vector_fe = (void *)-2;
}
