#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscreategeneral_ ISCREATEGENERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscreategeneral_ iscreategeneral
#endif
PETSC_EXTERN void iscreategeneral_(MPI_Fint *comm, PetscInt *n, const PetscInt idx[], PetscCopyMode *mode, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(idx);
  CHKFORTRANNULLOBJECT(is);
  *ierr = ISCreateGeneral(MPI_Comm_f2c(*(comm)), *n, idx, *mode, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgeneralsetindices_ ISGENERALSETINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgeneralsetindices_ isgeneralsetindices
#endif
PETSC_EXTERN void isgeneralsetindices_(IS *is, PetscInt *n, const PetscInt idx[], PetscCopyMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  *ierr = ISGeneralSetIndices(*is, *n, idx, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgeneralsetindicesfrommask_ ISGENERALSETINDICESFROMMASK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgeneralsetindicesfrommask_ isgeneralsetindicesfrommask
#endif
PETSC_EXTERN void isgeneralsetindicesfrommask_(IS *is, PetscInt *rstart, PetscInt *rend, const PetscBool mask[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(mask);
  *ierr = ISGeneralSetIndicesFromMask(*is, *rstart, *rend, mask);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgeneralfilter_ ISGENERALFILTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgeneralfilter_ isgeneralfilter
#endif
PETSC_EXTERN void isgeneralfilter_(IS *is, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  *ierr = ISGeneralFilter(*is, *start, *end);
  if (*ierr) return;
}
