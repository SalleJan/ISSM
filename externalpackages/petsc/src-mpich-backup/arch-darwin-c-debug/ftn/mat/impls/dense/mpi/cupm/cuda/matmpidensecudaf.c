#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatedensecuda_ MATCREATEDENSECUDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatedensecuda_ matcreatedensecuda
#endif
PETSC_EXTERN void matcreatedensecuda_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscScalar *data, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(data);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateDenseCUDA(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, data, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensecudaplacearray_ MATDENSECUDAPLACEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensecudaplacearray_ matdensecudaplacearray
#endif
PETSC_EXTERN void matdensecudaplacearray_(Mat *mat, const PetscScalar *array, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = MatDenseCUDAPlaceArray(*mat, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensecudaresetarray_ MATDENSECUDARESETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensecudaresetarray_ matdensecudaresetarray
#endif
PETSC_EXTERN void matdensecudaresetarray_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatDenseCUDAResetArray(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensecudareplacearray_ MATDENSECUDAREPLACEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensecudareplacearray_ matdensecudareplacearray
#endif
PETSC_EXTERN void matdensecudareplacearray_(Mat *mat, const PetscScalar *array, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = MatDenseCUDAReplaceArray(*mat, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensecudasetpreallocation_ MATDENSECUDASETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensecudasetpreallocation_ matdensecudasetpreallocation
#endif
PETSC_EXTERN void matdensecudasetpreallocation_(Mat *A, PetscScalar *device_array, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(device_array);
  *ierr = MatDenseCUDASetPreallocation(*A, device_array);
  if (*ierr) return;
}
