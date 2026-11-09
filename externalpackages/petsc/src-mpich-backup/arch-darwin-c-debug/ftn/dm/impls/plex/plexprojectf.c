#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetactivepoint_ DMPLEXGETACTIVEPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetactivepoint_ dmplexgetactivepoint
#endif
PETSC_EXTERN void dmplexgetactivepoint_(DM *dm, PetscInt *point, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(point);
  *ierr = DMPlexGetActivePoint(*dm, point);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetactivepoint_ DMPLEXSETACTIVEPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetactivepoint_ dmplexsetactivepoint
#endif
PETSC_EXTERN void dmplexsetactivepoint_(DM *dm, PetscInt *point, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetActivePoint(*dm, *point);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetfirstlabeledpoint_ DMGETFIRSTLABELEDPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetfirstlabeledpoint_ dmgetfirstlabeledpoint
#endif
PETSC_EXTERN void dmgetfirstlabeledpoint_(DM *dm, DM *odm, DMLabel *label, PetscInt *numIds, const PetscInt ids[], PetscInt *height, PetscInt *point, PetscDS *ds, PetscErrorCode *ierr)
{
  PetscBool null_ds = !*(void**) ds ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(ids);
  CHKFORTRANNULLINTEGER(point);
  CHKFORTRANNULLOBJECT(ds);
  *ierr = DMGetFirstLabeledPoint(*dm, *odm, *label, *numIds, ids, *height, point, ds);
  if (*ierr) return;
  if (! null_ds && !*(void**) ds) *(void **) ds = (void *)-2;
}
