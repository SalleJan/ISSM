#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformcohesiveextrudegettensor_ DMPLEXTRANSFORMCOHESIVEEXTRUDEGETTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformcohesiveextrudegettensor_ dmplextransformcohesiveextrudegettensor
#endif
PETSC_EXTERN void dmplextransformcohesiveextrudegettensor_(DMPlexTransform *tr, PetscBool *useTensor, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(useTensor);
  *ierr = DMPlexTransformCohesiveExtrudeGetTensor(*tr, useTensor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformcohesiveextrudesettensor_ DMPLEXTRANSFORMCOHESIVEEXTRUDESETTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformcohesiveextrudesettensor_ dmplextransformcohesiveextrudesettensor
#endif
PETSC_EXTERN void dmplextransformcohesiveextrudesettensor_(DMPlexTransform *tr, PetscBool *useTensor, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformCohesiveExtrudeSetTensor(*tr, *useTensor ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformcohesiveextrudegetwidth_ DMPLEXTRANSFORMCOHESIVEEXTRUDEGETWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformcohesiveextrudegetwidth_ dmplextransformcohesiveextrudegetwidth
#endif
PETSC_EXTERN void dmplextransformcohesiveextrudegetwidth_(DMPlexTransform *tr, PetscReal *width, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(width);
  *ierr = DMPlexTransformCohesiveExtrudeGetWidth(*tr, width);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformcohesiveextrudesetwidth_ DMPLEXTRANSFORMCOHESIVEEXTRUDESETWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformcohesiveextrudesetwidth_ dmplextransformcohesiveextrudesetwidth
#endif
PETSC_EXTERN void dmplextransformcohesiveextrudesetwidth_(DMPlexTransform *tr, PetscReal *width, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformCohesiveExtrudeSetWidth(*tr, *width);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformcohesiveextrudegetunsplit_ DMPLEXTRANSFORMCOHESIVEEXTRUDEGETUNSPLIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformcohesiveextrudegetunsplit_ dmplextransformcohesiveextrudegetunsplit
#endif
PETSC_EXTERN void dmplextransformcohesiveextrudegetunsplit_(DMPlexTransform *tr, DMLabel *unsplit, PetscErrorCode *ierr)
{
  PetscBool null_unsplit = !*(void**) unsplit ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(unsplit);
  *ierr = DMPlexTransformCohesiveExtrudeGetUnsplit(*tr, unsplit);
  if (*ierr) return;
  if (! null_unsplit && !*(void**) unsplit) *(void **) unsplit = (void *)-2;
}
