#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmproduct.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmproductgetdm_ DMPRODUCTGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmproductgetdm_ dmproductgetdm
#endif
PETSC_EXTERN void dmproductgetdm_(DM *dm, PetscInt *slot, DM *subdm, PetscErrorCode *ierr)
{
  PetscBool null_subdm = !*(void**) subdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subdm);
  *ierr = DMProductGetDM(*dm, *slot, subdm);
  if (*ierr) return;
  if (! null_subdm && !*(void**) subdm) *(void **) subdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmproduct.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmproductsetdm_ DMPRODUCTSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmproductsetdm_ dmproductsetdm
#endif
PETSC_EXTERN void dmproductsetdm_(DM *dm, PetscInt *slot, DM *subdm, PetscErrorCode *ierr)
{
  *ierr = DMProductSetDM(*dm, *slot, *subdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmproduct.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmproductsetdimensionindex_ DMPRODUCTSETDIMENSIONINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmproductsetdimensionindex_ dmproductsetdimensionindex
#endif
PETSC_EXTERN void dmproductsetdimensionindex_(DM *dm, PetscInt *slot, PetscInt *idx, PetscErrorCode *ierr)
{
  *ierr = DMProductSetDimensionIndex(*dm, *slot, *idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmproduct.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmproductgetdimensionindex_ DMPRODUCTGETDIMENSIONINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmproductgetdimensionindex_ dmproductgetdimensionindex
#endif
PETSC_EXTERN void dmproductgetdimensionindex_(DM *dm, PetscInt *slot, PetscInt *idx, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  *ierr = DMProductGetDimensionIndex(*dm, *slot, idx);
  if (*ierr) return;
}
