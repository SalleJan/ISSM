#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermshellgetcontextcptr_ TAOTERMSHELLGETCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermshellgetcontextcptr_ taotermshellgetcontextcptr
#endif
PETSC_EXTERN void taotermshellgetcontextcptr_(TaoTerm *term, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = TaoTermShellGetContext(*term, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermshellsetcontext_ TAOTERMSHELLSETCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermshellsetcontext_ taotermshellsetcontext
#endif
PETSC_EXTERN void taotermshellsetcontext_(TaoTerm *term, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TaoTermShellSetContext(*term, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermshellsetiscomputehessianfdpossible_ TAOTERMSHELLSETISCOMPUTEHESSIANFDPOSSIBLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermshellsetiscomputehessianfdpossible_ taotermshellsetiscomputehessianfdpossible
#endif
PETSC_EXTERN void taotermshellsetiscomputehessianfdpossible_(TaoTerm *term, PetscBool3 *ispossible, PetscErrorCode *ierr)
{
  *ierr = TaoTermShellSetIsComputeHessianFDPossible(*term, *ispossible);
  if (*ierr) return;
}
