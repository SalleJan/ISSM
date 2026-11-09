#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacepointsetpoints_ PETSCSPACEPOINTSETPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacepointsetpoints_ petscspacepointsetpoints
#endif
PETSC_EXTERN void petscspacepointsetpoints_(PetscSpace *sp, PetscQuadrature *q, PetscErrorCode *ierr)
{
  *ierr = PetscSpacePointSetPoints(*sp, *q);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacepointgetpoints_ PETSCSPACEPOINTGETPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacepointgetpoints_ petscspacepointgetpoints
#endif
PETSC_EXTERN void petscspacepointgetpoints_(PetscSpace *sp, PetscQuadrature *q, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscSpacePointGetPoints(*sp, q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
