#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorlgctxnetworkdestroy_ TSMONITORLGCTXNETWORKDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgctxnetworkdestroy_ tsmonitorlgctxnetworkdestroy
#endif
PETSC_EXTERN void tsmonitorlgctxnetworkdestroy_(TSMonitorLGCtxNetwork *ctx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ctx);
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorLGCtxNetworkDestroy(ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorlgctxnetworkcreate_ TSMONITORLGCTXNETWORKCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgctxnetworkcreate_ tsmonitorlgctxnetworkcreate
#endif
PETSC_EXTERN void tsmonitorlgctxnetworkcreate_(TS *ts, char host[], char label[], int *x, int *y, int *m, int *n, PetscInt *howoften, TSMonitorLGCtxNetwork *ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_host, PETSC_FORTRAN_CHARLEN_T l_label)
{
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ctx);
  char* c_host;
  FIXCHAR(host, l_host, c_host);
  char* c_label;
  FIXCHAR(label, l_label, c_label);
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorLGCtxNetworkCreate(*ts, c_host, c_label, *x, *y, *m, *n, *howoften, ctx);
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
  #define tsmonitorlgctxnetworksolution_ TSMONITORLGCTXNETWORKSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgctxnetworksolution_ tsmonitorlgctxnetworksolution
#endif
PETSC_EXTERN void tsmonitorlgctxnetworksolution_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, void *dctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorLGCtxNetworkSolution(*ts, *step, *ptime, *u, dctx);
  if (*ierr) return;
}
