#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgmresmonitorkrylov_ KSPGMRESMONITORKRYLOV
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgmresmonitorkrylov_ kspgmresmonitorkrylov
#endif
PETSC_EXTERN void kspgmresmonitorkrylov_(KSP *ksp, PetscInt *its, PetscReal *fgnorm, void *Viewers, PetscErrorCode *ierr)
{
  *ierr = KSPGMRESMonitorKrylov(*ksp, *its, *fgnorm, Viewers);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgmressetcgsrefinementtype_ KSPGMRESSETCGSREFINEMENTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgmressetcgsrefinementtype_ kspgmressetcgsrefinementtype
#endif
PETSC_EXTERN void kspgmressetcgsrefinementtype_(KSP *ksp, KSPGMRESCGSRefinementType *type, PetscErrorCode *ierr)
{
  *ierr = KSPGMRESSetCGSRefinementType(*ksp, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgmresgetcgsrefinementtype_ KSPGMRESGETCGSREFINEMENTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgmresgetcgsrefinementtype_ kspgmresgetcgsrefinementtype
#endif
PETSC_EXTERN void kspgmresgetcgsrefinementtype_(KSP *ksp, KSPGMRESCGSRefinementType *type, PetscErrorCode *ierr)
{
  *ierr = KSPGMRESGetCGSRefinementType(*ksp, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgmressetrestart_ KSPGMRESSETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgmressetrestart_ kspgmressetrestart
#endif
PETSC_EXTERN void kspgmressetrestart_(KSP *ksp, PetscInt *restart, PetscErrorCode *ierr)
{
  *ierr = KSPGMRESSetRestart(*ksp, *restart);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgmresgetrestart_ KSPGMRESGETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgmresgetrestart_ kspgmresgetrestart
#endif
PETSC_EXTERN void kspgmresgetrestart_(KSP *ksp, PetscInt *restart, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(restart);
  *ierr = KSPGMRESGetRestart(*ksp, restart);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgmressethaptol_ KSPGMRESSETHAPTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgmressethaptol_ kspgmressethaptol
#endif
PETSC_EXTERN void kspgmressethaptol_(KSP *ksp, PetscReal *tol, PetscErrorCode *ierr)
{
  *ierr = KSPGMRESSetHapTol(*ksp, *tol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgmressetbreakdowntolerance_ KSPGMRESSETBREAKDOWNTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgmressetbreakdowntolerance_ kspgmressetbreakdowntolerance
#endif
PETSC_EXTERN void kspgmressetbreakdowntolerance_(KSP *ksp, PetscReal *tol, PetscErrorCode *ierr)
{
  *ierr = KSPGMRESSetBreakdownTolerance(*ksp, *tol);
  if (*ierr) return;
}
