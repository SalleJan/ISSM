#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatedensehip_ MATCREATEDENSEHIP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatedensehip_ matcreatedensehip
#endif
PETSC_EXTERN void matcreatedensehip_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscScalar *data, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(data);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateDenseHIP(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, data, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensehipplacearray_ MATDENSEHIPPLACEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensehipplacearray_ matdensehipplacearray
#endif
PETSC_EXTERN void matdensehipplacearray_(Mat *mat, const PetscScalar *array, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = MatDenseHIPPlaceArray(*mat, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensehipresetarray_ MATDENSEHIPRESETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensehipresetarray_ matdensehipresetarray
#endif
PETSC_EXTERN void matdensehipresetarray_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatDenseHIPResetArray(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensehipreplacearray_ MATDENSEHIPREPLACEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensehipreplacearray_ matdensehipreplacearray
#endif
PETSC_EXTERN void matdensehipreplacearray_(Mat *mat, const PetscScalar *array, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = MatDenseHIPReplaceArray(*mat, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensehipsetpreallocation_ MATDENSEHIPSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensehipsetpreallocation_ matdensehipsetpreallocation
#endif
PETSC_EXTERN void matdensehipsetpreallocation_(Mat *A, PetscScalar *device_array, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(device_array);
  *ierr = MatDenseHIPSetPreallocation(*A, device_array);
  if (*ierr) return;
}
