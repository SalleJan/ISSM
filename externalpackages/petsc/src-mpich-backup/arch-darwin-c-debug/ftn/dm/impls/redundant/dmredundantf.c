#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmredundant.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmredundantsetsize_ DMREDUNDANTSETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmredundantsetsize_ dmredundantsetsize
#endif
PETSC_EXTERN void dmredundantsetsize_(DM *dm, PetscMPIInt *rank, PetscInt *N, PetscErrorCode *ierr)
{
  *ierr = DMRedundantSetSize(*dm, *rank, *N);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmredundant.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmredundantgetsize_ DMREDUNDANTGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmredundantgetsize_ dmredundantgetsize
#endif
PETSC_EXTERN void dmredundantgetsize_(DM *dm, PetscMPIInt *rank, PetscInt *N, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(N);
  *ierr = DMRedundantGetSize(*dm, rank, N);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmredundant.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmredundantcreate_ DMREDUNDANTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmredundantcreate_ dmredundantcreate
#endif
PETSC_EXTERN void dmredundantcreate_(MPI_Fint *comm, PetscMPIInt *rank, PetscInt *N, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(dm);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMRedundantCreate(MPI_Comm_f2c(*(comm)), *rank, *N, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
