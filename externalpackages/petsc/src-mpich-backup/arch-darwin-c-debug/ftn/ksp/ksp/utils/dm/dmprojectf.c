#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmglobaltolocalsolve_ DMGLOBALTOLOCALSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmglobaltolocalsolve_ dmglobaltolocalsolve
#endif
PETSC_EXTERN void dmglobaltolocalsolve_(DM *dm, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = DMGlobalToLocalSolve(*dm, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptinterpolator_ DMADAPTINTERPOLATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptinterpolator_ dmadaptinterpolator
#endif
PETSC_EXTERN void dmadaptinterpolator_(DM *dmc, DM *dmf, Mat *In, KSP *smoother, Mat *MF, Mat *MC, Mat *InAdapt, void *user, PetscErrorCode *ierr)
{
  PetscBool null_InAdapt = !*(void**) InAdapt ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(InAdapt);
  *ierr = DMAdaptInterpolator(*dmc, *dmf, *In, *smoother, *MF, *MC, InAdapt, user);
  if (*ierr) return;
  if (! null_InAdapt && !*(void**) InAdapt) *(void **) InAdapt = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcheckinterpolator_ DMCHECKINTERPOLATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcheckinterpolator_ dmcheckinterpolator
#endif
PETSC_EXTERN void dmcheckinterpolator_(DM *dmf, Mat *In, Mat *MC, Mat *MF, PetscReal *tol, PetscErrorCode *ierr)
{
  *ierr = DMCheckInterpolator(*dmf, *In, *MC, *MF, *tol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmprojectfields_ DMSWARMPROJECTFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmprojectfields_ dmswarmprojectfields
#endif
PETSC_EXTERN void dmswarmprojectfields_(DM *sw, DM *dm, PetscInt *nfields, char fieldnames[], Vec fields[], ScatterMode *mode, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldnames)
{
  char* c_fieldnames = PETSC_NULLPTR;
  CHKFORTRANNULLOBJECT(fields);
  *ierr = DMSwarmProjectFields(*sw, *dm, *nfields, (const char **)&c_fieldnames, fields, *mode);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)fieldnames, c_fieldnames, l_fieldnames);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, fieldnames, l_fieldnames);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmprojectgradientfields_ DMSWARMPROJECTGRADIENTFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmprojectgradientfields_ dmswarmprojectgradientfields
#endif
PETSC_EXTERN void dmswarmprojectgradientfields_(DM *sw, DM *dm, PetscInt *nfields, char fieldnames[], Vec fields[], ScatterMode *mode, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldnames)
{
  char* c_fieldnames = PETSC_NULLPTR;
  CHKFORTRANNULLOBJECT(fields);
  *ierr = DMSwarmProjectGradientFields(*sw, *dm, *nfields, (const char **)&c_fieldnames, fields, *mode);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)fieldnames, c_fieldnames, l_fieldnames);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, fieldnames, l_fieldnames);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmremap_ DMSWARMREMAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmremap_ dmswarmremap
#endif
PETSC_EXTERN void dmswarmremap_(DM *sw, PetscErrorCode *ierr)
{
  *ierr = DMSwarmRemap(*sw);
  if (*ierr) return;
}
