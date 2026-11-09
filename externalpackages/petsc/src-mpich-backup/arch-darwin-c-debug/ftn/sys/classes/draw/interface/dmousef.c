#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgetmousebutton_ PETSCDRAWGETMOUSEBUTTON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgetmousebutton_ petscdrawgetmousebutton
#endif
PETSC_EXTERN void petscdrawgetmousebutton_(PetscDraw *draw, PetscDrawButton *button, PetscReal *x_user, PetscReal *y_user, PetscReal *x_phys, PetscReal *y_phys, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x_user);
  CHKFORTRANNULLREAL(y_user);
  CHKFORTRANNULLREAL(x_phys);
  CHKFORTRANNULLREAL(y_phys);
  *ierr = PetscDrawGetMouseButton(*draw, button, x_user, y_user, x_phys, y_phys);
  if (*ierr) return;
}
