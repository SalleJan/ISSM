#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmprkregisterdestroy_ TSMPRKREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmprkregisterdestroy_ tsmprkregisterdestroy
#endif
PETSC_EXTERN void tsmprkregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = TSMPRKRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmprkinitializepackage_ TSMPRKINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmprkinitializepackage_ tsmprkinitializepackage
#endif
PETSC_EXTERN void tsmprkinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSMPRKInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmprkfinalizepackage_ TSMPRKFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmprkfinalizepackage_ tsmprkfinalizepackage
#endif
PETSC_EXTERN void tsmprkfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSMPRKFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmprkregister_ TSMPRKREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmprkregister_ tsmprkregister
#endif
PETSC_EXTERN void tsmprkregister_(char *name, PetscInt *order, PetscInt *sbase, PetscInt *ratio1, PetscInt *ratio2, const PetscReal Asb[], const PetscReal bsb[], const PetscReal csb[], const PetscInt rsb[], const PetscReal Amb[], const PetscReal bmb[], const PetscReal cmb[], const PetscInt rmb[], const PetscReal Af[], const PetscReal bf[], const PetscReal cf[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(Asb);
  CHKFORTRANNULLREAL(bsb);
  CHKFORTRANNULLREAL(csb);
  CHKFORTRANNULLINTEGER(rsb);
  CHKFORTRANNULLREAL(Amb);
  CHKFORTRANNULLREAL(bmb);
  CHKFORTRANNULLREAL(cmb);
  CHKFORTRANNULLINTEGER(rmb);
  CHKFORTRANNULLREAL(Af);
  CHKFORTRANNULLREAL(bf);
  CHKFORTRANNULLREAL(cf);
  *ierr = TSMPRKRegister(c_name, *order, *sbase, *ratio1, *ratio2, Asb, bsb, csb, rsb, Amb, bmb, cmb, rmb, Af, bf, cf);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmprksettype_ TSMPRKSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmprksettype_ tsmprksettype
#endif
PETSC_EXTERN void tsmprksettype_(TS *ts, char *mprktype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_mprktype)
{
  char* c_mprktype;
  FIXCHAR(mprktype, l_mprktype, c_mprktype);
  *ierr = TSMPRKSetType(*ts, c_mprktype);
  if (*ierr) return;
  FREECHAR(mprktype, c_mprktype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmprkgettype_ TSMPRKGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmprkgettype_ tsmprkgettype
#endif
PETSC_EXTERN void tsmprkgettype_(TS *ts, char *mprktype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_mprktype)
{
  char* c_mprktype = PETSC_NULLPTR;
  *ierr = TSMPRKGetType(*ts, (const char **)&c_mprktype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)mprktype, c_mprktype, l_mprktype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, mprktype, l_mprktype);
}
