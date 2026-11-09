#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatelmvmdqn_ MATCREATELMVMDQN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatelmvmdqn_ matcreatelmvmdqn
#endif
PETSC_EXTERN void matcreatelmvmdqn_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatCreateLMVMDQN(MPI_Comm_f2c(*(comm)), *n, *M_N, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatelmvmdbfgs_ MATCREATELMVMDBFGS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatelmvmdbfgs_ matcreatelmvmdbfgs
#endif
PETSC_EXTERN void matcreatelmvmdbfgs_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatCreateLMVMDBFGS(MPI_Comm_f2c(*(comm)), *n, *M_N, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatelmvmddfp_ MATCREATELMVMDDFP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatelmvmddfp_ matcreatelmvmddfp
#endif
PETSC_EXTERN void matcreatelmvmddfp_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatCreateLMVMDDFP(MPI_Comm_f2c(*(comm)), *n, *M_N, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmdensesettype_ MATLMVMDENSESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmdensesettype_ matlmvmdensesettype
#endif
PETSC_EXTERN void matlmvmdensesettype_(Mat *B, MatLMVMDenseType *type, PetscErrorCode *ierr)
{
  *ierr = MatLMVMDenseSetType(*B, *type);
  if (*ierr) return;
}
