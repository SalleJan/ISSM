#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsorgetsymmetric_ PCSORGETSYMMETRIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsorgetsymmetric_ pcsorgetsymmetric
#endif
PETSC_EXTERN void pcsorgetsymmetric_(PC *pc, MatSORType *flag, PetscErrorCode *ierr)
{
  *ierr = PCSORGetSymmetric(*pc, flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsorgetomega_ PCSORGETOMEGA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsorgetomega_ pcsorgetomega
#endif
PETSC_EXTERN void pcsorgetomega_(PC *pc, PetscReal *omega, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(omega);
  *ierr = PCSORGetOmega(*pc, omega);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsorgetiterations_ PCSORGETITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsorgetiterations_ pcsorgetiterations
#endif
PETSC_EXTERN void pcsorgetiterations_(PC *pc, PetscInt *its, PetscInt *lits, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(its);
  CHKFORTRANNULLINTEGER(lits);
  *ierr = PCSORGetIterations(*pc, its, lits);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsorsetsymmetric_ PCSORSETSYMMETRIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsorsetsymmetric_ pcsorsetsymmetric
#endif
PETSC_EXTERN void pcsorsetsymmetric_(PC *pc, MatSORType *flag, PetscErrorCode *ierr)
{
  *ierr = PCSORSetSymmetric(*pc, *flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsorsetomega_ PCSORSETOMEGA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsorsetomega_ pcsorsetomega
#endif
PETSC_EXTERN void pcsorsetomega_(PC *pc, PetscReal *omega, PetscErrorCode *ierr)
{
  *ierr = PCSORSetOmega(*pc, *omega);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsorsetiterations_ PCSORSETITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsorsetiterations_ pcsorsetiterations
#endif
PETSC_EXTERN void pcsorsetiterations_(PC *pc, PetscInt *its, PetscInt *lits, PetscErrorCode *ierr)
{
  *ierr = PCSORSetIterations(*pc, *its, *lits);
  if (*ierr) return;
}
