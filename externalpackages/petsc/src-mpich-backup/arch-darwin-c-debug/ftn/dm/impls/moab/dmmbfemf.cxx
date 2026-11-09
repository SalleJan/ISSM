#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabfemcreatequadraturedefault_ DMMOABFEMCREATEQUADRATUREDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabfemcreatequadraturedefault_ dmmoabfemcreatequadraturedefault
#endif
PETSC_EXTERN void dmmoabfemcreatequadraturedefault_(const PetscInt *dim, const PetscInt *nverts, PetscQuadrature *quadrature, PetscErrorCode *ierr)
{
  PetscBool null_quadrature = !*(void**) quadrature ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(quadrature);
  *ierr = DMMoabFEMCreateQuadratureDefault(*dim, *nverts, quadrature);
  if (*ierr) return;
  if (! null_quadrature && !*(void**) quadrature) *(void **) quadrature = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabptormapping_ DMMOABPTORMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabptormapping_ dmmoabptormapping
#endif
PETSC_EXTERN void dmmoabptormapping_(const PetscInt *dim, const PetscInt *nverts, const PetscReal *coordinates, const PetscReal *xphy, PetscReal *natparam, PetscReal *phi, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(coordinates);
  CHKFORTRANNULLREAL(xphy);
  CHKFORTRANNULLREAL(natparam);
  CHKFORTRANNULLREAL(phi);
  *ierr = DMMoabPToRMapping(*dim, *nverts, coordinates, xphy, natparam, phi);
  if (*ierr) return;
}
