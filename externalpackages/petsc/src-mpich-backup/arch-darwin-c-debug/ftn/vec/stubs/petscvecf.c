#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetvalue_ VECSETVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetvalue_ vecsetvalue
#endif
PETSC_EXTERN void vecsetvalue_(Vec *v, PetscInt *i, PetscScalar *va, InsertMode *mode, PetscErrorCode *ierr)
{
  *ierr = VecSetValue(*v, *i, *va, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetvaluelocal_ VECSETVALUELOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetvaluelocal_ vecsetvaluelocal
#endif
PETSC_EXTERN void vecsetvaluelocal_(Vec *v, PetscInt *i, PetscScalar *va, InsertMode *mode, PetscErrorCode *ierr)
{
  *ierr = VecSetValueLocal(*v, *i, *va, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecseterroriflocked_ VECSETERRORIFLOCKED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecseterroriflocked_ vecseterroriflocked
#endif
PETSC_EXTERN void vecseterroriflocked_(Vec *x, PetscInt *arg, PetscErrorCode *ierr)
{
  *ierr = VecSetErrorIfLocked(*x, *arg);
  if (*ierr) return;
}
