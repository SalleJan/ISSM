#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitrestrictis_ PCFIELDSPLITRESTRICTIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitrestrictis_ pcfieldsplitrestrictis
#endif
PETSC_EXTERN void pcfieldsplitrestrictis_(PC *pc, IS *isy, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitRestrictIS(*pc, *isy);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetfields_ PCFIELDSPLITSETFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetfields_ pcfieldsplitsetfields
#endif
PETSC_EXTERN void pcfieldsplitsetfields_(PC *pc, char splitname[], PetscInt *n, const PetscInt fields[], const PetscInt fields_col[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_splitname)
{
  char* c_splitname;
  FIXCHAR(splitname, l_splitname, c_splitname);
  CHKFORTRANNULLINTEGER(fields);
  CHKFORTRANNULLINTEGER(fields_col);
  *ierr = PCFieldSplitSetFields(*pc, c_splitname, *n, fields, fields_col);
  if (*ierr) return;
  FREECHAR(splitname, c_splitname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetdiaguseamat_ PCFIELDSPLITSETDIAGUSEAMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetdiaguseamat_ pcfieldsplitsetdiaguseamat
#endif
PETSC_EXTERN void pcfieldsplitsetdiaguseamat_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetDiagUseAmat(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitgetdiaguseamat_ PCFIELDSPLITGETDIAGUSEAMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitgetdiaguseamat_ pcfieldsplitgetdiaguseamat
#endif
PETSC_EXTERN void pcfieldsplitgetdiaguseamat_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCFieldSplitGetDiagUseAmat(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetoffdiaguseamat_ PCFIELDSPLITSETOFFDIAGUSEAMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetoffdiaguseamat_ pcfieldsplitsetoffdiaguseamat
#endif
PETSC_EXTERN void pcfieldsplitsetoffdiaguseamat_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetOffDiagUseAmat(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitgetoffdiaguseamat_ PCFIELDSPLITGETOFFDIAGUSEAMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitgetoffdiaguseamat_ pcfieldsplitgetoffdiaguseamat
#endif
PETSC_EXTERN void pcfieldsplitgetoffdiaguseamat_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCFieldSplitGetOffDiagUseAmat(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetis_ PCFIELDSPLITSETIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetis_ pcfieldsplitsetis
#endif
PETSC_EXTERN void pcfieldsplitsetis_(PC *pc, char splitname[], IS *is, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_splitname)
{
  char* c_splitname;
  FIXCHAR(splitname, l_splitname, c_splitname);
  *ierr = PCFieldSplitSetIS(*pc, c_splitname, *is);
  if (*ierr) return;
  FREECHAR(splitname, c_splitname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitgetis_ PCFIELDSPLITGETIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitgetis_ pcfieldsplitgetis
#endif
PETSC_EXTERN void pcfieldsplitgetis_(PC *pc, char splitname[], IS *is, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_splitname)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  char* c_splitname;
  FIXCHAR(splitname, l_splitname, c_splitname);
  CHKFORTRANNULLOBJECT(is);
  *ierr = PCFieldSplitGetIS(*pc, c_splitname, is);
  if (*ierr) return;
  FREECHAR(splitname, c_splitname);
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitgetisbyindex_ PCFIELDSPLITGETISBYINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitgetisbyindex_ pcfieldsplitgetisbyindex
#endif
PETSC_EXTERN void pcfieldsplitgetisbyindex_(PC *pc, PetscInt *index, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = PCFieldSplitGetISByIndex(*pc, *index, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetblocksize_ PCFIELDSPLITSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetblocksize_ pcfieldsplitsetblocksize
#endif
PETSC_EXTERN void pcfieldsplitsetblocksize_(PC *pc, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetBlockSize(*pc, *bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetschurpre_ PCFIELDSPLITSETSCHURPRE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetschurpre_ pcfieldsplitsetschurpre
#endif
PETSC_EXTERN void pcfieldsplitsetschurpre_(PC *pc, PCFieldSplitSchurPreType *ptype, Mat *pre, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetSchurPre(*pc, *ptype, *pre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitgetschurpre_ PCFIELDSPLITGETSCHURPRE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitgetschurpre_ pcfieldsplitgetschurpre
#endif
PETSC_EXTERN void pcfieldsplitgetschurpre_(PC *pc, PCFieldSplitSchurPreType *ptype, Mat *pre, PetscErrorCode *ierr)
{
  PetscBool null_pre = !*(void**) pre ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pre);
  *ierr = PCFieldSplitGetSchurPre(*pc, ptype, pre);
  if (*ierr) return;
  if (! null_pre && !*(void**) pre) *(void **) pre = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitschurgets_ PCFIELDSPLITSCHURGETS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitschurgets_ pcfieldsplitschurgets
#endif
PETSC_EXTERN void pcfieldsplitschurgets_(PC *pc, Mat *S, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = PCFieldSplitSchurGetS(*pc, S);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitschurrestores_ PCFIELDSPLITSCHURRESTORES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitschurrestores_ pcfieldsplitschurrestores
#endif
PETSC_EXTERN void pcfieldsplitschurrestores_(PC *pc, Mat *S, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = PCFieldSplitSchurRestoreS(*pc, S);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetschurfacttype_ PCFIELDSPLITSETSCHURFACTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetschurfacttype_ pcfieldsplitsetschurfacttype
#endif
PETSC_EXTERN void pcfieldsplitsetschurfacttype_(PC *pc, PCFieldSplitSchurFactType *ftype, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetSchurFactType(*pc, *ftype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetschurscale_ PCFIELDSPLITSETSCHURSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetschurscale_ pcfieldsplitsetschurscale
#endif
PETSC_EXTERN void pcfieldsplitsetschurscale_(PC *pc, PetscScalar *scale, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetSchurScale(*pc, *scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitgetschurblocks_ PCFIELDSPLITGETSCHURBLOCKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitgetschurblocks_ pcfieldsplitgetschurblocks
#endif
PETSC_EXTERN void pcfieldsplitgetschurblocks_(PC *pc, Mat *A00, Mat *A01, Mat *A10, Mat *A11, PetscErrorCode *ierr)
{
  PetscBool null_A00 = !*(void**) A00 ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_A01 = !*(void**) A01 ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_A10 = !*(void**) A10 ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_A11 = !*(void**) A11 ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A00);
  CHKFORTRANNULLOBJECT(A01);
  CHKFORTRANNULLOBJECT(A10);
  CHKFORTRANNULLOBJECT(A11);
  *ierr = PCFieldSplitGetSchurBlocks(*pc, A00, A01, A10, A11);
  if (*ierr) return;
  if (! null_A00 && !*(void**) A00) *(void **) A00 = (void *)-2;
  if (! null_A01 && !*(void**) A01) *(void **) A01 = (void *)-2;
  if (! null_A10 && !*(void**) A10) *(void **) A10 = (void *)-2;
  if (! null_A11 && !*(void**) A11) *(void **) A11 = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetgkbtol_ PCFIELDSPLITSETGKBTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetgkbtol_ pcfieldsplitsetgkbtol
#endif
PETSC_EXTERN void pcfieldsplitsetgkbtol_(PC *pc, PetscReal *tolerance, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetGKBTol(*pc, *tolerance);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetgkbmaxit_ PCFIELDSPLITSETGKBMAXIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetgkbmaxit_ pcfieldsplitsetgkbmaxit
#endif
PETSC_EXTERN void pcfieldsplitsetgkbmaxit_(PC *pc, PetscInt *maxit, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetGKBMaxit(*pc, *maxit);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetgkbdelay_ PCFIELDSPLITSETGKBDELAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetgkbdelay_ pcfieldsplitsetgkbdelay
#endif
PETSC_EXTERN void pcfieldsplitsetgkbdelay_(PC *pc, PetscInt *delay, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetGKBDelay(*pc, *delay);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetgkbnu_ PCFIELDSPLITSETGKBNU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetgkbnu_ pcfieldsplitsetgkbnu
#endif
PETSC_EXTERN void pcfieldsplitsetgkbnu_(PC *pc, PetscReal *nu, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetGKBNu(*pc, *nu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsettype_ PCFIELDSPLITSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsettype_ pcfieldsplitsettype
#endif
PETSC_EXTERN void pcfieldsplitsettype_(PC *pc, PCCompositeType *type, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetType(*pc, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitgettype_ PCFIELDSPLITGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitgettype_ pcfieldsplitgettype
#endif
PETSC_EXTERN void pcfieldsplitgettype_(PC *pc, PCCompositeType *type, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitGetType(*pc, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetdmsplits_ PCFIELDSPLITSETDMSPLITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetdmsplits_ pcfieldsplitsetdmsplits
#endif
PETSC_EXTERN void pcfieldsplitsetdmsplits_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetDMSplits(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitgetdmsplits_ PCFIELDSPLITGETDMSPLITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitgetdmsplits_ pcfieldsplitgetdmsplits
#endif
PETSC_EXTERN void pcfieldsplitgetdmsplits_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCFieldSplitGetDMSplits(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitgetdetectsaddlepoint_ PCFIELDSPLITGETDETECTSADDLEPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitgetdetectsaddlepoint_ pcfieldsplitgetdetectsaddlepoint
#endif
PETSC_EXTERN void pcfieldsplitgetdetectsaddlepoint_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCFieldSplitGetDetectSaddlePoint(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfieldsplitsetdetectsaddlepoint_ PCFIELDSPLITSETDETECTSADDLEPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfieldsplitsetdetectsaddlepoint_ pcfieldsplitsetdetectsaddlepoint
#endif
PETSC_EXTERN void pcfieldsplitsetdetectsaddlepoint_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCFieldSplitSetDetectSaddlePoint(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
