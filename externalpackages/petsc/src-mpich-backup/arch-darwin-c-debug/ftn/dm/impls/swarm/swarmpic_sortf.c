#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsortdestroy_ DMSWARMSORTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsortdestroy_ dmswarmsortdestroy
#endif
PETSC_EXTERN void dmswarmsortdestroy_(DMSwarmSort *ctx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ctx);
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = DMSwarmSortDestroy(ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsortgetnumberofpointspercell_ DMSWARMSORTGETNUMBEROFPOINTSPERCELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsortgetnumberofpointspercell_ dmswarmsortgetnumberofpointspercell
#endif
PETSC_EXTERN void dmswarmsortgetnumberofpointspercell_(DM *sw, PetscInt *cell, PetscInt *npoints, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(npoints);
  *ierr = DMSwarmSortGetNumberOfPointsPerCell(*sw, *cell, npoints);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsortgetaccess_ DMSWARMSORTGETACCESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsortgetaccess_ dmswarmsortgetaccess
#endif
PETSC_EXTERN void dmswarmsortgetaccess_(DM *sw, PetscErrorCode *ierr)
{
  *ierr = DMSwarmSortGetAccess(*sw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsortrestoreaccess_ DMSWARMSORTRESTOREACCESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsortrestoreaccess_ dmswarmsortrestoreaccess
#endif
PETSC_EXTERN void dmswarmsortrestoreaccess_(DM *sw, PetscErrorCode *ierr)
{
  *ierr = DMSwarmSortRestoreAccess(*sw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsortgetisvalid_ DMSWARMSORTGETISVALID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsortgetisvalid_ dmswarmsortgetisvalid
#endif
PETSC_EXTERN void dmswarmsortgetisvalid_(DM *sw, PetscBool *isvalid, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isvalid);
  *ierr = DMSwarmSortGetIsValid(*sw, isvalid);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsortgetsizes_ DMSWARMSORTGETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsortgetsizes_ dmswarmsortgetsizes
#endif
PETSC_EXTERN void dmswarmsortgetsizes_(DM *sw, PetscInt *ncells, PetscInt *npoints, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ncells);
  CHKFORTRANNULLINTEGER(npoints);
  *ierr = DMSwarmSortGetSizes(*sw, ncells, npoints);
  if (*ierr) return;
}
