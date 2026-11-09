#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateschurcomplement_ MATCREATESCHURCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateschurcomplement_ matcreateschurcomplement
#endif
PETSC_EXTERN void matcreateschurcomplement_(Mat *A00, Mat *Ap00, Mat *A01, Mat *A10, Mat *A11, Mat *S, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = MatCreateSchurComplement(*A00, *Ap00, *A01, *A10, *A11, S);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matschurcomplementsetsubmatrices_ MATSCHURCOMPLEMENTSETSUBMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matschurcomplementsetsubmatrices_ matschurcomplementsetsubmatrices
#endif
PETSC_EXTERN void matschurcomplementsetsubmatrices_(Mat *S, Mat *A00, Mat *Ap00, Mat *A01, Mat *A10, Mat *A11, PetscErrorCode *ierr)
{
  *ierr = MatSchurComplementSetSubMatrices(*S, *A00, *Ap00, *A01, *A10, *A11);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matschurcomplementgetksp_ MATSCHURCOMPLEMENTGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matschurcomplementgetksp_ matschurcomplementgetksp
#endif
PETSC_EXTERN void matschurcomplementgetksp_(Mat *S, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = MatSchurComplementGetKSP(*S, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matschurcomplementsetksp_ MATSCHURCOMPLEMENTSETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matschurcomplementsetksp_ matschurcomplementsetksp
#endif
PETSC_EXTERN void matschurcomplementsetksp_(Mat *S, KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = MatSchurComplementSetKSP(*S, *ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matschurcomplementupdatesubmatrices_ MATSCHURCOMPLEMENTUPDATESUBMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matschurcomplementupdatesubmatrices_ matschurcomplementupdatesubmatrices
#endif
PETSC_EXTERN void matschurcomplementupdatesubmatrices_(Mat *S, Mat *A00, Mat *Ap00, Mat *A01, Mat *A10, Mat *A11, PetscErrorCode *ierr)
{
  *ierr = MatSchurComplementUpdateSubMatrices(*S, *A00, *Ap00, *A01, *A10, *A11);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matschurcomplementgetsubmatrices_ MATSCHURCOMPLEMENTGETSUBMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matschurcomplementgetsubmatrices_ matschurcomplementgetsubmatrices
#endif
PETSC_EXTERN void matschurcomplementgetsubmatrices_(Mat *S, Mat *A00, Mat *Ap00, Mat *A01, Mat *A10, Mat *A11, PetscErrorCode *ierr)
{
  PetscBool null_A00 = !*(void**) A00 ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_Ap00 = !*(void**) Ap00 ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_A01 = !*(void**) A01 ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_A10 = !*(void**) A10 ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_A11 = !*(void**) A11 ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A00);
  CHKFORTRANNULLOBJECT(Ap00);
  CHKFORTRANNULLOBJECT(A01);
  CHKFORTRANNULLOBJECT(A10);
  CHKFORTRANNULLOBJECT(A11);
  *ierr = MatSchurComplementGetSubMatrices(*S, A00, Ap00, A01, A10, A11);
  if (*ierr) return;
  if (! null_A00 && !*(void**) A00) *(void **) A00 = (void *)-2;
  if (! null_Ap00 && !*(void**) Ap00) *(void **) Ap00 = (void *)-2;
  if (! null_A01 && !*(void**) A01) *(void **) A01 = (void *)-2;
  if (! null_A10 && !*(void**) A10) *(void **) A10 = (void *)-2;
  if (! null_A11 && !*(void**) A11) *(void **) A11 = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matschurcomplementcomputeexplicitoperator_ MATSCHURCOMPLEMENTCOMPUTEEXPLICITOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matschurcomplementcomputeexplicitoperator_ matschurcomplementcomputeexplicitoperator
#endif
PETSC_EXTERN void matschurcomplementcomputeexplicitoperator_(Mat *A, Mat *S, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = MatSchurComplementComputeExplicitOperator(*A, S);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetschurcomplement_ MATGETSCHURCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetschurcomplement_ matgetschurcomplement
#endif
PETSC_EXTERN void matgetschurcomplement_(Mat *A, IS *isrow0, IS *iscol0, IS *isrow1, IS *iscol1, MatReuse *mreuse, Mat *S, MatSchurComplementAinvType *ainvtype, MatReuse *preuse, Mat *Sp, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_Sp = !*(void**) Sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  CHKFORTRANNULLOBJECT(Sp);
  *ierr = MatGetSchurComplement(*A, *isrow0, *iscol0, *isrow1, *iscol1, *mreuse, S, *ainvtype, *preuse, Sp);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
  if (! null_Sp && !*(void**) Sp) *(void **) Sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matschurcomplementsetainvtype_ MATSCHURCOMPLEMENTSETAINVTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matschurcomplementsetainvtype_ matschurcomplementsetainvtype
#endif
PETSC_EXTERN void matschurcomplementsetainvtype_(Mat *S, MatSchurComplementAinvType *ainvtype, PetscErrorCode *ierr)
{
  *ierr = MatSchurComplementSetAinvType(*S, *ainvtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matschurcomplementgetainvtype_ MATSCHURCOMPLEMENTGETAINVTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matschurcomplementgetainvtype_ matschurcomplementgetainvtype
#endif
PETSC_EXTERN void matschurcomplementgetainvtype_(Mat *S, MatSchurComplementAinvType *ainvtype, PetscErrorCode *ierr)
{
  *ierr = MatSchurComplementGetAinvType(*S, ainvtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateschurcomplementpmat_ MATCREATESCHURCOMPLEMENTPMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateschurcomplementpmat_ matcreateschurcomplementpmat
#endif
PETSC_EXTERN void matcreateschurcomplementpmat_(Mat *A00, Mat *A01, Mat *A10, Mat *A11, MatSchurComplementAinvType *ainvtype, MatReuse *preuse, Mat *Sp, PetscErrorCode *ierr)
{
  PetscBool null_Sp = !*(void**) Sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Sp);
  *ierr = MatCreateSchurComplementPmat(*A00, *A01, *A10, *A11, *ainvtype, *preuse, Sp);
  if (*ierr) return;
  if (! null_Sp && !*(void**) Sp) *(void **) Sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matschurcomplementgetpmat_ MATSCHURCOMPLEMENTGETPMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matschurcomplementgetpmat_ matschurcomplementgetpmat
#endif
PETSC_EXTERN void matschurcomplementgetpmat_(Mat *S, MatReuse *preuse, Mat *Sp, PetscErrorCode *ierr)
{
  PetscBool null_Sp = !*(void**) Sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Sp);
  *ierr = MatSchurComplementGetPmat(*S, *preuse, Sp);
  if (*ierr) return;
  if (! null_Sp && !*(void**) Sp) *(void **) Sp = (void *)-2;
}
