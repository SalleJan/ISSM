#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcreatehalfl2squared_ TAOTERMCREATEHALFL2SQUARED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcreatehalfl2squared_ taotermcreatehalfl2squared
#endif
PETSC_EXTERN void taotermcreatehalfl2squared_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, TaoTerm *term, PetscErrorCode *ierr)
{
  PetscBool null_term = !*(void**) term ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(term);
  *ierr = TaoTermCreateHalfL2Squared(MPI_Comm_f2c(*(comm)), *n, *M_N, term);
  if (*ierr) return;
  if (! null_term && !*(void**) term) *(void **) term = (void *)-2;
}
