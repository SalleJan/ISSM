#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcomputeextremesingularvalues_ KSPCOMPUTEEXTREMESINGULARVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcomputeextremesingularvalues_ kspcomputeextremesingularvalues
#endif
PETSC_EXTERN void kspcomputeextremesingularvalues_(KSP *ksp, PetscReal *emax, PetscReal *emin, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(emax);
  CHKFORTRANNULLREAL(emin);
  *ierr = KSPComputeExtremeSingularValues(*ksp, emax, emin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcomputeeigenvalues_ KSPCOMPUTEEIGENVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcomputeeigenvalues_ kspcomputeeigenvalues
#endif
PETSC_EXTERN void kspcomputeeigenvalues_(KSP *ksp, PetscInt *n, PetscReal r[], PetscReal c[], PetscInt *neig, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(r);
  CHKFORTRANNULLREAL(c);
  CHKFORTRANNULLINTEGER(neig);
  *ierr = KSPComputeEigenvalues(*ksp, *n, r, c, neig);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcomputeritz_ KSPCOMPUTERITZ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcomputeritz_ kspcomputeritz
#endif
PETSC_EXTERN void kspcomputeritz_(KSP *ksp, PetscBool *ritz, PetscBool *small, PetscInt *nrit, Vec S[], PetscReal tetar[], PetscReal tetai[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nrit);
  CHKFORTRANNULLOBJECT(S);
  CHKFORTRANNULLREAL(tetar);
  CHKFORTRANNULLREAL(tetai);
  *ierr = KSPComputeRitz(*ksp, *ritz ? PETSC_TRUE : PETSC_FALSE, *small ? PETSC_TRUE : PETSC_FALSE, nrit, S, tetar, tetai);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetuponblocks_ KSPSETUPONBLOCKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetuponblocks_ kspsetuponblocks
#endif
PETSC_EXTERN void kspsetuponblocks_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPSetUpOnBlocks(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetreusepreconditioner_ KSPSETREUSEPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetreusepreconditioner_ kspsetreusepreconditioner
#endif
PETSC_EXTERN void kspsetreusepreconditioner_(KSP *ksp, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = KSPSetReusePreconditioner(*ksp, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetreusepreconditioner_ KSPGETREUSEPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetreusepreconditioner_ kspgetreusepreconditioner
#endif
PETSC_EXTERN void kspgetreusepreconditioner_(KSP *ksp, PetscBool *flag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flag);
  *ierr = KSPGetReusePreconditioner(*ksp, flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetskippcsetfromoptions_ KSPSETSKIPPCSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetskippcsetfromoptions_ kspsetskippcsetfromoptions
#endif
PETSC_EXTERN void kspsetskippcsetfromoptions_(KSP *ksp, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = KSPSetSkipPCSetFromOptions(*ksp, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetup_ KSPSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetup_ kspsetup
#endif
PETSC_EXTERN void kspsetup_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPSetUp(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspconvergedreasonview_ KSPCONVERGEDREASONVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspconvergedreasonview_ kspconvergedreasonview
#endif
PETSC_EXTERN void kspconvergedreasonview_(KSP *ksp, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = KSPConvergedReasonView(*ksp, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspconvergedreasonviewcancel_ KSPCONVERGEDREASONVIEWCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspconvergedreasonviewcancel_ kspconvergedreasonviewcancel
#endif
PETSC_EXTERN void kspconvergedreasonviewcancel_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPConvergedReasonViewCancel(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspconvergedreasonviewfromoptions_ KSPCONVERGEDREASONVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspconvergedreasonviewfromoptions_ kspconvergedreasonviewfromoptions
#endif
PETSC_EXTERN void kspconvergedreasonviewfromoptions_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPConvergedReasonViewFromOptions(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspconvergedrateview_ KSPCONVERGEDRATEVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspconvergedrateview_ kspconvergedrateview
#endif
PETSC_EXTERN void kspconvergedrateview_(KSP *ksp, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = KSPConvergedRateView(*ksp, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsolve_ KSPSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsolve_ kspsolve
#endif
PETSC_EXTERN void kspsolve_(KSP *ksp, Vec *b, Vec *x, PetscErrorCode *ierr)
{
  *ierr = KSPSolve(*ksp, *b, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsolvetranspose_ KSPSOLVETRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsolvetranspose_ kspsolvetranspose
#endif
PETSC_EXTERN void kspsolvetranspose_(KSP *ksp, Vec *b, Vec *x, PetscErrorCode *ierr)
{
  *ierr = KSPSolveTranspose(*ksp, *b, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmatsolve_ KSPMATSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmatsolve_ kspmatsolve
#endif
PETSC_EXTERN void kspmatsolve_(KSP *ksp, Mat *B, Mat *X, PetscErrorCode *ierr)
{
  *ierr = KSPMatSolve(*ksp, *B, *X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmatsolvetranspose_ KSPMATSOLVETRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmatsolvetranspose_ kspmatsolvetranspose
#endif
PETSC_EXTERN void kspmatsolvetranspose_(KSP *ksp, Mat *B, Mat *X, PetscErrorCode *ierr)
{
  *ierr = KSPMatSolveTranspose(*ksp, *B, *X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetmatsolvebatchsize_ KSPSETMATSOLVEBATCHSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetmatsolvebatchsize_ kspsetmatsolvebatchsize
#endif
PETSC_EXTERN void kspsetmatsolvebatchsize_(KSP *ksp, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = KSPSetMatSolveBatchSize(*ksp, *bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetmatsolvebatchsize_ KSPGETMATSOLVEBATCHSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetmatsolvebatchsize_ kspgetmatsolvebatchsize
#endif
PETSC_EXTERN void kspgetmatsolvebatchsize_(KSP *ksp, PetscInt *bs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bs);
  *ierr = KSPGetMatSolveBatchSize(*ksp, bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspresetviewers_ KSPRESETVIEWERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspresetviewers_ kspresetviewers
#endif
PETSC_EXTERN void kspresetviewers_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPResetViewers(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspreset_ KSPRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspreset_ kspreset
#endif
PETSC_EXTERN void kspreset_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPReset(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspdestroy_ KSPDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspdestroy_ kspdestroy
#endif
PETSC_EXTERN void kspdestroy_(KSP *ksp, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ksp);
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = KSPDestroy(ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetpcside_ KSPSETPCSIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetpcside_ kspsetpcside
#endif
PETSC_EXTERN void kspsetpcside_(KSP *ksp, PCSide *side, PetscErrorCode *ierr)
{
  *ierr = KSPSetPCSide(*ksp, *side);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetpcside_ KSPGETPCSIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetpcside_ kspgetpcside
#endif
PETSC_EXTERN void kspgetpcside_(KSP *ksp, PCSide *side, PetscErrorCode *ierr)
{
  *ierr = KSPGetPCSide(*ksp, side);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgettolerances_ KSPGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgettolerances_ kspgettolerances
#endif
PETSC_EXTERN void kspgettolerances_(KSP *ksp, PetscReal *rtol, PetscReal *abstol, PetscReal *dtol, PetscInt *maxits, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(rtol);
  CHKFORTRANNULLREAL(abstol);
  CHKFORTRANNULLREAL(dtol);
  CHKFORTRANNULLINTEGER(maxits);
  *ierr = KSPGetTolerances(*ksp, rtol, abstol, dtol, maxits);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsettolerances_ KSPSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsettolerances_ kspsettolerances
#endif
PETSC_EXTERN void kspsettolerances_(KSP *ksp, PetscReal *rtol, PetscReal *abstol, PetscReal *dtol, PetscInt *maxits, PetscErrorCode *ierr)
{
  *ierr = KSPSetTolerances(*ksp, *rtol, *abstol, *dtol, *maxits);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetminimumiterations_ KSPSETMINIMUMITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetminimumiterations_ kspsetminimumiterations
#endif
PETSC_EXTERN void kspsetminimumiterations_(KSP *ksp, PetscInt *minit, PetscErrorCode *ierr)
{
  *ierr = KSPSetMinimumIterations(*ksp, *minit);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetminimumiterations_ KSPGETMINIMUMITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetminimumiterations_ kspgetminimumiterations
#endif
PETSC_EXTERN void kspgetminimumiterations_(KSP *ksp, PetscInt *minit, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(minit);
  *ierr = KSPGetMinimumIterations(*ksp, minit);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetinitialguessnonzero_ KSPSETINITIALGUESSNONZERO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetinitialguessnonzero_ kspsetinitialguessnonzero
#endif
PETSC_EXTERN void kspsetinitialguessnonzero_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPSetInitialGuessNonzero(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetinitialguessnonzero_ KSPGETINITIALGUESSNONZERO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetinitialguessnonzero_ kspgetinitialguessnonzero
#endif
PETSC_EXTERN void kspgetinitialguessnonzero_(KSP *ksp, PetscBool *flag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flag);
  *ierr = KSPGetInitialGuessNonzero(*ksp, flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspseterrorifnotconverged_ KSPSETERRORIFNOTCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspseterrorifnotconverged_ kspseterrorifnotconverged
#endif
PETSC_EXTERN void kspseterrorifnotconverged_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPSetErrorIfNotConverged(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgeterrorifnotconverged_ KSPGETERRORIFNOTCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgeterrorifnotconverged_ kspgeterrorifnotconverged
#endif
PETSC_EXTERN void kspgeterrorifnotconverged_(KSP *ksp, PetscBool *flag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flag);
  *ierr = KSPGetErrorIfNotConverged(*ksp, flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetinitialguessknoll_ KSPSETINITIALGUESSKNOLL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetinitialguessknoll_ kspsetinitialguessknoll
#endif
PETSC_EXTERN void kspsetinitialguessknoll_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPSetInitialGuessKnoll(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetinitialguessknoll_ KSPGETINITIALGUESSKNOLL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetinitialguessknoll_ kspgetinitialguessknoll
#endif
PETSC_EXTERN void kspgetinitialguessknoll_(KSP *ksp, PetscBool *flag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flag);
  *ierr = KSPGetInitialGuessKnoll(*ksp, flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetcomputesingularvalues_ KSPGETCOMPUTESINGULARVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetcomputesingularvalues_ kspgetcomputesingularvalues
#endif
PETSC_EXTERN void kspgetcomputesingularvalues_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = KSPGetComputeSingularValues(*ksp, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetcomputesingularvalues_ KSPSETCOMPUTESINGULARVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetcomputesingularvalues_ kspsetcomputesingularvalues
#endif
PETSC_EXTERN void kspsetcomputesingularvalues_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPSetComputeSingularValues(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetcomputeeigenvalues_ KSPGETCOMPUTEEIGENVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetcomputeeigenvalues_ kspgetcomputeeigenvalues
#endif
PETSC_EXTERN void kspgetcomputeeigenvalues_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = KSPGetComputeEigenvalues(*ksp, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetcomputeeigenvalues_ KSPSETCOMPUTEEIGENVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetcomputeeigenvalues_ kspsetcomputeeigenvalues
#endif
PETSC_EXTERN void kspsetcomputeeigenvalues_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPSetComputeEigenvalues(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetcomputeritz_ KSPSETCOMPUTERITZ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetcomputeritz_ kspsetcomputeritz
#endif
PETSC_EXTERN void kspsetcomputeritz_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPSetComputeRitz(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetrhs_ KSPGETRHS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetrhs_ kspgetrhs
#endif
PETSC_EXTERN void kspgetrhs_(KSP *ksp, Vec *r, PetscErrorCode *ierr)
{
  PetscBool null_r = !*(void**) r ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(r);
  *ierr = KSPGetRhs(*ksp, r);
  if (*ierr) return;
  if (! null_r && !*(void**) r) *(void **) r = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetsolution_ KSPGETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetsolution_ kspgetsolution
#endif
PETSC_EXTERN void kspgetsolution_(KSP *ksp, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = KSPGetSolution(*ksp, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetpc_ KSPSETPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetpc_ kspsetpc
#endif
PETSC_EXTERN void kspsetpc_(KSP *ksp, PC *pc, PetscErrorCode *ierr)
{
  *ierr = KSPSetPC(*ksp, *pc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetpc_ KSPGETPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetpc_ kspgetpc
#endif
PETSC_EXTERN void kspgetpc_(KSP *ksp, PC *pc, PetscErrorCode *ierr)
{
  PetscBool null_pc = !*(void**) pc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pc);
  *ierr = KSPGetPC(*ksp, pc);
  if (*ierr) return;
  if (! null_pc && !*(void**) pc) *(void **) pc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitor_ KSPMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitor_ kspmonitor
#endif
PETSC_EXTERN void kspmonitor_(KSP *ksp, PetscInt *it, PetscReal *rnorm, PetscErrorCode *ierr)
{
  *ierr = KSPMonitor(*ksp, *it, *rnorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorcancel_ KSPMONITORCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorcancel_ kspmonitorcancel
#endif
PETSC_EXTERN void kspmonitorcancel_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorCancel(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetmonitorcontextcptr_ KSPGETMONITORCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetmonitorcontextcptr_ kspgetmonitorcontextcptr
#endif
PETSC_EXTERN void kspgetmonitorcontextcptr_(KSP *ksp, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = KSPGetMonitorContext(*ksp, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetresidualhistory_ KSPSETRESIDUALHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetresidualhistory_ kspsetresidualhistory
#endif
PETSC_EXTERN void kspsetresidualhistory_(KSP *ksp, PetscReal a[], PetscCount *na, PetscBool *reset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(a);
  *ierr = KSPSetResidualHistory(*ksp, a, *na, *reset ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspseterrorhistory_ KSPSETERRORHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspseterrorhistory_ kspseterrorhistory
#endif
PETSC_EXTERN void kspseterrorhistory_(KSP *ksp, PetscReal a[], PetscCount *na, PetscBool *reset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(a);
  *ierr = KSPSetErrorHistory(*ksp, a, *na, *reset ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcomputeconvergencerate_ KSPCOMPUTECONVERGENCERATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcomputeconvergencerate_ kspcomputeconvergencerate
#endif
PETSC_EXTERN void kspcomputeconvergencerate_(KSP *ksp, PetscReal *cr, PetscReal *rRsq, PetscReal *ce, PetscReal *eRsq, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(cr);
  CHKFORTRANNULLREAL(rRsq);
  CHKFORTRANNULLREAL(ce);
  CHKFORTRANNULLREAL(eRsq);
  *ierr = KSPComputeConvergenceRate(*ksp, cr, rRsq, ce, eRsq);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetconvergencecontextcptr_ KSPGETCONVERGENCECONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetconvergencecontextcptr_ kspgetconvergencecontextcptr
#endif
PETSC_EXTERN void kspgetconvergencecontextcptr_(KSP *ksp, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = KSPGetConvergenceContext(*ksp, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspbuildsolution_ KSPBUILDSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspbuildsolution_ kspbuildsolution
#endif
PETSC_EXTERN void kspbuildsolution_(KSP *ksp, Vec *v, Vec *M_V, PetscErrorCode *ierr)
{
  PetscBool null_M_V = !*(void**) M_V ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M_V);
  *ierr = KSPBuildSolution(*ksp, *v, M_V);
  if (*ierr) return;
  if (! null_M_V && !*(void**) M_V) *(void **) M_V = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspbuildresidual_ KSPBUILDRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspbuildresidual_ kspbuildresidual
#endif
PETSC_EXTERN void kspbuildresidual_(KSP *ksp, Vec *t, Vec *v, Vec *M_V, PetscErrorCode *ierr)
{
  PetscBool null_M_V = !*(void**) M_V ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M_V);
  *ierr = KSPBuildResidual(*ksp, *t, *v, M_V);
  if (*ierr) return;
  if (! null_M_V && !*(void**) M_V) *(void **) M_V = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetdiagonalscale_ KSPSETDIAGONALSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetdiagonalscale_ kspsetdiagonalscale
#endif
PETSC_EXTERN void kspsetdiagonalscale_(KSP *ksp, PetscBool *scale, PetscErrorCode *ierr)
{
  *ierr = KSPSetDiagonalScale(*ksp, *scale ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetdiagonalscale_ KSPGETDIAGONALSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetdiagonalscale_ kspgetdiagonalscale
#endif
PETSC_EXTERN void kspgetdiagonalscale_(KSP *ksp, PetscBool *scale, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(scale);
  *ierr = KSPGetDiagonalScale(*ksp, scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetdiagonalscalefix_ KSPSETDIAGONALSCALEFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetdiagonalscalefix_ kspsetdiagonalscalefix
#endif
PETSC_EXTERN void kspsetdiagonalscalefix_(KSP *ksp, PetscBool *fix, PetscErrorCode *ierr)
{
  *ierr = KSPSetDiagonalScaleFix(*ksp, *fix ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetdiagonalscalefix_ KSPGETDIAGONALSCALEFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetdiagonalscalefix_ kspgetdiagonalscalefix
#endif
PETSC_EXTERN void kspgetdiagonalscalefix_(KSP *ksp, PetscBool *fix, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(fix);
  *ierr = KSPGetDiagonalScaleFix(*ksp, fix);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetuseexplicittranspose_ KSPSETUSEEXPLICITTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetuseexplicittranspose_ kspsetuseexplicittranspose
#endif
PETSC_EXTERN void kspsetuseexplicittranspose_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPSetUseExplicitTranspose(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
