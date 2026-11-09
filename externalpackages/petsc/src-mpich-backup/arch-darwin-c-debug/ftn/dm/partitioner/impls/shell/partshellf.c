#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionershellsetpartition_ PETSCPARTITIONERSHELLSETPARTITION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionershellsetpartition_ petscpartitionershellsetpartition
#endif
PETSC_EXTERN void petscpartitionershellsetpartition_(PetscPartitioner *part, PetscInt *size, const PetscInt sizes[], const PetscInt points[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(sizes);
  CHKFORTRANNULLINTEGER(points);
  *ierr = PetscPartitionerShellSetPartition(*part, *size, sizes, points);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionershellsetrandom_ PETSCPARTITIONERSHELLSETRANDOM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionershellsetrandom_ petscpartitionershellsetrandom
#endif
PETSC_EXTERN void petscpartitionershellsetrandom_(PetscPartitioner *part, PetscBool *random, PetscErrorCode *ierr)
{
  *ierr = PetscPartitionerShellSetRandom(*part, *random ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionershellgetrandom_ PETSCPARTITIONERSHELLGETRANDOM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionershellgetrandom_ petscpartitionershellgetrandom
#endif
PETSC_EXTERN void petscpartitionershellgetrandom_(PetscPartitioner *part, PetscBool *random, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(random);
  *ierr = PetscPartitionerShellGetRandom(*part, random);
  if (*ierr) return;
}
