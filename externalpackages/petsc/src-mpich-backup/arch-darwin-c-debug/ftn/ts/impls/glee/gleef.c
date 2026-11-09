#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgleeregisterall_ TSGLEEREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgleeregisterall_ tsgleeregisterall
#endif
PETSC_EXTERN void tsgleeregisterall_(PetscErrorCode *ierr)
{
  *ierr = TSGLEERegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgleeregisterdestroy_ TSGLEEREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgleeregisterdestroy_ tsgleeregisterdestroy
#endif
PETSC_EXTERN void tsgleeregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = TSGLEERegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgleeinitializepackage_ TSGLEEINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgleeinitializepackage_ tsgleeinitializepackage
#endif
PETSC_EXTERN void tsgleeinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSGLEEInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgleefinalizepackage_ TSGLEEFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgleefinalizepackage_ tsgleefinalizepackage
#endif
PETSC_EXTERN void tsgleefinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSGLEEFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgleeregister_ TSGLEEREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgleeregister_ tsgleeregister
#endif
PETSC_EXTERN void tsgleeregister_(char *name, PetscInt *order, PetscInt *s, PetscInt *r, PetscReal *gamma, const PetscReal A[], const PetscReal B[], const PetscReal U[], const PetscReal V[], const PetscReal M_S[], const PetscReal F[], const PetscReal c[], const PetscReal Fembed[], const PetscReal Ferror[], const PetscReal Serror[], PetscInt *pinterp, const PetscReal binterp[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(A);
  CHKFORTRANNULLREAL(B);
  CHKFORTRANNULLREAL(U);
  CHKFORTRANNULLREAL(V);
  CHKFORTRANNULLREAL(M_S);
  CHKFORTRANNULLREAL(F);
  CHKFORTRANNULLREAL(c);
  CHKFORTRANNULLREAL(Fembed);
  CHKFORTRANNULLREAL(Ferror);
  CHKFORTRANNULLREAL(Serror);
  CHKFORTRANNULLREAL(binterp);
  *ierr = TSGLEERegister(c_name, *order, *s, *r, *gamma, A, B, U, V, M_S, F, c, Fembed, Ferror, Serror, *pinterp, binterp);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgleesettype_ TSGLEESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgleesettype_ tsgleesettype
#endif
PETSC_EXTERN void tsgleesettype_(TS *ts, char *gleetype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_gleetype)
{
  char* c_gleetype;
  FIXCHAR(gleetype, l_gleetype, c_gleetype);
  *ierr = TSGLEESetType(*ts, c_gleetype);
  if (*ierr) return;
  FREECHAR(gleetype, c_gleetype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgleegettype_ TSGLEEGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgleegettype_ tsgleegettype
#endif
PETSC_EXTERN void tsgleegettype_(TS *ts, char *gleetype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_gleetype)
{
  char* c_gleetype = PETSC_NULLPTR;
  *ierr = TSGLEEGetType(*ts, (const char **)&c_gleetype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)gleetype, c_gleetype, l_gleetype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, gleetype, l_gleetype);
}
