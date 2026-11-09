#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgettmp_ PETSCGETTMP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgettmp_ petscgettmp
#endif
PETSC_EXTERN void petscgettmp_(MPI_Fint *comm, char dir[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dir)
{
  *ierr = PetscGetTmp(MPI_Comm_f2c(*(comm)), dir, l_dir);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, dir, l_dir);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsharedtmp_ PETSCSHAREDTMP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsharedtmp_ petscsharedtmp
#endif
PETSC_EXTERN void petscsharedtmp_(MPI_Fint *comm, PetscBool *shared, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(shared);
  *ierr = PetscSharedTmp(MPI_Comm_f2c(*(comm)), shared);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsharedworkingdirectory_ PETSCSHAREDWORKINGDIRECTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsharedworkingdirectory_ petscsharedworkingdirectory
#endif
PETSC_EXTERN void petscsharedworkingdirectory_(MPI_Fint *comm, PetscBool *shared, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(shared);
  *ierr = PetscSharedWorkingDirectory(MPI_Comm_f2c(*(comm)), shared);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfileretrieve_ PETSCFILERETRIEVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfileretrieve_ petscfileretrieve
#endif
PETSC_EXTERN void petscfileretrieve_(MPI_Fint *comm, char url[], char localname[], PetscBool *found, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_url, PETSC_FORTRAN_CHARLEN_T l_localname)
{
  char* c_url;
  FIXCHAR(url, l_url, c_url);
  CHKFORTRANNULLBOOL(found);
  *ierr = PetscFileRetrieve(MPI_Comm_f2c(*(comm)), c_url, localname, l_localname, found);
  if (*ierr) return;
  FREECHAR(url, c_url);
  FIXRETURNCHAR(PETSC_TRUE, localname, l_localname);
}
