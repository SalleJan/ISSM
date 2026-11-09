#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegeomgetpoint_ PETSCFEGEOMGETPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegeomgetpoint_ petscfegeomgetpoint
#endif
PETSC_EXTERN void petscfegeomgetpoint_(PetscFEGeom **geom, PetscInt *c, PetscInt *p, const PetscReal pcoords[], PetscFEGeom **pgeom, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(pcoords);
  *ierr = PetscFEGeomGetPoint(*geom, *c, *p, pcoords, *pgeom);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegeomgetcellpoint_ PETSCFEGEOMGETCELLPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegeomgetcellpoint_ petscfegeomgetcellpoint
#endif
PETSC_EXTERN void petscfegeomgetcellpoint_(PetscFEGeom **geom, PetscInt *c, PetscInt *p, PetscFEGeom **pgeom, PetscErrorCode *ierr)
{
  *ierr = PetscFEGeomGetCellPoint(*geom, *c, *p, *pgeom);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegeomcomplete_ PETSCFEGEOMCOMPLETE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegeomcomplete_ petscfegeomcomplete
#endif
PETSC_EXTERN void petscfegeomcomplete_(PetscFEGeom **geom, PetscErrorCode *ierr)
{
  *ierr = PetscFEGeomComplete(*geom);
  if (*ierr) return;
}
