#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5setdmplexstorageversionwriting_ PETSCVIEWERHDF5SETDMPLEXSTORAGEVERSIONWRITING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5setdmplexstorageversionwriting_ petscviewerhdf5setdmplexstorageversionwriting
#endif
PETSC_EXTERN void petscviewerhdf5setdmplexstorageversionwriting_(PetscViewer *viewer, DMPlexStorageVersion *version, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5SetDMPlexStorageVersionWriting(v_viewer, *version);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5getdmplexstorageversionwriting_ PETSCVIEWERHDF5GETDMPLEXSTORAGEVERSIONWRITING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5getdmplexstorageversionwriting_ petscviewerhdf5getdmplexstorageversionwriting
#endif
PETSC_EXTERN void petscviewerhdf5getdmplexstorageversionwriting_(PetscViewer *viewer, DMPlexStorageVersion *version, PetscErrorCode *ierr)
{
  PetscBool null_version = !*(void**) version ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(version);
  *ierr = PetscViewerHDF5GetDMPlexStorageVersionWriting(v_viewer, version);
  if (*ierr) return;
  if (! null_version && !*(void**) version) *(void **) version = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5setdmplexstorageversionreading_ PETSCVIEWERHDF5SETDMPLEXSTORAGEVERSIONREADING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5setdmplexstorageversionreading_ petscviewerhdf5setdmplexstorageversionreading
#endif
PETSC_EXTERN void petscviewerhdf5setdmplexstorageversionreading_(PetscViewer *viewer, DMPlexStorageVersion *version, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5SetDMPlexStorageVersionReading(v_viewer, *version);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5getdmplexstorageversionreading_ PETSCVIEWERHDF5GETDMPLEXSTORAGEVERSIONREADING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5getdmplexstorageversionreading_ petscviewerhdf5getdmplexstorageversionreading
#endif
PETSC_EXTERN void petscviewerhdf5getdmplexstorageversionreading_(PetscViewer *viewer, DMPlexStorageVersion *version, PetscErrorCode *ierr)
{
  PetscBool null_version = !*(void**) version ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(version);
  *ierr = PetscViewerHDF5GetDMPlexStorageVersionReading(v_viewer, version);
  if (*ierr) return;
  if (! null_version && !*(void**) version) *(void **) version = (void *)-2;
}
