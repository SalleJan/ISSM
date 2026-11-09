#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreatempiwitharray_ VECCREATEMPIWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreatempiwitharray_ veccreatempiwitharray
#endif
PETSC_EXTERN void veccreatempiwitharray_(MPI_Fint *comm, PetscInt *bs, PetscInt *n, PetscInt *M_N, const PetscScalar array[], Vec *vv, PetscErrorCode *ierr)
{
  PetscBool null_vv = !*(void**) vv ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(array);
  CHKFORTRANNULLOBJECT(vv);
  *ierr = VecCreateMPIWithArray(MPI_Comm_f2c(*(comm)), *bs, *n, *M_N, array, vv);
  if (*ierr) return;
  if (! null_vv && !*(void**) vv) *(void **) vv = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreateghostwitharray_ VECCREATEGHOSTWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreateghostwitharray_ veccreateghostwitharray
#endif
PETSC_EXTERN void veccreateghostwitharray_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, PetscInt *nghost, const PetscInt ghosts[], const PetscScalar array[], Vec *vv, PetscErrorCode *ierr)
{
  PetscBool null_vv = !*(void**) vv ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(ghosts);
  CHKFORTRANNULLSCALAR(array);
  CHKFORTRANNULLOBJECT(vv);
  *ierr = VecCreateGhostWithArray(MPI_Comm_f2c(*(comm)), *n, *M_N, *nghost, ghosts, array, vv);
  if (*ierr) return;
  if (! null_vv && !*(void**) vv) *(void **) vv = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecghostgetghostis_ VECGHOSTGETGHOSTIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecghostgetghostis_ vecghostgetghostis
#endif
PETSC_EXTERN void vecghostgetghostis_(Vec *X, IS *ghost, PetscErrorCode *ierr)
{
  PetscBool null_ghost = !*(void**) ghost ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ghost);
  *ierr = VecGhostGetGhostIS(*X, ghost);
  if (*ierr) return;
  if (! null_ghost && !*(void**) ghost) *(void **) ghost = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreateghost_ VECCREATEGHOST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreateghost_ veccreateghost
#endif
PETSC_EXTERN void veccreateghost_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, PetscInt *nghost, const PetscInt ghosts[], Vec *vv, PetscErrorCode *ierr)
{
  PetscBool null_vv = !*(void**) vv ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(ghosts);
  CHKFORTRANNULLOBJECT(vv);
  *ierr = VecCreateGhost(MPI_Comm_f2c(*(comm)), *n, *M_N, *nghost, ghosts, vv);
  if (*ierr) return;
  if (! null_vv && !*(void**) vv) *(void **) vv = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmpisetghost_ VECMPISETGHOST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmpisetghost_ vecmpisetghost
#endif
PETSC_EXTERN void vecmpisetghost_(Vec *vv, PetscInt *nghost, const PetscInt ghosts[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ghosts);
  *ierr = VecMPISetGhost(*vv, *nghost, ghosts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreateghostblockwitharray_ VECCREATEGHOSTBLOCKWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreateghostblockwitharray_ veccreateghostblockwitharray
#endif
PETSC_EXTERN void veccreateghostblockwitharray_(MPI_Fint *comm, PetscInt *bs, PetscInt *n, PetscInt *M_N, PetscInt *nghost, const PetscInt ghosts[], const PetscScalar array[], Vec *vv, PetscErrorCode *ierr)
{
  PetscBool null_vv = !*(void**) vv ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(ghosts);
  CHKFORTRANNULLSCALAR(array);
  CHKFORTRANNULLOBJECT(vv);
  *ierr = VecCreateGhostBlockWithArray(MPI_Comm_f2c(*(comm)), *bs, *n, *M_N, *nghost, ghosts, array, vv);
  if (*ierr) return;
  if (! null_vv && !*(void**) vv) *(void **) vv = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreateghostblock_ VECCREATEGHOSTBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreateghostblock_ veccreateghostblock
#endif
PETSC_EXTERN void veccreateghostblock_(MPI_Fint *comm, PetscInt *bs, PetscInt *n, PetscInt *M_N, PetscInt *nghost, const PetscInt ghosts[], Vec *vv, PetscErrorCode *ierr)
{
  PetscBool null_vv = !*(void**) vv ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(ghosts);
  CHKFORTRANNULLOBJECT(vv);
  *ierr = VecCreateGhostBlock(MPI_Comm_f2c(*(comm)), *bs, *n, *M_N, *nghost, ghosts, vv);
  if (*ierr) return;
  if (! null_vv && !*(void**) vv) *(void **) vv = (void *)-2;
}
