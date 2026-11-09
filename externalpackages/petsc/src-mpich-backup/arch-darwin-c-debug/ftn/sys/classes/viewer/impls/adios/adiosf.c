#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscvieweradiosopen_ PETSCVIEWERADIOSOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscvieweradiosopen_ petscvieweradiosopen
#endif
PETSC_EXTERN void petscvieweradiosopen_(MPI_Fint *comm, char name[], PetscFileMode *type, PetscViewer *adiosv, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_adiosv = !*(void**) adiosv ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(adiosv);
  *ierr = PetscViewerADIOSOpen(MPI_Comm_f2c(*(comm)), c_name, *type, adiosv);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_adiosv && !*(void**) adiosv) *(void **) adiosv = (void *)-2;
}
