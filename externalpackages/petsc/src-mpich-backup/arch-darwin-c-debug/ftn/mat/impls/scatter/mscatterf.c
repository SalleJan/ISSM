#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matscattergetvecscatter_ MATSCATTERGETVECSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matscattergetvecscatter_ matscattergetvecscatter
#endif
PETSC_EXTERN void matscattergetvecscatter_(Mat *mat, VecScatter *scatter, PetscErrorCode *ierr)
{
  *ierr = MatScatterGetVecScatter(*mat, scatter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatescatter_ MATCREATESCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatescatter_ matcreatescatter
#endif
PETSC_EXTERN void matcreatescatter_(MPI_Fint *comm, VecScatter *scatter, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateScatter(MPI_Comm_f2c(*(comm)), *scatter, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matscattersetvecscatter_ MATSCATTERSETVECSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matscattersetvecscatter_ matscattersetvecscatter
#endif
PETSC_EXTERN void matscattersetvecscatter_(Mat *mat, VecScatter *scatter, PetscErrorCode *ierr)
{
  *ierr = MatScatterSetVecScatter(*mat, *scatter);
  if (*ierr) return;
}
