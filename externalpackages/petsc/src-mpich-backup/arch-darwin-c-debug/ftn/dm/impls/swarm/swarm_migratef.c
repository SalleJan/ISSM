#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmgetmigratetype_ DMSWARMGETMIGRATETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmgetmigratetype_ dmswarmgetmigratetype
#endif
PETSC_EXTERN void dmswarmgetmigratetype_(DM *dm, DMSwarmMigrateType *mtype, PetscErrorCode *ierr)
{
  *ierr = DMSwarmGetMigrateType(*dm, mtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsetmigratetype_ DMSWARMSETMIGRATETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsetmigratetype_ dmswarmsetmigratetype
#endif
PETSC_EXTERN void dmswarmsetmigratetype_(DM *dm, DMSwarmMigrateType *mtype, PetscErrorCode *ierr)
{
  *ierr = DMSwarmSetMigrateType(*dm, *mtype);
  if (*ierr) return;
}
