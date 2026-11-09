#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudegetlayers_ DMPLEXTRANSFORMEXTRUDEGETLAYERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudegetlayers_ dmplextransformextrudegetlayers
#endif
PETSC_EXTERN void dmplextransformextrudegetlayers_(DMPlexTransform *tr, PetscInt *layers, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(layers);
  *ierr = DMPlexTransformExtrudeGetLayers(*tr, layers);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudesetlayers_ DMPLEXTRANSFORMEXTRUDESETLAYERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudesetlayers_ dmplextransformextrudesetlayers
#endif
PETSC_EXTERN void dmplextransformextrudesetlayers_(DMPlexTransform *tr, PetscInt *layers, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformExtrudeSetLayers(*tr, *layers);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudegetthickness_ DMPLEXTRANSFORMEXTRUDEGETTHICKNESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudegetthickness_ dmplextransformextrudegetthickness
#endif
PETSC_EXTERN void dmplextransformextrudegetthickness_(DMPlexTransform *tr, PetscReal *thickness, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(thickness);
  *ierr = DMPlexTransformExtrudeGetThickness(*tr, thickness);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudesetthickness_ DMPLEXTRANSFORMEXTRUDESETTHICKNESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudesetthickness_ dmplextransformextrudesetthickness
#endif
PETSC_EXTERN void dmplextransformextrudesetthickness_(DMPlexTransform *tr, PetscReal *thickness, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformExtrudeSetThickness(*tr, *thickness);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudegettensor_ DMPLEXTRANSFORMEXTRUDEGETTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudegettensor_ dmplextransformextrudegettensor
#endif
PETSC_EXTERN void dmplextransformextrudegettensor_(DMPlexTransform *tr, PetscBool *useTensor, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(useTensor);
  *ierr = DMPlexTransformExtrudeGetTensor(*tr, useTensor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudesettensor_ DMPLEXTRANSFORMEXTRUDESETTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudesettensor_ dmplextransformextrudesettensor
#endif
PETSC_EXTERN void dmplextransformextrudesettensor_(DMPlexTransform *tr, PetscBool *useTensor, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformExtrudeSetTensor(*tr, *useTensor ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudegetsymmetric_ DMPLEXTRANSFORMEXTRUDEGETSYMMETRIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudegetsymmetric_ dmplextransformextrudegetsymmetric
#endif
PETSC_EXTERN void dmplextransformextrudegetsymmetric_(DMPlexTransform *tr, PetscBool *symmetric, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(symmetric);
  *ierr = DMPlexTransformExtrudeGetSymmetric(*tr, symmetric);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudesetsymmetric_ DMPLEXTRANSFORMEXTRUDESETSYMMETRIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudesetsymmetric_ dmplextransformextrudesetsymmetric
#endif
PETSC_EXTERN void dmplextransformextrudesetsymmetric_(DMPlexTransform *tr, PetscBool *symmetric, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformExtrudeSetSymmetric(*tr, *symmetric ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudegetperiodic_ DMPLEXTRANSFORMEXTRUDEGETPERIODIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudegetperiodic_ dmplextransformextrudegetperiodic
#endif
PETSC_EXTERN void dmplextransformextrudegetperiodic_(DMPlexTransform *tr, PetscBool *periodic, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(periodic);
  *ierr = DMPlexTransformExtrudeGetPeriodic(*tr, periodic);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudesetperiodic_ DMPLEXTRANSFORMEXTRUDESETPERIODIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudesetperiodic_ dmplextransformextrudesetperiodic
#endif
PETSC_EXTERN void dmplextransformextrudesetperiodic_(DMPlexTransform *tr, PetscBool *periodic, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformExtrudeSetPeriodic(*tr, *periodic ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudegetnormal_ DMPLEXTRANSFORMEXTRUDEGETNORMAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudegetnormal_ dmplextransformextrudegetnormal
#endif
PETSC_EXTERN void dmplextransformextrudegetnormal_(DMPlexTransform *tr, PetscReal normal[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(normal);
  *ierr = DMPlexTransformExtrudeGetNormal(*tr, normal);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudesetnormal_ DMPLEXTRANSFORMEXTRUDESETNORMAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudesetnormal_ dmplextransformextrudesetnormal
#endif
PETSC_EXTERN void dmplextransformextrudesetnormal_(DMPlexTransform *tr, const PetscReal normal[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(normal);
  *ierr = DMPlexTransformExtrudeSetNormal(*tr, normal);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformextrudesetthicknesses_ DMPLEXTRANSFORMEXTRUDESETTHICKNESSES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformextrudesetthicknesses_ dmplextransformextrudesetthicknesses
#endif
PETSC_EXTERN void dmplextransformextrudesetthicknesses_(DMPlexTransform *tr, PetscInt *Nth, const PetscReal thicknesses[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(thicknesses);
  *ierr = DMPlexTransformExtrudeSetThicknesses(*tr, *Nth, thicknesses);
  if (*ierr) return;
}
