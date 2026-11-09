#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqsellsetpreallocation_ MATSEQSELLSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqsellsetpreallocation_ matseqsellsetpreallocation
#endif
PETSC_EXTERN void matseqsellsetpreallocation_(Mat *B, PetscInt *rlenmax, const PetscInt rlen[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rlen);
  *ierr = MatSeqSELLSetPreallocation(*B, *rlenmax, rlen);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqsellgetfillratio_ MATSEQSELLGETFILLRATIO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqsellgetfillratio_ matseqsellgetfillratio
#endif
PETSC_EXTERN void matseqsellgetfillratio_(Mat *A, PetscReal *ratio, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(ratio);
  *ierr = MatSeqSELLGetFillRatio(*A, ratio);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqsellgetmaxslicewidth_ MATSEQSELLGETMAXSLICEWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqsellgetmaxslicewidth_ matseqsellgetmaxslicewidth
#endif
PETSC_EXTERN void matseqsellgetmaxslicewidth_(Mat *A, PetscInt *slicewidth, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(slicewidth);
  *ierr = MatSeqSELLGetMaxSliceWidth(*A, slicewidth);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqsellgetavgslicewidth_ MATSEQSELLGETAVGSLICEWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqsellgetavgslicewidth_ matseqsellgetavgslicewidth
#endif
PETSC_EXTERN void matseqsellgetavgslicewidth_(Mat *A, PetscReal *slicewidth, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(slicewidth);
  *ierr = MatSeqSELLGetAvgSliceWidth(*A, slicewidth);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqsellsetsliceheight_ MATSEQSELLSETSLICEHEIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqsellsetsliceheight_ matseqsellsetsliceheight
#endif
PETSC_EXTERN void matseqsellsetsliceheight_(Mat *A, PetscInt *sliceheight, PetscErrorCode *ierr)
{
  *ierr = MatSeqSELLSetSliceHeight(*A, *sliceheight);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqsellgetvarslicesize_ MATSEQSELLGETVARSLICESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqsellgetvarslicesize_ matseqsellgetvarslicesize
#endif
PETSC_EXTERN void matseqsellgetvarslicesize_(Mat *A, PetscReal *variance, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(variance);
  *ierr = MatSeqSELLGetVarSliceSize(*A, variance);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqsell_ MATCREATESEQSELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqsell_ matcreateseqsell
#endif
PETSC_EXTERN void matcreateseqsell_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *rlenmax, const PetscInt rlen[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(rlen);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqSELL(MPI_Comm_f2c(*(comm)), *m, *n, *rlenmax, rlen, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
