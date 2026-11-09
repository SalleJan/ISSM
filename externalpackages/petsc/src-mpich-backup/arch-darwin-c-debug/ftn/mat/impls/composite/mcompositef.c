#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatecomposite_ MATCREATECOMPOSITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatecomposite_ matcreatecomposite
#endif
PETSC_EXTERN void matcreatecomposite_(MPI_Fint *comm, PetscInt *nmat, const Mat *mats, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mats = !*(void**) mats ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mats);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatCreateComposite(MPI_Comm_f2c(*(comm)), *nmat, mats, mat);
  if (*ierr) return;
  if (! null_mats && !*(void**) mats) *(void **) mats = (void *)-2;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcompositeaddmat_ MATCOMPOSITEADDMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcompositeaddmat_ matcompositeaddmat
#endif
PETSC_EXTERN void matcompositeaddmat_(Mat *mat, Mat *smat, PetscErrorCode *ierr)
{
  *ierr = MatCompositeAddMat(*mat, *smat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcompositesettype_ MATCOMPOSITESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcompositesettype_ matcompositesettype
#endif
PETSC_EXTERN void matcompositesettype_(Mat *mat, MatCompositeType *type, PetscErrorCode *ierr)
{
  *ierr = MatCompositeSetType(*mat, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcompositegettype_ MATCOMPOSITEGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcompositegettype_ matcompositegettype
#endif
PETSC_EXTERN void matcompositegettype_(Mat *mat, MatCompositeType *type, PetscErrorCode *ierr)
{
  *ierr = MatCompositeGetType(*mat, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcompositesetmatstructure_ MATCOMPOSITESETMATSTRUCTURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcompositesetmatstructure_ matcompositesetmatstructure
#endif
PETSC_EXTERN void matcompositesetmatstructure_(Mat *mat, MatStructure *str, PetscErrorCode *ierr)
{
  *ierr = MatCompositeSetMatStructure(*mat, *str);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcompositegetmatstructure_ MATCOMPOSITEGETMATSTRUCTURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcompositegetmatstructure_ matcompositegetmatstructure
#endif
PETSC_EXTERN void matcompositegetmatstructure_(Mat *mat, MatStructure *str, PetscErrorCode *ierr)
{
  *ierr = MatCompositeGetMatStructure(*mat, str);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcompositesetmergetype_ MATCOMPOSITESETMERGETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcompositesetmergetype_ matcompositesetmergetype
#endif
PETSC_EXTERN void matcompositesetmergetype_(Mat *mat, MatCompositeMergeType *type, PetscErrorCode *ierr)
{
  *ierr = MatCompositeSetMergeType(*mat, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcompositemerge_ MATCOMPOSITEMERGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcompositemerge_ matcompositemerge
#endif
PETSC_EXTERN void matcompositemerge_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatCompositeMerge(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcompositegetnumbermat_ MATCOMPOSITEGETNUMBERMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcompositegetnumbermat_ matcompositegetnumbermat
#endif
PETSC_EXTERN void matcompositegetnumbermat_(Mat *mat, PetscInt *nmat, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nmat);
  *ierr = MatCompositeGetNumberMat(*mat, nmat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcompositegetmat_ MATCOMPOSITEGETMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcompositegetmat_ matcompositegetmat
#endif
PETSC_EXTERN void matcompositegetmat_(Mat *mat, PetscInt *i, Mat *Ai, PetscErrorCode *ierr)
{
  PetscBool null_Ai = !*(void**) Ai ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Ai);
  *ierr = MatCompositeGetMat(*mat, *i, Ai);
  if (*ierr) return;
  if (! null_Ai && !*(void**) Ai) *(void **) Ai = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcompositesetscalings_ MATCOMPOSITESETSCALINGS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcompositesetscalings_ matcompositesetscalings
#endif
PETSC_EXTERN void matcompositesetscalings_(Mat *mat, const PetscScalar *scalings, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(scalings);
  *ierr = MatCompositeSetScalings(*mat, scalings);
  if (*ierr) return;
}
