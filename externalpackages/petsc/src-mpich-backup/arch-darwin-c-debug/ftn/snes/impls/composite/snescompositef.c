#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescompositesettype_ SNESCOMPOSITESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescompositesettype_ snescompositesettype
#endif
PETSC_EXTERN void snescompositesettype_(SNES *snes, SNESCompositeType *type, PetscErrorCode *ierr)
{
  *ierr = SNESCompositeSetType(*snes, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescompositeaddsnes_ SNESCOMPOSITEADDSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescompositeaddsnes_ snescompositeaddsnes
#endif
PETSC_EXTERN void snescompositeaddsnes_(SNES *snes, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = SNESCompositeAddSNES(*snes, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescompositegetsnes_ SNESCOMPOSITEGETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescompositegetsnes_ snescompositegetsnes
#endif
PETSC_EXTERN void snescompositegetsnes_(SNES *snes, PetscInt *n, SNES *subsnes, PetscErrorCode *ierr)
{
  PetscBool null_subsnes = !*(void**) subsnes ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subsnes);
  *ierr = SNESCompositeGetSNES(*snes, *n, subsnes);
  if (*ierr) return;
  if (! null_subsnes && !*(void**) subsnes) *(void **) subsnes = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescompositegetnumber_ SNESCOMPOSITEGETNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescompositegetnumber_ snescompositegetnumber
#endif
PETSC_EXTERN void snescompositegetnumber_(SNES *snes, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  *ierr = SNESCompositeGetNumber(*snes, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescompositesetdamping_ SNESCOMPOSITESETDAMPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescompositesetdamping_ snescompositesetdamping
#endif
PETSC_EXTERN void snescompositesetdamping_(SNES *snes, PetscInt *n, PetscReal *dmp, PetscErrorCode *ierr)
{
  *ierr = SNESCompositeSetDamping(*snes, *n, *dmp);
  if (*ierr) return;
}
