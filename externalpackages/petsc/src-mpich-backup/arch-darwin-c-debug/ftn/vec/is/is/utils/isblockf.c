#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscompressindicesgeneral_ ISCOMPRESSINDICESGENERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscompressindicesgeneral_ iscompressindicesgeneral
#endif
PETSC_EXTERN void iscompressindicesgeneral_(PetscInt *n, PetscInt *nkeys, PetscInt *bs, PetscInt *imax, const IS is_in[], IS is_out[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(is_in);
  CHKFORTRANNULLOBJECT(is_out);
  *ierr = ISCompressIndicesGeneral(*n, *nkeys, *bs, *imax, is_in, is_out);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isexpandindicesgeneral_ ISEXPANDINDICESGENERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isexpandindicesgeneral_ isexpandindicesgeneral
#endif
PETSC_EXTERN void isexpandindicesgeneral_(PetscInt *n, PetscInt *nkeys, PetscInt *bs, PetscInt *imax, const IS is_in[], IS is_out[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(is_in);
  CHKFORTRANNULLOBJECT(is_out);
  *ierr = ISExpandIndicesGeneral(*n, *nkeys, *bs, *imax, is_in, is_out);
  if (*ierr) return;
}
