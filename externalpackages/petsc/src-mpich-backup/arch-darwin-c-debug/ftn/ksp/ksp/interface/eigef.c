#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcomputeoperator_ KSPCOMPUTEOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcomputeoperator_ kspcomputeoperator
#endif
PETSC_EXTERN void kspcomputeoperator_(KSP *ksp, char *mattype, Mat *mat, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_mattype)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  char* c_mattype;
  FIXCHAR(mattype, l_mattype, c_mattype);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = KSPComputeOperator(*ksp, c_mattype, mat);
  if (*ierr) return;
  FREECHAR(mattype, c_mattype);
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcomputeeigenvaluesexplicitly_ KSPCOMPUTEEIGENVALUESEXPLICITLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcomputeeigenvaluesexplicitly_ kspcomputeeigenvaluesexplicitly
#endif
PETSC_EXTERN void kspcomputeeigenvaluesexplicitly_(KSP *ksp, PetscInt *nmax, PetscReal r[], PetscReal c[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(r);
  CHKFORTRANNULLREAL(c);
  *ierr = KSPComputeEigenvaluesExplicitly(*ksp, *nmax, r, c);
  if (*ierr) return;
}
