#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmultequal_ MATMULTEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmultequal_ matmultequal
#endif
PETSC_EXTERN void matmultequal_(Mat *A, Mat *B, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatMultEqual(*A, *B, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmultaddequal_ MATMULTADDEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmultaddequal_ matmultaddequal
#endif
PETSC_EXTERN void matmultaddequal_(Mat *A, Mat *B, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatMultAddEqual(*A, *B, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmulttransposeequal_ MATMULTTRANSPOSEEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmulttransposeequal_ matmulttransposeequal
#endif
PETSC_EXTERN void matmulttransposeequal_(Mat *A, Mat *B, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatMultTransposeEqual(*A, *B, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmulttransposeaddequal_ MATMULTTRANSPOSEADDEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmulttransposeaddequal_ matmulttransposeaddequal
#endif
PETSC_EXTERN void matmulttransposeaddequal_(Mat *A, Mat *B, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatMultTransposeAddEqual(*A, *B, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmulthermitiantransposeequal_ MATMULTHERMITIANTRANSPOSEEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmulthermitiantransposeequal_ matmulthermitiantransposeequal
#endif
PETSC_EXTERN void matmulthermitiantransposeequal_(Mat *A, Mat *B, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatMultHermitianTransposeEqual(*A, *B, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmulthermitiantransposeaddequal_ MATMULTHERMITIANTRANSPOSEADDEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmulthermitiantransposeaddequal_ matmulthermitiantransposeaddequal
#endif
PETSC_EXTERN void matmulthermitiantransposeaddequal_(Mat *A, Mat *B, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatMultHermitianTransposeAddEqual(*A, *B, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmatmultequal_ MATMATMULTEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmatmultequal_ matmatmultequal
#endif
PETSC_EXTERN void matmatmultequal_(Mat *A, Mat *B, Mat *C, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatMatMultEqual(*A, *B, *C, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mattransposematmultequal_ MATTRANSPOSEMATMULTEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mattransposematmultequal_ mattransposematmultequal
#endif
PETSC_EXTERN void mattransposematmultequal_(Mat *A, Mat *B, Mat *C, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatTransposeMatMultEqual(*A, *B, *C, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmattransposemultequal_ MATMATTRANSPOSEMULTEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmattransposemultequal_ matmattransposemultequal
#endif
PETSC_EXTERN void matmattransposemultequal_(Mat *A, Mat *B, Mat *C, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatMatTransposeMultEqual(*A, *B, *C, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matptapmultequal_ MATPTAPMULTEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matptapmultequal_ matptapmultequal
#endif
PETSC_EXTERN void matptapmultequal_(Mat *A, Mat *B, Mat *C, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatPtAPMultEqual(*A, *B, *C, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matrartmultequal_ MATRARTMULTEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matrartmultequal_ matrartmultequal
#endif
PETSC_EXTERN void matrartmultequal_(Mat *A, Mat *B, Mat *C, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatRARtMultEqual(*A, *B, *C, *n, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matislinear_ MATISLINEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matislinear_ matislinear
#endif
PETSC_EXTERN void matislinear_(Mat *A, PetscInt *n, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsLinear(*A, *n, flg);
  if (*ierr) return;
}
