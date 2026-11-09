#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatemffd_ MATCREATEMFFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatemffd_ matcreatemffd
#endif
PETSC_EXTERN void matcreatemffd_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, Mat *J, PetscErrorCode *ierr)
{
  PetscBool null_J = !*(void**) J ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(J);
  *ierr = MatCreateMFFD(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, J);
  if (*ierr) return;
  if (! null_J && !*(void**) J) *(void **) J = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdfinalizepackage_ MATMFFDFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdfinalizepackage_ matmffdfinalizepackage
#endif
PETSC_EXTERN void matmffdfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = MatMFFDFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdinitializepackage_ MATMFFDINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdinitializepackage_ matmffdinitializepackage
#endif
PETSC_EXTERN void matmffdinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = MatMFFDInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdsettype_ MATMFFDSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdsettype_ matmffdsettype
#endif
PETSC_EXTERN void matmffdsettype_(Mat *mat, char *ftype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_ftype)
{
  char* c_ftype;
  FIXCHAR(ftype, l_ftype, c_ftype);
  *ierr = MatMFFDSetType(*mat, c_ftype);
  if (*ierr) return;
  FREECHAR(ftype, c_ftype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdsetoptionsprefix_ MATMFFDSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdsetoptionsprefix_ matmffdsetoptionsprefix
#endif
PETSC_EXTERN void matmffdsetoptionsprefix_(Mat *mat, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = MatMFFDSetOptionsPrefix(*mat, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdgeth_ MATMFFDGETH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdgeth_ matmffdgeth
#endif
PETSC_EXTERN void matmffdgeth_(Mat *mat, PetscScalar *h, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(h);
  *ierr = MatMFFDGetH(*mat, h);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdsetperiod_ MATMFFDSETPERIOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdsetperiod_ matmffdsetperiod
#endif
PETSC_EXTERN void matmffdsetperiod_(Mat *mat, PetscInt *period, PetscErrorCode *ierr)
{
  *ierr = MatMFFDSetPeriod(*mat, *period);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdsetfunctionerror_ MATMFFDSETFUNCTIONERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdsetfunctionerror_ matmffdsetfunctionerror
#endif
PETSC_EXTERN void matmffdsetfunctionerror_(Mat *mat, PetscReal *error, PetscErrorCode *ierr)
{
  *ierr = MatMFFDSetFunctionError(*mat, *error);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdsethhistory_ MATMFFDSETHHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdsethhistory_ matmffdsethhistory
#endif
PETSC_EXTERN void matmffdsethhistory_(Mat *J, PetscScalar history[], PetscInt *nhistory, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(history);
  *ierr = MatMFFDSetHHistory(*J, history, *nhistory);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdresethhistory_ MATMFFDRESETHHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdresethhistory_ matmffdresethhistory
#endif
PETSC_EXTERN void matmffdresethhistory_(Mat *J, PetscErrorCode *ierr)
{
  *ierr = MatMFFDResetHHistory(*J);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdsetbase_ MATMFFDSETBASE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdsetbase_ matmffdsetbase
#endif
PETSC_EXTERN void matmffdsetbase_(Mat *J, Vec *U, Vec *F, PetscErrorCode *ierr)
{
  *ierr = MatMFFDSetBase(*J, *U, *F);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdcheckpositivity_ MATMFFDCHECKPOSITIVITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdcheckpositivity_ matmffdcheckpositivity
#endif
PETSC_EXTERN void matmffdcheckpositivity_(void *dummy, Vec *U, Vec *a, PetscScalar *h, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(h);
  *ierr = MatMFFDCheckPositivity(dummy, *U, *a, h);
  if (*ierr) return;
}
