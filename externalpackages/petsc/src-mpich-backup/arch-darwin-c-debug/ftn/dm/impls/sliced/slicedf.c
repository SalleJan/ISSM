#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmsliced.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmslicedsetghosts_ DMSLICEDSETGHOSTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmslicedsetghosts_ dmslicedsetghosts
#endif
PETSC_EXTERN void dmslicedsetghosts_(DM *dm, PetscInt *bs, PetscInt *nlocal, PetscInt *Nghosts, const PetscInt ghosts[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ghosts);
  *ierr = DMSlicedSetGhosts(*dm, *bs, *nlocal, *Nghosts, ghosts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmsliced.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmslicedsetpreallocation_ DMSLICEDSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmslicedsetpreallocation_ dmslicedsetpreallocation
#endif
PETSC_EXTERN void dmslicedsetpreallocation_(DM *dm, PetscInt *d_nz, const PetscInt d_nnz[], PetscInt *o_nz, const PetscInt o_nnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  *ierr = DMSlicedSetPreallocation(*dm, *d_nz, d_nnz, *o_nz, o_nnz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmsliced.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmslicedsetblockfills_ DMSLICEDSETBLOCKFILLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmslicedsetblockfills_ dmslicedsetblockfills
#endif
PETSC_EXTERN void dmslicedsetblockfills_(DM *dm, const PetscInt dfill[], const PetscInt ofill[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dfill);
  CHKFORTRANNULLINTEGER(ofill);
  *ierr = DMSlicedSetBlockFills(*dm, dfill, ofill);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmsliced.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmslicedcreate_ DMSLICEDCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmslicedcreate_ dmslicedcreate
#endif
PETSC_EXTERN void dmslicedcreate_(MPI_Fint *comm, PetscInt *bs, PetscInt *nlocal, PetscInt *Nghosts, const PetscInt ghosts[], const PetscInt d_nnz[], const PetscInt o_nnz[], DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(dm);
  CHKFORTRANNULLINTEGER(ghosts);
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMSlicedCreate(MPI_Comm_f2c(*(comm)), *bs, *nlocal, *Nghosts, ghosts, d_nnz, o_nnz, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
