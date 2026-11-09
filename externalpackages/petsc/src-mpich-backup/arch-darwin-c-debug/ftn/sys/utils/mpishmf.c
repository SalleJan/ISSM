#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscshmcommget_ PETSCSHMCOMMGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscshmcommget_ petscshmcommget
#endif
PETSC_EXTERN void petscshmcommget_(MPI_Fint *globcomm, PetscShmComm *pshmcomm, PetscErrorCode *ierr)
{
  PetscBool null_pshmcomm = !*(void**) pshmcomm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pshmcomm);
  *ierr = PetscShmCommGet(MPI_Comm_f2c(*(globcomm)), pshmcomm);
  if (*ierr) return;
  if (! null_pshmcomm && !*(void**) pshmcomm) *(void **) pshmcomm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscshmcommglobaltolocal_ PETSCSHMCOMMGLOBALTOLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscshmcommglobaltolocal_ petscshmcommglobaltolocal
#endif
PETSC_EXTERN void petscshmcommglobaltolocal_(PetscShmComm *pshmcomm, PetscMPIInt *grank, PetscMPIInt *lrank, PetscErrorCode *ierr)
{
  *ierr = PetscShmCommGlobalToLocal(*pshmcomm, *grank, lrank);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscshmcommlocaltoglobal_ PETSCSHMCOMMLOCALTOGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscshmcommlocaltoglobal_ petscshmcommlocaltoglobal
#endif
PETSC_EXTERN void petscshmcommlocaltoglobal_(PetscShmComm *pshmcomm, PetscMPIInt *lrank, PetscMPIInt *grank, PetscErrorCode *ierr)
{
  *ierr = PetscShmCommLocalToGlobal(*pshmcomm, *lrank, grank);
  if (*ierr) return;
}
