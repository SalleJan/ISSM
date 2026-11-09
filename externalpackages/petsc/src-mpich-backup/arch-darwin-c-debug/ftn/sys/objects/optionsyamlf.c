#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsinsertstringyaml_ PETSCOPTIONSINSERTSTRINGYAML
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsinsertstringyaml_ petscoptionsinsertstringyaml
#endif
PETSC_EXTERN void petscoptionsinsertstringyaml_(PetscOptions *options, char in_str[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_in_str)
{
  char* c_in_str;
  FIXCHAR(in_str, l_in_str, c_in_str);
  *ierr = PetscOptionsInsertStringYAML(*options, c_in_str);
  if (*ierr) return;
  FREECHAR(in_str, c_in_str);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsinsertfileyaml_ PETSCOPTIONSINSERTFILEYAML
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsinsertfileyaml_ petscoptionsinsertfileyaml
#endif
PETSC_EXTERN void petscoptionsinsertfileyaml_(MPI_Fint *comm, PetscOptions *options, char file[], PetscBool *require, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_file)
{
  char* c_file;
  FIXCHAR(file, l_file, c_file);
  *ierr = PetscOptionsInsertFileYAML(MPI_Comm_f2c(*(comm)), *options, c_file, *require ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
  FREECHAR(file, c_file);
}
