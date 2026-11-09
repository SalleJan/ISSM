#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggerorsetsubs_ VECTAGGERORSETSUBS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggerorsetsubs_ vectaggerorsetsubs
#endif
PETSC_EXTERN void vectaggerorsetsubs_(VecTagger *tagger, PetscInt *nsubs, VecTagger subs[], PetscCopyMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(subs);
  *ierr = VecTaggerOrSetSubs(*tagger, *nsubs, subs, *mode);
  if (*ierr) return;
}
