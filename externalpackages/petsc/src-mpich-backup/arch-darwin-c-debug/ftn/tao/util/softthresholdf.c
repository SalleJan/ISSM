#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosoftthreshold_ TAOSOFTTHRESHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosoftthreshold_ taosoftthreshold
#endif
PETSC_EXTERN void taosoftthreshold_(Vec *in, PetscReal *lb, PetscReal *ub, Vec *out, PetscErrorCode *ierr)
{
  *ierr = TaoSoftThreshold(*in, *lb, *ub, *out);
  if (*ierr) return;
}
