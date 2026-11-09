#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetisoperiodicfacesf_ DMPLEXSETISOPERIODICFACESF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetisoperiodicfacesf_ dmplexsetisoperiodicfacesf
#endif
PETSC_EXTERN void dmplexsetisoperiodicfacesf_(DM *dm, PetscInt *num_face_sfs, PetscSF *face_sfs, PetscErrorCode *ierr)
{
  PetscBool null_face_sfs = !*(void**) face_sfs ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(face_sfs);
  *ierr = DMPlexSetIsoperiodicFaceSF(*dm, *num_face_sfs, face_sfs);
  if (*ierr) return;
  if (! null_face_sfs && !*(void**) face_sfs) *(void **) face_sfs = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetisoperiodicfacetransform_ DMPLEXSETISOPERIODICFACETRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetisoperiodicfacetransform_ dmplexsetisoperiodicfacetransform
#endif
PETSC_EXTERN void dmplexsetisoperiodicfacetransform_(DM *dm, PetscInt *n, const PetscScalar t[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(t);
  *ierr = DMPlexSetIsoperiodicFaceTransform(*dm, *n, t);
  if (*ierr) return;
}
