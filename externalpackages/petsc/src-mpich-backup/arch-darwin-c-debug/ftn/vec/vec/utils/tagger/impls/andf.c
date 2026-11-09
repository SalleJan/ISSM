#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggerandsetsubs_ VECTAGGERANDSETSUBS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggerandsetsubs_ vectaggerandsetsubs
#endif
PETSC_EXTERN void vectaggerandsetsubs_(VecTagger *tagger, PetscInt *nsubs, VecTagger subs[], PetscCopyMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(subs);
  *ierr = VecTaggerAndSetSubs(*tagger, *nsubs, subs, *mode);
  if (*ierr) return;
}
