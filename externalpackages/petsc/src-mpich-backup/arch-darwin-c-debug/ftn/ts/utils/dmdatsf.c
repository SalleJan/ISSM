#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitordmdaraydestroycptr_ TSMONITORDMDARAYDESTROYCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitordmdaraydestroycptr_ tsmonitordmdaraydestroycptr
#endif
PETSC_EXTERN void tsmonitordmdaraydestroycptr_(PetscCtxRt mctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorDMDARayDestroy(mctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitordmdaray_ TSMONITORDMDARAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitordmdaray_ tsmonitordmdaray
#endif
PETSC_EXTERN void tsmonitordmdaray_(TS *ts, PetscInt *steps, PetscReal *time, Vec *u, void *mctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorDMDARay(*ts, *steps, *time, *u, mctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorlgdmdaray_ TSMONITORLGDMDARAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgdmdaray_ tsmonitorlgdmdaray
#endif
PETSC_EXTERN void tsmonitorlgdmdaray_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorLGDMDARay(*ts, *step, *ptime, *u, ctx);
  if (*ierr) return;
}
