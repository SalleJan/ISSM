#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmupdate_ MATLMVMUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmupdate_ matlmvmupdate
#endif
PETSC_EXTERN void matlmvmupdate_(Mat *B, Vec *X, Vec *F, PetscErrorCode *ierr)
{
  *ierr = MatLMVMUpdate(*B, *X, *F);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmclearj0_ MATLMVMCLEARJ0
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmclearj0_ matlmvmclearj0
#endif
PETSC_EXTERN void matlmvmclearj0_(Mat *B, PetscErrorCode *ierr)
{
  *ierr = MatLMVMClearJ0(*B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsetj0scale_ MATLMVMSETJ0SCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsetj0scale_ matlmvmsetj0scale
#endif
PETSC_EXTERN void matlmvmsetj0scale_(Mat *B, PetscReal *scale, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSetJ0Scale(*B, *scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsetj0diag_ MATLMVMSETJ0DIAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsetj0diag_ matlmvmsetj0diag
#endif
PETSC_EXTERN void matlmvmsetj0diag_(Mat *B, Vec *V, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSetJ0Diag(*B, *V);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsetj0_ MATLMVMSETJ0
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsetj0_ matlmvmsetj0
#endif
PETSC_EXTERN void matlmvmsetj0_(Mat *B, Mat *J0, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSetJ0(*B, *J0);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsetj0pc_ MATLMVMSETJ0PC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsetj0pc_ matlmvmsetj0pc
#endif
PETSC_EXTERN void matlmvmsetj0pc_(Mat *B, PC *J0pc, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSetJ0PC(*B, *J0pc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsetj0ksp_ MATLMVMSETJ0KSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsetj0ksp_ matlmvmsetj0ksp
#endif
PETSC_EXTERN void matlmvmsetj0ksp_(Mat *B, KSP *J0ksp, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSetJ0KSP(*B, *J0ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmgetj0_ MATLMVMGETJ0
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmgetj0_ matlmvmgetj0
#endif
PETSC_EXTERN void matlmvmgetj0_(Mat *B, Mat *J0, PetscErrorCode *ierr)
{
  PetscBool null_J0 = !*(void**) J0 ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(J0);
  *ierr = MatLMVMGetJ0(*B, J0);
  if (*ierr) return;
  if (! null_J0 && !*(void**) J0) *(void **) J0 = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmgetj0pc_ MATLMVMGETJ0PC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmgetj0pc_ matlmvmgetj0pc
#endif
PETSC_EXTERN void matlmvmgetj0pc_(Mat *B, PC *J0pc, PetscErrorCode *ierr)
{
  PetscBool null_J0pc = !*(void**) J0pc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(J0pc);
  *ierr = MatLMVMGetJ0PC(*B, J0pc);
  if (*ierr) return;
  if (! null_J0pc && !*(void**) J0pc) *(void **) J0pc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmgetj0ksp_ MATLMVMGETJ0KSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmgetj0ksp_ matlmvmgetj0ksp
#endif
PETSC_EXTERN void matlmvmgetj0ksp_(Mat *B, KSP *J0ksp, PetscErrorCode *ierr)
{
  PetscBool null_J0ksp = !*(void**) J0ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(J0ksp);
  *ierr = MatLMVMGetJ0KSP(*B, J0ksp);
  if (*ierr) return;
  if (! null_J0ksp && !*(void**) J0ksp) *(void **) J0ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmapplyj0fwd_ MATLMVMAPPLYJ0FWD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmapplyj0fwd_ matlmvmapplyj0fwd
#endif
PETSC_EXTERN void matlmvmapplyj0fwd_(Mat *B, Vec *X, Vec *Y, PetscErrorCode *ierr)
{
  *ierr = MatLMVMApplyJ0Fwd(*B, *X, *Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmapplyj0inv_ MATLMVMAPPLYJ0INV
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmapplyj0inv_ matlmvmapplyj0inv
#endif
PETSC_EXTERN void matlmvmapplyj0inv_(Mat *B, Vec *X, Vec *Y, PetscErrorCode *ierr)
{
  *ierr = MatLMVMApplyJ0Inv(*B, *X, *Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmisallocated_ MATLMVMISALLOCATED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmisallocated_ matlmvmisallocated
#endif
PETSC_EXTERN void matlmvmisallocated_(Mat *B, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatLMVMIsAllocated(*B, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmallocate_ MATLMVMALLOCATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmallocate_ matlmvmallocate
#endif
PETSC_EXTERN void matlmvmallocate_(Mat *B, Vec *X, Vec *F, PetscErrorCode *ierr)
{
  *ierr = MatLMVMAllocate(*B, *X, *F);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmresetshift_ MATLMVMRESETSHIFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmresetshift_ matlmvmresetshift
#endif
PETSC_EXTERN void matlmvmresetshift_(Mat *B, PetscErrorCode *ierr)
{
  *ierr = MatLMVMResetShift(*B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmreset_ MATLMVMRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmreset_ matlmvmreset
#endif
PETSC_EXTERN void matlmvmreset_(Mat *B, PetscBool *destructive, PetscErrorCode *ierr)
{
  *ierr = MatLMVMReset(*B, *destructive ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsethistorysize_ MATLMVMSETHISTORYSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsethistorysize_ matlmvmsethistorysize
#endif
PETSC_EXTERN void matlmvmsethistorysize_(Mat *B, PetscInt *hist_size, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSetHistorySize(*B, *hist_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmgethistorysize_ MATLMVMGETHISTORYSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmgethistorysize_ matlmvmgethistorysize
#endif
PETSC_EXTERN void matlmvmgethistorysize_(Mat *B, PetscInt *hist_size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(hist_size);
  *ierr = MatLMVMGetHistorySize(*B, hist_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmgetupdatecount_ MATLMVMGETUPDATECOUNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmgetupdatecount_ matlmvmgetupdatecount
#endif
PETSC_EXTERN void matlmvmgetupdatecount_(Mat *B, PetscInt *nupdates, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nupdates);
  *ierr = MatLMVMGetUpdateCount(*B, nupdates);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmgetrejectcount_ MATLMVMGETREJECTCOUNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmgetrejectcount_ matlmvmgetrejectcount
#endif
PETSC_EXTERN void matlmvmgetrejectcount_(Mat *B, PetscInt *nrejects, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nrejects);
  *ierr = MatLMVMGetRejectCount(*B, nrejects);
  if (*ierr) return;
}
