#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnasmsettype_ SNESNASMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnasmsettype_ snesnasmsettype
#endif
PETSC_EXTERN void snesnasmsettype_(SNES *snes, PCASMType *type, PetscErrorCode *ierr)
{
  *ierr = SNESNASMSetType(*snes, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnasmgettype_ SNESNASMGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnasmgettype_ snesnasmgettype
#endif
PETSC_EXTERN void snesnasmgettype_(SNES *snes, PCASMType *type, PetscErrorCode *ierr)
{
  *ierr = SNESNASMGetType(*snes, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnasmsetsubdomains_ SNESNASMSETSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnasmsetsubdomains_ snesnasmsetsubdomains
#endif
PETSC_EXTERN void snesnasmsetsubdomains_(SNES *snes, PetscInt *n, SNES subsnes[], VecScatter iscatter[], VecScatter oscatter[], VecScatter gscatter[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(subsnes);
  *ierr = SNESNASMSetSubdomains(*snes, *n, subsnes, iscatter, oscatter, gscatter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnasmsetcomputefinaljacobian_ SNESNASMSETCOMPUTEFINALJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnasmsetcomputefinaljacobian_ snesnasmsetcomputefinaljacobian
#endif
PETSC_EXTERN void snesnasmsetcomputefinaljacobian_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESNASMSetComputeFinalJacobian(*snes, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnasmsetdamping_ SNESNASMSETDAMPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnasmsetdamping_ snesnasmsetdamping
#endif
PETSC_EXTERN void snesnasmsetdamping_(SNES *snes, PetscReal *dmp, PetscErrorCode *ierr)
{
  *ierr = SNESNASMSetDamping(*snes, *dmp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnasmgetdamping_ SNESNASMGETDAMPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnasmgetdamping_ snesnasmgetdamping
#endif
PETSC_EXTERN void snesnasmgetdamping_(SNES *snes, PetscReal *dmp, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(dmp);
  *ierr = SNESNASMGetDamping(*snes, dmp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnasmgetsnes_ SNESNASMGETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnasmgetsnes_ snesnasmgetsnes
#endif
PETSC_EXTERN void snesnasmgetsnes_(SNES *snes, PetscInt *i, SNES *subsnes, PetscErrorCode *ierr)
{
  PetscBool null_subsnes = !*(void**) subsnes ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subsnes);
  *ierr = SNESNASMGetSNES(*snes, *i, subsnes);
  if (*ierr) return;
  if (! null_subsnes && !*(void**) subsnes) *(void **) subsnes = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnasmgetnumber_ SNESNASMGETNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnasmgetnumber_ snesnasmgetnumber
#endif
PETSC_EXTERN void snesnasmgetnumber_(SNES *snes, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  *ierr = SNESNASMGetNumber(*snes, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnasmsetweight_ SNESNASMSETWEIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnasmsetweight_ snesnasmsetweight
#endif
PETSC_EXTERN void snesnasmsetweight_(SNES *snes, Vec *weight, PetscErrorCode *ierr)
{
  *ierr = SNESNASMSetWeight(*snes, *weight);
  if (*ierr) return;
}
