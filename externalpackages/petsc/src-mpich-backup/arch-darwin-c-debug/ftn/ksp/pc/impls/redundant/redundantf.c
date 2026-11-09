#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcredundantsetnumber_ PCREDUNDANTSETNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcredundantsetnumber_ pcredundantsetnumber
#endif
PETSC_EXTERN void pcredundantsetnumber_(PC *pc, PetscInt *nredundant, PetscErrorCode *ierr)
{
  *ierr = PCRedundantSetNumber(*pc, *nredundant);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcredundantsetscatter_ PCREDUNDANTSETSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcredundantsetscatter_ pcredundantsetscatter
#endif
PETSC_EXTERN void pcredundantsetscatter_(PC *pc, VecScatter *in, VecScatter *out, PetscErrorCode *ierr)
{
  *ierr = PCRedundantSetScatter(*pc, *in, *out);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcredundantgetksp_ PCREDUNDANTGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcredundantgetksp_ pcredundantgetksp
#endif
PETSC_EXTERN void pcredundantgetksp_(PC *pc, KSP *innerksp, PetscErrorCode *ierr)
{
  PetscBool null_innerksp = !*(void**) innerksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(innerksp);
  *ierr = PCRedundantGetKSP(*pc, innerksp);
  if (*ierr) return;
  if (! null_innerksp && !*(void**) innerksp) *(void **) innerksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcredundantgetoperators_ PCREDUNDANTGETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcredundantgetoperators_ pcredundantgetoperators
#endif
PETSC_EXTERN void pcredundantgetoperators_(PC *pc, Mat *mat, Mat *pmat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_pmat = !*(void**) pmat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  CHKFORTRANNULLOBJECT(pmat);
  *ierr = PCRedundantGetOperators(*pc, mat, pmat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
  if (! null_pmat && !*(void**) pmat) *(void **) pmat = (void *)-2;
}
