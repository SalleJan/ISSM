#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmpiaborterrorhandler_ PETSCMPIABORTERRORHANDLER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmpiaborterrorhandler_ petscmpiaborterrorhandler
#endif
PETSC_EXTERN void petscmpiaborterrorhandler_(MPI_Fint *comm, int *line, char fun[], char file[], PetscErrorCode *n, PetscErrorType *p, char mess[], PetscCtx ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fun, PETSC_FORTRAN_CHARLEN_T l_file, PETSC_FORTRAN_CHARLEN_T l_mess)
{
  char* c_fun;
  FIXCHAR(fun, l_fun, c_fun);
  char* c_file;
  FIXCHAR(file, l_file, c_file);
  char* c_mess;
  FIXCHAR(mess, l_mess, c_mess);
  *ierr = PetscMPIAbortErrorHandler(MPI_Comm_f2c(*(comm)), *line, c_fun, c_file, *n, *p, c_mess, ctx);
  if (*ierr) return;
  FREECHAR(fun, c_fun);
  FREECHAR(file, c_file);
  FREECHAR(mess, c_mess);
}
