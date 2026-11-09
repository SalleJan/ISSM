#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetfieldname_ DMDASETFIELDNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetfieldname_ dmdasetfieldname
#endif
PETSC_EXTERN void dmdasetfieldname_(DM *da, PetscInt *nf, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMDASetFieldName(*da, *nf, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetfieldname_ DMDAGETFIELDNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetfieldname_ dmdagetfieldname
#endif
PETSC_EXTERN void dmdagetfieldname_(DM *da, PetscInt *nf, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = DMDAGetFieldName(*da, *nf, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetcoordinatename_ DMDASETCOORDINATENAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetcoordinatename_ dmdasetcoordinatename
#endif
PETSC_EXTERN void dmdasetcoordinatename_(DM *dm, PetscInt *nf, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMDASetCoordinateName(*dm, *nf, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetcoordinatename_ DMDAGETCOORDINATENAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetcoordinatename_ dmdagetcoordinatename
#endif
PETSC_EXTERN void dmdagetcoordinatename_(DM *dm, PetscInt *nf, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = DMDAGetCoordinateName(*dm, *nf, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetcorners_ DMDAGETCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetcorners_ dmdagetcorners
#endif
PETSC_EXTERN void dmdagetcorners_(DM *da, PetscInt *x, PetscInt *y, PetscInt *z, PetscInt *m, PetscInt *n, PetscInt *p, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(x);
  CHKFORTRANNULLINTEGER(y);
  CHKFORTRANNULLINTEGER(z);
  CHKFORTRANNULLINTEGER(m);
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(p);
  *ierr = DMDAGetCorners(*da, x, y, z, m, n, p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdacreatecompatibledmda_ DMDACREATECOMPATIBLEDMDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdacreatecompatibledmda_ dmdacreatecompatibledmda
#endif
PETSC_EXTERN void dmdacreatecompatibledmda_(DM *da, PetscInt *nfields, DM *nda, PetscErrorCode *ierr)
{
  PetscBool null_nda = !*(void**) nda ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(nda);
  *ierr = DMDACreateCompatibleDMDA(*da, *nfields, nda);
  if (*ierr) return;
  if (! null_nda && !*(void**) nda) *(void **) nda = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetcoordinatearray_ DMDAGETCOORDINATEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetcoordinatearray_ dmdagetcoordinatearray
#endif
PETSC_EXTERN void dmdagetcoordinatearray_(DM *dm, void *xc, PetscErrorCode *ierr)
{
  *ierr = DMDAGetCoordinateArray(*dm, xc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdarestorecoordinatearray_ DMDARESTORECOORDINATEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdarestorecoordinatearray_ dmdarestorecoordinatearray
#endif
PETSC_EXTERN void dmdarestorecoordinatearray_(DM *dm, void *xc, PetscErrorCode *ierr)
{
  *ierr = DMDARestoreCoordinateArray(*dm, xc);
  if (*ierr) return;
}
