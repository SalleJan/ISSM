#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreate_ MATCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreate_ matcreate
#endif
PETSC_EXTERN void matcreate_(MPI_Fint *comm, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(A);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreate(MPI_Comm_f2c(*(comm)), A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatefromoptions_ MATCREATEFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatefromoptions_ matcreatefromoptions
#endif
PETSC_EXTERN void matcreatefromoptions_(MPI_Fint *comm, char prefix[], PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, Mat *A, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateFromOptions(MPI_Comm_f2c(*(comm)), c_prefix, *bs, *m, *n, *M_M, *M_N, A);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseterroriffailure_ MATSETERRORIFFAILURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseterroriffailure_ matseterroriffailure
#endif
PETSC_EXTERN void matseterroriffailure_(Mat *mat, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = MatSetErrorIfFailure(*mat, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetsizes_ MATSETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetsizes_ matsetsizes
#endif
PETSC_EXTERN void matsetsizes_(Mat *A, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscErrorCode *ierr)
{
  *ierr = MatSetSizes(*A, *m, *n, *M_M, *M_N);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetfromoptions_ MATSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetfromoptions_ matsetfromoptions
#endif
PETSC_EXTERN void matsetfromoptions_(Mat *B, PetscErrorCode *ierr)
{
  *ierr = MatSetFromOptions(*B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matxaijsetpreallocation_ MATXAIJSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matxaijsetpreallocation_ matxaijsetpreallocation
#endif
PETSC_EXTERN void matxaijsetpreallocation_(Mat *A, PetscInt *bs, const PetscInt dnnz[], const PetscInt onnz[], const PetscInt dnnzu[], const PetscInt onnzu[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dnnz);
  CHKFORTRANNULLINTEGER(onnz);
  CHKFORTRANNULLINTEGER(dnnzu);
  CHKFORTRANNULLINTEGER(onnzu);
  *ierr = MatXAIJSetPreallocation(*A, *bs, dnnz, onnz, dnnzu, onnzu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matheadermerge_ MATHEADERMERGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matheadermerge_ matheadermerge
#endif
PETSC_EXTERN void matheadermerge_(Mat *A, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatHeaderMerge(*A, C);
  if (*ierr) return;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matheaderreplace_ MATHEADERREPLACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matheaderreplace_ matheaderreplace
#endif
PETSC_EXTERN void matheaderreplace_(Mat *A, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatHeaderReplace(*A, C);
  if (*ierr) return;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matbindtocpu_ MATBINDTOCPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matbindtocpu_ matbindtocpu
#endif
PETSC_EXTERN void matbindtocpu_(Mat *A, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = MatBindToCPU(*A, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matboundtocpu_ MATBOUNDTOCPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matboundtocpu_ matboundtocpu
#endif
PETSC_EXTERN void matboundtocpu_(Mat *A, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatBoundToCPU(*A, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetpreallocationcoo_ MATSETPREALLOCATIONCOO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetpreallocationcoo_ matsetpreallocationcoo
#endif
PETSC_EXTERN void matsetpreallocationcoo_(Mat *A, PetscCount *ncoo, PetscInt coo_i[], PetscInt coo_j[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(coo_i);
  CHKFORTRANNULLINTEGER(coo_j);
  *ierr = MatSetPreallocationCOO(*A, *ncoo, coo_i, coo_j);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetpreallocationcoolocal_ MATSETPREALLOCATIONCOOLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetpreallocationcoolocal_ matsetpreallocationcoolocal
#endif
PETSC_EXTERN void matsetpreallocationcoolocal_(Mat *A, PetscCount *ncoo, PetscInt coo_i[], PetscInt coo_j[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(coo_i);
  CHKFORTRANNULLINTEGER(coo_j);
  *ierr = MatSetPreallocationCOOLocal(*A, *ncoo, coo_i, coo_j);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvaluescoo_ MATSETVALUESCOO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvaluescoo_ matsetvaluescoo
#endif
PETSC_EXTERN void matsetvaluescoo_(Mat *A, const PetscScalar coo_v[], InsertMode *imode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coo_v);
  *ierr = MatSetValuesCOO(*A, coo_v, *imode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetbindingpropagates_ MATSETBINDINGPROPAGATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetbindingpropagates_ matsetbindingpropagates
#endif
PETSC_EXTERN void matsetbindingpropagates_(Mat *A, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = MatSetBindingPropagates(*A, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetbindingpropagates_ MATGETBINDINGPROPAGATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetbindingpropagates_ matgetbindingpropagates
#endif
PETSC_EXTERN void matgetbindingpropagates_(Mat *A, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatGetBindingPropagates(*A, flg);
  if (*ierr) return;
}
