#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassettype_ SNESFASSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassettype_ snesfassettype
#endif
PETSC_EXTERN void snesfassettype_(SNES *snes, SNESFASType *fastype, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetType(*snes, *fastype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgettype_ SNESFASGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgettype_ snesfasgettype
#endif
PETSC_EXTERN void snesfasgettype_(SNES *snes, SNESFASType *fastype, PetscErrorCode *ierr)
{
  *ierr = SNESFASGetType(*snes, fastype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgetlevels_ SNESFASGETLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgetlevels_ snesfasgetlevels
#endif
PETSC_EXTERN void snesfasgetlevels_(SNES *snes, PetscInt *levels, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(levels);
  *ierr = SNESFASGetLevels(*snes, levels);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgetcyclesnes_ SNESFASGETCYCLESNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgetcyclesnes_ snesfasgetcyclesnes
#endif
PETSC_EXTERN void snesfasgetcyclesnes_(SNES *snes, PetscInt *level, SNES *lsnes, PetscErrorCode *ierr)
{
  PetscBool null_lsnes = !*(void**) lsnes ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(lsnes);
  *ierr = SNESFASGetCycleSNES(*snes, *level, lsnes);
  if (*ierr) return;
  if (! null_lsnes && !*(void**) lsnes) *(void **) lsnes = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetnumbersmoothup_ SNESFASSETNUMBERSMOOTHUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetnumbersmoothup_ snesfassetnumbersmoothup
#endif
PETSC_EXTERN void snesfassetnumbersmoothup_(SNES *snes, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetNumberSmoothUp(*snes, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetnumbersmoothdown_ SNESFASSETNUMBERSMOOTHDOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetnumbersmoothdown_ snesfassetnumbersmoothdown
#endif
PETSC_EXTERN void snesfassetnumbersmoothdown_(SNES *snes, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetNumberSmoothDown(*snes, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetcontinuation_ SNESFASSETCONTINUATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetcontinuation_ snesfassetcontinuation
#endif
PETSC_EXTERN void snesfassetcontinuation_(SNES *snes, PetscBool *continuation, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetContinuation(*snes, *continuation ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetcycles_ SNESFASSETCYCLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetcycles_ snesfassetcycles
#endif
PETSC_EXTERN void snesfassetcycles_(SNES *snes, PetscInt *cycles, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetCycles(*snes, *cycles);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetmonitor_ SNESFASSETMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetmonitor_ snesfassetmonitor
#endif
PETSC_EXTERN void snesfassetmonitor_(SNES *snes, PetscViewerAndFormat **vf, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetMonitor(*snes, *vf, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetlog_ SNESFASSETLOG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetlog_ snesfassetlog
#endif
PETSC_EXTERN void snesfassetlog_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetLog(*snes, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascyclesetcycles_ SNESFASCYCLESETCYCLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascyclesetcycles_ snesfascyclesetcycles
#endif
PETSC_EXTERN void snesfascyclesetcycles_(SNES *snes, PetscInt *cycles, PetscErrorCode *ierr)
{
  *ierr = SNESFASCycleSetCycles(*snes, *cycles);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascyclegetsmoother_ SNESFASCYCLEGETSMOOTHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascyclegetsmoother_ snesfascyclegetsmoother
#endif
PETSC_EXTERN void snesfascyclegetsmoother_(SNES *snes, SNES *smooth, PetscErrorCode *ierr)
{
  PetscBool null_smooth = !*(void**) smooth ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(smooth);
  *ierr = SNESFASCycleGetSmoother(*snes, smooth);
  if (*ierr) return;
  if (! null_smooth && !*(void**) smooth) *(void **) smooth = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascyclegetsmootherup_ SNESFASCYCLEGETSMOOTHERUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascyclegetsmootherup_ snesfascyclegetsmootherup
#endif
PETSC_EXTERN void snesfascyclegetsmootherup_(SNES *snes, SNES *smoothu, PetscErrorCode *ierr)
{
  PetscBool null_smoothu = !*(void**) smoothu ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(smoothu);
  *ierr = SNESFASCycleGetSmootherUp(*snes, smoothu);
  if (*ierr) return;
  if (! null_smoothu && !*(void**) smoothu) *(void **) smoothu = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascyclegetsmootherdown_ SNESFASCYCLEGETSMOOTHERDOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascyclegetsmootherdown_ snesfascyclegetsmootherdown
#endif
PETSC_EXTERN void snesfascyclegetsmootherdown_(SNES *snes, SNES *smoothd, PetscErrorCode *ierr)
{
  PetscBool null_smoothd = !*(void**) smoothd ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(smoothd);
  *ierr = SNESFASCycleGetSmootherDown(*snes, smoothd);
  if (*ierr) return;
  if (! null_smoothd && !*(void**) smoothd) *(void **) smoothd = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascyclegetcorrection_ SNESFASCYCLEGETCORRECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascyclegetcorrection_ snesfascyclegetcorrection
#endif
PETSC_EXTERN void snesfascyclegetcorrection_(SNES *snes, SNES *correction, PetscErrorCode *ierr)
{
  PetscBool null_correction = !*(void**) correction ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(correction);
  *ierr = SNESFASCycleGetCorrection(*snes, correction);
  if (*ierr) return;
  if (! null_correction && !*(void**) correction) *(void **) correction = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascyclegetinterpolation_ SNESFASCYCLEGETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascyclegetinterpolation_ snesfascyclegetinterpolation
#endif
PETSC_EXTERN void snesfascyclegetinterpolation_(SNES *snes, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = SNESFASCycleGetInterpolation(*snes, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascyclegetrestriction_ SNESFASCYCLEGETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascyclegetrestriction_ snesfascyclegetrestriction
#endif
PETSC_EXTERN void snesfascyclegetrestriction_(SNES *snes, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = SNESFASCycleGetRestriction(*snes, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascyclegetinjection_ SNESFASCYCLEGETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascyclegetinjection_ snesfascyclegetinjection
#endif
PETSC_EXTERN void snesfascyclegetinjection_(SNES *snes, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = SNESFASCycleGetInjection(*snes, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascyclegetrscale_ SNESFASCYCLEGETRSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascyclegetrscale_ snesfascyclegetrscale
#endif
PETSC_EXTERN void snesfascyclegetrscale_(SNES *snes, Vec *vec, PetscErrorCode *ierr)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(vec);
  *ierr = SNESFASCycleGetRScale(*snes, vec);
  if (*ierr) return;
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascycleisfine_ SNESFASCYCLEISFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascycleisfine_ snesfascycleisfine
#endif
PETSC_EXTERN void snesfascycleisfine_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = SNESFASCycleIsFine(*snes, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetinterpolation_ SNESFASSETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetinterpolation_ snesfassetinterpolation
#endif
PETSC_EXTERN void snesfassetinterpolation_(SNES *snes, PetscInt *level, Mat *mat, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetInterpolation(*snes, *level, *mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgetinterpolation_ SNESFASGETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgetinterpolation_ snesfasgetinterpolation
#endif
PETSC_EXTERN void snesfasgetinterpolation_(SNES *snes, PetscInt *level, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = SNESFASGetInterpolation(*snes, *level, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetrestriction_ SNESFASSETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetrestriction_ snesfassetrestriction
#endif
PETSC_EXTERN void snesfassetrestriction_(SNES *snes, PetscInt *level, Mat *mat, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetRestriction(*snes, *level, *mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgetrestriction_ SNESFASGETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgetrestriction_ snesfasgetrestriction
#endif
PETSC_EXTERN void snesfasgetrestriction_(SNES *snes, PetscInt *level, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = SNESFASGetRestriction(*snes, *level, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetinjection_ SNESFASSETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetinjection_ snesfassetinjection
#endif
PETSC_EXTERN void snesfassetinjection_(SNES *snes, PetscInt *level, Mat *mat, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetInjection(*snes, *level, *mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgetinjection_ SNESFASGETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgetinjection_ snesfasgetinjection
#endif
PETSC_EXTERN void snesfasgetinjection_(SNES *snes, PetscInt *level, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = SNESFASGetInjection(*snes, *level, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetrscale_ SNESFASSETRSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetrscale_ snesfassetrscale
#endif
PETSC_EXTERN void snesfassetrscale_(SNES *snes, PetscInt *level, Vec *rscale, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetRScale(*snes, *level, *rscale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgetsmoother_ SNESFASGETSMOOTHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgetsmoother_ snesfasgetsmoother
#endif
PETSC_EXTERN void snesfasgetsmoother_(SNES *snes, PetscInt *level, SNES *smooth, PetscErrorCode *ierr)
{
  PetscBool null_smooth = !*(void**) smooth ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(smooth);
  *ierr = SNESFASGetSmoother(*snes, *level, smooth);
  if (*ierr) return;
  if (! null_smooth && !*(void**) smooth) *(void **) smooth = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgetsmootherdown_ SNESFASGETSMOOTHERDOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgetsmootherdown_ snesfasgetsmootherdown
#endif
PETSC_EXTERN void snesfasgetsmootherdown_(SNES *snes, PetscInt *level, SNES *smooth, PetscErrorCode *ierr)
{
  PetscBool null_smooth = !*(void**) smooth ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(smooth);
  *ierr = SNESFASGetSmootherDown(*snes, *level, smooth);
  if (*ierr) return;
  if (! null_smooth && !*(void**) smooth) *(void **) smooth = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgetsmootherup_ SNESFASGETSMOOTHERUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgetsmootherup_ snesfasgetsmootherup
#endif
PETSC_EXTERN void snesfasgetsmootherup_(SNES *snes, PetscInt *level, SNES *smooth, PetscErrorCode *ierr)
{
  PetscBool null_smooth = !*(void**) smooth ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(smooth);
  *ierr = SNESFASGetSmootherUp(*snes, *level, smooth);
  if (*ierr) return;
  if (! null_smooth && !*(void**) smooth) *(void **) smooth = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgetcoarsesolve_ SNESFASGETCOARSESOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgetcoarsesolve_ snesfasgetcoarsesolve
#endif
PETSC_EXTERN void snesfasgetcoarsesolve_(SNES *snes, SNES *coarse, PetscErrorCode *ierr)
{
  PetscBool null_coarse = !*(void**) coarse ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(coarse);
  *ierr = SNESFASGetCoarseSolve(*snes, coarse);
  if (*ierr) return;
  if (! null_coarse && !*(void**) coarse) *(void **) coarse = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasfullsetdownsweep_ SNESFASFULLSETDOWNSWEEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasfullsetdownsweep_ snesfasfullsetdownsweep
#endif
PETSC_EXTERN void snesfasfullsetdownsweep_(SNES *snes, PetscBool *swp, PetscErrorCode *ierr)
{
  *ierr = SNESFASFullSetDownSweep(*snes, *swp ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasfullsettotal_ SNESFASFULLSETTOTAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasfullsettotal_ snesfasfullsettotal
#endif
PETSC_EXTERN void snesfasfullsettotal_(SNES *snes, PetscBool *total, PetscErrorCode *ierr)
{
  *ierr = SNESFASFullSetTotal(*snes, *total ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasfullgettotal_ SNESFASFULLGETTOTAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasfullgettotal_ snesfasfullgettotal
#endif
PETSC_EXTERN void snesfasfullgettotal_(SNES *snes, PetscBool *total, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(total);
  *ierr = SNESFASFullGetTotal(*snes, total);
  if (*ierr) return;
}
