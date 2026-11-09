#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiadjcreatenonemptysubcommmat_ MATMPIADJCREATENONEMPTYSUBCOMMMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiadjcreatenonemptysubcommmat_ matmpiadjcreatenonemptysubcommmat
#endif
PETSC_EXTERN void matmpiadjcreatenonemptysubcommmat_(Mat *A, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatMPIAdjCreateNonemptySubcommMat(*A, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiadjtoseq_ MATMPIADJTOSEQ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiadjtoseq_ matmpiadjtoseq
#endif
PETSC_EXTERN void matmpiadjtoseq_(Mat *A, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatMPIAdjToSeq(*A, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiadjtoseqrankzero_ MATMPIADJTOSEQRANKZERO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiadjtoseqrankzero_ matmpiadjtoseqrankzero
#endif
PETSC_EXTERN void matmpiadjtoseqrankzero_(Mat *A, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatMPIAdjToSeqRankZero(*A, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiadjsetpreallocation_ MATMPIADJSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiadjsetpreallocation_ matmpiadjsetpreallocation
#endif
PETSC_EXTERN void matmpiadjsetpreallocation_(Mat *B, PetscInt *i, PetscInt *j, PetscInt *values, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLINTEGER(values);
  *ierr = MatMPIAdjSetPreallocation(*B, i, j, values);
  if (*ierr) return;
}
