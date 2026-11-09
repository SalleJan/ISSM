#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetupmatsolvertype_ PCFACTORSETUPMATSOLVERTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetupmatsolvertype_ pcfactorsetupmatsolvertype
#endif
PETSC_EXTERN void pcfactorsetupmatsolvertype_(PC *pc, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetUpMatSolverType(*pc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetzeropivot_ PCFACTORSETZEROPIVOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetzeropivot_ pcfactorsetzeropivot
#endif
PETSC_EXTERN void pcfactorsetzeropivot_(PC *pc, PetscReal *zero, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetZeroPivot(*pc, *zero);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetshifttype_ PCFACTORSETSHIFTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetshifttype_ pcfactorsetshifttype
#endif
PETSC_EXTERN void pcfactorsetshifttype_(PC *pc, MatFactorShiftType *shifttype, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetShiftType(*pc, *shifttype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetshiftamount_ PCFACTORSETSHIFTAMOUNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetshiftamount_ pcfactorsetshiftamount
#endif
PETSC_EXTERN void pcfactorsetshiftamount_(PC *pc, PetscReal *shiftamount, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetShiftAmount(*pc, *shiftamount);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetdroptolerance_ PCFACTORSETDROPTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetdroptolerance_ pcfactorsetdroptolerance
#endif
PETSC_EXTERN void pcfactorsetdroptolerance_(PC *pc, PetscReal *dt, PetscReal *dtcol, PetscInt *maxrowcount, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetDropTolerance(*pc, *dt, *dtcol, *maxrowcount);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorgetzeropivot_ PCFACTORGETZEROPIVOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorgetzeropivot_ pcfactorgetzeropivot
#endif
PETSC_EXTERN void pcfactorgetzeropivot_(PC *pc, PetscReal *pivot, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(pivot);
  *ierr = PCFactorGetZeroPivot(*pc, pivot);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorgetshiftamount_ PCFACTORGETSHIFTAMOUNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorgetshiftamount_ pcfactorgetshiftamount
#endif
PETSC_EXTERN void pcfactorgetshiftamount_(PC *pc, PetscReal *shift, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(shift);
  *ierr = PCFactorGetShiftAmount(*pc, shift);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorgetshifttype_ PCFACTORGETSHIFTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorgetshifttype_ pcfactorgetshifttype
#endif
PETSC_EXTERN void pcfactorgetshifttype_(PC *pc, MatFactorShiftType *type, PetscErrorCode *ierr)
{
  *ierr = PCFactorGetShiftType(*pc, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorgetlevels_ PCFACTORGETLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorgetlevels_ pcfactorgetlevels
#endif
PETSC_EXTERN void pcfactorgetlevels_(PC *pc, PetscInt *levels, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(levels);
  *ierr = PCFactorGetLevels(*pc, levels);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetlevels_ PCFACTORSETLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetlevels_ pcfactorsetlevels
#endif
PETSC_EXTERN void pcfactorsetlevels_(PC *pc, PetscInt *levels, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetLevels(*pc, *levels);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetallowdiagonalfill_ PCFACTORSETALLOWDIAGONALFILL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetallowdiagonalfill_ pcfactorsetallowdiagonalfill
#endif
PETSC_EXTERN void pcfactorsetallowdiagonalfill_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetAllowDiagonalFill(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorgetallowdiagonalfill_ PCFACTORGETALLOWDIAGONALFILL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorgetallowdiagonalfill_ pcfactorgetallowdiagonalfill
#endif
PETSC_EXTERN void pcfactorgetallowdiagonalfill_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCFactorGetAllowDiagonalFill(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorreorderfornonzerodiagonal_ PCFACTORREORDERFORNONZERODIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorreorderfornonzerodiagonal_ pcfactorreorderfornonzerodiagonal
#endif
PETSC_EXTERN void pcfactorreorderfornonzerodiagonal_(PC *pc, PetscReal *rtol, PetscErrorCode *ierr)
{
  *ierr = PCFactorReorderForNonzeroDiagonal(*pc, *rtol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetmatsolvertype_ PCFACTORSETMATSOLVERTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetmatsolvertype_ pcfactorsetmatsolvertype
#endif
PETSC_EXTERN void pcfactorsetmatsolvertype_(PC *pc, char *stype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_stype)
{
  char* c_stype;
  FIXCHAR(stype, l_stype, c_stype);
  *ierr = PCFactorSetMatSolverType(*pc, c_stype);
  if (*ierr) return;
  FREECHAR(stype, c_stype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorgetmatsolvertype_ PCFACTORGETMATSOLVERTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorgetmatsolvertype_ pcfactorgetmatsolvertype
#endif
PETSC_EXTERN void pcfactorgetmatsolvertype_(PC *pc, char *stype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_stype)
{
  char* c_stype = PETSC_NULLPTR;
  *ierr = PCFactorGetMatSolverType(*pc, (const char **)&c_stype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)stype, c_stype, l_stype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, stype, l_stype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetfill_ PCFACTORSETFILL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetfill_ pcfactorsetfill
#endif
PETSC_EXTERN void pcfactorsetfill_(PC *pc, PetscReal *fill, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetFill(*pc, *fill);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetuseinplace_ PCFACTORSETUSEINPLACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetuseinplace_ pcfactorsetuseinplace
#endif
PETSC_EXTERN void pcfactorsetuseinplace_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetUseInPlace(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorgetuseinplace_ PCFACTORGETUSEINPLACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorgetuseinplace_ pcfactorgetuseinplace
#endif
PETSC_EXTERN void pcfactorgetuseinplace_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCFactorGetUseInPlace(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetmatorderingtype_ PCFACTORSETMATORDERINGTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetmatorderingtype_ pcfactorsetmatorderingtype
#endif
PETSC_EXTERN void pcfactorsetmatorderingtype_(PC *pc, char *ordering, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_ordering)
{
  char* c_ordering;
  FIXCHAR(ordering, l_ordering, c_ordering);
  *ierr = PCFactorSetMatOrderingType(*pc, c_ordering);
  if (*ierr) return;
  FREECHAR(ordering, c_ordering);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetcolumnpivot_ PCFACTORSETCOLUMNPIVOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetcolumnpivot_ pcfactorsetcolumnpivot
#endif
PETSC_EXTERN void pcfactorsetcolumnpivot_(PC *pc, PetscReal *dtcol, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetColumnPivot(*pc, *dtcol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetpivotinblocks_ PCFACTORSETPIVOTINBLOCKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetpivotinblocks_ pcfactorsetpivotinblocks
#endif
PETSC_EXTERN void pcfactorsetpivotinblocks_(PC *pc, PetscBool *pivot, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetPivotInBlocks(*pc, *pivot ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetreusefill_ PCFACTORSETREUSEFILL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetreusefill_ pcfactorsetreusefill
#endif
PETSC_EXTERN void pcfactorsetreusefill_(PC *pc, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetReuseFill(*pc, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
