#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnullspacecreaterigidbody_ MATNULLSPACECREATERIGIDBODY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnullspacecreaterigidbody_ matnullspacecreaterigidbody
#endif
PETSC_EXTERN void matnullspacecreaterigidbody_(Vec *coords, MatNullSpace *sp, PetscErrorCode *ierr)
{
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sp);
  *ierr = MatNullSpaceCreateRigidBody(*coords, sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnullspaceview_ MATNULLSPACEVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnullspaceview_ matnullspaceview
#endif
PETSC_EXTERN void matnullspaceview_(MatNullSpace *sp, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = MatNullSpaceView(*sp, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnullspacecreate_ MATNULLSPACECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnullspacecreate_ matnullspacecreate
#endif
PETSC_EXTERN void matnullspacecreate_(MPI_Fint *comm, PetscBool *has_cnst, PetscInt *n, const Vec vecs[], MatNullSpace *SP, PetscErrorCode *ierr)
{
  PetscBool null_SP = !*(void**) SP ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(SP);
  CHKFORTRANNULLOBJECT(vecs);
  CHKFORTRANNULLOBJECT(SP);
  *ierr = MatNullSpaceCreate(MPI_Comm_f2c(*(comm)), *has_cnst ? PETSC_TRUE : PETSC_FALSE, *n, vecs, SP);
  if (*ierr) return;
  if (! null_SP && !*(void**) SP) *(void **) SP = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnullspacedestroy_ MATNULLSPACEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnullspacedestroy_ matnullspacedestroy
#endif
PETSC_EXTERN void matnullspacedestroy_(MatNullSpace *sp, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(sp);
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sp);
  *ierr = MatNullSpaceDestroy(sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnullspaceremove_ MATNULLSPACEREMOVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnullspaceremove_ matnullspaceremove
#endif
PETSC_EXTERN void matnullspaceremove_(MatNullSpace *sp, Vec *vec, PetscErrorCode *ierr)
{
  *ierr = MatNullSpaceRemove(*sp, *vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnullspacetest_ MATNULLSPACETEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnullspacetest_ matnullspacetest
#endif
PETSC_EXTERN void matnullspacetest_(MatNullSpace *sp, Mat *mat, PetscBool *isNull, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isNull);
  *ierr = MatNullSpaceTest(*sp, *mat, isNull);
  if (*ierr) return;
}
