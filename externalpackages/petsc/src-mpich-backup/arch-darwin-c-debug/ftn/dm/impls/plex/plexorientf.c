#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexorientpoint_ DMPLEXORIENTPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexorientpoint_ dmplexorientpoint
#endif
PETSC_EXTERN void dmplexorientpoint_(DM *dm, PetscInt *p, PetscInt *o, PetscErrorCode *ierr)
{
  *ierr = DMPlexOrientPoint(*dm, *p, *o);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexorient_ DMPLEXORIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexorient_ dmplexorient
#endif
PETSC_EXTERN void dmplexorient_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexOrient(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexorientlabel_ DMPLEXORIENTLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexorientlabel_ dmplexorientlabel
#endif
PETSC_EXTERN void dmplexorientlabel_(DM *dm, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMPlexOrientLabel(*dm, *label);
  if (*ierr) return;
}
