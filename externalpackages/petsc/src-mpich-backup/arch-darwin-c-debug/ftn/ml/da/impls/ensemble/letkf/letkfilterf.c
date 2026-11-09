#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaletkfsetobspervertex_ PETSCDALETKFSETOBSPERVERTEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaletkfsetobspervertex_ petscdaletkfsetobspervertex
#endif
PETSC_EXTERN void petscdaletkfsetobspervertex_(PetscDA *da, PetscInt *n_obs_vertex, PetscErrorCode *ierr)
{
  *ierr = PetscDALETKFSetObsPerVertex(*da, *n_obs_vertex);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaletkfgetobspervertex_ PETSCDALETKFGETOBSPERVERTEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaletkfgetobspervertex_ petscdaletkfgetobspervertex
#endif
PETSC_EXTERN void petscdaletkfgetobspervertex_(PetscDA *da, PetscInt *n_obs_vertex, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n_obs_vertex);
  *ierr = PetscDALETKFGetObsPerVertex(*da, n_obs_vertex);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaletkfsetlocalization_ PETSCDALETKFSETLOCALIZATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaletkfsetlocalization_ petscdaletkfsetlocalization
#endif
PETSC_EXTERN void petscdaletkfsetlocalization_(PetscDA *da, Mat *Q, Mat *H, PetscErrorCode *ierr)
{
  *ierr = PetscDALETKFSetLocalization(*da, *Q, *H);
  if (*ierr) return;
}
