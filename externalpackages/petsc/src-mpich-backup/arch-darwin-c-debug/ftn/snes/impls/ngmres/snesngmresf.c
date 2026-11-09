#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesngmressetrestartfmrise_ SNESNGMRESSETRESTARTFMRISE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesngmressetrestartfmrise_ snesngmressetrestartfmrise
#endif
PETSC_EXTERN void snesngmressetrestartfmrise_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESNGMRESSetRestartFmRise(*snes, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesngmresgetrestartfmrise_ SNESNGMRESGETRESTARTFMRISE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesngmresgetrestartfmrise_ snesngmresgetrestartfmrise
#endif
PETSC_EXTERN void snesngmresgetrestartfmrise_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = SNESNGMRESGetRestartFmRise(*snes, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesngmressetrestarttype_ SNESNGMRESSETRESTARTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesngmressetrestarttype_ snesngmressetrestarttype
#endif
PETSC_EXTERN void snesngmressetrestarttype_(SNES *snes, SNESNGMRESRestartType *rtype, PetscErrorCode *ierr)
{
  *ierr = SNESNGMRESSetRestartType(*snes, *rtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesngmressetselecttype_ SNESNGMRESSETSELECTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesngmressetselecttype_ snesngmressetselecttype
#endif
PETSC_EXTERN void snesngmressetselecttype_(SNES *snes, SNESNGMRESSelectType *stype, PetscErrorCode *ierr)
{
  *ierr = SNESNGMRESSetSelectType(*snes, *stype);
  if (*ierr) return;
}
