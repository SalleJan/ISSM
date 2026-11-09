#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetenv_ PETSCOPTIONSGETENV
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetenv_ petscoptionsgetenv
#endif
PETSC_EXTERN void petscoptionsgetenv_(MPI_Fint *comm, char name[], char env[], PetscBool *flag, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_env)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(flag);
  *ierr = PetscOptionsGetenv(MPI_Comm_f2c(*(comm)), c_name, env, l_env, flag);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FIXRETURNCHAR(PETSC_TRUE, env, l_env);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsetdisplay_ PETSCSETDISPLAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsetdisplay_ petscsetdisplay
#endif
PETSC_EXTERN void petscsetdisplay_(PetscErrorCode *ierr)
{
  *ierr = PetscSetDisplay();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetdisplay_ PETSCGETDISPLAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetdisplay_ petscgetdisplay
#endif
PETSC_EXTERN void petscgetdisplay_(char display[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_display)
{
  *ierr = PetscGetDisplay(display, l_display);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, display, l_display);
}
