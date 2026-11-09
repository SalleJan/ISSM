#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrkregisterdestroy_ TSRKREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrkregisterdestroy_ tsrkregisterdestroy
#endif
PETSC_EXTERN void tsrkregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = TSRKRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrkinitializepackage_ TSRKINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrkinitializepackage_ tsrkinitializepackage
#endif
PETSC_EXTERN void tsrkinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSRKInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrkfinalizepackage_ TSRKFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrkfinalizepackage_ tsrkfinalizepackage
#endif
PETSC_EXTERN void tsrkfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSRKFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrkregister_ TSRKREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrkregister_ tsrkregister
#endif
PETSC_EXTERN void tsrkregister_(char *name, PetscInt *order, PetscInt *s, const PetscReal A[], const PetscReal b[], const PetscReal c[], const PetscReal bembed[], PetscInt *p, const PetscReal binterp[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(A);
  CHKFORTRANNULLREAL(b);
  CHKFORTRANNULLREAL(c);
  CHKFORTRANNULLREAL(bembed);
  CHKFORTRANNULLREAL(binterp);
  *ierr = TSRKRegister(c_name, *order, *s, A, b, c, bembed, *p, binterp);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrkgetorder_ TSRKGETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrkgetorder_ tsrkgetorder
#endif
PETSC_EXTERN void tsrkgetorder_(TS *ts, PetscInt *order, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(order);
  *ierr = TSRKGetOrder(*ts, order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrksettype_ TSRKSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrksettype_ tsrksettype
#endif
PETSC_EXTERN void tsrksettype_(TS *ts, char *rktype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_rktype)
{
  char* c_rktype;
  FIXCHAR(rktype, l_rktype, c_rktype);
  *ierr = TSRKSetType(*ts, c_rktype);
  if (*ierr) return;
  FREECHAR(rktype, c_rktype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrkgettype_ TSRKGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrkgettype_ tsrkgettype
#endif
PETSC_EXTERN void tsrkgettype_(TS *ts, char *rktype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_rktype)
{
  char* c_rktype = PETSC_NULLPTR;
  *ierr = TSRKGetType(*ts, (const char **)&c_rktype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)rktype, c_rktype, l_rktype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, rktype, l_rktype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrksetmultirate_ TSRKSETMULTIRATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrksetmultirate_ tsrksetmultirate
#endif
PETSC_EXTERN void tsrksetmultirate_(TS *ts, PetscBool *use_multirate, PetscErrorCode *ierr)
{
  *ierr = TSRKSetMultirate(*ts, *use_multirate ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrkgetmultirate_ TSRKGETMULTIRATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrkgetmultirate_ tsrkgetmultirate
#endif
PETSC_EXTERN void tsrkgetmultirate_(TS *ts, PetscBool *use_multirate, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(use_multirate);
  *ierr = TSRKGetMultirate(*ts, use_multirate);
  if (*ierr) return;
}
