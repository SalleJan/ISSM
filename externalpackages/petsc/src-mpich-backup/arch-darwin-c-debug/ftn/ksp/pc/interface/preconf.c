#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcreset_ PCRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcreset_ pcreset
#endif
PETSC_EXTERN void pcreset_(PC *pc, PetscErrorCode *ierr)
{
  *ierr = PCReset(*pc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdestroy_ PCDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdestroy_ pcdestroy
#endif
PETSC_EXTERN void pcdestroy_(PC *pc, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(pc);
  PetscBool null_pc = !*(void**) pc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pc);
  *ierr = PCDestroy(pc);
  if (*ierr) return;
  if (! null_pc && !*(void**) pc) *(void **) pc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgetdiagonalscale_ PCGETDIAGONALSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgetdiagonalscale_ pcgetdiagonalscale
#endif
PETSC_EXTERN void pcgetdiagonalscale_(PC *pc, PetscBool *flag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flag);
  *ierr = PCGetDiagonalScale(*pc, flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetdiagonalscale_ PCSETDIAGONALSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetdiagonalscale_ pcsetdiagonalscale
#endif
PETSC_EXTERN void pcsetdiagonalscale_(PC *pc, Vec *s, PetscErrorCode *ierr)
{
  *ierr = PCSetDiagonalScale(*pc, *s);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdiagonalscaleleft_ PCDIAGONALSCALELEFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdiagonalscaleleft_ pcdiagonalscaleleft
#endif
PETSC_EXTERN void pcdiagonalscaleleft_(PC *pc, Vec *in, Vec *out, PetscErrorCode *ierr)
{
  *ierr = PCDiagonalScaleLeft(*pc, *in, *out);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdiagonalscaleright_ PCDIAGONALSCALERIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdiagonalscaleright_ pcdiagonalscaleright
#endif
PETSC_EXTERN void pcdiagonalscaleright_(PC *pc, Vec *in, Vec *out, PetscErrorCode *ierr)
{
  *ierr = PCDiagonalScaleRight(*pc, *in, *out);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetuseamat_ PCSETUSEAMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetuseamat_ pcsetuseamat
#endif
PETSC_EXTERN void pcsetuseamat_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCSetUseAmat(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcseterroriffailure_ PCSETERRORIFFAILURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcseterroriffailure_ pcseterroriffailure
#endif
PETSC_EXTERN void pcseterroriffailure_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCSetErrorIfFailure(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgetuseamat_ PCGETUSEAMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgetuseamat_ pcgetuseamat
#endif
PETSC_EXTERN void pcgetuseamat_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCGetUseAmat(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetkspnestlevel_ PCSETKSPNESTLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetkspnestlevel_ pcsetkspnestlevel
#endif
PETSC_EXTERN void pcsetkspnestlevel_(PC *pc, PetscInt *level, PetscErrorCode *ierr)
{
  *ierr = PCSetKSPNestLevel(*pc, *level);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgetkspnestlevel_ PCGETKSPNESTLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgetkspnestlevel_ pcgetkspnestlevel
#endif
PETSC_EXTERN void pcgetkspnestlevel_(PC *pc, PetscInt *level, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(level);
  *ierr = PCGetKSPNestLevel(*pc, level);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pccreate_ PCCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pccreate_ pccreate
#endif
PETSC_EXTERN void pccreate_(MPI_Fint *comm, PC *newpc, PetscErrorCode *ierr)
{
  PetscBool null_newpc = !*(void**) newpc ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(newpc);
  CHKFORTRANNULLOBJECT(newpc);
  *ierr = PCCreate(MPI_Comm_f2c(*(comm)), newpc);
  if (*ierr) return;
  if (! null_newpc && !*(void**) newpc) *(void **) newpc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcapply_ PCAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcapply_ pcapply
#endif
PETSC_EXTERN void pcapply_(PC *pc, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = PCApply(*pc, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmatapply_ PCMATAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmatapply_ pcmatapply
#endif
PETSC_EXTERN void pcmatapply_(PC *pc, Mat *X, Mat *Y, PetscErrorCode *ierr)
{
  *ierr = PCMatApply(*pc, *X, *Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmatapplytranspose_ PCMATAPPLYTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmatapplytranspose_ pcmatapplytranspose
#endif
PETSC_EXTERN void pcmatapplytranspose_(PC *pc, Mat *X, Mat *Y, PetscErrorCode *ierr)
{
  *ierr = PCMatApplyTranspose(*pc, *X, *Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcapplysymmetricleft_ PCAPPLYSYMMETRICLEFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcapplysymmetricleft_ pcapplysymmetricleft
#endif
PETSC_EXTERN void pcapplysymmetricleft_(PC *pc, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = PCApplySymmetricLeft(*pc, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcapplysymmetricright_ PCAPPLYSYMMETRICRIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcapplysymmetricright_ pcapplysymmetricright
#endif
PETSC_EXTERN void pcapplysymmetricright_(PC *pc, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = PCApplySymmetricRight(*pc, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcapplytranspose_ PCAPPLYTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcapplytranspose_ pcapplytranspose
#endif
PETSC_EXTERN void pcapplytranspose_(PC *pc, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = PCApplyTranspose(*pc, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcapplytransposeexists_ PCAPPLYTRANSPOSEEXISTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcapplytransposeexists_ pcapplytransposeexists
#endif
PETSC_EXTERN void pcapplytransposeexists_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCApplyTransposeExists(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcapplybaorab_ PCAPPLYBAORAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcapplybaorab_ pcapplybaorab
#endif
PETSC_EXTERN void pcapplybaorab_(PC *pc, PCSide *side, Vec *x, Vec *y, Vec *work, PetscErrorCode *ierr)
{
  *ierr = PCApplyBAorAB(*pc, *side, *x, *y, *work);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcapplybaorabtranspose_ PCAPPLYBAORABTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcapplybaorabtranspose_ pcapplybaorabtranspose
#endif
PETSC_EXTERN void pcapplybaorabtranspose_(PC *pc, PCSide *side, Vec *x, Vec *y, Vec *work, PetscErrorCode *ierr)
{
  *ierr = PCApplyBAorABTranspose(*pc, *side, *x, *y, *work);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcapplyrichardsonexists_ PCAPPLYRICHARDSONEXISTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcapplyrichardsonexists_ pcapplyrichardsonexists
#endif
PETSC_EXTERN void pcapplyrichardsonexists_(PC *pc, PetscBool *exists, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(exists);
  *ierr = PCApplyRichardsonExists(*pc, exists);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcapplyrichardson_ PCAPPLYRICHARDSON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcapplyrichardson_ pcapplyrichardson
#endif
PETSC_EXTERN void pcapplyrichardson_(PC *pc, Vec *b, Vec *y, Vec *w, PetscReal *rtol, PetscReal *abstol, PetscReal *dtol, PetscInt *its, PetscBool *guesszero, PetscInt *outits, PCRichardsonConvergedReason *reason, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(outits);
  *ierr = PCApplyRichardson(*pc, *b, *y, *w, *rtol, *abstol, *dtol, *its, *guesszero ? PETSC_TRUE : PETSC_FALSE, outits, reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetfailedreason_ PCSETFAILEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetfailedreason_ pcsetfailedreason
#endif
PETSC_EXTERN void pcsetfailedreason_(PC *pc, PCFailedReason *reason, PetscErrorCode *ierr)
{
  *ierr = PCSetFailedReason(*pc, *reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgetfailedreason_ PCGETFAILEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgetfailedreason_ pcgetfailedreason
#endif
PETSC_EXTERN void pcgetfailedreason_(PC *pc, PCFailedReason *reason, PetscErrorCode *ierr)
{
  *ierr = PCGetFailedReason(*pc, reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcreducefailedreason_ PCREDUCEFAILEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcreducefailedreason_ pcreducefailedreason
#endif
PETSC_EXTERN void pcreducefailedreason_(PC *pc, PetscErrorCode *ierr)
{
  *ierr = PCReduceFailedReason(*pc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetup_ PCSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetup_ pcsetup
#endif
PETSC_EXTERN void pcsetup_(PC *pc, PetscErrorCode *ierr)
{
  *ierr = PCSetUp(*pc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetuponblocks_ PCSETUPONBLOCKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetuponblocks_ pcsetuponblocks
#endif
PETSC_EXTERN void pcsetuponblocks_(PC *pc, PetscErrorCode *ierr)
{
  *ierr = PCSetUpOnBlocks(*pc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmodifysubmatrices_ PCMODIFYSUBMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmodifysubmatrices_ pcmodifysubmatrices
#endif
PETSC_EXTERN void pcmodifysubmatrices_(PC *pc, PetscInt *nsub, const IS row[], const IS col[], Mat submat[], PetscCtx ctx, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(row);
  CHKFORTRANNULLOBJECT(col);
  CHKFORTRANNULLOBJECT(submat);
  *ierr = PCModifySubMatrices(*pc, *nsub, row, col, submat, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetoperators_ PCSETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetoperators_ pcsetoperators
#endif
PETSC_EXTERN void pcsetoperators_(PC *pc, Mat *Amat, Mat *Pmat, PetscErrorCode *ierr)
{
  *ierr = PCSetOperators(*pc, *Amat, *Pmat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetreusepreconditioner_ PCSETREUSEPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetreusepreconditioner_ pcsetreusepreconditioner
#endif
PETSC_EXTERN void pcsetreusepreconditioner_(PC *pc, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = PCSetReusePreconditioner(*pc, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgetreusepreconditioner_ PCGETREUSEPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgetreusepreconditioner_ pcgetreusepreconditioner
#endif
PETSC_EXTERN void pcgetreusepreconditioner_(PC *pc, PetscBool *flag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flag);
  *ierr = PCGetReusePreconditioner(*pc, flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgetoperators_ PCGETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgetoperators_ pcgetoperators
#endif
PETSC_EXTERN void pcgetoperators_(PC *pc, Mat *Amat, Mat *Pmat, PetscErrorCode *ierr)
{
  PetscBool null_Amat = !*(void**) Amat ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_Pmat = !*(void**) Pmat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Amat);
  CHKFORTRANNULLOBJECT(Pmat);
  *ierr = PCGetOperators(*pc, Amat, Pmat);
  if (*ierr) return;
  if (! null_Amat && !*(void**) Amat) *(void **) Amat = (void *)-2;
  if (! null_Pmat && !*(void**) Pmat) *(void **) Pmat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgetoperatorsset_ PCGETOPERATORSSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgetoperatorsset_ pcgetoperatorsset
#endif
PETSC_EXTERN void pcgetoperatorsset_(PC *pc, PetscBool *mat, PetscBool *pmat, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(mat);
  CHKFORTRANNULLBOOL(pmat);
  *ierr = PCGetOperatorsSet(*pc, mat, pmat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorgetmatrix_ PCFACTORGETMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorgetmatrix_ pcfactorgetmatrix
#endif
PETSC_EXTERN void pcfactorgetmatrix_(PC *pc, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = PCFactorGetMatrix(*pc, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetoptionsprefix_ PCSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetoptionsprefix_ pcsetoptionsprefix
#endif
PETSC_EXTERN void pcsetoptionsprefix_(PC *pc, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = PCSetOptionsPrefix(*pc, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcappendoptionsprefix_ PCAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcappendoptionsprefix_ pcappendoptionsprefix
#endif
PETSC_EXTERN void pcappendoptionsprefix_(PC *pc, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = PCAppendOptionsPrefix(*pc, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgetoptionsprefix_ PCGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgetoptionsprefix_ pcgetoptionsprefix
#endif
PETSC_EXTERN void pcgetoptionsprefix_(PC *pc, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix = PETSC_NULLPTR;
  *ierr = PCGetOptionsPrefix(*pc, (const char **)&c_prefix);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)prefix, c_prefix, l_prefix);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, prefix, l_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpresolve_ PCPRESOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpresolve_ pcpresolve
#endif
PETSC_EXTERN void pcpresolve_(PC *pc, KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = PCPreSolve(*pc, *ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpostsolve_ PCPOSTSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpostsolve_ pcpostsolve
#endif
PETSC_EXTERN void pcpostsolve_(PC *pc, KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = PCPostSolve(*pc, *ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcload_ PCLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcload_ pcload
#endif
PETSC_EXTERN void pcload_(PC *newdm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PCLoad(*newdm, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcviewfromoptions_ PCVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcviewfromoptions_ pcviewfromoptions
#endif
PETSC_EXTERN void pcviewfromoptions_(PC *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PCViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcview_ PCVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcview_ pcview
#endif
PETSC_EXTERN void pcview_(PC *pc, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PCView(*pc, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pccomputeoperator_ PCCOMPUTEOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pccomputeoperator_ pccomputeoperator
#endif
PETSC_EXTERN void pccomputeoperator_(PC *pc, char *mattype, Mat *mat, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_mattype)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  char* c_mattype;
  FIXCHAR(mattype, l_mattype, c_mattype);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = PCComputeOperator(*pc, c_mattype, mat);
  if (*ierr) return;
  FREECHAR(mattype, c_mattype);
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetcoordinates_ PCSETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetcoordinates_ pcsetcoordinates
#endif
PETSC_EXTERN void pcsetcoordinates_(PC *pc, PetscInt *dim, PetscInt *nloc, PetscReal coords[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(coords);
  *ierr = PCSetCoordinates(*pc, *dim, *nloc, coords);
  if (*ierr) return;
}
