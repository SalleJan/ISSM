#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetmigrationsf_ DMPLEXSETMIGRATIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetmigrationsf_ dmplexsetmigrationsf
#endif
PETSC_EXTERN void dmplexsetmigrationsf_(DM *dm, PetscSF *migrationSF, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetMigrationSF(*dm, *migrationSF);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetmigrationsf_ DMPLEXGETMIGRATIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetmigrationsf_ dmplexgetmigrationsf
#endif
PETSC_EXTERN void dmplexgetmigrationsf_(DM *dm, PetscSF *migrationSF, PetscErrorCode *ierr)
{
  PetscBool null_migrationSF = !*(void**) migrationSF ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(migrationSF);
  *ierr = DMPlexGetMigrationSF(*dm, migrationSF);
  if (*ierr) return;
  if (! null_migrationSF && !*(void**) migrationSF) *(void **) migrationSF = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateglobaltonaturalsf_ DMPLEXCREATEGLOBALTONATURALSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateglobaltonaturalsf_ dmplexcreateglobaltonaturalsf
#endif
PETSC_EXTERN void dmplexcreateglobaltonaturalsf_(DM *dm, PetscSection *section, PetscSF *sfMigration, PetscSF *sfNatural, PetscErrorCode *ierr)
{
  PetscBool null_sfNatural = !*(void**) sfNatural ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sfNatural);
  *ierr = DMPlexCreateGlobalToNaturalSF(*dm, *section, *sfMigration, sfNatural);
  if (*ierr) return;
  if (! null_sfNatural && !*(void**) sfNatural) *(void **) sfNatural = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmigrateglobaltonaturalsf_ DMPLEXMIGRATEGLOBALTONATURALSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmigrateglobaltonaturalsf_ dmplexmigrateglobaltonaturalsf
#endif
PETSC_EXTERN void dmplexmigrateglobaltonaturalsf_(DM *dmOld, DM *dmNew, PetscSF *sfNaturalOld, PetscSF *sfMigration, PetscSF *sfNaturalNew, PetscErrorCode *ierr)
{
  PetscBool null_sfNaturalNew = !*(void**) sfNaturalNew ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sfNaturalNew);
  *ierr = DMPlexMigrateGlobalToNaturalSF(*dmOld, *dmNew, *sfNaturalOld, *sfMigration, sfNaturalNew);
  if (*ierr) return;
  if (! null_sfNaturalNew && !*(void**) sfNaturalNew) *(void **) sfNaturalNew = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexglobaltonaturalbegin_ DMPLEXGLOBALTONATURALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexglobaltonaturalbegin_ dmplexglobaltonaturalbegin
#endif
PETSC_EXTERN void dmplexglobaltonaturalbegin_(DM *dm, Vec *gv, Vec *nv, PetscErrorCode *ierr)
{
  *ierr = DMPlexGlobalToNaturalBegin(*dm, *gv, *nv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexglobaltonaturalend_ DMPLEXGLOBALTONATURALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexglobaltonaturalend_ dmplexglobaltonaturalend
#endif
PETSC_EXTERN void dmplexglobaltonaturalend_(DM *dm, Vec *gv, Vec *nv, PetscErrorCode *ierr)
{
  *ierr = DMPlexGlobalToNaturalEnd(*dm, *gv, *nv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexnaturaltoglobalbegin_ DMPLEXNATURALTOGLOBALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexnaturaltoglobalbegin_ dmplexnaturaltoglobalbegin
#endif
PETSC_EXTERN void dmplexnaturaltoglobalbegin_(DM *dm, Vec *nv, Vec *gv, PetscErrorCode *ierr)
{
  *ierr = DMPlexNaturalToGlobalBegin(*dm, *nv, *gv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexnaturaltoglobalend_ DMPLEXNATURALTOGLOBALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexnaturaltoglobalend_ dmplexnaturaltoglobalend
#endif
PETSC_EXTERN void dmplexnaturaltoglobalend_(DM *dm, Vec *nv, Vec *gv, PetscErrorCode *ierr)
{
  *ierr = DMPlexNaturalToGlobalEnd(*dm, *nv, *gv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatenaturalvector_ DMPLEXCREATENATURALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatenaturalvector_ dmplexcreatenaturalvector
#endif
PETSC_EXTERN void dmplexcreatenaturalvector_(DM *dm, Vec *nv, PetscErrorCode *ierr)
{
  PetscBool null_nv = !*(void**) nv ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(nv);
  *ierr = DMPlexCreateNaturalVector(*dm, nv);
  if (*ierr) return;
  if (! null_nv && !*(void**) nv) *(void **) nv = (void *)-2;
}
