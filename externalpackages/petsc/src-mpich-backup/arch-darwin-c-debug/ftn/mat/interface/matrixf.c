#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetrandom_ MATSETRANDOM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetrandom_ matsetrandom
#endif
PETSC_EXTERN void matsetrandom_(Mat *x, PetscRandom *rctx, PetscErrorCode *ierr)
{
  *ierr = MatSetRandom(*x, *rctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcopyhashtoxaij_ MATCOPYHASHTOXAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcopyhashtoxaij_ matcopyhashtoxaij
#endif
PETSC_EXTERN void matcopyhashtoxaij_(Mat *A, Mat *B, PetscErrorCode *ierr)
{
  *ierr = MatCopyHashToXAIJ(*A, *B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorgeterrorzeropivot_ MATFACTORGETERRORZEROPIVOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorgeterrorzeropivot_ matfactorgeterrorzeropivot
#endif
PETSC_EXTERN void matfactorgeterrorzeropivot_(Mat *mat, PetscReal *pivot, PetscInt *row, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(pivot);
  CHKFORTRANNULLINTEGER(row);
  *ierr = MatFactorGetErrorZeroPivot(*mat, pivot, row);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorgeterror_ MATFACTORGETERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorgeterror_ matfactorgeterror
#endif
PETSC_EXTERN void matfactorgeterror_(Mat *mat, MatFactorError *err, PetscErrorCode *ierr)
{
  *ierr = MatFactorGetError(*mat, err);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorclearerror_ MATFACTORCLEARERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorclearerror_ matfactorclearerror
#endif
PETSC_EXTERN void matfactorclearerror_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatFactorClearError(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfindnonzerorows_ MATFINDNONZEROROWS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfindnonzerorows_ matfindnonzerorows
#endif
PETSC_EXTERN void matfindnonzerorows_(Mat *mat, IS *keptrows, PetscErrorCode *ierr)
{
  PetscBool null_keptrows = !*(void**) keptrows ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(keptrows);
  *ierr = MatFindNonzeroRows(*mat, keptrows);
  if (*ierr) return;
  if (! null_keptrows && !*(void**) keptrows) *(void **) keptrows = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfindzerorows_ MATFINDZEROROWS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfindzerorows_ matfindzerorows
#endif
PETSC_EXTERN void matfindzerorows_(Mat *mat, IS *zerorows, PetscErrorCode *ierr)
{
  PetscBool null_zerorows = !*(void**) zerorows ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(zerorows);
  *ierr = MatFindZeroRows(*mat, zerorows);
  if (*ierr) return;
  if (! null_zerorows && !*(void**) zerorows) *(void **) zerorows = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetdiagonalblock_ MATGETDIAGONALBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetdiagonalblock_ matgetdiagonalblock
#endif
PETSC_EXTERN void matgetdiagonalblock_(Mat *A, Mat *M_a, PetscErrorCode *ierr)
{
  PetscBool null_M_a = !*(void**) M_a ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M_a);
  *ierr = MatGetDiagonalBlock(*A, M_a);
  if (*ierr) return;
  if (! null_M_a && !*(void**) M_a) *(void **) M_a = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgettrace_ MATGETTRACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgettrace_ matgettrace
#endif
PETSC_EXTERN void matgettrace_(Mat *mat, PetscScalar *trace, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(trace);
  *ierr = MatGetTrace(*mat, trace);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matrealpart_ MATREALPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matrealpart_ matrealpart
#endif
PETSC_EXTERN void matrealpart_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatRealPart(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matimaginarypart_ MATIMAGINARYPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matimaginarypart_ matimaginarypart
#endif
PETSC_EXTERN void matimaginarypart_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatImaginaryPart(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matconjugate_ MATCONJUGATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matconjugate_ matconjugate
#endif
PETSC_EXTERN void matconjugate_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatConjugate(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetrowuppertriangular_ MATGETROWUPPERTRIANGULAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetrowuppertriangular_ matgetrowuppertriangular
#endif
PETSC_EXTERN void matgetrowuppertriangular_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatGetRowUpperTriangular(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matrestorerowuppertriangular_ MATRESTOREROWUPPERTRIANGULAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matrestorerowuppertriangular_ matrestorerowuppertriangular
#endif
PETSC_EXTERN void matrestorerowuppertriangular_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatRestoreRowUpperTriangular(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetoptionsprefix_ MATSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetoptionsprefix_ matsetoptionsprefix
#endif
PETSC_EXTERN void matsetoptionsprefix_(Mat *A, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = MatSetOptionsPrefix(*A, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetoptionsprefixfactor_ MATSETOPTIONSPREFIXFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetoptionsprefixfactor_ matsetoptionsprefixfactor
#endif
PETSC_EXTERN void matsetoptionsprefixfactor_(Mat *A, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = MatSetOptionsPrefixFactor(*A, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matappendoptionsprefixfactor_ MATAPPENDOPTIONSPREFIXFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matappendoptionsprefixfactor_ matappendoptionsprefixfactor
#endif
PETSC_EXTERN void matappendoptionsprefixfactor_(Mat *A, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = MatAppendOptionsPrefixFactor(*A, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matappendoptionsprefix_ MATAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matappendoptionsprefix_ matappendoptionsprefix
#endif
PETSC_EXTERN void matappendoptionsprefix_(Mat *A, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = MatAppendOptionsPrefix(*A, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetoptionsprefix_ MATGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetoptionsprefix_ matgetoptionsprefix
#endif
PETSC_EXTERN void matgetoptionsprefix_(Mat *A, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix = PETSC_NULLPTR;
  *ierr = MatGetOptionsPrefix(*A, (const char **)&c_prefix);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)prefix, c_prefix, l_prefix);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, prefix, l_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetstate_ MATGETSTATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetstate_ matgetstate
#endif
PETSC_EXTERN void matgetstate_(Mat *A, PetscObjectState *state, PetscErrorCode *ierr)
{
  *ierr = MatGetState(*A, state);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matresetpreallocation_ MATRESETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matresetpreallocation_ matresetpreallocation
#endif
PETSC_EXTERN void matresetpreallocation_(Mat *A, PetscErrorCode *ierr)
{
  *ierr = MatResetPreallocation(*A);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matresethash_ MATRESETHASH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matresethash_ matresethash
#endif
PETSC_EXTERN void matresethash_(Mat *A, PetscErrorCode *ierr)
{
  *ierr = MatResetHash(*A);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetup_ MATSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetup_ matsetup
#endif
PETSC_EXTERN void matsetup_(Mat *A, PetscErrorCode *ierr)
{
  *ierr = MatSetUp(*A);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matviewfromoptions_ MATVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matviewfromoptions_ matviewfromoptions
#endif
PETSC_EXTERN void matviewfromoptions_(Mat *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = MatViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matview_ MATVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matview_ matview
#endif
PETSC_EXTERN void matview_(Mat *mat, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = MatView(*mat, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matload_ MATLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matload_ matload
#endif
PETSC_EXTERN void matload_(Mat *mat, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = MatLoad(*mat, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdestroy_ MATDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdestroy_ matdestroy
#endif
PETSC_EXTERN void matdestroy_(Mat *A, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(A);
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatDestroy(A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvalues_ MATSETVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvalues_ matsetvalues
#endif
PETSC_EXTERN void matsetvalues_(Mat *mat, PetscInt *m, const PetscInt idxm[], PetscInt *n, const PetscInt idxn[], const PetscScalar v[], InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idxm);
  CHKFORTRANNULLINTEGER(idxn);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSetValues(*mat, *m, idxm, *n, idxn, v, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvaluesis_ MATSETVALUESIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvaluesis_ matsetvaluesis
#endif
PETSC_EXTERN void matsetvaluesis_(Mat *mat, IS *ism, IS *isn, const PetscScalar v[], InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSetValuesIS(*mat, *ism, *isn, v, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvaluesrowlocal_ MATSETVALUESROWLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvaluesrowlocal_ matsetvaluesrowlocal
#endif
PETSC_EXTERN void matsetvaluesrowlocal_(Mat *mat, PetscInt *row, const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSetValuesRowLocal(*mat, *row, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvaluesrow_ MATSETVALUESROW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvaluesrow_ matsetvaluesrow
#endif
PETSC_EXTERN void matsetvaluesrow_(Mat *mat, PetscInt *row, const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSetValuesRow(*mat, *row, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvaluesstencil_ MATSETVALUESSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvaluesstencil_ matsetvaluesstencil
#endif
PETSC_EXTERN void matsetvaluesstencil_(Mat *mat, PetscInt *m, const MatStencil idxm[], PetscInt *n, const MatStencil idxn[], const PetscScalar v[], InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSetValuesStencil(*mat, *m, idxm, *n, idxn, v, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvaluesblockedstencil_ MATSETVALUESBLOCKEDSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvaluesblockedstencil_ matsetvaluesblockedstencil
#endif
PETSC_EXTERN void matsetvaluesblockedstencil_(Mat *mat, PetscInt *m, const MatStencil idxm[], PetscInt *n, const MatStencil idxn[], const PetscScalar v[], InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSetValuesBlockedStencil(*mat, *m, idxm, *n, idxn, v, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetstencil_ MATSETSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetstencil_ matsetstencil
#endif
PETSC_EXTERN void matsetstencil_(Mat *mat, PetscInt *dim, const PetscInt dims[], const PetscInt starts[], PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dims);
  CHKFORTRANNULLINTEGER(starts);
  *ierr = MatSetStencil(*mat, *dim, dims, starts, *dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvaluesblocked_ MATSETVALUESBLOCKED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvaluesblocked_ matsetvaluesblocked
#endif
PETSC_EXTERN void matsetvaluesblocked_(Mat *mat, PetscInt *m, const PetscInt idxm[], PetscInt *n, const PetscInt idxn[], const PetscScalar v[], InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idxm);
  CHKFORTRANNULLINTEGER(idxn);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSetValuesBlocked(*mat, *m, idxm, *n, idxn, v, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetvalues_ MATGETVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetvalues_ matgetvalues
#endif
PETSC_EXTERN void matgetvalues_(Mat *mat, PetscInt *m, const PetscInt idxm[], PetscInt *n, const PetscInt idxn[], PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idxm);
  CHKFORTRANNULLINTEGER(idxn);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatGetValues(*mat, *m, idxm, *n, idxn, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetvalueslocal_ MATGETVALUESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetvalueslocal_ matgetvalueslocal
#endif
PETSC_EXTERN void matgetvalueslocal_(Mat *mat, PetscInt *nrow, const PetscInt irow[], PetscInt *ncol, const PetscInt icol[], PetscScalar y[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(irow);
  CHKFORTRANNULLINTEGER(icol);
  CHKFORTRANNULLSCALAR(y);
  *ierr = MatGetValuesLocal(*mat, *nrow, irow, *ncol, icol, y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvaluesbatch_ MATSETVALUESBATCH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvaluesbatch_ matsetvaluesbatch
#endif
PETSC_EXTERN void matsetvaluesbatch_(Mat *mat, PetscInt *nb, PetscInt *bs, PetscInt rows[], const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rows);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSetValuesBatch(*mat, *nb, *bs, rows, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetlocaltoglobalmapping_ MATSETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetlocaltoglobalmapping_ matsetlocaltoglobalmapping
#endif
PETSC_EXTERN void matsetlocaltoglobalmapping_(Mat *x, ISLocalToGlobalMapping *rmapping, ISLocalToGlobalMapping *cmapping, PetscErrorCode *ierr)
{
  *ierr = MatSetLocalToGlobalMapping(*x, *rmapping, *cmapping);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetlocaltoglobalmapping_ MATGETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetlocaltoglobalmapping_ matgetlocaltoglobalmapping
#endif
PETSC_EXTERN void matgetlocaltoglobalmapping_(Mat *A, ISLocalToGlobalMapping *rmapping, ISLocalToGlobalMapping *cmapping, PetscErrorCode *ierr)
{
  PetscBool null_rmapping = !*(void**) rmapping ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_cmapping = !*(void**) cmapping ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rmapping);
  CHKFORTRANNULLOBJECT(cmapping);
  *ierr = MatGetLocalToGlobalMapping(*A, rmapping, cmapping);
  if (*ierr) return;
  if (! null_rmapping && !*(void**) rmapping) *(void **) rmapping = (void *)-2;
  if (! null_cmapping && !*(void**) cmapping) *(void **) cmapping = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetlayouts_ MATSETLAYOUTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetlayouts_ matsetlayouts
#endif
PETSC_EXTERN void matsetlayouts_(Mat *A, PetscLayout *rmap, PetscLayout *cmap, PetscErrorCode *ierr)
{
  *ierr = MatSetLayouts(*A, *rmap, *cmap);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetlayouts_ MATGETLAYOUTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetlayouts_ matgetlayouts
#endif
PETSC_EXTERN void matgetlayouts_(Mat *A, PetscLayout *rmap, PetscLayout *cmap, PetscErrorCode *ierr)
{
  PetscBool null_rmap = !*(void**) rmap ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_cmap = !*(void**) cmap ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rmap);
  CHKFORTRANNULLOBJECT(cmap);
  *ierr = MatGetLayouts(*A, rmap, cmap);
  if (*ierr) return;
  if (! null_rmap && !*(void**) rmap) *(void **) rmap = (void *)-2;
  if (! null_cmap && !*(void**) cmap) *(void **) cmap = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvalueslocal_ MATSETVALUESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvalueslocal_ matsetvalueslocal
#endif
PETSC_EXTERN void matsetvalueslocal_(Mat *mat, PetscInt *nrow, const PetscInt irow[], PetscInt *ncol, const PetscInt icol[], const PetscScalar y[], InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(irow);
  CHKFORTRANNULLINTEGER(icol);
  CHKFORTRANNULLSCALAR(y);
  *ierr = MatSetValuesLocal(*mat, *nrow, irow, *ncol, icol, y, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvaluesblockedlocal_ MATSETVALUESBLOCKEDLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvaluesblockedlocal_ matsetvaluesblockedlocal
#endif
PETSC_EXTERN void matsetvaluesblockedlocal_(Mat *mat, PetscInt *nrow, const PetscInt irow[], PetscInt *ncol, const PetscInt icol[], const PetscScalar y[], InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(irow);
  CHKFORTRANNULLINTEGER(icol);
  CHKFORTRANNULLSCALAR(y);
  *ierr = MatSetValuesBlockedLocal(*mat, *nrow, irow, *ncol, icol, y, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmultdiagonalblock_ MATMULTDIAGONALBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmultdiagonalblock_ matmultdiagonalblock
#endif
PETSC_EXTERN void matmultdiagonalblock_(Mat *mat, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = MatMultDiagonalBlock(*mat, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmult_ MATMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmult_ matmult
#endif
PETSC_EXTERN void matmult_(Mat *mat, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = MatMult(*mat, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmulttranspose_ MATMULTTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmulttranspose_ matmulttranspose
#endif
PETSC_EXTERN void matmulttranspose_(Mat *mat, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = MatMultTranspose(*mat, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmulthermitiantranspose_ MATMULTHERMITIANTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmulthermitiantranspose_ matmulthermitiantranspose
#endif
PETSC_EXTERN void matmulthermitiantranspose_(Mat *mat, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = MatMultHermitianTranspose(*mat, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmultadd_ MATMULTADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmultadd_ matmultadd
#endif
PETSC_EXTERN void matmultadd_(Mat *mat, Vec *v1, Vec *v2, Vec *v3, PetscErrorCode *ierr)
{
  *ierr = MatMultAdd(*mat, *v1, *v2, *v3);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmulttransposeadd_ MATMULTTRANSPOSEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmulttransposeadd_ matmulttransposeadd
#endif
PETSC_EXTERN void matmulttransposeadd_(Mat *mat, Vec *v1, Vec *v2, Vec *v3, PetscErrorCode *ierr)
{
  *ierr = MatMultTransposeAdd(*mat, *v1, *v2, *v3);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmulthermitiantransposeadd_ MATMULTHERMITIANTRANSPOSEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmulthermitiantransposeadd_ matmulthermitiantransposeadd
#endif
PETSC_EXTERN void matmulthermitiantransposeadd_(Mat *mat, Vec *v1, Vec *v2, Vec *v3, PetscErrorCode *ierr)
{
  *ierr = MatMultHermitianTransposeAdd(*mat, *v1, *v2, *v3);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matadot_ MATADOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matadot_ matadot
#endif
PETSC_EXTERN void matadot_(Mat *mat, Vec *x, Vec *y, PetscScalar *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(val);
  *ierr = MatADot(*mat, *x, *y, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matanorm_ MATANORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matanorm_ matanorm
#endif
PETSC_EXTERN void matanorm_(Mat *mat, Vec *x, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(val);
  *ierr = MatANorm(*mat, *x, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetfactortype_ MATGETFACTORTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetfactortype_ matgetfactortype
#endif
PETSC_EXTERN void matgetfactortype_(Mat *mat, MatFactorType *t, PetscErrorCode *ierr)
{
  *ierr = MatGetFactorType(*mat, t);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetfactortype_ MATSETFACTORTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetfactortype_ matsetfactortype
#endif
PETSC_EXTERN void matsetfactortype_(Mat *mat, MatFactorType *t, PetscErrorCode *ierr)
{
  *ierr = MatSetFactorType(*mat, *t);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetinfo_ MATGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetinfo_ matgetinfo
#endif
PETSC_EXTERN void matgetinfo_(Mat *mat, MatInfoType *flag, MatInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatGetInfo(*mat, *flag, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlufactor_ MATLUFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlufactor_ matlufactor
#endif
PETSC_EXTERN void matlufactor_(Mat *mat, IS *row, IS *col, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatLUFactor(*mat, *row, *col, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matilufactor_ MATILUFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matilufactor_ matilufactor
#endif
PETSC_EXTERN void matilufactor_(Mat *mat, IS *row, IS *col, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatILUFactor(*mat, *row, *col, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlufactorsymbolic_ MATLUFACTORSYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlufactorsymbolic_ matlufactorsymbolic
#endif
PETSC_EXTERN void matlufactorsymbolic_(Mat *fact, Mat *mat, IS *row, IS *col, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatLUFactorSymbolic(*fact, *mat, *row, *col, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlufactornumeric_ MATLUFACTORNUMERIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlufactornumeric_ matlufactornumeric
#endif
PETSC_EXTERN void matlufactornumeric_(Mat *fact, Mat *mat, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatLUFactorNumeric(*fact, *mat, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcholeskyfactor_ MATCHOLESKYFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcholeskyfactor_ matcholeskyfactor
#endif
PETSC_EXTERN void matcholeskyfactor_(Mat *mat, IS *perm, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatCholeskyFactor(*mat, *perm, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcholeskyfactorsymbolic_ MATCHOLESKYFACTORSYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcholeskyfactorsymbolic_ matcholeskyfactorsymbolic
#endif
PETSC_EXTERN void matcholeskyfactorsymbolic_(Mat *fact, Mat *mat, IS *perm, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatCholeskyFactorSymbolic(*fact, *mat, *perm, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcholeskyfactornumeric_ MATCHOLESKYFACTORNUMERIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcholeskyfactornumeric_ matcholeskyfactornumeric
#endif
PETSC_EXTERN void matcholeskyfactornumeric_(Mat *fact, Mat *mat, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatCholeskyFactorNumeric(*fact, *mat, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matqrfactor_ MATQRFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matqrfactor_ matqrfactor
#endif
PETSC_EXTERN void matqrfactor_(Mat *mat, IS *col, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatQRFactor(*mat, *col, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matqrfactorsymbolic_ MATQRFACTORSYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matqrfactorsymbolic_ matqrfactorsymbolic
#endif
PETSC_EXTERN void matqrfactorsymbolic_(Mat *fact, Mat *mat, IS *col, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatQRFactorSymbolic(*fact, *mat, *col, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matqrfactornumeric_ MATQRFACTORNUMERIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matqrfactornumeric_ matqrfactornumeric
#endif
PETSC_EXTERN void matqrfactornumeric_(Mat *fact, Mat *mat, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatQRFactorNumeric(*fact, *mat, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsolve_ MATSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsolve_ matsolve
#endif
PETSC_EXTERN void matsolve_(Mat *mat, Vec *b, Vec *x, PetscErrorCode *ierr)
{
  *ierr = MatSolve(*mat, *b, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmatsolve_ MATMATSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmatsolve_ matmatsolve
#endif
PETSC_EXTERN void matmatsolve_(Mat *A, Mat *B, Mat *X, PetscErrorCode *ierr)
{
  *ierr = MatMatSolve(*A, *B, *X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmatsolvetranspose_ MATMATSOLVETRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmatsolvetranspose_ matmatsolvetranspose
#endif
PETSC_EXTERN void matmatsolvetranspose_(Mat *A, Mat *B, Mat *X, PetscErrorCode *ierr)
{
  *ierr = MatMatSolveTranspose(*A, *B, *X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmattransposesolve_ MATMATTRANSPOSESOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmattransposesolve_ matmattransposesolve
#endif
PETSC_EXTERN void matmattransposesolve_(Mat *A, Mat *Bt, Mat *X, PetscErrorCode *ierr)
{
  *ierr = MatMatTransposeSolve(*A, *Bt, *X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matforwardsolve_ MATFORWARDSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matforwardsolve_ matforwardsolve
#endif
PETSC_EXTERN void matforwardsolve_(Mat *mat, Vec *b, Vec *x, PetscErrorCode *ierr)
{
  *ierr = MatForwardSolve(*mat, *b, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matbackwardsolve_ MATBACKWARDSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matbackwardsolve_ matbackwardsolve
#endif
PETSC_EXTERN void matbackwardsolve_(Mat *mat, Vec *b, Vec *x, PetscErrorCode *ierr)
{
  *ierr = MatBackwardSolve(*mat, *b, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsolveadd_ MATSOLVEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsolveadd_ matsolveadd
#endif
PETSC_EXTERN void matsolveadd_(Mat *mat, Vec *b, Vec *y, Vec *x, PetscErrorCode *ierr)
{
  *ierr = MatSolveAdd(*mat, *b, *y, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsolvetranspose_ MATSOLVETRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsolvetranspose_ matsolvetranspose
#endif
PETSC_EXTERN void matsolvetranspose_(Mat *mat, Vec *b, Vec *x, PetscErrorCode *ierr)
{
  *ierr = MatSolveTranspose(*mat, *b, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsolvetransposeadd_ MATSOLVETRANSPOSEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsolvetransposeadd_ matsolvetransposeadd
#endif
PETSC_EXTERN void matsolvetransposeadd_(Mat *mat, Vec *b, Vec *y, Vec *x, PetscErrorCode *ierr)
{
  *ierr = MatSolveTransposeAdd(*mat, *b, *y, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsor_ MATSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsor_ matsor
#endif
PETSC_EXTERN void matsor_(Mat *mat, Vec *b, PetscReal *omega, MatSORType *flag, PetscReal *shift, PetscInt *its, PetscInt *lits, Vec *x, PetscErrorCode *ierr)
{
  *ierr = MatSOR(*mat, *b, *omega, *flag, *shift, *its, *lits, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcopy_ MATCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcopy_ matcopy
#endif
PETSC_EXTERN void matcopy_(Mat *A, Mat *B, MatStructure *str, PetscErrorCode *ierr)
{
  *ierr = MatCopy(*A, *B, *str);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matconvert_ MATCONVERT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matconvert_ matconvert
#endif
PETSC_EXTERN void matconvert_(Mat *mat, char *newtype, MatReuse *reuse, Mat *M, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_newtype)
{
  PetscBool null_M = !*(void**) M ? PETSC_TRUE : PETSC_FALSE;
  char* c_newtype;
  FIXCHAR(newtype, l_newtype, c_newtype);
  CHKFORTRANNULLOBJECT(M);
  *ierr = MatConvert(*mat, c_newtype, *reuse, M);
  if (*ierr) return;
  FREECHAR(newtype, c_newtype);
  if (! null_M && !*(void**) M) *(void **) M = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorgetsolvertype_ MATFACTORGETSOLVERTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorgetsolvertype_ matfactorgetsolvertype
#endif
PETSC_EXTERN void matfactorgetsolvertype_(Mat *mat, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = MatFactorGetSolverType(*mat, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorgetcanuseordering_ MATFACTORGETCANUSEORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorgetcanuseordering_ matfactorgetcanuseordering
#endif
PETSC_EXTERN void matfactorgetcanuseordering_(Mat *mat, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatFactorGetCanUseOrdering(*mat, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorgetpreferredordering_ MATFACTORGETPREFERREDORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorgetpreferredordering_ matfactorgetpreferredordering
#endif
PETSC_EXTERN void matfactorgetpreferredordering_(Mat *mat, MatFactorType *ftype, char *otype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_otype)
{
  char* c_otype = PETSC_NULLPTR;
  *ierr = MatFactorGetPreferredOrdering(*mat, *ftype, (const char **)&c_otype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)otype, c_otype, l_otype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, otype, l_otype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetfactor_ MATGETFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetfactor_ matgetfactor
#endif
PETSC_EXTERN void matgetfactor_(Mat *mat, char *type, MatFactorType *ftype, Mat *f, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  PetscBool null_f = !*(void**) f ? PETSC_TRUE : PETSC_FALSE;
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  CHKFORTRANNULLOBJECT(f);
  *ierr = MatGetFactor(*mat, c_type, *ftype, f);
  if (*ierr) return;
  FREECHAR(type, c_type);
  if (! null_f && !*(void**) f) *(void **) f = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetfactoravailable_ MATGETFACTORAVAILABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetfactoravailable_ matgetfactoravailable
#endif
PETSC_EXTERN void matgetfactoravailable_(Mat *mat, char *type, MatFactorType *ftype, PetscBool *flg, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatGetFactorAvailable(*mat, c_type, *ftype, flg);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matduplicate_ MATDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matduplicate_ matduplicate
#endif
PETSC_EXTERN void matduplicate_(Mat *mat, MatDuplicateOption *op, Mat *M, PetscErrorCode *ierr)
{
  PetscBool null_M = !*(void**) M ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M);
  *ierr = MatDuplicate(*mat, *op, M);
  if (*ierr) return;
  if (! null_M && !*(void**) M) *(void **) M = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetdiagonal_ MATGETDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetdiagonal_ matgetdiagonal
#endif
PETSC_EXTERN void matgetdiagonal_(Mat *mat, Vec *v, PetscErrorCode *ierr)
{
  *ierr = MatGetDiagonal(*mat, *v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetrowmin_ MATGETROWMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetrowmin_ matgetrowmin
#endif
PETSC_EXTERN void matgetrowmin_(Mat *mat, Vec *v, PetscInt idx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  *ierr = MatGetRowMin(*mat, *v, idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetrowminabs_ MATGETROWMINABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetrowminabs_ matgetrowminabs
#endif
PETSC_EXTERN void matgetrowminabs_(Mat *mat, Vec *v, PetscInt idx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  *ierr = MatGetRowMinAbs(*mat, *v, idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetrowmax_ MATGETROWMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetrowmax_ matgetrowmax
#endif
PETSC_EXTERN void matgetrowmax_(Mat *mat, Vec *v, PetscInt idx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  *ierr = MatGetRowMax(*mat, *v, idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetrowmaxabs_ MATGETROWMAXABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetrowmaxabs_ matgetrowmaxabs
#endif
PETSC_EXTERN void matgetrowmaxabs_(Mat *mat, Vec *v, PetscInt idx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  *ierr = MatGetRowMaxAbs(*mat, *v, idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetrowsumabs_ MATGETROWSUMABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetrowsumabs_ matgetrowsumabs
#endif
PETSC_EXTERN void matgetrowsumabs_(Mat *mat, Vec *v, PetscErrorCode *ierr)
{
  *ierr = MatGetRowSumAbs(*mat, *v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetrowsum_ MATGETROWSUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetrowsum_ matgetrowsum
#endif
PETSC_EXTERN void matgetrowsum_(Mat *mat, Vec *v, PetscErrorCode *ierr)
{
  *ierr = MatGetRowSum(*mat, *v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mattransposesetprecursor_ MATTRANSPOSESETPRECURSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mattransposesetprecursor_ mattransposesetprecursor
#endif
PETSC_EXTERN void mattransposesetprecursor_(Mat *mat, Mat *B, PetscErrorCode *ierr)
{
  *ierr = MatTransposeSetPrecursor(*mat, *B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mattranspose_ MATTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mattranspose_ mattranspose
#endif
PETSC_EXTERN void mattranspose_(Mat *mat, MatReuse *reuse, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatTranspose(*mat, *reuse, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mattransposesymbolic_ MATTRANSPOSESYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mattransposesymbolic_ mattransposesymbolic
#endif
PETSC_EXTERN void mattransposesymbolic_(Mat *A, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatTransposeSymbolic(*A, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matistranspose_ MATISTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matistranspose_ matistranspose
#endif
PETSC_EXTERN void matistranspose_(Mat *A, Mat *B, PetscReal *tol, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsTranspose(*A, *B, *tol, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathermitiantranspose_ MATHERMITIANTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathermitiantranspose_ mathermitiantranspose
#endif
PETSC_EXTERN void mathermitiantranspose_(Mat *mat, MatReuse *reuse, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatHermitianTranspose(*mat, *reuse, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matishermitiantranspose_ MATISHERMITIANTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matishermitiantranspose_ matishermitiantranspose
#endif
PETSC_EXTERN void matishermitiantranspose_(Mat *A, Mat *B, PetscReal *tol, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsHermitianTranspose(*A, *B, *tol, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpermute_ MATPERMUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpermute_ matpermute
#endif
PETSC_EXTERN void matpermute_(Mat *mat, IS *row, IS *col, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatPermute(*mat, *row, *col, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matequal_ MATEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matequal_ matequal
#endif
PETSC_EXTERN void matequal_(Mat *A, Mat *B, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatEqual(*A, *B, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdiagonalscale_ MATDIAGONALSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdiagonalscale_ matdiagonalscale
#endif
PETSC_EXTERN void matdiagonalscale_(Mat *mat, Vec *l, Vec *r, PetscErrorCode *ierr)
{
  *ierr = MatDiagonalScale(*mat, *l, *r);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matscale_ MATSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matscale_ matscale
#endif
PETSC_EXTERN void matscale_(Mat *mat, PetscScalar *a, PetscErrorCode *ierr)
{
  *ierr = MatScale(*mat, *a);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnorm_ MATNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnorm_ matnorm
#endif
PETSC_EXTERN void matnorm_(Mat *mat, NormType *type, PetscReal *nrm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(nrm);
  *ierr = MatNorm(*mat, *type, nrm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matassemblybegin_ MATASSEMBLYBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matassemblybegin_ matassemblybegin
#endif
PETSC_EXTERN void matassemblybegin_(Mat *mat, MatAssemblyType *type, PetscErrorCode *ierr)
{
  *ierr = MatAssemblyBegin(*mat, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matassembled_ MATASSEMBLED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matassembled_ matassembled
#endif
PETSC_EXTERN void matassembled_(Mat *mat, PetscBool *assembled, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(assembled);
  *ierr = MatAssembled(*mat, assembled);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matassemblyend_ MATASSEMBLYEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matassemblyend_ matassemblyend
#endif
PETSC_EXTERN void matassemblyend_(Mat *mat, MatAssemblyType *type, PetscErrorCode *ierr)
{
  *ierr = MatAssemblyEnd(*mat, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetoption_ MATSETOPTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetoption_ matsetoption
#endif
PETSC_EXTERN void matsetoption_(Mat *mat, MatOption *op, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = MatSetOption(*mat, *op, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetoption_ MATGETOPTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetoption_ matgetoption
#endif
PETSC_EXTERN void matgetoption_(Mat *mat, MatOption *op, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatGetOption(*mat, *op, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzeroentries_ MATZEROENTRIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzeroentries_ matzeroentries
#endif
PETSC_EXTERN void matzeroentries_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatZeroEntries(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzerorowscolumns_ MATZEROROWSCOLUMNS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzerorowscolumns_ matzerorowscolumns
#endif
PETSC_EXTERN void matzerorowscolumns_(Mat *mat, PetscInt *numRows, const PetscInt rows[], PetscScalar *diag, Vec *x, Vec *b, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rows);
  *ierr = MatZeroRowsColumns(*mat, *numRows, rows, *diag, *x, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzerorowscolumnsis_ MATZEROROWSCOLUMNSIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzerorowscolumnsis_ matzerorowscolumnsis
#endif
PETSC_EXTERN void matzerorowscolumnsis_(Mat *mat, IS *is, PetscScalar *diag, Vec *x, Vec *b, PetscErrorCode *ierr)
{
  *ierr = MatZeroRowsColumnsIS(*mat, *is, *diag, *x, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzerorows_ MATZEROROWS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzerorows_ matzerorows
#endif
PETSC_EXTERN void matzerorows_(Mat *mat, PetscInt *numRows, const PetscInt rows[], PetscScalar *diag, Vec *x, Vec *b, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rows);
  *ierr = MatZeroRows(*mat, *numRows, rows, *diag, *x, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzerorowsis_ MATZEROROWSIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzerorowsis_ matzerorowsis
#endif
PETSC_EXTERN void matzerorowsis_(Mat *mat, IS *is, PetscScalar *diag, Vec *x, Vec *b, PetscErrorCode *ierr)
{
  *ierr = MatZeroRowsIS(*mat, *is, *diag, *x, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzerorowsstencil_ MATZEROROWSSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzerorowsstencil_ matzerorowsstencil
#endif
PETSC_EXTERN void matzerorowsstencil_(Mat *mat, PetscInt *numRows, const MatStencil rows[], PetscScalar *diag, Vec *x, Vec *b, PetscErrorCode *ierr)
{
  *ierr = MatZeroRowsStencil(*mat, *numRows, rows, *diag, *x, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzerorowscolumnsstencil_ MATZEROROWSCOLUMNSSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzerorowscolumnsstencil_ matzerorowscolumnsstencil
#endif
PETSC_EXTERN void matzerorowscolumnsstencil_(Mat *mat, PetscInt *numRows, const MatStencil rows[], PetscScalar *diag, Vec *x, Vec *b, PetscErrorCode *ierr)
{
  *ierr = MatZeroRowsColumnsStencil(*mat, *numRows, rows, *diag, *x, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzerorowslocal_ MATZEROROWSLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzerorowslocal_ matzerorowslocal
#endif
PETSC_EXTERN void matzerorowslocal_(Mat *mat, PetscInt *numRows, const PetscInt rows[], PetscScalar *diag, Vec *x, Vec *b, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rows);
  *ierr = MatZeroRowsLocal(*mat, *numRows, rows, *diag, *x, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzerorowslocalis_ MATZEROROWSLOCALIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzerorowslocalis_ matzerorowslocalis
#endif
PETSC_EXTERN void matzerorowslocalis_(Mat *mat, IS *is, PetscScalar *diag, Vec *x, Vec *b, PetscErrorCode *ierr)
{
  *ierr = MatZeroRowsLocalIS(*mat, *is, *diag, *x, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzerorowscolumnslocal_ MATZEROROWSCOLUMNSLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzerorowscolumnslocal_ matzerorowscolumnslocal
#endif
PETSC_EXTERN void matzerorowscolumnslocal_(Mat *mat, PetscInt *numRows, const PetscInt rows[], PetscScalar *diag, Vec *x, Vec *b, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rows);
  *ierr = MatZeroRowsColumnsLocal(*mat, *numRows, rows, *diag, *x, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matzerorowscolumnslocalis_ MATZEROROWSCOLUMNSLOCALIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matzerorowscolumnslocalis_ matzerorowscolumnslocalis
#endif
PETSC_EXTERN void matzerorowscolumnslocalis_(Mat *mat, IS *is, PetscScalar *diag, Vec *x, Vec *b, PetscErrorCode *ierr)
{
  *ierr = MatZeroRowsColumnsLocalIS(*mat, *is, *diag, *x, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetsize_ MATGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetsize_ matgetsize
#endif
PETSC_EXTERN void matgetsize_(Mat *mat, PetscInt *m, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(m);
  CHKFORTRANNULLINTEGER(n);
  *ierr = MatGetSize(*mat, m, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetlocalsize_ MATGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetlocalsize_ matgetlocalsize
#endif
PETSC_EXTERN void matgetlocalsize_(Mat *mat, PetscInt *m, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(m);
  CHKFORTRANNULLINTEGER(n);
  *ierr = MatGetLocalSize(*mat, m, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetownershiprangecolumn_ MATGETOWNERSHIPRANGECOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetownershiprangecolumn_ matgetownershiprangecolumn
#endif
PETSC_EXTERN void matgetownershiprangecolumn_(Mat *mat, PetscInt *m, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(m);
  CHKFORTRANNULLINTEGER(n);
  *ierr = MatGetOwnershipRangeColumn(*mat, m, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetownershiprange_ MATGETOWNERSHIPRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetownershiprange_ matgetownershiprange
#endif
PETSC_EXTERN void matgetownershiprange_(Mat *mat, PetscInt *m, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(m);
  CHKFORTRANNULLINTEGER(n);
  *ierr = MatGetOwnershipRange(*mat, m, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetownershipis_ MATGETOWNERSHIPIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetownershipis_ matgetownershipis
#endif
PETSC_EXTERN void matgetownershipis_(Mat *A, IS *rows, IS *cols, PetscErrorCode *ierr)
{
  PetscBool null_rows = !*(void**) rows ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_cols = !*(void**) cols ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rows);
  CHKFORTRANNULLOBJECT(cols);
  *ierr = MatGetOwnershipIS(*A, rows, cols);
  if (*ierr) return;
  if (! null_rows && !*(void**) rows) *(void **) rows = (void *)-2;
  if (! null_cols && !*(void**) cols) *(void **) cols = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matilufactorsymbolic_ MATILUFACTORSYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matilufactorsymbolic_ matilufactorsymbolic
#endif
PETSC_EXTERN void matilufactorsymbolic_(Mat *fact, Mat *mat, IS *row, IS *col, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatILUFactorSymbolic(*fact, *mat, *row, *col, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define maticcfactorsymbolic_ MATICCFACTORSYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define maticcfactorsymbolic_ maticcfactorsymbolic
#endif
PETSC_EXTERN void maticcfactorsymbolic_(Mat *fact, Mat *mat, IS *perm, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatICCFactorSymbolic(*fact, *mat, *perm, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetseqnonzerostructure_ MATGETSEQNONZEROSTRUCTURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetseqnonzerostructure_ matgetseqnonzerostructure
#endif
PETSC_EXTERN void matgetseqnonzerostructure_(Mat *mat, Mat *matstruct, PetscErrorCode *ierr)
{
  PetscBool null_matstruct = !*(void**) matstruct ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(matstruct);
  *ierr = MatGetSeqNonzeroStructure(*mat, matstruct);
  if (*ierr) return;
  if (! null_matstruct && !*(void**) matstruct) *(void **) matstruct = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdestroyseqnonzerostructure_ MATDESTROYSEQNONZEROSTRUCTURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdestroyseqnonzerostructure_ matdestroyseqnonzerostructure
#endif
PETSC_EXTERN void matdestroyseqnonzerostructure_(Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatDestroySeqNonzeroStructure(mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matincreaseoverlap_ MATINCREASEOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matincreaseoverlap_ matincreaseoverlap
#endif
PETSC_EXTERN void matincreaseoverlap_(Mat *mat, PetscInt *n, IS is[], PetscInt *ov, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(is);
  *ierr = MatIncreaseOverlap(*mat, *n, is, *ov);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matincreaseoverlapsplit_ MATINCREASEOVERLAPSPLIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matincreaseoverlapsplit_ matincreaseoverlapsplit
#endif
PETSC_EXTERN void matincreaseoverlapsplit_(Mat *mat, PetscInt *n, IS is[], PetscInt *ov, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(is);
  *ierr = MatIncreaseOverlapSplit(*mat, *n, is, *ov);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetblocksize_ MATGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetblocksize_ matgetblocksize
#endif
PETSC_EXTERN void matgetblocksize_(Mat *mat, PetscInt *bs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bs);
  *ierr = MatGetBlockSize(*mat, bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetblocksizes_ MATGETBLOCKSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetblocksizes_ matgetblocksizes
#endif
PETSC_EXTERN void matgetblocksizes_(Mat *mat, PetscInt *rbs, PetscInt *cbs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rbs);
  CHKFORTRANNULLINTEGER(cbs);
  *ierr = MatGetBlockSizes(*mat, rbs, cbs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetblocksize_ MATSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetblocksize_ matsetblocksize
#endif
PETSC_EXTERN void matsetblocksize_(Mat *mat, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = MatSetBlockSize(*mat, *bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcomputevariableblockenvelope_ MATCOMPUTEVARIABLEBLOCKENVELOPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcomputevariableblockenvelope_ matcomputevariableblockenvelope
#endif
PETSC_EXTERN void matcomputevariableblockenvelope_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatComputeVariableBlockEnvelope(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matinvertvariableblockenvelope_ MATINVERTVARIABLEBLOCKENVELOPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matinvertvariableblockenvelope_ matinvertvariableblockenvelope
#endif
PETSC_EXTERN void matinvertvariableblockenvelope_(Mat *A, MatReuse *reuse, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatInvertVariableBlockEnvelope(*A, *reuse, C);
  if (*ierr) return;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvariableblocksizes_ MATSETVARIABLEBLOCKSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvariableblocksizes_ matsetvariableblocksizes
#endif
PETSC_EXTERN void matsetvariableblocksizes_(Mat *mat, PetscInt *nblocks, const PetscInt bsizes[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bsizes);
  *ierr = MatSetVariableBlockSizes(*mat, *nblocks, bsizes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matselectvariableblocksizes_ MATSELECTVARIABLEBLOCKSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matselectvariableblocksizes_ matselectvariableblocksizes
#endif
PETSC_EXTERN void matselectvariableblocksizes_(Mat *subA, Mat *A, IS *isrow, PetscErrorCode *ierr)
{
  *ierr = MatSelectVariableBlockSizes(*subA, *A, *isrow);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetblocksizes_ MATSETBLOCKSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetblocksizes_ matsetblocksizes
#endif
PETSC_EXTERN void matsetblocksizes_(Mat *mat, PetscInt *rbs, PetscInt *cbs, PetscErrorCode *ierr)
{
  *ierr = MatSetBlockSizes(*mat, *rbs, *cbs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetblocksizesfrommats_ MATSETBLOCKSIZESFROMMATS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetblocksizesfrommats_ matsetblocksizesfrommats
#endif
PETSC_EXTERN void matsetblocksizesfrommats_(Mat *mat, Mat *fromRow, Mat *fromCol, PetscErrorCode *ierr)
{
  *ierr = MatSetBlockSizesFromMats(*mat, *fromRow, *fromCol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matresidual_ MATRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matresidual_ matresidual
#endif
PETSC_EXTERN void matresidual_(Mat *mat, Vec *b, Vec *x, Vec *r, PetscErrorCode *ierr)
{
  *ierr = MatResidual(*mat, *b, *x, *r);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetunfactored_ MATSETUNFACTORED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetunfactored_ matsetunfactored
#endif
PETSC_EXTERN void matsetunfactored_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatSetUnfactored(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatesubmatrix_ MATCREATESUBMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatesubmatrix_ matcreatesubmatrix
#endif
PETSC_EXTERN void matcreatesubmatrix_(Mat *mat, IS *isrow, IS *iscol, MatReuse *cll, Mat *newmat, PetscErrorCode *ierr)
{
  PetscBool null_newmat = !*(void**) newmat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newmat);
  *ierr = MatCreateSubMatrix(*mat, *isrow, *iscol, *cll, newmat);
  if (*ierr) return;
  if (! null_newmat && !*(void**) newmat) *(void **) newmat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpropagatesymmetryoptions_ MATPROPAGATESYMMETRYOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpropagatesymmetryoptions_ matpropagatesymmetryoptions
#endif
PETSC_EXTERN void matpropagatesymmetryoptions_(Mat *A, Mat *B, PetscErrorCode *ierr)
{
  *ierr = MatPropagateSymmetryOptions(*A, *B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstashsetinitialsize_ MATSTASHSETINITIALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstashsetinitialsize_ matstashsetinitialsize
#endif
PETSC_EXTERN void matstashsetinitialsize_(Mat *mat, PetscInt *size, PetscInt *bsize, PetscErrorCode *ierr)
{
  *ierr = MatStashSetInitialSize(*mat, *size, *bsize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matinterpolateadd_ MATINTERPOLATEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matinterpolateadd_ matinterpolateadd
#endif
PETSC_EXTERN void matinterpolateadd_(Mat *A, Vec *x, Vec *y, Vec *w, PetscErrorCode *ierr)
{
  *ierr = MatInterpolateAdd(*A, *x, *y, *w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matinterpolate_ MATINTERPOLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matinterpolate_ matinterpolate
#endif
PETSC_EXTERN void matinterpolate_(Mat *A, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = MatInterpolate(*A, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matrestrict_ MATRESTRICT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matrestrict_ matrestrict
#endif
PETSC_EXTERN void matrestrict_(Mat *A, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = MatRestrict(*A, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmatinterpolateadd_ MATMATINTERPOLATEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmatinterpolateadd_ matmatinterpolateadd
#endif
PETSC_EXTERN void matmatinterpolateadd_(Mat *A, Mat *x, Mat *w, Mat *y, PetscErrorCode *ierr)
{
  PetscBool null_y = !*(void**) y ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(y);
  *ierr = MatMatInterpolateAdd(*A, *x, *w, y);
  if (*ierr) return;
  if (! null_y && !*(void**) y) *(void **) y = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmatinterpolate_ MATMATINTERPOLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmatinterpolate_ matmatinterpolate
#endif
PETSC_EXTERN void matmatinterpolate_(Mat *A, Mat *x, Mat *y, PetscErrorCode *ierr)
{
  PetscBool null_y = !*(void**) y ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(y);
  *ierr = MatMatInterpolate(*A, *x, y);
  if (*ierr) return;
  if (! null_y && !*(void**) y) *(void **) y = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmatrestrict_ MATMATRESTRICT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmatrestrict_ matmatrestrict
#endif
PETSC_EXTERN void matmatrestrict_(Mat *A, Mat *x, Mat *y, PetscErrorCode *ierr)
{
  PetscBool null_y = !*(void**) y ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(y);
  *ierr = MatMatRestrict(*A, *x, y);
  if (*ierr) return;
  if (! null_y && !*(void**) y) *(void **) y = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetnullspace_ MATGETNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetnullspace_ matgetnullspace
#endif
PETSC_EXTERN void matgetnullspace_(Mat *mat, MatNullSpace *nullsp, PetscErrorCode *ierr)
{
  PetscBool null_nullsp = !*(void**) nullsp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(nullsp);
  *ierr = MatGetNullSpace(*mat, nullsp);
  if (*ierr) return;
  if (! null_nullsp && !*(void**) nullsp) *(void **) nullsp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetnullspace_ MATSETNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetnullspace_ matsetnullspace
#endif
PETSC_EXTERN void matsetnullspace_(Mat *mat, MatNullSpace *nullsp, PetscErrorCode *ierr)
{
  *ierr = MatSetNullSpace(*mat, *nullsp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgettransposenullspace_ MATGETTRANSPOSENULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgettransposenullspace_ matgettransposenullspace
#endif
PETSC_EXTERN void matgettransposenullspace_(Mat *mat, MatNullSpace *nullsp, PetscErrorCode *ierr)
{
  PetscBool null_nullsp = !*(void**) nullsp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(nullsp);
  *ierr = MatGetTransposeNullSpace(*mat, nullsp);
  if (*ierr) return;
  if (! null_nullsp && !*(void**) nullsp) *(void **) nullsp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsettransposenullspace_ MATSETTRANSPOSENULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsettransposenullspace_ matsettransposenullspace
#endif
PETSC_EXTERN void matsettransposenullspace_(Mat *mat, MatNullSpace *nullsp, PetscErrorCode *ierr)
{
  *ierr = MatSetTransposeNullSpace(*mat, *nullsp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetnearnullspace_ MATSETNEARNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetnearnullspace_ matsetnearnullspace
#endif
PETSC_EXTERN void matsetnearnullspace_(Mat *mat, MatNullSpace *nullsp, PetscErrorCode *ierr)
{
  *ierr = MatSetNearNullSpace(*mat, *nullsp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetnearnullspace_ MATGETNEARNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetnearnullspace_ matgetnearnullspace
#endif
PETSC_EXTERN void matgetnearnullspace_(Mat *mat, MatNullSpace *nullsp, PetscErrorCode *ierr)
{
  PetscBool null_nullsp = !*(void**) nullsp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(nullsp);
  *ierr = MatGetNearNullSpace(*mat, nullsp);
  if (*ierr) return;
  if (! null_nullsp && !*(void**) nullsp) *(void **) nullsp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define maticcfactor_ MATICCFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define maticcfactor_ maticcfactor
#endif
PETSC_EXTERN void maticcfactor_(Mat *mat, IS *row, const MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatICCFactor(*mat, *row, info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdiagonalscalelocal_ MATDIAGONALSCALELOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdiagonalscalelocal_ matdiagonalscalelocal
#endif
PETSC_EXTERN void matdiagonalscalelocal_(Mat *mat, Vec *diag, PetscErrorCode *ierr)
{
  *ierr = MatDiagonalScaleLocal(*mat, *diag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetinertia_ MATGETINERTIA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetinertia_ matgetinertia
#endif
PETSC_EXTERN void matgetinertia_(Mat *mat, PetscInt *nneg, PetscInt *nzero, PetscInt *npos, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nneg);
  CHKFORTRANNULLINTEGER(nzero);
  CHKFORTRANNULLINTEGER(npos);
  *ierr = MatGetInertia(*mat, nneg, nzero, npos);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsolves_ MATSOLVES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsolves_ matsolves
#endif
PETSC_EXTERN void matsolves_(Mat *mat, Vecs *b, Vecs *x, PetscErrorCode *ierr)
{
  *ierr = MatSolves(*mat, *b, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matissymmetric_ MATISSYMMETRIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matissymmetric_ matissymmetric
#endif
PETSC_EXTERN void matissymmetric_(Mat *A, PetscReal *tol, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsSymmetric(*A, *tol, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matishermitian_ MATISHERMITIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matishermitian_ matishermitian
#endif
PETSC_EXTERN void matishermitian_(Mat *A, PetscReal *tol, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsHermitian(*A, *tol, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matissymmetricknown_ MATISSYMMETRICKNOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matissymmetricknown_ matissymmetricknown
#endif
PETSC_EXTERN void matissymmetricknown_(Mat *A, PetscBool *set, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(set);
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsSymmetricKnown(*A, set, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matisspdknown_ MATISSPDKNOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matisspdknown_ matisspdknown
#endif
PETSC_EXTERN void matisspdknown_(Mat *A, PetscBool *set, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(set);
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsSPDKnown(*A, set, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matishermitianknown_ MATISHERMITIANKNOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matishermitianknown_ matishermitianknown
#endif
PETSC_EXTERN void matishermitianknown_(Mat *A, PetscBool *set, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(set);
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsHermitianKnown(*A, set, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matisstructurallysymmetric_ MATISSTRUCTURALLYSYMMETRIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matisstructurallysymmetric_ matisstructurallysymmetric
#endif
PETSC_EXTERN void matisstructurallysymmetric_(Mat *A, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsStructurallySymmetric(*A, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matisstructurallysymmetricknown_ MATISSTRUCTURALLYSYMMETRICKNOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matisstructurallysymmetricknown_ matisstructurallysymmetricknown
#endif
PETSC_EXTERN void matisstructurallysymmetricknown_(Mat *A, PetscBool *set, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(set);
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsStructurallySymmetricKnown(*A, set, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstashgetinfo_ MATSTASHGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstashgetinfo_ matstashgetinfo
#endif
PETSC_EXTERN void matstashgetinfo_(Mat *mat, PetscInt *nstash, PetscInt *reallocs, PetscInt *bnstash, PetscInt *breallocs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nstash);
  CHKFORTRANNULLINTEGER(reallocs);
  CHKFORTRANNULLINTEGER(bnstash);
  CHKFORTRANNULLINTEGER(breallocs);
  *ierr = MatStashGetInfo(*mat, nstash, reallocs, bnstash, breallocs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatevecs_ MATCREATEVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatevecs_ matcreatevecs
#endif
PETSC_EXTERN void matcreatevecs_(Mat *mat, Vec *right, Vec *left, PetscErrorCode *ierr)
{
  PetscBool null_right = !*(void**) right ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_left = !*(void**) left ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(right);
  CHKFORTRANNULLOBJECT(left);
  *ierr = MatCreateVecs(*mat, right, left);
  if (*ierr) return;
  if (! null_right && !*(void**) right) *(void **) right = (void *)-2;
  if (! null_left && !*(void**) left) *(void **) left = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorinfoinitialize_ MATFACTORINFOINITIALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorinfoinitialize_ matfactorinfoinitialize
#endif
PETSC_EXTERN void matfactorinfoinitialize_(MatFactorInfo *info, PetscErrorCode *ierr)
{
  *ierr = MatFactorInfoInitialize(info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorsetschuris_ MATFACTORSETSCHURIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorsetschuris_ matfactorsetschuris
#endif
PETSC_EXTERN void matfactorsetschuris_(Mat *mat, IS *is, PetscErrorCode *ierr)
{
  *ierr = MatFactorSetSchurIS(*mat, *is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorcreateschurcomplement_ MATFACTORCREATESCHURCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorcreateschurcomplement_ matfactorcreateschurcomplement
#endif
PETSC_EXTERN void matfactorcreateschurcomplement_(Mat *F, Mat *S, MatFactorSchurStatus *status, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = MatFactorCreateSchurComplement(*F, S, status);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorgetschurcomplement_ MATFACTORGETSCHURCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorgetschurcomplement_ matfactorgetschurcomplement
#endif
PETSC_EXTERN void matfactorgetschurcomplement_(Mat *F, Mat *S, MatFactorSchurStatus *status, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = MatFactorGetSchurComplement(*F, S, status);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorrestoreschurcomplement_ MATFACTORRESTORESCHURCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorrestoreschurcomplement_ matfactorrestoreschurcomplement
#endif
PETSC_EXTERN void matfactorrestoreschurcomplement_(Mat *F, Mat *S, MatFactorSchurStatus *status, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = MatFactorRestoreSchurComplement(*F, S, *status);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorsolveschurcomplementtranspose_ MATFACTORSOLVESCHURCOMPLEMENTTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorsolveschurcomplementtranspose_ matfactorsolveschurcomplementtranspose
#endif
PETSC_EXTERN void matfactorsolveschurcomplementtranspose_(Mat *F, Vec *rhs, Vec *sol, PetscErrorCode *ierr)
{
  *ierr = MatFactorSolveSchurComplementTranspose(*F, *rhs, *sol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorsolveschurcomplement_ MATFACTORSOLVESCHURCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorsolveschurcomplement_ matfactorsolveschurcomplement
#endif
PETSC_EXTERN void matfactorsolveschurcomplement_(Mat *F, Vec *rhs, Vec *sol, PetscErrorCode *ierr)
{
  *ierr = MatFactorSolveSchurComplement(*F, *rhs, *sol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorinvertschurcomplement_ MATFACTORINVERTSCHURCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorinvertschurcomplement_ matfactorinvertschurcomplement
#endif
PETSC_EXTERN void matfactorinvertschurcomplement_(Mat *F, PetscErrorCode *ierr)
{
  *ierr = MatFactorInvertSchurComplement(*F);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfactorfactorizeschurcomplement_ MATFACTORFACTORIZESCHURCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfactorfactorizeschurcomplement_ matfactorfactorizeschurcomplement
#endif
PETSC_EXTERN void matfactorfactorizeschurcomplement_(Mat *F, PetscErrorCode *ierr)
{
  *ierr = MatFactorFactorizeSchurComplement(*F);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matptap_ MATPTAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matptap_ matptap
#endif
PETSC_EXTERN void matptap_(Mat *A, Mat *P, MatReuse *scall, PetscReal *fill, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatPtAP(*A, *P, *scall, *fill, C);
  if (*ierr) return;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matrart_ MATRART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matrart_ matrart
#endif
PETSC_EXTERN void matrart_(Mat *A, Mat *R, MatReuse *scall, PetscReal *fill, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatRARt(*A, *R, *scall, *fill, C);
  if (*ierr) return;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmatmult_ MATMATMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmatmult_ matmatmult
#endif
PETSC_EXTERN void matmatmult_(Mat *A, Mat *B, MatReuse *scall, PetscReal *fill, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatMatMult(*A, *B, *scall, *fill, C);
  if (*ierr) return;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmattransposemult_ MATMATTRANSPOSEMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmattransposemult_ matmattransposemult
#endif
PETSC_EXTERN void matmattransposemult_(Mat *A, Mat *B, MatReuse *scall, PetscReal *fill, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatMatTransposeMult(*A, *B, *scall, *fill, C);
  if (*ierr) return;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mattransposematmult_ MATTRANSPOSEMATMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mattransposematmult_ mattransposematmult
#endif
PETSC_EXTERN void mattransposematmult_(Mat *A, Mat *B, MatReuse *scall, PetscReal *fill, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatTransposeMatMult(*A, *B, *scall, *fill, C);
  if (*ierr) return;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmatmatmult_ MATMATMATMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmatmatmult_ matmatmatmult
#endif
PETSC_EXTERN void matmatmatmult_(Mat *A, Mat *B, Mat *C, MatReuse *scall, PetscReal *fill, Mat *D, PetscErrorCode *ierr)
{
  PetscBool null_D = !*(void**) D ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(D);
  *ierr = MatMatMatMult(*A, *B, *C, *scall, *fill, D);
  if (*ierr) return;
  if (! null_D && !*(void**) D) *(void **) D = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateredundantmatrix_ MATCREATEREDUNDANTMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateredundantmatrix_ matcreateredundantmatrix
#endif
PETSC_EXTERN void matcreateredundantmatrix_(Mat *mat, PetscInt *nsubcomm, MPI_Fint *subcomm, MatReuse *reuse, Mat *matredundant, PetscErrorCode *ierr)
{
  PetscBool null_matredundant = !*(void**) matredundant ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(matredundant);
  *ierr = MatCreateRedundantMatrix(*mat, *nsubcomm, MPI_Comm_f2c(*(subcomm)), *reuse, matredundant);
  if (*ierr) return;
  if (! null_matredundant && !*(void**) matredundant) *(void **) matredundant = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetmultiprocblock_ MATGETMULTIPROCBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetmultiprocblock_ matgetmultiprocblock
#endif
PETSC_EXTERN void matgetmultiprocblock_(Mat *mat, MPI_Fint *subComm, MatReuse *scall, Mat *subMat, PetscErrorCode *ierr)
{
  PetscBool null_subMat = !*(void**) subMat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subMat);
  *ierr = MatGetMultiProcBlock(*mat, MPI_Comm_f2c(*(subComm)), *scall, subMat);
  if (*ierr) return;
  if (! null_subMat && !*(void**) subMat) *(void **) subMat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetlocalsubmatrix_ MATGETLOCALSUBMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetlocalsubmatrix_ matgetlocalsubmatrix
#endif
PETSC_EXTERN void matgetlocalsubmatrix_(Mat *mat, IS *isrow, IS *iscol, Mat *submat, PetscErrorCode *ierr)
{
  PetscBool null_submat = !*(void**) submat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(submat);
  *ierr = MatGetLocalSubMatrix(*mat, *isrow, *iscol, submat);
  if (*ierr) return;
  if (! null_submat && !*(void**) submat) *(void **) submat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matrestorelocalsubmatrix_ MATRESTORELOCALSUBMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matrestorelocalsubmatrix_ matrestorelocalsubmatrix
#endif
PETSC_EXTERN void matrestorelocalsubmatrix_(Mat *mat, IS *isrow, IS *iscol, Mat *submat, PetscErrorCode *ierr)
{
  PetscBool null_submat = !*(void**) submat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(submat);
  *ierr = MatRestoreLocalSubMatrix(*mat, *isrow, *iscol, submat);
  if (*ierr) return;
  if (! null_submat && !*(void**) submat) *(void **) submat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfindzerodiagonals_ MATFINDZERODIAGONALS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfindzerodiagonals_ matfindzerodiagonals
#endif
PETSC_EXTERN void matfindzerodiagonals_(Mat *mat, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = MatFindZeroDiagonals(*mat, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfindoffblockdiagonalentries_ MATFINDOFFBLOCKDIAGONALENTRIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfindoffblockdiagonalentries_ matfindoffblockdiagonalentries
#endif
PETSC_EXTERN void matfindoffblockdiagonalentries_(Mat *mat, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = MatFindOffBlockDiagonalEntries(*mat, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matinvertvariableblockdiagonal_ MATINVERTVARIABLEBLOCKDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matinvertvariableblockdiagonal_ matinvertvariableblockdiagonal
#endif
PETSC_EXTERN void matinvertvariableblockdiagonal_(Mat *mat, PetscInt *nblocks, const PetscInt bsizes[], PetscScalar values[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bsizes);
  CHKFORTRANNULLSCALAR(values);
  *ierr = MatInvertVariableBlockDiagonal(*mat, *nblocks, bsizes, values);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matinvertblockdiagonalmat_ MATINVERTBLOCKDIAGONALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matinvertblockdiagonalmat_ matinvertblockdiagonalmat
#endif
PETSC_EXTERN void matinvertblockdiagonalmat_(Mat *A, Mat *C, PetscErrorCode *ierr)
{
  *ierr = MatInvertBlockDiagonalMat(*A, *C);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mattranscoloringapplysptoden_ MATTRANSCOLORINGAPPLYSPTODEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mattranscoloringapplysptoden_ mattranscoloringapplysptoden
#endif
PETSC_EXTERN void mattranscoloringapplysptoden_(MatTransposeColoring *coloring, Mat *B, Mat *Btdense, PetscErrorCode *ierr)
{
  *ierr = MatTransColoringApplySpToDen(*coloring, *B, *Btdense);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mattranscoloringapplydentosp_ MATTRANSCOLORINGAPPLYDENTOSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mattranscoloringapplydentosp_ mattranscoloringapplydentosp
#endif
PETSC_EXTERN void mattranscoloringapplydentosp_(MatTransposeColoring *matcoloring, Mat *Cden, Mat *Csp, PetscErrorCode *ierr)
{
  *ierr = MatTransColoringApplyDenToSp(*matcoloring, *Cden, *Csp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetnonzerostate_ MATGETNONZEROSTATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetnonzerostate_ matgetnonzerostate
#endif
PETSC_EXTERN void matgetnonzerostate_(Mat *mat, PetscObjectState *state, PetscErrorCode *ierr)
{
  *ierr = MatGetNonzeroState(*mat, state);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatempimatconcatenateseqmat_ MATCREATEMPIMATCONCATENATESEQMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatempimatconcatenateseqmat_ matcreatempimatconcatenateseqmat
#endif
PETSC_EXTERN void matcreatempimatconcatenateseqmat_(MPI_Fint *comm, Mat *seqmat, PetscInt *n, MatReuse *reuse, Mat *mpimat, PetscErrorCode *ierr)
{
  PetscBool null_mpimat = !*(void**) mpimat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mpimat);
  *ierr = MatCreateMPIMatConcatenateSeqMat(MPI_Comm_f2c(*(comm)), *seqmat, *n, *reuse, mpimat);
  if (*ierr) return;
  if (! null_mpimat && !*(void**) mpimat) *(void **) mpimat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgalerkin_ MATGALERKIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgalerkin_ matgalerkin
#endif
PETSC_EXTERN void matgalerkin_(Mat *restrct, Mat *dA, Mat *interpolate, MatReuse *reuse, PetscReal *fill, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatGalerkin(*restrct, *dA, *interpolate, *reuse, *fill, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathasoperation_ MATHASOPERATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathasoperation_ mathasoperation
#endif
PETSC_EXTERN void mathasoperation_(Mat *mat, MatOperation *op, PetscBool *has, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(has);
  *ierr = MatHasOperation(*mat, *op, has);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathascongruentlayouts_ MATHASCONGRUENTLAYOUTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathascongruentlayouts_ mathascongruentlayouts
#endif
PETSC_EXTERN void mathascongruentlayouts_(Mat *mat, PetscBool *cong, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(cong);
  *ierr = MatHasCongruentLayouts(*mat, cong);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetinf_ MATSETINF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetinf_ matsetinf
#endif
PETSC_EXTERN void matsetinf_(Mat *A, PetscErrorCode *ierr)
{
  *ierr = MatSetInf(*A);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreategraph_ MATCREATEGRAPH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreategraph_ matcreategraph
#endif
PETSC_EXTERN void matcreategraph_(Mat *A, PetscBool *sym, PetscBool *scale, PetscReal *filter, PetscInt *num_idx, PetscInt index[], Mat *graph, PetscErrorCode *ierr)
{
  PetscBool null_graph = !*(void**) graph ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(index);
  CHKFORTRANNULLOBJECT(graph);
  *ierr = MatCreateGraph(*A, *sym ? PETSC_TRUE : PETSC_FALSE, *scale ? PETSC_TRUE : PETSC_FALSE, *filter, *num_idx, index, graph);
  if (*ierr) return;
  if (! null_graph && !*(void**) graph) *(void **) graph = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mateliminatezeros_ MATELIMINATEZEROS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mateliminatezeros_ mateliminatezeros
#endif
PETSC_EXTERN void mateliminatezeros_(Mat *A, PetscBool *keep, PetscErrorCode *ierr)
{
  *ierr = MatEliminateZeros(*A, *keep ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetcurrentmemtype_ MATGETCURRENTMEMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetcurrentmemtype_ matgetcurrentmemtype
#endif
PETSC_EXTERN void matgetcurrentmemtype_(Mat *A, PetscMemType *m, PetscErrorCode *ierr)
{
  *ierr = MatGetCurrentMemType(*A, m);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringpatch_ MATCOLORINGPATCH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringpatch_ matcoloringpatch
#endif
PETSC_EXTERN void matcoloringpatch_(Mat *mat, PetscInt *ncolors, PetscInt *n, ISColoringValue colorarray[], ISColoring *iscoloring, PetscErrorCode *ierr)
{
  PetscBool null_iscoloring = !*(void**) iscoloring ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(iscoloring);
  *ierr = MatColoringPatch(*mat, *ncolors, *n, colorarray, iscoloring);
  if (*ierr) return;
  if (! null_iscoloring && !*(void**) iscoloring) *(void **) iscoloring = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mattransposecoloringdestroy_ MATTRANSPOSECOLORINGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mattransposecoloringdestroy_ mattransposecoloringdestroy
#endif
PETSC_EXTERN void mattransposecoloringdestroy_(MatTransposeColoring *c, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(c);
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(c);
  *ierr = MatTransposeColoringDestroy(c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mattransposecoloringcreate_ MATTRANSPOSECOLORINGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mattransposecoloringcreate_ mattransposecoloringcreate
#endif
PETSC_EXTERN void mattransposecoloringcreate_(Mat *mat, ISColoring *iscoloring, MatTransposeColoring *color, PetscErrorCode *ierr)
{
  PetscBool null_color = !*(void**) color ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(color);
  CHKFORTRANNULLOBJECT(color);
  *ierr = MatTransposeColoringCreate(*mat, *iscoloring, color);
  if (*ierr) return;
  if (! null_color && !*(void**) color) *(void **) color = (void *)-2;
}
