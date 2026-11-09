#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortedreal_ PETSCSORTEDREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortedreal_ petscsortedreal
#endif
PETSC_EXTERN void petscsortedreal_(PetscCount *n, const PetscReal X[], PetscBool *sorted, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(X);
  CHKFORTRANNULLBOOL(sorted);
  *ierr = PetscSortedReal(*n, X, sorted);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortreal_ PETSCSORTREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortreal_ petscsortreal
#endif
PETSC_EXTERN void petscsortreal_(PetscCount *n, PetscReal v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(v);
  *ierr = PetscSortReal(*n, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortrealwitharrayint_ PETSCSORTREALWITHARRAYINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortrealwitharrayint_ petscsortrealwitharrayint
#endif
PETSC_EXTERN void petscsortrealwitharrayint_(PetscCount *n, PetscReal r[], PetscInt Ii[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(r);
  CHKFORTRANNULLINTEGER(Ii);
  *ierr = PetscSortRealWithArrayInt(*n, r, Ii);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfindreal_ PETSCFINDREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfindreal_ petscfindreal
#endif
PETSC_EXTERN void petscfindreal_(PetscReal *key, PetscCount *n, const PetscReal t[], PetscReal *eps, PetscInt *loc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(t);
  CHKFORTRANNULLINTEGER(loc);
  *ierr = PetscFindReal(*key, *n, t, *eps, loc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortremovedupsreal_ PETSCSORTREMOVEDUPSREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortremovedupsreal_ petscsortremovedupsreal
#endif
PETSC_EXTERN void petscsortremovedupsreal_(PetscInt *n, PetscReal v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLREAL(v);
  *ierr = PetscSortRemoveDupsReal(n, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortsplit_ PETSCSORTSPLIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortsplit_ petscsortsplit
#endif
PETSC_EXTERN void petscsortsplit_(PetscInt *ncut, PetscInt *n, PetscScalar a[], PetscInt idx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(a);
  CHKFORTRANNULLINTEGER(idx);
  *ierr = PetscSortSplit(*ncut, *n, a, idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortsplitreal_ PETSCSORTSPLITREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortsplitreal_ petscsortsplitreal
#endif
PETSC_EXTERN void petscsortsplitreal_(PetscInt *ncut, PetscInt *n, PetscReal a[], PetscInt idx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(a);
  CHKFORTRANNULLINTEGER(idx);
  *ierr = PetscSortSplitReal(*ncut, *n, a, idx);
  if (*ierr) return;
}
