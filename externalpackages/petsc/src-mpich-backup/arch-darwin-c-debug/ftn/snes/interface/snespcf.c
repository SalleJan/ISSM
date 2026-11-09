#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesapplynpc_ SNESAPPLYNPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesapplynpc_ snesapplynpc
#endif
PETSC_EXTERN void snesapplynpc_(SNES *snes, Vec *x, Vec *f, Vec *y, PetscErrorCode *ierr)
{
  *ierr = SNESApplyNPC(*snes, *x, *f, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescomputefunctiondefaultnpc_ SNESCOMPUTEFUNCTIONDEFAULTNPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescomputefunctiondefaultnpc_ snescomputefunctiondefaultnpc
#endif
PETSC_EXTERN void snescomputefunctiondefaultnpc_(SNES *snes, Vec *X, Vec *F, PetscErrorCode *ierr)
{
  *ierr = SNESComputeFunctionDefaultNPC(*snes, *X, *F);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetnpcfunction_ SNESGETNPCFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetnpcfunction_ snesgetnpcfunction
#endif
PETSC_EXTERN void snesgetnpcfunction_(SNES *snes, Vec *F, PetscReal *fnorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(fnorm);
  *ierr = SNESGetNPCFunction(*snes, *F, fnorm);
  if (*ierr) return;
}
