#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathtoolgetpermutationsource_ MATHTOOLGETPERMUTATIONSOURCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathtoolgetpermutationsource_ mathtoolgetpermutationsource
#endif
PETSC_EXTERN void mathtoolgetpermutationsource_(Mat *A, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = MatHtoolGetPermutationSource(*A, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathtoolgetpermutationtarget_ MATHTOOLGETPERMUTATIONTARGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathtoolgetpermutationtarget_ mathtoolgetpermutationtarget
#endif
PETSC_EXTERN void mathtoolgetpermutationtarget_(Mat *A, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = MatHtoolGetPermutationTarget(*A, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathtoolusepermutation_ MATHTOOLUSEPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathtoolusepermutation_ mathtoolusepermutation
#endif
PETSC_EXTERN void mathtoolusepermutation_(Mat *A, PetscBool *use, PetscErrorCode *ierr)
{
  *ierr = MatHtoolUsePermutation(*A, *use ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathtooluserecompression_ MATHTOOLUSERECOMPRESSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathtooluserecompression_ mathtooluserecompression
#endif
PETSC_EXTERN void mathtooluserecompression_(Mat *A, PetscBool *use, PetscErrorCode *ierr)
{
  *ierr = MatHtoolUseRecompression(*A, *use ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
