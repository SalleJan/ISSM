#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matreorderingseqsbaij_ MATREORDERINGSEQSBAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matreorderingseqsbaij_ matreorderingseqsbaij
#endif
PETSC_EXTERN void matreorderingseqsbaij_(Mat *A, IS *perm, PetscErrorCode *ierr)
{
  *ierr = MatReorderingSeqSBAIJ(*A, *perm);
  if (*ierr) return;
}
