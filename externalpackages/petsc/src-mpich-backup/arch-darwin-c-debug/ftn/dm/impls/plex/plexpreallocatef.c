#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpreallocateoperator_ DMPLEXPREALLOCATEOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpreallocateoperator_ dmplexpreallocateoperator
#endif
PETSC_EXTERN void dmplexpreallocateoperator_(DM *dm, PetscInt *bs, PetscInt dnz[], PetscInt onz[], PetscInt dnzu[], PetscInt onzu[], Mat *A, PetscBool *fillMatrix, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dnz);
  CHKFORTRANNULLINTEGER(onz);
  CHKFORTRANNULLINTEGER(dnzu);
  CHKFORTRANNULLINTEGER(onzu);
  *ierr = DMPlexPreallocateOperator(*dm, *bs, dnz, onz, dnzu, onzu, *A, *fillMatrix ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
