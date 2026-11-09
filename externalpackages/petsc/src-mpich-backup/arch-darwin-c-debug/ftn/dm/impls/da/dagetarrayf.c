#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecgetarray_ DMDAVECGETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecgetarray_ dmdavecgetarray
#endif
PETSC_EXTERN void dmdavecgetarray_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecGetArray(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecrestorearray_ DMDAVECRESTOREARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecrestorearray_ dmdavecrestorearray
#endif
PETSC_EXTERN void dmdavecrestorearray_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecRestoreArray(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecgetarraywrite_ DMDAVECGETARRAYWRITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecgetarraywrite_ dmdavecgetarraywrite
#endif
PETSC_EXTERN void dmdavecgetarraywrite_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecGetArrayWrite(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecrestorearraywrite_ DMDAVECRESTOREARRAYWRITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecrestorearraywrite_ dmdavecrestorearraywrite
#endif
PETSC_EXTERN void dmdavecrestorearraywrite_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecRestoreArrayWrite(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecgetarraydof_ DMDAVECGETARRAYDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecgetarraydof_ dmdavecgetarraydof
#endif
PETSC_EXTERN void dmdavecgetarraydof_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecGetArrayDOF(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecrestorearraydof_ DMDAVECRESTOREARRAYDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecrestorearraydof_ dmdavecrestorearraydof
#endif
PETSC_EXTERN void dmdavecrestorearraydof_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecRestoreArrayDOF(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecgetarrayread_ DMDAVECGETARRAYREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecgetarrayread_ dmdavecgetarrayread
#endif
PETSC_EXTERN void dmdavecgetarrayread_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecGetArrayRead(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecrestorearrayread_ DMDAVECRESTOREARRAYREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecrestorearrayread_ dmdavecrestorearrayread
#endif
PETSC_EXTERN void dmdavecrestorearrayread_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecRestoreArrayRead(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecgetarraydofread_ DMDAVECGETARRAYDOFREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecgetarraydofread_ dmdavecgetarraydofread
#endif
PETSC_EXTERN void dmdavecgetarraydofread_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecGetArrayDOFRead(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecrestorearraydofread_ DMDAVECRESTOREARRAYDOFREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecrestorearraydofread_ dmdavecrestorearraydofread
#endif
PETSC_EXTERN void dmdavecrestorearraydofread_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecRestoreArrayDOFRead(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecgetarraydofwrite_ DMDAVECGETARRAYDOFWRITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecgetarraydofwrite_ dmdavecgetarraydofwrite
#endif
PETSC_EXTERN void dmdavecgetarraydofwrite_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecGetArrayDOFWrite(*da, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavecrestorearraydofwrite_ DMDAVECRESTOREARRAYDOFWRITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavecrestorearraydofwrite_ dmdavecrestorearraydofwrite
#endif
PETSC_EXTERN void dmdavecrestorearraydofwrite_(DM *da, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMDAVecRestoreArrayDOFWrite(*da, *vec, array);
  if (*ierr) return;
}
