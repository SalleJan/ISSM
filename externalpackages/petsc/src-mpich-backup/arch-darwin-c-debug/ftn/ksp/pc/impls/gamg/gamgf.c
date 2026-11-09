#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetproceqlim_ PCGAMGSETPROCEQLIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetproceqlim_ pcgamgsetproceqlim
#endif
PETSC_EXTERN void pcgamgsetproceqlim_(PC *pc, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetProcEqLim(*pc, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetcoarseeqlim_ PCGAMGSETCOARSEEQLIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetcoarseeqlim_ pcgamgsetcoarseeqlim
#endif
PETSC_EXTERN void pcgamgsetcoarseeqlim_(PC *pc, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetCoarseEqLim(*pc, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetrepartition_ PCGAMGSETREPARTITION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetrepartition_ pcgamgsetrepartition
#endif
PETSC_EXTERN void pcgamgsetrepartition_(PC *pc, PetscBool *n, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetRepartition(*pc, *n ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetusesaesteig_ PCGAMGSETUSESAESTEIG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetusesaesteig_ pcgamgsetusesaesteig
#endif
PETSC_EXTERN void pcgamgsetusesaesteig_(PC *pc, PetscBool *b, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetUseSAEstEig(*pc, *b ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetrecomputeesteig_ PCGAMGSETRECOMPUTEESTEIG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetrecomputeesteig_ pcgamgsetrecomputeesteig
#endif
PETSC_EXTERN void pcgamgsetrecomputeesteig_(PC *pc, PetscBool *b, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetRecomputeEstEig(*pc, *b ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgseteigenvalues_ PCGAMGSETEIGENVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgseteigenvalues_ pcgamgseteigenvalues
#endif
PETSC_EXTERN void pcgamgseteigenvalues_(PC *pc, PetscReal *emax, PetscReal *emin, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetEigenvalues(*pc, *emax, *emin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetreuseinterpolation_ PCGAMGSETREUSEINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetreuseinterpolation_ pcgamgsetreuseinterpolation
#endif
PETSC_EXTERN void pcgamgsetreuseinterpolation_(PC *pc, PetscBool *n, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetReuseInterpolation(*pc, *n ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgasmsetuseaggs_ PCGAMGASMSETUSEAGGS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgasmsetuseaggs_ pcgamgasmsetuseaggs
#endif
PETSC_EXTERN void pcgamgasmsetuseaggs_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCGAMGASMSetUseAggs(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetparallelcoarsegridsolve_ PCGAMGSETPARALLELCOARSEGRIDSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetparallelcoarsegridsolve_ pcgamgsetparallelcoarsegridsolve
#endif
PETSC_EXTERN void pcgamgsetparallelcoarsegridsolve_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetParallelCoarseGridSolve(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetcpupincoarsegrids_ PCGAMGSETCPUPINCOARSEGRIDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetcpupincoarsegrids_ pcgamgsetcpupincoarsegrids
#endif
PETSC_EXTERN void pcgamgsetcpupincoarsegrids_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetCpuPinCoarseGrids(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetcoarsegridlayouttype_ PCGAMGSETCOARSEGRIDLAYOUTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetcoarsegridlayouttype_ pcgamgsetcoarsegridlayouttype
#endif
PETSC_EXTERN void pcgamgsetcoarsegridlayouttype_(PC *pc, PCGAMGLayoutType *flg, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetCoarseGridLayoutType(*pc, *flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetnlevels_ PCGAMGSETNLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetnlevels_ pcgamgsetnlevels
#endif
PETSC_EXTERN void pcgamgsetnlevels_(PC *pc, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetNlevels(*pc, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgasmsethem_ PCGAMGASMSETHEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgasmsethem_ pcgamgasmsethem
#endif
PETSC_EXTERN void pcgamgasmsethem_(PC *pc, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PCGAMGASMSetHEM(*pc, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetthreshold_ PCGAMGSETTHRESHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetthreshold_ pcgamgsetthreshold
#endif
PETSC_EXTERN void pcgamgsetthreshold_(PC *pc, PetscReal v[], PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(v);
  *ierr = PCGAMGSetThreshold(*pc, v, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetrankreductionfactors_ PCGAMGSETRANKREDUCTIONFACTORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetrankreductionfactors_ pcgamgsetrankreductionfactors
#endif
PETSC_EXTERN void pcgamgsetrankreductionfactors_(PC *pc, PetscInt v[], PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(v);
  *ierr = PCGAMGSetRankReductionFactors(*pc, v, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetthresholdscale_ PCGAMGSETTHRESHOLDSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetthresholdscale_ pcgamgsetthresholdscale
#endif
PETSC_EXTERN void pcgamgsetthresholdscale_(PC *pc, PetscReal *v, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetThresholdScale(*pc, *v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsettype_ PCGAMGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsettype_ pcgamgsettype
#endif
PETSC_EXTERN void pcgamgsettype_(PC *pc, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PCGAMGSetType(*pc, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamggettype_ PCGAMGGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamggettype_ pcgamggettype
#endif
PETSC_EXTERN void pcgamggettype_(PC *pc, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = PCGAMGGetType(*pc, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetinjectionindex_ PCGAMGSETINJECTIONINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetinjectionindex_ pcgamgsetinjectionindex
#endif
PETSC_EXTERN void pcgamgsetinjectionindex_(PC *pc, PetscInt *n, PetscInt idx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  *ierr = PCGAMGSetInjectionIndex(*pc, *n, idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamginitializepackage_ PCGAMGINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamginitializepackage_ pcgamginitializepackage
#endif
PETSC_EXTERN void pcgamginitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PCGAMGInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgfinalizepackage_ PCGAMGFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgfinalizepackage_ pcgamgfinalizepackage
#endif
PETSC_EXTERN void pcgamgfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PCGAMGFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgcreategraph_ PCGAMGCREATEGRAPH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgcreategraph_ pcgamgcreategraph
#endif
PETSC_EXTERN void pcgamgcreategraph_(PC *pc, Mat *A, Mat *G, PetscErrorCode *ierr)
{
  PetscBool null_G = !*(void**) G ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(G);
  *ierr = PCGAMGCreateGraph(*pc, *A, G);
  if (*ierr) return;
  if (! null_G && !*(void**) G) *(void **) G = (void *)-2;
}
