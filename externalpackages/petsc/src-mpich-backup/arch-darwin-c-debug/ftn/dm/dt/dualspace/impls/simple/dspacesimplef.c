#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesimplesetdimension_ PETSCDUALSPACESIMPLESETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesimplesetdimension_ petscdualspacesimplesetdimension
#endif
PETSC_EXTERN void petscdualspacesimplesetdimension_(PetscDualSpace *sp, PetscInt *dim, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSimpleSetDimension(*sp, *dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesimplesetfunctional_ PETSCDUALSPACESIMPLESETFUNCTIONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesimplesetfunctional_ petscdualspacesimplesetfunctional
#endif
PETSC_EXTERN void petscdualspacesimplesetfunctional_(PetscDualSpace *sp, PetscInt *func, PetscQuadrature *q, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSimpleSetFunctional(*sp, *func, *q);
  if (*ierr) return;
}
