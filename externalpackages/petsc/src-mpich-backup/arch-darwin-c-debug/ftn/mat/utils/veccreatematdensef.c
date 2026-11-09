#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatedensefromvectype_ MATCREATEDENSEFROMVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatedensefromvectype_ matcreatedensefromvectype
#endif
PETSC_EXTERN void matcreatedensefromvectype_(MPI_Fint *comm, char *vtype, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscInt *lda, PetscScalar *data, Mat *A, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_vtype)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  char* c_vtype;
  FIXCHAR(vtype, l_vtype, c_vtype);
  CHKFORTRANNULLSCALAR(data);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateDenseFromVecType(MPI_Comm_f2c(*(comm)), c_vtype, *m, *n, *M_M, *M_N, *lda, data, A);
  if (*ierr) return;
  FREECHAR(vtype, c_vtype);
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatedensewithmemtype_ MATCREATEDENSEWITHMEMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatedensewithmemtype_ matcreatedensewithmemtype
#endif
PETSC_EXTERN void matcreatedensewithmemtype_(MPI_Fint *comm, PetscMemType *mtype, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscInt *lda, PetscScalar *data, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(data);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateDenseWithMemType(MPI_Comm_f2c(*(comm)), *mtype, *m, *n, *M_M, *M_N, *lda, data, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
