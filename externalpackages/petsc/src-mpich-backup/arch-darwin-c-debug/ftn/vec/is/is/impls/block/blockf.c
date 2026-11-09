#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isblocksetindices_ ISBLOCKSETINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isblocksetindices_ isblocksetindices
#endif
PETSC_EXTERN void isblocksetindices_(IS *is, PetscInt *bs, PetscInt *n, const PetscInt idx[], PetscCopyMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  *ierr = ISBlockSetIndices(*is, *bs, *n, idx, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscreateblock_ ISCREATEBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscreateblock_ iscreateblock
#endif
PETSC_EXTERN void iscreateblock_(MPI_Fint *comm, PetscInt *bs, PetscInt *n, const PetscInt idx[], PetscCopyMode *mode, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(idx);
  CHKFORTRANNULLOBJECT(is);
  *ierr = ISCreateBlock(MPI_Comm_f2c(*(comm)), *bs, *n, idx, *mode, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isblockgetlocalsize_ ISBLOCKGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isblockgetlocalsize_ isblockgetlocalsize
#endif
PETSC_EXTERN void isblockgetlocalsize_(IS *is, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = ISBlockGetLocalSize(*is, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isblockgetsize_ ISBLOCKGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isblockgetsize_ isblockgetsize
#endif
PETSC_EXTERN void isblockgetsize_(IS *is, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = ISBlockGetSize(*is, size);
  if (*ierr) return;
}
