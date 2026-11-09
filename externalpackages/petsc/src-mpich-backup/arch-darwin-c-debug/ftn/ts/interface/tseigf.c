#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorspeig_ TSMONITORSPEIG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorspeig_ tsmonitorspeig
#endif
PETSC_EXTERN void tsmonitorspeig_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *v, void *monctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorSPEig(*ts, *step, *ptime, *v, monctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorspeigctxcreate_ TSMONITORSPEIGCTXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorspeigctxcreate_ tsmonitorspeigctxcreate
#endif
PETSC_EXTERN void tsmonitorspeigctxcreate_(MPI_Fint *comm, char host[], char label[], int *x, int *y, int *m, int *n, PetscInt *howoften, TSMonitorSPEigCtx *ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_host, PETSC_FORTRAN_CHARLEN_T l_label)
{
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ctx);
  char* c_host;
  FIXCHAR(host, l_host, c_host);
  char* c_label;
  FIXCHAR(label, l_label, c_label);
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorSPEigCtxCreate(MPI_Comm_f2c(*(comm)), c_host, c_label, *x, *y, *m, *n, *howoften, ctx);
  if (*ierr) return;
  FREECHAR(host, c_host);
  FREECHAR(label, c_label);
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorspeigctxdestroy_ TSMONITORSPEIGCTXDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorspeigctxdestroy_ tsmonitorspeigctxdestroy
#endif
PETSC_EXTERN void tsmonitorspeigctxdestroy_(TSMonitorSPEigCtx *ctx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ctx);
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorSPEigCtxDestroy(ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
