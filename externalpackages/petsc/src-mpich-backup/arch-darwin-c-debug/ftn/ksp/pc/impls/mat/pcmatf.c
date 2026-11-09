#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmatsetapplyoperation_ PCMATSETAPPLYOPERATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmatsetapplyoperation_ pcmatsetapplyoperation
#endif
PETSC_EXTERN void pcmatsetapplyoperation_(PC *pc, MatOperation *matop, PetscErrorCode *ierr)
{
  *ierr = PCMatSetApplyOperation(*pc, *matop);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmatgetapplyoperation_ PCMATGETAPPLYOPERATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmatgetapplyoperation_ pcmatgetapplyoperation
#endif
PETSC_EXTERN void pcmatgetapplyoperation_(PC *pc, MatOperation *matop, PetscErrorCode *ierr)
{
  *ierr = PCMatGetApplyOperation(*pc, matop);
  if (*ierr) return;
}
