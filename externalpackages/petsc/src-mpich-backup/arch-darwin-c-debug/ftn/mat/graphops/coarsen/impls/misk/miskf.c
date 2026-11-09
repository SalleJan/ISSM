#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsenmisksetdistance_ MATCOARSENMISKSETDISTANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsenmisksetdistance_ matcoarsenmisksetdistance
#endif
PETSC_EXTERN void matcoarsenmisksetdistance_(MatCoarsen *crs, PetscInt *k, PetscErrorCode *ierr)
{
  *ierr = MatCoarsenMISKSetDistance(*crs, *k);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsenmiskgetdistance_ MATCOARSENMISKGETDISTANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsenmiskgetdistance_ matcoarsenmiskgetdistance
#endif
PETSC_EXTERN void matcoarsenmiskgetdistance_(MatCoarsen *crs, PetscInt *k, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(k);
  *ierr = MatCoarsenMISKGetDistance(*crs, k);
  if (*ierr) return;
}
