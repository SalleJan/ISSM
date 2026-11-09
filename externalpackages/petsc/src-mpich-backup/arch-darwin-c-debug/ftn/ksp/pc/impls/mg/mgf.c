#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetlevels_ PCMGGETLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetlevels_ pcmggetlevels
#endif
PETSC_EXTERN void pcmggetlevels_(PC *pc, PetscInt *levels, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(levels);
  *ierr = PCMGGetLevels(*pc, levels);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetgridcomplexity_ PCMGGETGRIDCOMPLEXITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetgridcomplexity_ pcmggetgridcomplexity
#endif
PETSC_EXTERN void pcmggetgridcomplexity_(PC *pc, PetscReal *gc, PetscReal *oc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(gc);
  CHKFORTRANNULLREAL(oc);
  *ierr = PCMGGetGridComplexity(*pc, gc, oc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsettype_ PCMGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsettype_ pcmgsettype
#endif
PETSC_EXTERN void pcmgsettype_(PC *pc, PCMGType *form, PetscErrorCode *ierr)
{
  *ierr = PCMGSetType(*pc, *form);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggettype_ PCMGGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggettype_ pcmggettype
#endif
PETSC_EXTERN void pcmggettype_(PC *pc, PCMGType *type, PetscErrorCode *ierr)
{
  *ierr = PCMGGetType(*pc, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetcycletype_ PCMGSETCYCLETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetcycletype_ pcmgsetcycletype
#endif
PETSC_EXTERN void pcmgsetcycletype_(PC *pc, PCMGCycleType *n, PetscErrorCode *ierr)
{
  *ierr = PCMGSetCycleType(*pc, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgmultiplicativesetcycles_ PCMGMULTIPLICATIVESETCYCLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgmultiplicativesetcycles_ pcmgmultiplicativesetcycles
#endif
PETSC_EXTERN void pcmgmultiplicativesetcycles_(PC *pc, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PCMGMultiplicativeSetCycles(*pc, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetgalerkin_ PCMGSETGALERKIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetgalerkin_ pcmgsetgalerkin
#endif
PETSC_EXTERN void pcmgsetgalerkin_(PC *pc, PCMGGalerkinType *use, PetscErrorCode *ierr)
{
  *ierr = PCMGSetGalerkin(*pc, *use);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetgalerkin_ PCMGGETGALERKIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetgalerkin_ pcmggetgalerkin
#endif
PETSC_EXTERN void pcmggetgalerkin_(PC *pc, PCMGGalerkinType *galerkin, PetscErrorCode *ierr)
{
  *ierr = PCMGGetGalerkin(*pc, galerkin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetadaptcoarsespacetype_ PCMGSETADAPTCOARSESPACETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetadaptcoarsespacetype_ pcmgsetadaptcoarsespacetype
#endif
PETSC_EXTERN void pcmgsetadaptcoarsespacetype_(PC *pc, PCMGCoarseSpaceType *ctype, PetscErrorCode *ierr)
{
  *ierr = PCMGSetAdaptCoarseSpaceType(*pc, *ctype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetadaptcoarsespacetype_ PCMGGETADAPTCOARSESPACETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetadaptcoarsespacetype_ pcmggetadaptcoarsespacetype
#endif
PETSC_EXTERN void pcmggetadaptcoarsespacetype_(PC *pc, PCMGCoarseSpaceType *ctype, PetscErrorCode *ierr)
{
  *ierr = PCMGGetAdaptCoarseSpaceType(*pc, ctype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetadaptinterpolation_ PCMGSETADAPTINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetadaptinterpolation_ pcmgsetadaptinterpolation
#endif
PETSC_EXTERN void pcmgsetadaptinterpolation_(PC *pc, PetscBool *adapt, PetscErrorCode *ierr)
{
  *ierr = PCMGSetAdaptInterpolation(*pc, *adapt ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetadaptinterpolation_ PCMGGETADAPTINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetadaptinterpolation_ pcmggetadaptinterpolation
#endif
PETSC_EXTERN void pcmggetadaptinterpolation_(PC *pc, PetscBool *adapt, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(adapt);
  *ierr = PCMGGetAdaptInterpolation(*pc, adapt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetadaptcr_ PCMGSETADAPTCR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetadaptcr_ pcmgsetadaptcr
#endif
PETSC_EXTERN void pcmgsetadaptcr_(PC *pc, PetscBool *cr, PetscErrorCode *ierr)
{
  *ierr = PCMGSetAdaptCR(*pc, *cr ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetadaptcr_ PCMGGETADAPTCR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetadaptcr_ pcmggetadaptcr
#endif
PETSC_EXTERN void pcmggetadaptcr_(PC *pc, PetscBool *cr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(cr);
  *ierr = PCMGGetAdaptCR(*pc, cr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetnumbersmooth_ PCMGSETNUMBERSMOOTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetnumbersmooth_ pcmgsetnumbersmooth
#endif
PETSC_EXTERN void pcmgsetnumbersmooth_(PC *pc, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PCMGSetNumberSmooth(*pc, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetdistinctsmoothup_ PCMGSETDISTINCTSMOOTHUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetdistinctsmoothup_ pcmgsetdistinctsmoothup
#endif
PETSC_EXTERN void pcmgsetdistinctsmoothup_(PC *pc, PetscErrorCode *ierr)
{
  *ierr = PCMGSetDistinctSmoothUp(*pc);
  if (*ierr) return;
}
