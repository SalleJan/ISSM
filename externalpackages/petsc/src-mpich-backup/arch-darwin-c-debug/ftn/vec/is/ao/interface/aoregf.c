#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aofinalizepackage_ AOFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aofinalizepackage_ aofinalizepackage
#endif
PETSC_EXTERN void aofinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = AOFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aoinitializepackage_ AOINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aoinitializepackage_ aoinitializepackage
#endif
PETSC_EXTERN void aoinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = AOInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aosettype_ AOSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aosettype_ aosettype
#endif
PETSC_EXTERN void aosettype_(AO *ao, char *method, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_method)
{
  char* c_method;
  FIXCHAR(method, l_method, c_method);
  *ierr = AOSetType(*ao, c_method);
  if (*ierr) return;
  FREECHAR(method, c_method);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aogettype_ AOGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aogettype_ aogettype
#endif
PETSC_EXTERN void aogettype_(AO *ao, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = AOGetType(*ao, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aoregisterall_ AOREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aoregisterall_ aoregisterall
#endif
PETSC_EXTERN void aoregisterall_(PetscErrorCode *ierr)
{
  *ierr = AORegisterAll();
  if (*ierr) return;
}
