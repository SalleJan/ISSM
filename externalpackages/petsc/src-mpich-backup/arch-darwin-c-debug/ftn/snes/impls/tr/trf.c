#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtontrsetnormtype_ SNESNEWTONTRSETNORMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtontrsetnormtype_ snesnewtontrsetnormtype
#endif
PETSC_EXTERN void snesnewtontrsetnormtype_(SNES *snes, NormType *norm, PetscErrorCode *ierr)
{
  *ierr = SNESNewtonTRSetNormType(*snes, *norm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtontrsetqntype_ SNESNEWTONTRSETQNTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtontrsetqntype_ snesnewtontrsetqntype
#endif
PETSC_EXTERN void snesnewtontrsetqntype_(SNES *snes, SNESNewtonTRQNType *use, PetscErrorCode *ierr)
{
  *ierr = SNESNewtonTRSetQNType(*snes, *use);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtontrsetfallbacktype_ SNESNEWTONTRSETFALLBACKTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtontrsetfallbacktype_ snesnewtontrsetfallbacktype
#endif
PETSC_EXTERN void snesnewtontrsetfallbacktype_(SNES *snes, SNESNewtonTRFallbackType *ftype, PetscErrorCode *ierr)
{
  *ierr = SNESNewtonTRSetFallbackType(*snes, *ftype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtontrprecheck_ SNESNEWTONTRPRECHECK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtontrprecheck_ snesnewtontrprecheck
#endif
PETSC_EXTERN void snesnewtontrprecheck_(SNES *snes, Vec *X, Vec *Y, PetscBool *changed_Y, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(changed_Y);
  *ierr = SNESNewtonTRPreCheck(*snes, *X, *Y, changed_Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtontrpostcheck_ SNESNEWTONTRPOSTCHECK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtontrpostcheck_ snesnewtontrpostcheck
#endif
PETSC_EXTERN void snesnewtontrpostcheck_(SNES *snes, Vec *X, Vec *Y, Vec *W, PetscBool *changed_Y, PetscBool *changed_W, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(changed_Y);
  CHKFORTRANNULLBOOL(changed_W);
  *ierr = SNESNewtonTRPostCheck(*snes, *X, *Y, *W, changed_Y, changed_W);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtontrsettolerances_ SNESNEWTONTRSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtontrsettolerances_ snesnewtontrsettolerances
#endif
PETSC_EXTERN void snesnewtontrsettolerances_(SNES *snes, PetscReal *delta_min, PetscReal *delta_max, PetscReal *delta_0, PetscErrorCode *ierr)
{
  *ierr = SNESNewtonTRSetTolerances(*snes, *delta_min, *delta_max, *delta_0);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtontrgettolerances_ SNESNEWTONTRGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtontrgettolerances_ snesnewtontrgettolerances
#endif
PETSC_EXTERN void snesnewtontrgettolerances_(SNES *snes, PetscReal *delta_min, PetscReal *delta_max, PetscReal *delta_0, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(delta_min);
  CHKFORTRANNULLREAL(delta_max);
  CHKFORTRANNULLREAL(delta_0);
  *ierr = SNESNewtonTRGetTolerances(*snes, delta_min, delta_max, delta_0);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtontrsetupdateparameters_ SNESNEWTONTRSETUPDATEPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtontrsetupdateparameters_ snesnewtontrsetupdateparameters
#endif
PETSC_EXTERN void snesnewtontrsetupdateparameters_(SNES *snes, PetscReal *eta1, PetscReal *eta2, PetscReal *eta3, PetscReal *t1, PetscReal *t2, PetscErrorCode *ierr)
{
  *ierr = SNESNewtonTRSetUpdateParameters(*snes, *eta1, *eta2, *eta3, *t1, *t2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtontrgetupdateparameters_ SNESNEWTONTRGETUPDATEPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtontrgetupdateparameters_ snesnewtontrgetupdateparameters
#endif
PETSC_EXTERN void snesnewtontrgetupdateparameters_(SNES *snes, PetscReal *eta1, PetscReal *eta2, PetscReal *eta3, PetscReal *t1, PetscReal *t2, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(eta1);
  CHKFORTRANNULLREAL(eta2);
  CHKFORTRANNULLREAL(eta3);
  CHKFORTRANNULLREAL(t1);
  CHKFORTRANNULLREAL(t2);
  *ierr = SNESNewtonTRGetUpdateParameters(*snes, eta1, eta2, eta3, t1, t2);
  if (*ierr) return;
}
