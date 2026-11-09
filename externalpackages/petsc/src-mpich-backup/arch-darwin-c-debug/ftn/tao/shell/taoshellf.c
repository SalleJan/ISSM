#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoshellgetcontextcptr_ TAOSHELLGETCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoshellgetcontextcptr_ taoshellgetcontextcptr
#endif
PETSC_EXTERN void taoshellgetcontextcptr_(Tao *tao, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = TaoShellGetContext(*tao, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoshellsetcontext_ TAOSHELLSETCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoshellsetcontext_ taoshellsetcontext
#endif
PETSC_EXTERN void taoshellsetcontext_(Tao *tao, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TaoShellSetContext(*tao, ctx);
  if (*ierr) return;
}
