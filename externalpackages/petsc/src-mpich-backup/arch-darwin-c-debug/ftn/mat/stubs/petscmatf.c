#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvalue_ MATSETVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvalue_ matsetvalue
#endif
PETSC_EXTERN void matsetvalue_(Mat *mat, PetscInt *i, PetscInt *j, PetscScalar *va, InsertMode *mode, PetscErrorCode *ierr)
{
  *ierr = MatSetValue(*mat, *i, *j, *va, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetvalue_ MATGETVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetvalue_ matgetvalue
#endif
PETSC_EXTERN void matgetvalue_(Mat *mat, PetscInt *row, PetscInt *col, PetscScalar *va, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(va);
  *ierr = MatGetValue(*mat, *row, *col, va);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvaluelocal_ MATSETVALUELOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvaluelocal_ matsetvaluelocal
#endif
PETSC_EXTERN void matsetvaluelocal_(Mat *mat, PetscInt *i, PetscInt *j, PetscScalar *va, InsertMode *mode, PetscErrorCode *ierr)
{
  *ierr = MatSetValueLocal(*mat, *i, *j, *va, *mode);
  if (*ierr) return;
}
