#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmtscreaterhsmassmatrix_ DMTSCREATERHSMASSMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmtscreaterhsmassmatrix_ dmtscreaterhsmassmatrix
#endif
PETSC_EXTERN void dmtscreaterhsmassmatrix_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMTSCreateRHSMassMatrix(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmtscreaterhsmassmatrixlumped_ DMTSCREATERHSMASSMATRIXLUMPED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmtscreaterhsmassmatrixlumped_ dmtscreaterhsmassmatrixlumped
#endif
PETSC_EXTERN void dmtscreaterhsmassmatrixlumped_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMTSCreateRHSMassMatrixLumped(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmtsdestroyrhsmassmatrix_ DMTSDESTROYRHSMASSMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmtsdestroyrhsmassmatrix_ dmtsdestroyrhsmassmatrix
#endif
PETSC_EXTERN void dmtsdestroyrhsmassmatrix_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMTSDestroyRHSMassMatrix(*dm);
  if (*ierr) return;
}
