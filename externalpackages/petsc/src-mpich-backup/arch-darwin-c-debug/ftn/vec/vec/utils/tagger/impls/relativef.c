#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggerrelativesetbox_ VECTAGGERRELATIVESETBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggerrelativesetbox_ vectaggerrelativesetbox
#endif
PETSC_EXTERN void vectaggerrelativesetbox_(VecTagger *tagger, VecTaggerBox box[], PetscErrorCode *ierr)
{
  *ierr = VecTaggerRelativeSetBox(*tagger, box);
  if (*ierr) return;
}
