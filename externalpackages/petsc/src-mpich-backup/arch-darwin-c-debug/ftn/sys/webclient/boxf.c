#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscboxrefresh_ PETSCBOXREFRESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscboxrefresh_ petscboxrefresh
#endif
PETSC_EXTERN void petscboxrefresh_(MPI_Fint *comm, char refresh_token[], char access_token[], char new_refresh_token[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_refresh_token, PETSC_FORTRAN_CHARLEN_T l_access_token, PETSC_FORTRAN_CHARLEN_T l_new_refresh_token)
{
  char* c_refresh_token;
  FIXCHAR(refresh_token, l_refresh_token, c_refresh_token);
  *ierr = PetscBoxRefresh(MPI_Comm_f2c(*(comm)), c_refresh_token, access_token, new_refresh_token, l_new_refresh_token);
  if (*ierr) return;
  FREECHAR(refresh_token, c_refresh_token);
  FIXRETURNCHAR(PETSC_TRUE, access_token, l_access_token);
  FIXRETURNCHAR(PETSC_TRUE, new_refresh_token, l_new_refresh_token);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscboxupload_ PETSCBOXUPLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscboxupload_ petscboxupload
#endif
PETSC_EXTERN void petscboxupload_(MPI_Fint *comm, char access_token[], char filename[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_access_token, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  char* c_access_token;
  FIXCHAR(access_token, l_access_token, c_access_token);
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  *ierr = PetscBoxUpload(MPI_Comm_f2c(*(comm)), c_access_token, c_filename);
  if (*ierr) return;
  FREECHAR(access_token, c_access_token);
  FREECHAR(filename, c_filename);
}
