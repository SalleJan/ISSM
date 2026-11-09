#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isstridegetinfo_ ISSTRIDEGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isstridegetinfo_ isstridegetinfo
#endif
PETSC_EXTERN void isstridegetinfo_(IS *is, PetscInt *first, PetscInt *step, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(first);
  CHKFORTRANNULLINTEGER(step);
  *ierr = ISStrideGetInfo(*is, first, step);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isstridesetstride_ ISSTRIDESETSTRIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isstridesetstride_ isstridesetstride
#endif
PETSC_EXTERN void isstridesetstride_(IS *is, PetscInt *n, PetscInt *first, PetscInt *step, PetscErrorCode *ierr)
{
  *ierr = ISStrideSetStride(*is, *n, *first, *step);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscreatestride_ ISCREATESTRIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscreatestride_ iscreatestride
#endif
PETSC_EXTERN void iscreatestride_(MPI_Fint *comm, PetscInt *n, PetscInt *first, PetscInt *step, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = ISCreateStride(MPI_Comm_f2c(*(comm)), *n, *first, *step, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
