#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscglobusauthorize_ PETSCGLOBUSAUTHORIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscglobusauthorize_ petscglobusauthorize
#endif
PETSC_EXTERN void petscglobusauthorize_(MPI_Fint *comm, char access_token[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_access_token)
{
  *ierr = PetscGlobusAuthorize(MPI_Comm_f2c(*(comm)), access_token, l_access_token);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, access_token, l_access_token);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscglobusgettransfers_ PETSCGLOBUSGETTRANSFERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscglobusgettransfers_ petscglobusgettransfers
#endif
PETSC_EXTERN void petscglobusgettransfers_(MPI_Fint *comm, char access_token[], char buff[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_access_token, PETSC_FORTRAN_CHARLEN_T l_buff)
{
  char* c_access_token;
  FIXCHAR(access_token, l_access_token, c_access_token);
  *ierr = PetscGlobusGetTransfers(MPI_Comm_f2c(*(comm)), c_access_token, buff, l_buff);
  if (*ierr) return;
  FREECHAR(access_token, c_access_token);
  FIXRETURNCHAR(PETSC_TRUE, buff, l_buff);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscglobusupload_ PETSCGLOBUSUPLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscglobusupload_ petscglobusupload
#endif
PETSC_EXTERN void petscglobusupload_(MPI_Fint *comm, char access_token[], char filename[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_access_token, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  char* c_access_token;
  FIXCHAR(access_token, l_access_token, c_access_token);
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  *ierr = PetscGlobusUpload(MPI_Comm_f2c(*(comm)), c_access_token, c_filename);
  if (*ierr) return;
  FREECHAR(access_token, c_access_token);
  FREECHAR(filename, c_filename);
}
