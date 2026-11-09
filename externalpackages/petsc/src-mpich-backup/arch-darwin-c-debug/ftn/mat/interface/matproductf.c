#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductreplacemats_ MATPRODUCTREPLACEMATS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductreplacemats_ matproductreplacemats
#endif
PETSC_EXTERN void matproductreplacemats_(Mat *A, Mat *B, Mat *C, Mat *D, PetscErrorCode *ierr)
{
  *ierr = MatProductReplaceMats(*A, *B, *C, *D);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductsetfromoptions_ MATPRODUCTSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductsetfromoptions_ matproductsetfromoptions
#endif
PETSC_EXTERN void matproductsetfromoptions_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatProductSetFromOptions(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductview_ MATPRODUCTVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductview_ matproductview
#endif
PETSC_EXTERN void matproductview_(Mat *mat, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = MatProductView(*mat, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductnumeric_ MATPRODUCTNUMERIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductnumeric_ matproductnumeric
#endif
PETSC_EXTERN void matproductnumeric_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatProductNumeric(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductsymbolic_ MATPRODUCTSYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductsymbolic_ matproductsymbolic
#endif
PETSC_EXTERN void matproductsymbolic_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatProductSymbolic(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductsetfill_ MATPRODUCTSETFILL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductsetfill_ matproductsetfill
#endif
PETSC_EXTERN void matproductsetfill_(Mat *mat, PetscReal *fill, PetscErrorCode *ierr)
{
  *ierr = MatProductSetFill(*mat, *fill);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductsetalgorithm_ MATPRODUCTSETALGORITHM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductsetalgorithm_ matproductsetalgorithm
#endif
PETSC_EXTERN void matproductsetalgorithm_(Mat *mat, char *alg, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_alg)
{
  char* c_alg;
  FIXCHAR(alg, l_alg, c_alg);
  *ierr = MatProductSetAlgorithm(*mat, c_alg);
  if (*ierr) return;
  FREECHAR(alg, c_alg);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductgetalgorithm_ MATPRODUCTGETALGORITHM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductgetalgorithm_ matproductgetalgorithm
#endif
PETSC_EXTERN void matproductgetalgorithm_(Mat *mat, char *alg, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_alg)
{
  char* c_alg = PETSC_NULLPTR;
  *ierr = MatProductGetAlgorithm(*mat, (const char **)&c_alg);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)alg, c_alg, l_alg);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, alg, l_alg);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductsettype_ MATPRODUCTSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductsettype_ matproductsettype
#endif
PETSC_EXTERN void matproductsettype_(Mat *mat, MatProductType *productype, PetscErrorCode *ierr)
{
  *ierr = MatProductSetType(*mat, *productype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductclear_ MATPRODUCTCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductclear_ matproductclear
#endif
PETSC_EXTERN void matproductclear_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatProductClear(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductcreatewithmat_ MATPRODUCTCREATEWITHMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductcreatewithmat_ matproductcreatewithmat
#endif
PETSC_EXTERN void matproductcreatewithmat_(Mat *A, Mat *B, Mat *C, Mat *D, PetscErrorCode *ierr)
{
  *ierr = MatProductCreateWithMat(*A, *B, *C, *D);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductcreate_ MATPRODUCTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductcreate_ matproductcreate
#endif
PETSC_EXTERN void matproductcreate_(Mat *A, Mat *B, Mat *C, Mat *D, PetscErrorCode *ierr)
{
  PetscBool null_D = !*(void**) D ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(D);
  CHKFORTRANNULLOBJECT(D);
  *ierr = MatProductCreate(*A, *B, *C, D);
  if (*ierr) return;
  if (! null_D && !*(void**) D) *(void **) D = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductgettype_ MATPRODUCTGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductgettype_ matproductgettype
#endif
PETSC_EXTERN void matproductgettype_(Mat *mat, MatProductType *mtype, PetscErrorCode *ierr)
{
  *ierr = MatProductGetType(*mat, mtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matproductgetmats_ MATPRODUCTGETMATS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matproductgetmats_ matproductgetmats
#endif
PETSC_EXTERN void matproductgetmats_(Mat *mat, Mat *A, Mat *B, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A);
  CHKFORTRANNULLOBJECT(B);
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatProductGetMats(*mat, A, B, C);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
