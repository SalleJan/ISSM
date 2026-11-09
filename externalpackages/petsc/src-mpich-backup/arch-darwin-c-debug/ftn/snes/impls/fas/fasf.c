#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfascreatecoarsevec_ SNESFASCREATECOARSEVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfascreatecoarsevec_ snesfascreatecoarsevec
#endif
PETSC_EXTERN void snesfascreatecoarsevec_(SNES *snes, Vec *Xcoarse, PetscErrorCode *ierr)
{
  PetscBool null_Xcoarse = !*(void**) Xcoarse ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Xcoarse);
  *ierr = SNESFASCreateCoarseVec(*snes, Xcoarse);
  if (*ierr) return;
  if (! null_Xcoarse && !*(void**) Xcoarse) *(void **) Xcoarse = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfasrestrict_ SNESFASRESTRICT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfasrestrict_ snesfasrestrict
#endif
PETSC_EXTERN void snesfasrestrict_(SNES *fine, Vec *Xfine, Vec *Xcoarse, PetscErrorCode *ierr)
{
  *ierr = SNESFASRestrict(*fine, *Xfine, *Xcoarse);
  if (*ierr) return;
}
