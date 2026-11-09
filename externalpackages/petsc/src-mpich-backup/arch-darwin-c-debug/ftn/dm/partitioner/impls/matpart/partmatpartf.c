#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionermatpartitioninggetmatpartitioning_ PETSCPARTITIONERMATPARTITIONINGGETMATPARTITIONING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionermatpartitioninggetmatpartitioning_ petscpartitionermatpartitioninggetmatpartitioning
#endif
PETSC_EXTERN void petscpartitionermatpartitioninggetmatpartitioning_(PetscPartitioner *part, MatPartitioning *mp, PetscErrorCode *ierr)
{
  PetscBool null_mp = !*(void**) mp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mp);
  *ierr = PetscPartitionerMatPartitioningGetMatPartitioning(*part, mp);
  if (*ierr) return;
  if (! null_mp && !*(void**) mp) *(void **) mp = (void *)-2;
}
