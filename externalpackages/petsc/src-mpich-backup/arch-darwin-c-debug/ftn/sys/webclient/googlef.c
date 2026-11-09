#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgoogledriverefresh_ PETSCGOOGLEDRIVEREFRESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgoogledriverefresh_ petscgoogledriverefresh
#endif
PETSC_EXTERN void petscgoogledriverefresh_(MPI_Fint *comm, char refresh_token[], char access_token[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_refresh_token, PETSC_FORTRAN_CHARLEN_T l_access_token)
{
  char* c_refresh_token;
  FIXCHAR(refresh_token, l_refresh_token, c_refresh_token);
  *ierr = PetscGoogleDriveRefresh(MPI_Comm_f2c(*(comm)), c_refresh_token, access_token, l_access_token);
  if (*ierr) return;
  FREECHAR(refresh_token, c_refresh_token);
  FIXRETURNCHAR(PETSC_TRUE, access_token, l_access_token);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgoogledriveupload_ PETSCGOOGLEDRIVEUPLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgoogledriveupload_ petscgoogledriveupload
#endif
PETSC_EXTERN void petscgoogledriveupload_(MPI_Fint *comm, char access_token[], char filename[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_access_token, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  char* c_access_token;
  FIXCHAR(access_token, l_access_token, c_access_token);
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  *ierr = PetscGoogleDriveUpload(MPI_Comm_f2c(*(comm)), c_access_token, c_filename);
  if (*ierr) return;
  FREECHAR(access_token, c_access_token);
  FREECHAR(filename, c_filename);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgoogledriveauthorize_ PETSCGOOGLEDRIVEAUTHORIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgoogledriveauthorize_ petscgoogledriveauthorize
#endif
PETSC_EXTERN void petscgoogledriveauthorize_(MPI_Fint *comm, char access_token[], char refresh_token[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_access_token, PETSC_FORTRAN_CHARLEN_T l_refresh_token)
{
  *ierr = PetscGoogleDriveAuthorize(MPI_Comm_f2c(*(comm)), access_token, refresh_token, l_refresh_token);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, access_token, l_access_token);
  FIXRETURNCHAR(PETSC_TRUE, refresh_token, l_refresh_token);
}
