#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgllesettype_ TSGLLESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgllesettype_ tsgllesettype
#endif
PETSC_EXTERN void tsgllesettype_(TS *ts, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = TSGLLESetType(*ts, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgllesetaccepttype_ TSGLLESETACCEPTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgllesetaccepttype_ tsgllesetaccepttype
#endif
PETSC_EXTERN void tsgllesetaccepttype_(TS *ts, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = TSGLLESetAcceptType(*ts, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgllegetadapt_ TSGLLEGETADAPT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgllegetadapt_ tsgllegetadapt
#endif
PETSC_EXTERN void tsgllegetadapt_(TS *ts, TSGLLEAdapt *adapt, PetscErrorCode *ierr)
{
  PetscBool null_adapt = !*(void**) adapt ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(adapt);
  *ierr = TSGLLEGetAdapt(*ts, adapt);
  if (*ierr) return;
  if (! null_adapt && !*(void**) adapt) *(void **) adapt = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsglleinitializepackage_ TSGLLEINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsglleinitializepackage_ tsglleinitializepackage
#endif
PETSC_EXTERN void tsglleinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSGLLEInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgllefinalizepackage_ TSGLLEFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgllefinalizepackage_ tsgllefinalizepackage
#endif
PETSC_EXTERN void tsgllefinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSGLLEFinalizePackage();
  if (*ierr) return;
}
