#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscreate_ TSCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscreate_ tscreate
#endif
PETSC_EXTERN void tscreate_(MPI_Fint *comm, TS *ts, PetscErrorCode *ierr)
{
  PetscBool null_ts = !*(void**) ts ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ts);
  CHKFORTRANNULLOBJECT(ts);
  *ierr = TSCreate(MPI_Comm_f2c(*(comm)), ts);
  if (*ierr) return;
  if (! null_ts && !*(void**) ts) *(void **) ts = (void *)-2;
}
