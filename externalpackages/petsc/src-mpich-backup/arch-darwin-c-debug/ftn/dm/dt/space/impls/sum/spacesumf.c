#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesumgetnumsubspaces_ PETSCSPACESUMGETNUMSUBSPACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesumgetnumsubspaces_ petscspacesumgetnumsubspaces
#endif
PETSC_EXTERN void petscspacesumgetnumsubspaces_(PetscSpace *sp, PetscInt *numSumSpaces, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numSumSpaces);
  *ierr = PetscSpaceSumGetNumSubspaces(*sp, numSumSpaces);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesumsetnumsubspaces_ PETSCSPACESUMSETNUMSUBSPACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesumsetnumsubspaces_ petscspacesumsetnumsubspaces
#endif
PETSC_EXTERN void petscspacesumsetnumsubspaces_(PetscSpace *sp, PetscInt *numSumSpaces, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceSumSetNumSubspaces(*sp, *numSumSpaces);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesumgetconcatenate_ PETSCSPACESUMGETCONCATENATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesumgetconcatenate_ petscspacesumgetconcatenate
#endif
PETSC_EXTERN void petscspacesumgetconcatenate_(PetscSpace *sp, PetscBool *concatenate, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(concatenate);
  *ierr = PetscSpaceSumGetConcatenate(*sp, concatenate);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesumsetconcatenate_ PETSCSPACESUMSETCONCATENATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesumsetconcatenate_ petscspacesumsetconcatenate
#endif
PETSC_EXTERN void petscspacesumsetconcatenate_(PetscSpace *sp, PetscBool *concatenate, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceSumSetConcatenate(*sp, *concatenate ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesumgetsubspace_ PETSCSPACESUMGETSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesumgetsubspace_ petscspacesumgetsubspace
#endif
PETSC_EXTERN void petscspacesumgetsubspace_(PetscSpace *sp, PetscInt *s, PetscSpace *subsp, PetscErrorCode *ierr)
{
  PetscBool null_subsp = !*(void**) subsp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subsp);
  *ierr = PetscSpaceSumGetSubspace(*sp, *s, subsp);
  if (*ierr) return;
  if (! null_subsp && !*(void**) subsp) *(void **) subsp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesumsetsubspace_ PETSCSPACESUMSETSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesumsetsubspace_ petscspacesumsetsubspace
#endif
PETSC_EXTERN void petscspacesumsetsubspace_(PetscSpace *sp, PetscInt *s, PetscSpace *subsp, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceSumSetSubspace(*sp, *s, *subsp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesumsetinterleave_ PETSCSPACESUMSETINTERLEAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesumsetinterleave_ petscspacesumsetinterleave
#endif
PETSC_EXTERN void petscspacesumsetinterleave_(PetscSpace *sp, PetscBool *interleave_basis, PetscBool *interleave_components, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceSumSetInterleave(*sp, *interleave_basis ? PETSC_TRUE : PETSC_FALSE, *interleave_components ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesumgetinterleave_ PETSCSPACESUMGETINTERLEAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesumgetinterleave_ petscspacesumgetinterleave
#endif
PETSC_EXTERN void petscspacesumgetinterleave_(PetscSpace *sp, PetscBool *interleave_basis, PetscBool *interleave_components, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(interleave_basis);
  CHKFORTRANNULLBOOL(interleave_components);
  *ierr = PetscSpaceSumGetInterleave(*sp, interleave_basis, interleave_components);
  if (*ierr) return;
}
