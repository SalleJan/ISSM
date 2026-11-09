#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetelementscorners_ DMDAGETELEMENTSCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetelementscorners_ dmdagetelementscorners
#endif
PETSC_EXTERN void dmdagetelementscorners_(DM *da, PetscInt *gx, PetscInt *gy, PetscInt *gz, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(gx);
  CHKFORTRANNULLINTEGER(gy);
  CHKFORTRANNULLINTEGER(gz);
  *ierr = DMDAGetElementsCorners(*da, gx, gy, gz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetelementssizes_ DMDAGETELEMENTSSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetelementssizes_ dmdagetelementssizes
#endif
PETSC_EXTERN void dmdagetelementssizes_(DM *da, PetscInt *mx, PetscInt *my, PetscInt *mz, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(mx);
  CHKFORTRANNULLINTEGER(my);
  CHKFORTRANNULLINTEGER(mz);
  *ierr = DMDAGetElementsSizes(*da, mx, my, mz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetelementtype_ DMDASETELEMENTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetelementtype_ dmdasetelementtype
#endif
PETSC_EXTERN void dmdasetelementtype_(DM *da, DMDAElementType *etype, PetscErrorCode *ierr)
{
  *ierr = DMDASetElementType(*da, *etype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetelementtype_ DMDAGETELEMENTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetelementtype_ dmdagetelementtype
#endif
PETSC_EXTERN void dmdagetelementtype_(DM *da, DMDAElementType *etype, PetscErrorCode *ierr)
{
  *ierr = DMDAGetElementType(*da, etype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetsubdomaincornersis_ DMDAGETSUBDOMAINCORNERSIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetsubdomaincornersis_ dmdagetsubdomaincornersis
#endif
PETSC_EXTERN void dmdagetsubdomaincornersis_(DM *dm, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = DMDAGetSubdomainCornersIS(*dm, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdarestoresubdomaincornersis_ DMDARESTORESUBDOMAINCORNERSIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdarestoresubdomaincornersis_ dmdarestoresubdomaincornersis
#endif
PETSC_EXTERN void dmdarestoresubdomaincornersis_(DM *dm, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = DMDARestoreSubdomainCornersIS(*dm, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
