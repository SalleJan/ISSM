#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorsawsdestroycptr_ SNESMONITORSAWSDESTROYCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorsawsdestroycptr_ snesmonitorsawsdestroycptr
#endif
PETSC_EXTERN void snesmonitorsawsdestroycptr_(PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorSAWsDestroy(ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorsaws_ SNESMONITORSAWS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorsaws_ snesmonitorsaws
#endif
PETSC_EXTERN void snesmonitorsaws_(SNES *snes, PetscInt *n, PetscReal *rnorm, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorSAWs(*snes, *n, *rnorm, ctx);
  if (*ierr) return;
}
