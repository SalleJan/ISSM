#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgetgalerkin_ SNESFASGETGALERKIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgetgalerkin_ snesfasgetgalerkin
#endif
PETSC_EXTERN void snesfasgetgalerkin_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = SNESFASGetGalerkin(*snes, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfassetgalerkin_ SNESFASSETGALERKIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfassetgalerkin_ snesfassetgalerkin
#endif
PETSC_EXTERN void snesfassetgalerkin_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESFASSetGalerkin(*snes, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasgalerkinfunctiondefault_ SNESFASGALERKINFUNCTIONDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasgalerkinfunctiondefault_ snesfasgalerkinfunctiondefault
#endif
PETSC_EXTERN void snesfasgalerkinfunctiondefault_(SNES *snes, Vec *X, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESFASGalerkinFunctionDefault(*snes, *X, *F, ctx);
  if (*ierr) return;
}
