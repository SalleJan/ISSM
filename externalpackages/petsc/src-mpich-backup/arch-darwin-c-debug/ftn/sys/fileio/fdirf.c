#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmkdir_ PETSCMKDIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmkdir_ petscmkdir
#endif
PETSC_EXTERN void petscmkdir_(char dir[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dir)
{
  char* c_dir;
  FIXCHAR(dir, l_dir, c_dir);
  *ierr = PetscMkdir(c_dir);
  if (*ierr) return;
  FREECHAR(dir, c_dir);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmkdtemp_ PETSCMKDTEMP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmkdtemp_ petscmkdtemp
#endif
PETSC_EXTERN void petscmkdtemp_(char dir[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dir)
{
  *ierr = PetscMkdtemp(dir);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, dir, l_dir);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrmtree_ PETSCRMTREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrmtree_ petscrmtree
#endif
PETSC_EXTERN void petscrmtree_(char dir[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dir)
{
  char* c_dir;
  FIXCHAR(dir, l_dir, c_dir);
  *ierr = PetscRMTree(c_dir);
  if (*ierr) return;
  FREECHAR(dir, c_dir);
}
