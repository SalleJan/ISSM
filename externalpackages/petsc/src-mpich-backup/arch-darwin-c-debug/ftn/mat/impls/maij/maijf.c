#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmaijgetaij_ MATMAIJGETAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmaijgetaij_ matmaijgetaij
#endif
PETSC_EXTERN void matmaijgetaij_(Mat *A, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatMAIJGetAIJ(*A, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmaijredimension_ MATMAIJREDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmaijredimension_ matmaijredimension
#endif
PETSC_EXTERN void matmaijredimension_(Mat *A, PetscInt *dof, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatMAIJRedimension(*A, *dof, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatemaij_ MATCREATEMAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatemaij_ matcreatemaij
#endif
PETSC_EXTERN void matcreatemaij_(Mat *A, PetscInt *dof, Mat *maij, PetscErrorCode *ierr)
{
  PetscBool null_maij = !*(void**) maij ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(maij);
  *ierr = MatCreateMAIJ(*A, *dof, maij);
  if (*ierr) return;
  if (! null_maij && !*(void**) maij) *(void **) maij = (void *)-2;
}
