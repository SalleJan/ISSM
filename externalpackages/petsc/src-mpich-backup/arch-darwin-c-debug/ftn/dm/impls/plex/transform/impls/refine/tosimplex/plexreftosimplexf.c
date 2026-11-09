#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexrefinetosimplexgetreflect_ DMPLEXREFINETOSIMPLEXGETREFLECT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexrefinetosimplexgetreflect_ dmplexrefinetosimplexgetreflect
#endif
PETSC_EXTERN void dmplexrefinetosimplexgetreflect_(DMPlexTransform *tr, PetscBool *reflect, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(reflect);
  *ierr = DMPlexRefineToSimplexGetReflect(*tr, reflect);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexrefinetosimplexsetreflect_ DMPLEXREFINETOSIMPLEXSETREFLECT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexrefinetosimplexsetreflect_ dmplexrefinetosimplexsetreflect
#endif
PETSC_EXTERN void dmplexrefinetosimplexsetreflect_(DMPlexTransform *tr, PetscBool *reflect, PetscErrorCode *ierr)
{
  *ierr = DMPlexRefineToSimplexSetReflect(*tr, *reflect ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
