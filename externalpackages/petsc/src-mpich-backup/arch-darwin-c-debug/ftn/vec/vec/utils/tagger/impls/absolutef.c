#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggerabsolutesetbox_ VECTAGGERABSOLUTESETBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggerabsolutesetbox_ vectaggerabsolutesetbox
#endif
PETSC_EXTERN void vectaggerabsolutesetbox_(VecTagger *tagger, VecTaggerBox box[], PetscErrorCode *ierr)
{
  *ierr = VecTaggerAbsoluteSetBox(*tagger, box);
  if (*ierr) return;
}
