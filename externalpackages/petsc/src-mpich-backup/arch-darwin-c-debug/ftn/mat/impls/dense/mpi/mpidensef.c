#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensegetlocalmatrix_ MATDENSEGETLOCALMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensegetlocalmatrix_ matdensegetlocalmatrix
#endif
PETSC_EXTERN void matdensegetlocalmatrix_(Mat *A, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatDenseGetLocalMatrix(*A, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpidensesetpreallocation_ MATMPIDENSESETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpidensesetpreallocation_ matmpidensesetpreallocation
#endif
PETSC_EXTERN void matmpidensesetpreallocation_(Mat *B, PetscScalar *data, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(data);
  *ierr = MatMPIDenseSetPreallocation(*B, data);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdenseplacearray_ MATDENSEPLACEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdenseplacearray_ matdenseplacearray
#endif
PETSC_EXTERN void matdenseplacearray_(Mat *mat, const PetscScalar *array, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = MatDensePlaceArray(*mat, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdenseresetarray_ MATDENSERESETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdenseresetarray_ matdenseresetarray
#endif
PETSC_EXTERN void matdenseresetarray_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatDenseResetArray(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensereplacearray_ MATDENSEREPLACEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensereplacearray_ matdensereplacearray
#endif
PETSC_EXTERN void matdensereplacearray_(Mat *mat, const PetscScalar *array, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = MatDenseReplaceArray(*mat, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatedense_ MATCREATEDENSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatedense_ matcreatedense
#endif
PETSC_EXTERN void matcreatedense_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscScalar data[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(data);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateDense(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, data, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
