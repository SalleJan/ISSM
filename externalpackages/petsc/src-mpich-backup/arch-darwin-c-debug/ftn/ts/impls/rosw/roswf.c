#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsroswregisterdestroy_ TSROSWREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsroswregisterdestroy_ tsroswregisterdestroy
#endif
PETSC_EXTERN void tsroswregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = TSRosWRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsroswinitializepackage_ TSROSWINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsroswinitializepackage_ tsroswinitializepackage
#endif
PETSC_EXTERN void tsroswinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSRosWInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsroswfinalizepackage_ TSROSWFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsroswfinalizepackage_ tsroswfinalizepackage
#endif
PETSC_EXTERN void tsroswfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSRosWFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsroswregister_ TSROSWREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsroswregister_ tsroswregister
#endif
PETSC_EXTERN void tsroswregister_(char *name, PetscInt *order, PetscInt *s, const PetscReal A[], const PetscReal Gamma[], const PetscReal b[], const PetscReal bembed[], PetscInt *pinterp, const PetscReal binterpt[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(A);
  CHKFORTRANNULLREAL(Gamma);
  CHKFORTRANNULLREAL(b);
  CHKFORTRANNULLREAL(bembed);
  CHKFORTRANNULLREAL(binterpt);
  *ierr = TSRosWRegister(c_name, *order, *s, A, Gamma, b, bembed, *pinterp, binterpt);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsroswregisterros4_ TSROSWREGISTERROS4
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsroswregisterros4_ tsroswregisterros4
#endif
PETSC_EXTERN void tsroswregisterros4_(char *name, PetscReal *gamma, PetscReal *a2, PetscReal *a3, PetscReal *b3, PetscReal *e4, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = TSRosWRegisterRos4(c_name, *gamma, *a2, *a3, *b3, *e4);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsroswsettype_ TSROSWSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsroswsettype_ tsroswsettype
#endif
PETSC_EXTERN void tsroswsettype_(TS *ts, char *roswtype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_roswtype)
{
  char* c_roswtype;
  FIXCHAR(roswtype, l_roswtype, c_roswtype);
  *ierr = TSRosWSetType(*ts, c_roswtype);
  if (*ierr) return;
  FREECHAR(roswtype, c_roswtype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsroswgettype_ TSROSWGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsroswgettype_ tsroswgettype
#endif
PETSC_EXTERN void tsroswgettype_(TS *ts, char *rostype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_rostype)
{
  char* c_rostype = PETSC_NULLPTR;
  *ierr = TSRosWGetType(*ts, (const char **)&c_rostype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)rostype, c_rostype, l_rostype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, rostype, l_rostype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsroswsetrecomputejacobian_ TSROSWSETRECOMPUTEJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsroswsetrecomputejacobian_ tsroswsetrecomputejacobian
#endif
PETSC_EXTERN void tsroswsetrecomputejacobian_(TS *ts, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = TSRosWSetRecomputeJacobian(*ts, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
