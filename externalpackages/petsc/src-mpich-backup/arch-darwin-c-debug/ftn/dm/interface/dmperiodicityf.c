#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetperiodicity_ DMSETPERIODICITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetperiodicity_ dmsetperiodicity
#endif
PETSC_EXTERN void dmsetperiodicity_(DM *dm, const PetscReal maxCell[], const PetscReal Lstart[], const PetscReal L[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(maxCell);
  CHKFORTRANNULLREAL(Lstart);
  CHKFORTRANNULLREAL(L);
  *ierr = DMSetPeriodicity(*dm, maxCell, Lstart, L);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocalizecoordinate_ DMLOCALIZECOORDINATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocalizecoordinate_ dmlocalizecoordinate
#endif
PETSC_EXTERN void dmlocalizecoordinate_(DM *dm, const PetscScalar in[], PetscBool *endpoint, PetscScalar out[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(in);
  CHKFORTRANNULLSCALAR(out);
  *ierr = DMLocalizeCoordinate(*dm, in, *endpoint ? PETSC_TRUE : PETSC_FALSE, out);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinateslocalizedlocal_ DMGETCOORDINATESLOCALIZEDLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinateslocalizedlocal_ dmgetcoordinateslocalizedlocal
#endif
PETSC_EXTERN void dmgetcoordinateslocalizedlocal_(DM *dm, PetscBool *areLocalized, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(areLocalized);
  *ierr = DMGetCoordinatesLocalizedLocal(*dm, areLocalized);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinateslocalized_ DMGETCOORDINATESLOCALIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinateslocalized_ dmgetcoordinateslocalized
#endif
PETSC_EXTERN void dmgetcoordinateslocalized_(DM *dm, PetscBool *areLocalized, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(areLocalized);
  *ierr = DMGetCoordinatesLocalized(*dm, areLocalized);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetsparselocalize_ DMGETSPARSELOCALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetsparselocalize_ dmgetsparselocalize
#endif
PETSC_EXTERN void dmgetsparselocalize_(DM *dm, PetscBool *sparse, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(sparse);
  *ierr = DMGetSparseLocalize(*dm, sparse);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetsparselocalize_ DMSETSPARSELOCALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetsparselocalize_ dmsetsparselocalize
#endif
PETSC_EXTERN void dmsetsparselocalize_(DM *dm, PetscBool *sparse, PetscErrorCode *ierr)
{
  *ierr = DMSetSparseLocalize(*dm, *sparse ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocalizecoordinates_ DMLOCALIZECOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocalizecoordinates_ dmlocalizecoordinates
#endif
PETSC_EXTERN void dmlocalizecoordinates_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMLocalizeCoordinates(*dm);
  if (*ierr) return;
}
