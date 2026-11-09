#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsplitownershipblock_ PETSCSPLITOWNERSHIPBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsplitownershipblock_ petscsplitownershipblock
#endif
PETSC_EXTERN void petscsplitownershipblock_(MPI_Fint *comm, PetscInt *bs, PetscInt *n, PetscInt *M_N, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(M_N);
  *ierr = PetscSplitOwnershipBlock(MPI_Comm_f2c(*(comm)), *bs, n, M_N);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsplitownership_ PETSCSPLITOWNERSHIP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsplitownership_ petscsplitownership
#endif
PETSC_EXTERN void petscsplitownership_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(M_N);
  *ierr = PetscSplitOwnership(MPI_Comm_f2c(*(comm)), n, M_N);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsplitownershipequal_ PETSCSPLITOWNERSHIPEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsplitownershipequal_ petscsplitownershipequal
#endif
PETSC_EXTERN void petscsplitownershipequal_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(M_N);
  *ierr = PetscSplitOwnershipEqual(MPI_Comm_f2c(*(comm)), n, M_N);
  if (*ierr) return;
}
