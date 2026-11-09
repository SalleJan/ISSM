#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsckdtreedestroy_ PETSCKDTREEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsckdtreedestroy_ petsckdtreedestroy
#endif
PETSC_EXTERN void petsckdtreedestroy_(PetscKDTree *tree, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(tree);
  PetscBool null_tree = !*(void**) tree ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tree);
  *ierr = PetscKDTreeDestroy(tree);
  if (*ierr) return;
  if (! null_tree && !*(void**) tree) *(void **) tree = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsckdtreecreate_ PETSCKDTREECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsckdtreecreate_ petsckdtreecreate
#endif
PETSC_EXTERN void petsckdtreecreate_(PetscCount *num_coords, PetscInt *dim, const PetscReal coords[], PetscCopyMode *copy_mode, PetscInt *max_bucket_size, PetscKDTree *new_tree, PetscErrorCode *ierr)
{
  PetscBool null_new_tree = !*(void**) new_tree ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(new_tree);
  CHKFORTRANNULLREAL(coords);
  CHKFORTRANNULLOBJECT(new_tree);
  *ierr = PetscKDTreeCreate(*num_coords, *dim, coords, *copy_mode, *max_bucket_size, new_tree);
  if (*ierr) return;
  if (! null_new_tree && !*(void**) new_tree) *(void **) new_tree = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsckdtreequerypointsnearestneighbor_ PETSCKDTREEQUERYPOINTSNEARESTNEIGHBOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsckdtreequerypointsnearestneighbor_ petsckdtreequerypointsnearestneighbor
#endif
PETSC_EXTERN void petsckdtreequerypointsnearestneighbor_(PetscKDTree *tree, PetscCount *num_points, const PetscReal points[], PetscReal *tolerance, PetscCount indices[], PetscReal distances[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(points);
  CHKFORTRANNULLREAL(distances);
  *ierr = PetscKDTreeQueryPointsNearestNeighbor(*tree, *num_points, points, *tolerance, indices, distances);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsckdtreeview_ PETSCKDTREEVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsckdtreeview_ petsckdtreeview
#endif
PETSC_EXTERN void petsckdtreeview_(PetscKDTree *tree, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscKDTreeView(*tree, v_viewer);
  if (*ierr) return;
}
