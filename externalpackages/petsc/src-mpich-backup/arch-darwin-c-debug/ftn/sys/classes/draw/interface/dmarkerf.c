#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawmarker_ PETSCDRAWMARKER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawmarker_ petscdrawmarker
#endif
PETSC_EXTERN void petscdrawmarker_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, int *cl, PetscErrorCode *ierr)
{
  *ierr = PetscDrawMarker(*draw, *xl, *yl, *cl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetmarkertype_ PETSCDRAWSETMARKERTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetmarkertype_ petscdrawsetmarkertype
#endif
PETSC_EXTERN void petscdrawsetmarkertype_(PetscDraw *draw, PetscDrawMarkerType *mtype, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSetMarkerType(*draw, *mtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgetmarkertype_ PETSCDRAWGETMARKERTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgetmarkertype_ petscdrawgetmarkertype
#endif
PETSC_EXTERN void petscdrawgetmarkertype_(PetscDraw *draw, PetscDrawMarkerType *mtype, PetscErrorCode *ierr)
{
  *ierr = PetscDrawGetMarkerType(*draw, mtype);
  if (*ierr) return;
}
