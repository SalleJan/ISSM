#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsbasicsymplecticregisterall_ TSBASICSYMPLECTICREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsbasicsymplecticregisterall_ tsbasicsymplecticregisterall
#endif
PETSC_EXTERN void tsbasicsymplecticregisterall_(PetscErrorCode *ierr)
{
  *ierr = TSBasicSymplecticRegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsbasicsymplecticregisterdestroy_ TSBASICSYMPLECTICREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsbasicsymplecticregisterdestroy_ tsbasicsymplecticregisterdestroy
#endif
PETSC_EXTERN void tsbasicsymplecticregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = TSBasicSymplecticRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsbasicsymplecticinitializepackage_ TSBASICSYMPLECTICINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsbasicsymplecticinitializepackage_ tsbasicsymplecticinitializepackage
#endif
PETSC_EXTERN void tsbasicsymplecticinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSBasicSymplecticInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsbasicsymplecticfinalizepackage_ TSBASICSYMPLECTICFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsbasicsymplecticfinalizepackage_ tsbasicsymplecticfinalizepackage
#endif
PETSC_EXTERN void tsbasicsymplecticfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSBasicSymplecticFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsbasicsymplecticregister_ TSBASICSYMPLECTICREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsbasicsymplecticregister_ tsbasicsymplecticregister
#endif
PETSC_EXTERN void tsbasicsymplecticregister_(char *name, PetscInt *order, PetscInt *s, PetscReal c[], PetscReal d[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(c);
  CHKFORTRANNULLREAL(d);
  *ierr = TSBasicSymplecticRegister(c_name, *order, *s, c, d);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsbasicsymplecticsettype_ TSBASICSYMPLECTICSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsbasicsymplecticsettype_ tsbasicsymplecticsettype
#endif
PETSC_EXTERN void tsbasicsymplecticsettype_(TS *ts, char *bsymptype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_bsymptype)
{
  char* c_bsymptype;
  FIXCHAR(bsymptype, l_bsymptype, c_bsymptype);
  *ierr = TSBasicSymplecticSetType(*ts, c_bsymptype);
  if (*ierr) return;
  FREECHAR(bsymptype, c_bsymptype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsbasicsymplecticgettype_ TSBASICSYMPLECTICGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsbasicsymplecticgettype_ tsbasicsymplecticgettype
#endif
PETSC_EXTERN void tsbasicsymplecticgettype_(TS *ts, char *bsymptype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_bsymptype)
{
  char* c_bsymptype = PETSC_NULLPTR;
  *ierr = TSBasicSymplecticGetType(*ts, (const char **)&c_bsymptype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)bsymptype, c_bsymptype, l_bsymptype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, bsymptype, l_bsymptype);
}
