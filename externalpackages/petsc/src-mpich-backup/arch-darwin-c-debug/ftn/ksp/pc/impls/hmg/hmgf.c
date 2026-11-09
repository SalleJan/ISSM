#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchmgsetreuseinterpolation_ PCHMGSETREUSEINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchmgsetreuseinterpolation_ pchmgsetreuseinterpolation
#endif
PETSC_EXTERN void pchmgsetreuseinterpolation_(PC *pc, PetscBool *reuse, PetscErrorCode *ierr)
{
  *ierr = PCHMGSetReuseInterpolation(*pc, *reuse ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchmgsetusesubspacecoarsening_ PCHMGSETUSESUBSPACECOARSENING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchmgsetusesubspacecoarsening_ pchmgsetusesubspacecoarsening
#endif
PETSC_EXTERN void pchmgsetusesubspacecoarsening_(PC *pc, PetscBool *subspace, PetscErrorCode *ierr)
{
  *ierr = PCHMGSetUseSubspaceCoarsening(*pc, *subspace ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchmgsetinnerpctype_ PCHMGSETINNERPCTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchmgsetinnerpctype_ pchmgsetinnerpctype
#endif
PETSC_EXTERN void pchmgsetinnerpctype_(PC *pc, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PCHMGSetInnerPCType(*pc, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchmgsetcoarseningcomponent_ PCHMGSETCOARSENINGCOMPONENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchmgsetcoarseningcomponent_ pchmgsetcoarseningcomponent
#endif
PETSC_EXTERN void pchmgsetcoarseningcomponent_(PC *pc, PetscInt *component, PetscErrorCode *ierr)
{
  *ierr = PCHMGSetCoarseningComponent(*pc, *component);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchmgusematmaij_ PCHMGUSEMATMAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchmgusematmaij_ pchmgusematmaij
#endif
PETSC_EXTERN void pchmgusematmaij_(PC *pc, PetscBool *usematmaij, PetscErrorCode *ierr)
{
  *ierr = PCHMGUseMatMAIJ(*pc, *usematmaij ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
