#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagcreateisfromstencils_ DMSTAGCREATEISFROMSTENCILS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagcreateisfromstencils_ dmstagcreateisfromstencils
#endif
PETSC_EXTERN void dmstagcreateisfromstencils_(DM *dm, PetscInt *n_stencil, DMStagStencil stencils[], IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = DMStagCreateISFromStencils(*dm, *n_stencil, stencils, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetlocationdof_ DMSTAGGETLOCATIONDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetlocationdof_ dmstaggetlocationdof
#endif
PETSC_EXTERN void dmstaggetlocationdof_(DM *dm, DMStagStencilLocation *loc, PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof);
  *ierr = DMStagGetLocationDOF(*dm, *loc, dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagmatgetvaluesstencil_ DMSTAGMATGETVALUESSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagmatgetvaluesstencil_ dmstagmatgetvaluesstencil
#endif
PETSC_EXTERN void dmstagmatgetvaluesstencil_(DM *dm, Mat *mat, PetscInt *nRow, const DMStagStencil *posRow, PetscInt *nCol, const DMStagStencil *posCol, PetscScalar *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(val);
  *ierr = DMStagMatGetValuesStencil(*dm, *mat, *nRow, posRow, *nCol, posCol, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagmatsetvaluesstencil_ DMSTAGMATSETVALUESSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagmatsetvaluesstencil_ dmstagmatsetvaluesstencil
#endif
PETSC_EXTERN void dmstagmatsetvaluesstencil_(DM *dm, Mat *mat, PetscInt *nRow, const DMStagStencil *posRow, PetscInt *nCol, const DMStagStencil *posCol, const PetscScalar *val, InsertMode *insertMode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(val);
  *ierr = DMStagMatSetValuesStencil(*dm, *mat, *nRow, posRow, *nCol, posCol, val, *insertMode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagstenciltoindexlocal_ DMSTAGSTENCILTOINDEXLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagstenciltoindexlocal_ dmstagstenciltoindexlocal
#endif
PETSC_EXTERN void dmstagstenciltoindexlocal_(DM *dm, PetscInt *dim, PetscInt *n, const DMStagStencil *pos, PetscInt *ix, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ix);
  *ierr = DMStagStencilToIndexLocal(*dm, *dim, *n, pos, ix);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagvecgetvaluesstencil_ DMSTAGVECGETVALUESSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagvecgetvaluesstencil_ dmstagvecgetvaluesstencil
#endif
PETSC_EXTERN void dmstagvecgetvaluesstencil_(DM *dm, Vec *vec, PetscInt *n, const DMStagStencil *pos, PetscScalar *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(val);
  *ierr = DMStagVecGetValuesStencil(*dm, *vec, *n, pos, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagvecsetvaluesstencil_ DMSTAGVECSETVALUESSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagvecsetvaluesstencil_ dmstagvecsetvaluesstencil
#endif
PETSC_EXTERN void dmstagvecsetvaluesstencil_(DM *dm, Vec *vec, PetscInt *n, const DMStagStencil *pos, const PetscScalar *val, InsertMode *insertMode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(val);
  *ierr = DMStagVecSetValuesStencil(*dm, *vec, *n, pos, val, *insertMode);
  if (*ierr) return;
}
