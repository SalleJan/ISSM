#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesumgetnumsubspaces_ PETSCDUALSPACESUMGETNUMSUBSPACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesumgetnumsubspaces_ petscdualspacesumgetnumsubspaces
#endif
PETSC_EXTERN void petscdualspacesumgetnumsubspaces_(PetscDualSpace *sp, PetscInt *numSumSpaces, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numSumSpaces);
  *ierr = PetscDualSpaceSumGetNumSubspaces(*sp, numSumSpaces);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesumsetnumsubspaces_ PETSCDUALSPACESUMSETNUMSUBSPACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesumsetnumsubspaces_ petscdualspacesumsetnumsubspaces
#endif
PETSC_EXTERN void petscdualspacesumsetnumsubspaces_(PetscDualSpace *sp, PetscInt *numSumSpaces, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSumSetNumSubspaces(*sp, *numSumSpaces);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesumgetconcatenate_ PETSCDUALSPACESUMGETCONCATENATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesumgetconcatenate_ petscdualspacesumgetconcatenate
#endif
PETSC_EXTERN void petscdualspacesumgetconcatenate_(PetscDualSpace *sp, PetscBool *concatenate, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(concatenate);
  *ierr = PetscDualSpaceSumGetConcatenate(*sp, concatenate);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesumsetconcatenate_ PETSCDUALSPACESUMSETCONCATENATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesumsetconcatenate_ petscdualspacesumsetconcatenate
#endif
PETSC_EXTERN void petscdualspacesumsetconcatenate_(PetscDualSpace *sp, PetscBool *concatenate, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSumSetConcatenate(*sp, *concatenate ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesumgetsubspace_ PETSCDUALSPACESUMGETSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesumgetsubspace_ petscdualspacesumgetsubspace
#endif
PETSC_EXTERN void petscdualspacesumgetsubspace_(PetscDualSpace *sp, PetscInt *s, PetscDualSpace *subsp, PetscErrorCode *ierr)
{
  PetscBool null_subsp = !*(void**) subsp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subsp);
  *ierr = PetscDualSpaceSumGetSubspace(*sp, *s, subsp);
  if (*ierr) return;
  if (! null_subsp && !*(void**) subsp) *(void **) subsp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesumsetsubspace_ PETSCDUALSPACESUMSETSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesumsetsubspace_ petscdualspacesumsetsubspace
#endif
PETSC_EXTERN void petscdualspacesumsetsubspace_(PetscDualSpace *sp, PetscInt *s, PetscDualSpace *subsp, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSumSetSubspace(*sp, *s, *subsp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesumsetinterleave_ PETSCDUALSPACESUMSETINTERLEAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesumsetinterleave_ petscdualspacesumsetinterleave
#endif
PETSC_EXTERN void petscdualspacesumsetinterleave_(PetscDualSpace *sp, PetscBool *interleave_basis, PetscBool *interleave_components, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSumSetInterleave(*sp, *interleave_basis ? PETSC_TRUE : PETSC_FALSE, *interleave_components ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesumgetinterleave_ PETSCDUALSPACESUMGETINTERLEAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesumgetinterleave_ petscdualspacesumgetinterleave
#endif
PETSC_EXTERN void petscdualspacesumgetinterleave_(PetscDualSpace *sp, PetscBool *interleave_basis, PetscBool *interleave_components, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(interleave_basis);
  CHKFORTRANNULLBOOL(interleave_components);
  *ierr = PetscDualSpaceSumGetInterleave(*sp, interleave_basis, interleave_components);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacecreatesum_ PETSCDUALSPACECREATESUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacecreatesum_ petscdualspacecreatesum
#endif
PETSC_EXTERN void petscdualspacecreatesum_(PetscInt *numSubspaces, const PetscDualSpace subspaces[], PetscBool *concatenate, PetscDualSpace *sumSpace, PetscErrorCode *ierr)
{
  PetscBool null_sumSpace = !*(void**) sumSpace ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subspaces);
  CHKFORTRANNULLOBJECT(sumSpace);
  *ierr = PetscDualSpaceCreateSum(*numSubspaces, subspaces, *concatenate ? PETSC_TRUE : PETSC_FALSE, sumSpace);
  if (*ierr) return;
  if (! null_sumSpace && !*(void**) sumSpace) *(void **) sumSpace = (void *)-2;
}
