#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetcolumnvector_ MATGETCOLUMNVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetcolumnvector_ matgetcolumnvector
#endif
PETSC_EXTERN void matgetcolumnvector_(Mat *A, Vec *yy, PetscInt *col, PetscErrorCode *ierr)
{
  *ierr = MatGetColumnVector(*A, *yy, *col);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetcolumnnorms_ MATGETCOLUMNNORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetcolumnnorms_ matgetcolumnnorms
#endif
PETSC_EXTERN void matgetcolumnnorms_(Mat *A, NormType *type, PetscReal norms[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(norms);
  *ierr = MatGetColumnNorms(*A, *type, norms);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetcolumnsumsrealpart_ MATGETCOLUMNSUMSREALPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetcolumnsumsrealpart_ matgetcolumnsumsrealpart
#endif
PETSC_EXTERN void matgetcolumnsumsrealpart_(Mat *A, PetscReal sums[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(sums);
  *ierr = MatGetColumnSumsRealPart(*A, sums);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetcolumnsumsimaginarypart_ MATGETCOLUMNSUMSIMAGINARYPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetcolumnsumsimaginarypart_ matgetcolumnsumsimaginarypart
#endif
PETSC_EXTERN void matgetcolumnsumsimaginarypart_(Mat *A, PetscReal sums[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(sums);
  *ierr = MatGetColumnSumsImaginaryPart(*A, sums);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetcolumnsums_ MATGETCOLUMNSUMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetcolumnsums_ matgetcolumnsums
#endif
PETSC_EXTERN void matgetcolumnsums_(Mat *A, PetscScalar sums[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(sums);
  *ierr = MatGetColumnSums(*A, sums);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetcolumnmeansrealpart_ MATGETCOLUMNMEANSREALPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetcolumnmeansrealpart_ matgetcolumnmeansrealpart
#endif
PETSC_EXTERN void matgetcolumnmeansrealpart_(Mat *A, PetscReal means[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(means);
  *ierr = MatGetColumnMeansRealPart(*A, means);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetcolumnmeansimaginarypart_ MATGETCOLUMNMEANSIMAGINARYPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetcolumnmeansimaginarypart_ matgetcolumnmeansimaginarypart
#endif
PETSC_EXTERN void matgetcolumnmeansimaginarypart_(Mat *A, PetscReal means[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(means);
  *ierr = MatGetColumnMeansImaginaryPart(*A, means);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetcolumnmeans_ MATGETCOLUMNMEANS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetcolumnmeans_ matgetcolumnmeans
#endif
PETSC_EXTERN void matgetcolumnmeans_(Mat *A, PetscScalar means[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(means);
  *ierr = MatGetColumnMeans(*A, means);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetcolumnreductions_ MATGETCOLUMNREDUCTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetcolumnreductions_ matgetcolumnreductions
#endif
PETSC_EXTERN void matgetcolumnreductions_(Mat *A, PetscInt *type, PetscReal reductions[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(reductions);
  *ierr = MatGetColumnReductions(*A, *type, reductions);
  if (*ierr) return;
}
