#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesvigetactivesetis_ SNESVIGETACTIVESETIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesvigetactivesetis_ snesvigetactivesetis
#endif
PETSC_EXTERN void snesvigetactivesetis_(SNES *snes, Vec *X, Vec *F, IS *ISact, PetscErrorCode *ierr)
{
  PetscBool null_ISact = !*(void**) ISact ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ISact);
  *ierr = SNESVIGetActiveSetIS(*snes, *X, *F, ISact);
  if (*ierr) return;
  if (! null_ISact && !*(void**) ISact) *(void **) ISact = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesvicomputeinactivesetfnorm_ SNESVICOMPUTEINACTIVESETFNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesvicomputeinactivesetfnorm_ snesvicomputeinactivesetfnorm
#endif
PETSC_EXTERN void snesvicomputeinactivesetfnorm_(SNES *snes, Vec *F, Vec *X, PetscReal *fnorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(fnorm);
  *ierr = SNESVIComputeInactiveSetFnorm(*snes, *F, *X, fnorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesvicomputeinactivesetfty_ SNESVICOMPUTEINACTIVESETFTY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesvicomputeinactivesetfty_ snesvicomputeinactivesetfty
#endif
PETSC_EXTERN void snesvicomputeinactivesetfty_(SNES *snes, Vec *F, Vec *X, Vec *Y, PetscScalar *fty, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(fty);
  *ierr = SNESVIComputeInactiveSetFtY(*snes, *F, *X, *Y, fty);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesvisetvariablebounds_ SNESVISETVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesvisetvariablebounds_ snesvisetvariablebounds
#endif
PETSC_EXTERN void snesvisetvariablebounds_(SNES *snes, Vec *xl, Vec *xu, PetscErrorCode *ierr)
{
  *ierr = SNESVISetVariableBounds(*snes, *xl, *xu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesvigetvariablebounds_ SNESVIGETVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesvigetvariablebounds_ snesvigetvariablebounds
#endif
PETSC_EXTERN void snesvigetvariablebounds_(SNES *snes, Vec *xl, Vec *xu, PetscErrorCode *ierr)
{
  PetscBool null_xl = !*(void**) xl ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_xu = !*(void**) xu ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(xl);
  CHKFORTRANNULLOBJECT(xu);
  *ierr = SNESVIGetVariableBounds(*snes, xl, xu);
  if (*ierr) return;
  if (! null_xl && !*(void**) xl) *(void **) xl = (void *)-2;
  if (! null_xu && !*(void**) xu) *(void **) xu = (void *)-2;
}
