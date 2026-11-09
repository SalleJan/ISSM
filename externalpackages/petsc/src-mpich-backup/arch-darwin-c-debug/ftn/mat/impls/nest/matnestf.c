#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnestgetsubmat_ MATNESTGETSUBMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnestgetsubmat_ matnestgetsubmat
#endif
PETSC_EXTERN void matnestgetsubmat_(Mat *A, PetscInt *idxm, PetscInt *jdxm, Mat *sub, PetscErrorCode *ierr)
{
  PetscBool null_sub = !*(void**) sub ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sub);
  *ierr = MatNestGetSubMat(*A, *idxm, *jdxm, sub);
  if (*ierr) return;
  if (! null_sub && !*(void**) sub) *(void **) sub = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnestsetsubmat_ MATNESTSETSUBMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnestsetsubmat_ matnestsetsubmat
#endif
PETSC_EXTERN void matnestsetsubmat_(Mat *A, PetscInt *idxm, PetscInt *jdxm, Mat *sub, PetscErrorCode *ierr)
{
  *ierr = MatNestSetSubMat(*A, *idxm, *jdxm, *sub);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnestgetsize_ MATNESTGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnestgetsize_ matnestgetsize
#endif
PETSC_EXTERN void matnestgetsize_(Mat *A, PetscInt *M, PetscInt *N, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(M);
  CHKFORTRANNULLINTEGER(N);
  *ierr = MatNestGetSize(*A, M, N);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnestgetiss_ MATNESTGETISS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnestgetiss_ matnestgetiss
#endif
PETSC_EXTERN void matnestgetiss_(Mat *A, IS rows[], IS cols[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(rows);
  CHKFORTRANNULLOBJECT(cols);
  *ierr = MatNestGetISs(*A, rows, cols);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnestgetlocaliss_ MATNESTGETLOCALISS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnestgetlocaliss_ matnestgetlocaliss
#endif
PETSC_EXTERN void matnestgetlocaliss_(Mat *A, IS rows[], IS cols[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(rows);
  CHKFORTRANNULLOBJECT(cols);
  *ierr = MatNestGetLocalISs(*A, rows, cols);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnestsetvectype_ MATNESTSETVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnestsetvectype_ matnestsetvectype
#endif
PETSC_EXTERN void matnestsetvectype_(Mat *A, char *vtype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_vtype)
{
  char* c_vtype;
  FIXCHAR(vtype, l_vtype, c_vtype);
  *ierr = MatNestSetVecType(*A, c_vtype);
  if (*ierr) return;
  FREECHAR(vtype, c_vtype);
}
