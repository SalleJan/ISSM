#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsctestfile_ PETSCTESTFILE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsctestfile_ petsctestfile
#endif
PETSC_EXTERN void petsctestfile_(char fname[], char *mode, PetscBool *flg, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fname, PETSC_FORTRAN_CHARLEN_T l_mode)
{
  char* c_fname;
  FIXCHAR(fname, l_fname, c_fname);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscTestFile(c_fname, *mode, flg);
  if (*ierr) return;
  FREECHAR(fname, c_fname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsctestdirectory_ PETSCTESTDIRECTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsctestdirectory_ petsctestdirectory
#endif
PETSC_EXTERN void petsctestdirectory_(char dirname[], char *mode, PetscBool *flg, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dirname, PETSC_FORTRAN_CHARLEN_T l_mode)
{
  char* c_dirname;
  FIXCHAR(dirname, l_dirname, c_dirname);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscTestDirectory(c_dirname, *mode, flg);
  if (*ierr) return;
  FREECHAR(dirname, c_dirname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscls_ PETSCLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscls_ petscls
#endif
PETSC_EXTERN void petscls_(MPI_Fint *comm, char dirname[], char found[], PetscBool *flg, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dirname, PETSC_FORTRAN_CHARLEN_T l_found)
{
  char* c_dirname;
  FIXCHAR(dirname, l_dirname, c_dirname);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscLs(MPI_Comm_f2c(*(comm)), c_dirname, found, l_found, flg);
  if (*ierr) return;
  FREECHAR(dirname, c_dirname);
  FIXRETURNCHAR(PETSC_TRUE, found, l_found);
}
