#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgeommodelregisterall_ DMGEOMMODELREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgeommodelregisterall_ dmgeommodelregisterall
#endif
PETSC_EXTERN void dmgeommodelregisterall_(PetscErrorCode *ierr)
{
  *ierr = DMGeomModelRegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgeommodelregisterdestroy_ DMGEOMMODELREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgeommodelregisterdestroy_ dmgeommodelregisterdestroy
#endif
PETSC_EXTERN void dmgeommodelregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = DMGeomModelRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetsnaptogeommodel_ DMSETSNAPTOGEOMMODEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetsnaptogeommodel_ dmsetsnaptogeommodel
#endif
PETSC_EXTERN void dmsetsnaptogeommodel_(DM *dm, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMSetSnapToGeomModel(*dm, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsnaptogeommodel_ DMSNAPTOGEOMMODEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsnaptogeommodel_ dmsnaptogeommodel
#endif
PETSC_EXTERN void dmsnaptogeommodel_(DM *dm, PetscInt *p, PetscInt *dE, const PetscScalar mcoords[], PetscScalar gcoords[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(mcoords);
  CHKFORTRANNULLSCALAR(gcoords);
  *ierr = DMSnapToGeomModel(*dm, *p, *dE, mcoords, gcoords);
  if (*ierr) return;
}
