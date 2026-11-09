#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecnestgetsubvec_ VECNESTGETSUBVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecnestgetsubvec_ vecnestgetsubvec
#endif
PETSC_EXTERN void vecnestgetsubvec_(Vec *X, PetscInt *idxm, Vec *sx, PetscErrorCode *ierr)
{
  PetscBool null_sx = !*(void**) sx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sx);
  *ierr = VecNestGetSubVec(*X, *idxm, sx);
  if (*ierr) return;
  if (! null_sx && !*(void**) sx) *(void **) sx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecnestsetsubvec_ VECNESTSETSUBVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecnestsetsubvec_ vecnestsetsubvec
#endif
PETSC_EXTERN void vecnestsetsubvec_(Vec *X, PetscInt *idxm, Vec *sx, PetscErrorCode *ierr)
{
  *ierr = VecNestSetSubVec(*X, *idxm, *sx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecnestsetsubvecs_ VECNESTSETSUBVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecnestsetsubvecs_ vecnestsetsubvecs
#endif
PETSC_EXTERN void vecnestsetsubvecs_(Vec *X, PetscInt *N, PetscInt idxm[], Vec sx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idxm);
  CHKFORTRANNULLOBJECT(sx);
  *ierr = VecNestSetSubVecs(*X, *N, idxm, sx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecnestgetsize_ VECNESTGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecnestgetsize_ vecnestgetsize
#endif
PETSC_EXTERN void vecnestgetsize_(Vec *X, PetscInt *N, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(N);
  *ierr = VecNestGetSize(*X, N);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreatenest_ VECCREATENEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreatenest_ veccreatenest
#endif
PETSC_EXTERN void veccreatenest_(MPI_Fint *comm, PetscInt *nb, IS is[], Vec x[], Vec *Y, PetscErrorCode *ierr)
{
  PetscBool null_Y = !*(void**) Y ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  CHKFORTRANNULLOBJECT(x);
  CHKFORTRANNULLOBJECT(Y);
  *ierr = VecCreateNest(MPI_Comm_f2c(*(comm)), *nb, is, x, Y);
  if (*ierr) return;
  if (! null_Y && !*(void**) Y) *(void **) Y = (void *)-2;
}
