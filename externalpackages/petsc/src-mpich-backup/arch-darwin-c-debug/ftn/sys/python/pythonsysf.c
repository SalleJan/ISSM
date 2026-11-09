#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpythonfinalize_ PETSCPYTHONFINALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpythonfinalize_ petscpythonfinalize
#endif
PETSC_EXTERN void petscpythonfinalize_(PetscErrorCode *ierr)
{
  *ierr = PetscPythonFinalize();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpythoninitialize_ PETSCPYTHONINITIALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpythoninitialize_ petscpythoninitialize
#endif
PETSC_EXTERN void petscpythoninitialize_(char pyexe[], char pylib[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyexe, PETSC_FORTRAN_CHARLEN_T l_pylib)
{
  char* c_pyexe;
  FIXCHAR(pyexe, l_pyexe, c_pyexe);
  char* c_pylib;
  FIXCHAR(pylib, l_pylib, c_pylib);
  *ierr = PetscPythonInitialize(c_pyexe, c_pylib);
  if (*ierr) return;
  FREECHAR(pyexe, c_pyexe);
  FREECHAR(pylib, c_pylib);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpythonprinterror_ PETSCPYTHONPRINTERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpythonprinterror_ petscpythonprinterror
#endif
PETSC_EXTERN void petscpythonprinterror_(PetscErrorCode *ierr)
{
  *ierr = PetscPythonPrintError();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpythonmonitorset_ PETSCPYTHONMONITORSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpythonmonitorset_ petscpythonmonitorset
#endif
PETSC_EXTERN void petscpythonmonitorset_(PetscObject *obj, char url[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_url)
{
  char* c_url;
  FIXCHAR(url, l_url, c_url);
  *ierr = PetscPythonMonitorSet(*obj, c_url);
  if (*ierr) return;
  FREECHAR(url, c_url);
}
