#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcparmssetglobal_ PCPARMSSETGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcparmssetglobal_ pcparmssetglobal
#endif
PETSC_EXTERN void pcparmssetglobal_(PC *pc, PCPARMSGlobalType *type, PetscErrorCode *ierr)
{
  *ierr = PCPARMSSetGlobal(*pc, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcparmssetlocal_ PCPARMSSETLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcparmssetlocal_ pcparmssetlocal
#endif
PETSC_EXTERN void pcparmssetlocal_(PC *pc, PCPARMSLocalType *type, PetscErrorCode *ierr)
{
  *ierr = PCPARMSSetLocal(*pc, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcparmssetsolvetolerances_ PCPARMSSETSOLVETOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcparmssetsolvetolerances_ pcparmssetsolvetolerances
#endif
PETSC_EXTERN void pcparmssetsolvetolerances_(PC *pc, PetscReal *tol, PetscInt *maxits, PetscErrorCode *ierr)
{
  *ierr = PCPARMSSetSolveTolerances(*pc, *tol, *maxits);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcparmssetsolverestart_ PCPARMSSETSOLVERESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcparmssetsolverestart_ pcparmssetsolverestart
#endif
PETSC_EXTERN void pcparmssetsolverestart_(PC *pc, PetscInt *restart, PetscErrorCode *ierr)
{
  *ierr = PCPARMSSetSolveRestart(*pc, *restart);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcparmssetnonsymperm_ PCPARMSSETNONSYMPERM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcparmssetnonsymperm_ pcparmssetnonsymperm
#endif
PETSC_EXTERN void pcparmssetnonsymperm_(PC *pc, PetscBool *nonsym, PetscErrorCode *ierr)
{
  *ierr = PCPARMSSetNonsymPerm(*pc, *nonsym ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcparmssetfill_ PCPARMSSETFILL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcparmssetfill_ pcparmssetfill
#endif
PETSC_EXTERN void pcparmssetfill_(PC *pc, PetscInt *lfil0, PetscInt *lfil1, PetscInt *lfil2, PetscErrorCode *ierr)
{
  *ierr = PCPARMSSetFill(*pc, *lfil0, *lfil1, *lfil2);
  if (*ierr) return;
}
