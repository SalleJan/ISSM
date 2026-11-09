#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetpointlocal_ DMPLEXGETPOINTLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetpointlocal_ dmplexgetpointlocal
#endif
PETSC_EXTERN void dmplexgetpointlocal_(DM *dm, PetscInt *point, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = DMPlexGetPointLocal(*dm, *point, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointlocalread_ DMPLEXPOINTLOCALREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointlocalread_ dmplexpointlocalread
#endif
PETSC_EXTERN void dmplexpointlocalread_(DM *dm, PetscInt *point, const PetscScalar *array, void *ptr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = DMPlexPointLocalRead(*dm, *point, array, ptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointlocalref_ DMPLEXPOINTLOCALREF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointlocalref_ dmplexpointlocalref
#endif
PETSC_EXTERN void dmplexpointlocalref_(DM *dm, PetscInt *point, PetscScalar *array, void *ptr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = DMPlexPointLocalRef(*dm, *point, array, ptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetpointlocalfield_ DMPLEXGETPOINTLOCALFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetpointlocalfield_ dmplexgetpointlocalfield
#endif
PETSC_EXTERN void dmplexgetpointlocalfield_(DM *dm, PetscInt *point, PetscInt *field, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = DMPlexGetPointLocalField(*dm, *point, *field, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointlocalfieldread_ DMPLEXPOINTLOCALFIELDREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointlocalfieldread_ dmplexpointlocalfieldread
#endif
PETSC_EXTERN void dmplexpointlocalfieldread_(DM *dm, PetscInt *point, PetscInt *field, const PetscScalar *array, void *ptr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = DMPlexPointLocalFieldRead(*dm, *point, *field, array, ptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointlocalfieldref_ DMPLEXPOINTLOCALFIELDREF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointlocalfieldref_ dmplexpointlocalfieldref
#endif
PETSC_EXTERN void dmplexpointlocalfieldref_(DM *dm, PetscInt *point, PetscInt *field, PetscScalar *array, void *ptr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = DMPlexPointLocalFieldRef(*dm, *point, *field, array, ptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetpointglobal_ DMPLEXGETPOINTGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetpointglobal_ dmplexgetpointglobal
#endif
PETSC_EXTERN void dmplexgetpointglobal_(DM *dm, PetscInt *point, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = DMPlexGetPointGlobal(*dm, *point, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointglobalread_ DMPLEXPOINTGLOBALREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointglobalread_ dmplexpointglobalread
#endif
PETSC_EXTERN void dmplexpointglobalread_(DM *dm, PetscInt *point, const PetscScalar *array, const void *ptr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = DMPlexPointGlobalRead(*dm, *point, array, ptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointglobalref_ DMPLEXPOINTGLOBALREF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointglobalref_ dmplexpointglobalref
#endif
PETSC_EXTERN void dmplexpointglobalref_(DM *dm, PetscInt *point, PetscScalar *array, void *ptr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = DMPlexPointGlobalRef(*dm, *point, array, ptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetpointglobalfield_ DMPLEXGETPOINTGLOBALFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetpointglobalfield_ dmplexgetpointglobalfield
#endif
PETSC_EXTERN void dmplexgetpointglobalfield_(DM *dm, PetscInt *point, PetscInt *field, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = DMPlexGetPointGlobalField(*dm, *point, *field, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointglobalfieldread_ DMPLEXPOINTGLOBALFIELDREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointglobalfieldread_ dmplexpointglobalfieldread
#endif
PETSC_EXTERN void dmplexpointglobalfieldread_(DM *dm, PetscInt *point, PetscInt *field, const PetscScalar *array, void *ptr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = DMPlexPointGlobalFieldRead(*dm, *point, *field, array, ptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointglobalfieldref_ DMPLEXPOINTGLOBALFIELDREF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointglobalfieldref_ dmplexpointglobalfieldref
#endif
PETSC_EXTERN void dmplexpointglobalfieldref_(DM *dm, PetscInt *point, PetscInt *field, PetscScalar *array, void *ptr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = DMPlexPointGlobalFieldRef(*dm, *point, *field, array, ptr);
  if (*ierr) return;
}
