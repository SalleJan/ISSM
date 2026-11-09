#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexinterpolatepointsf_ DMPLEXINTERPOLATEPOINTSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexinterpolatepointsf_ dmplexinterpolatepointsf
#endif
PETSC_EXTERN void dmplexinterpolatepointsf_(DM *dm, PetscSF *pointSF, PetscErrorCode *ierr)
{
  *ierr = DMPlexInterpolatePointSF(*dm, *pointSF);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexinterpolate_ DMPLEXINTERPOLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexinterpolate_ dmplexinterpolate
#endif
PETSC_EXTERN void dmplexinterpolate_(DM *dm, DM *dmInt, PetscErrorCode *ierr)
{
  PetscBool null_dmInt = !*(void**) dmInt ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmInt);
  *ierr = DMPlexInterpolate(*dm, dmInt);
  if (*ierr) return;
  if (! null_dmInt && !*(void**) dmInt) *(void **) dmInt = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcopycoordinates_ DMPLEXCOPYCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcopycoordinates_ dmplexcopycoordinates
#endif
PETSC_EXTERN void dmplexcopycoordinates_(DM *dmA, DM *dmB, PetscErrorCode *ierr)
{
  *ierr = DMPlexCopyCoordinates(*dmA, *dmB);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexuninterpolate_ DMPLEXUNINTERPOLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexuninterpolate_ dmplexuninterpolate
#endif
PETSC_EXTERN void dmplexuninterpolate_(DM *dm, DM *dmUnint, PetscErrorCode *ierr)
{
  PetscBool null_dmUnint = !*(void**) dmUnint ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmUnint);
  *ierr = DMPlexUninterpolate(*dm, dmUnint);
  if (*ierr) return;
  if (! null_dmUnint && !*(void**) dmUnint) *(void **) dmUnint = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexisinterpolated_ DMPLEXISINTERPOLATED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexisinterpolated_ dmplexisinterpolated
#endif
PETSC_EXTERN void dmplexisinterpolated_(DM *dm, DMPlexInterpolatedFlag *interpolated, PetscErrorCode *ierr)
{
  *ierr = DMPlexIsInterpolated(*dm, interpolated);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexisinterpolatedcollective_ DMPLEXISINTERPOLATEDCOLLECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexisinterpolatedcollective_ dmplexisinterpolatedcollective
#endif
PETSC_EXTERN void dmplexisinterpolatedcollective_(DM *dm, DMPlexInterpolatedFlag *interpolated, PetscErrorCode *ierr)
{
  *ierr = DMPlexIsInterpolatedCollective(*dm, interpolated);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetinterpolateprefertensor_ DMPLEXGETINTERPOLATEPREFERTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetinterpolateprefertensor_ dmplexgetinterpolateprefertensor
#endif
PETSC_EXTERN void dmplexgetinterpolateprefertensor_(DM *dm, PetscBool *preferTensor, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(preferTensor);
  *ierr = DMPlexGetInterpolatePreferTensor(*dm, preferTensor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetinterpolateprefertensor_ DMPLEXSETINTERPOLATEPREFERTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetinterpolateprefertensor_ dmplexsetinterpolateprefertensor
#endif
PETSC_EXTERN void dmplexsetinterpolateprefertensor_(DM *dm, PetscBool *preferTensor, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetInterpolatePreferTensor(*dm, *preferTensor ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
