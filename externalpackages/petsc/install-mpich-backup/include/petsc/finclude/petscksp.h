#if !defined(PETSCPETSCKSPDEF_H)
#define PETSCPETSCKSPDEF_H

#include "petsc/finclude/petscpc.h"
#include "petsc/finclude/petscds.h"

#define KSPChebyshevKind type(eKSPChebyshevKind)
#define KSPFCDTruncationType type(eKSPFCDTruncationType)
#define KSPHPDDMType type(eKSPHPDDMType)
#define KSPGMRESCGSRefinementType type(eKSPGMRESCGSRefinementType)
#define KSPNormType type(eKSPNormType)
#define KSPConvergedReason type(eKSPConvergedReason)
#define KSPCGType type(eKSPCGType)
#define MatSchurComplementAinvType type(eMatSchurComplementAinvType)
#define MatLMVMMultAlgorithm type(eMatLMVMMultAlgorithm)
#define MatLMVMSymBroydenScaleType type(eMatLMVMSymBroydenScaleType)
#define MatLMVMDenseType type(eMatLMVMDenseType)
#define KSPDMActive type(eKSPDMActive)

#define KSPType CHARACTER(80)
#define KSPGuessType CHARACTER(80)

#define KSP type(tKSP)
#define KSPGuess type(tKSPGuess)

#endif
#define KSPGetMonitorContext(ksp, ctx, ierr) KSPGetMonitorContextCptr(ksp, petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, ctx)
#define KSPGetConvergenceContext(ksp, ctx, ierr) KSPGetConvergenceContextCptr(ksp, petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, ctx)
#define KSPMonitorDynamicToleranceDestroy(ctx, ierr) KSPMonitorDynamicToleranceDestroyCptr(petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, ctx)
#define KSPConvergedDefaultDestroy(ctx, ierr) KSPConvergedDefaultDestroyCptr(petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, ctx)
#define KSPGetApplicationContext(ksp, ctx, ierr) KSPGetApplicationContextCptr(ksp, petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, ctx)
#define KSPMonitorSAWsDestroy(ctx, ierr) KSPMonitorSAWsDestroyCptr(petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, ctx)
