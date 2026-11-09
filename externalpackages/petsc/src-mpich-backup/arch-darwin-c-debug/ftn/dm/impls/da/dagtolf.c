#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdaglobaltonaturalbegin_ DMDAGLOBALTONATURALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdaglobaltonaturalbegin_ dmdaglobaltonaturalbegin
#endif
PETSC_EXTERN void dmdaglobaltonaturalbegin_(DM *da, Vec *g, InsertMode *mode, Vec *n, PetscErrorCode *ierr)
{
  *ierr = DMDAGlobalToNaturalBegin(*da, *g, *mode, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdaglobaltonaturalend_ DMDAGLOBALTONATURALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdaglobaltonaturalend_ dmdaglobaltonaturalend
#endif
PETSC_EXTERN void dmdaglobaltonaturalend_(DM *da, Vec *g, InsertMode *mode, Vec *n, PetscErrorCode *ierr)
{
  *ierr = DMDAGlobalToNaturalEnd(*da, *g, *mode, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdanaturaltoglobalbegin_ DMDANATURALTOGLOBALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdanaturaltoglobalbegin_ dmdanaturaltoglobalbegin
#endif
PETSC_EXTERN void dmdanaturaltoglobalbegin_(DM *da, Vec *n, InsertMode *mode, Vec *g, PetscErrorCode *ierr)
{
  *ierr = DMDANaturalToGlobalBegin(*da, *n, *mode, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdanaturaltoglobalend_ DMDANATURALTOGLOBALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdanaturaltoglobalend_ dmdanaturaltoglobalend
#endif
PETSC_EXTERN void dmdanaturaltoglobalend_(DM *da, Vec *n, InsertMode *mode, Vec *g, PetscErrorCode *ierr)
{
  *ierr = DMDANaturalToGlobalEnd(*da, *n, *mode, *g);
  if (*ierr) return;
}
