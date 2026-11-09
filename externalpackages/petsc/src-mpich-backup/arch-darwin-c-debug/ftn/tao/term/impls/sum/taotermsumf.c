#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecnestgettaotermsumparameters_ VECNESTGETTAOTERMSUMPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecnestgettaotermsumparameters_ vecnestgettaotermsumparameters
#endif
PETSC_EXTERN void vecnestgettaotermsumparameters_(Vec *params, PetscInt *index, Vec *subparams, PetscErrorCode *ierr)
{
  PetscBool null_subparams = !*(void**) subparams ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subparams);
  *ierr = VecNestGetTaoTermSumParameters(*params, *index, subparams);
  if (*ierr) return;
  if (! null_subparams && !*(void**) subparams) *(void **) subparams = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsumparameterspack_ TAOTERMSUMPARAMETERSPACK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsumparameterspack_ taotermsumparameterspack
#endif
PETSC_EXTERN void taotermsumparameterspack_(TaoTerm *term, Vec p_arr[], Vec *params, PetscErrorCode *ierr)
{
  PetscBool null_params = !*(void**) params ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(p_arr);
  CHKFORTRANNULLOBJECT(params);
  *ierr = TaoTermSumParametersPack(*term, p_arr, params);
  if (*ierr) return;
  if (! null_params && !*(void**) params) *(void **) params = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsumparametersunpack_ TAOTERMSUMPARAMETERSUNPACK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsumparametersunpack_ taotermsumparametersunpack
#endif
PETSC_EXTERN void taotermsumparametersunpack_(TaoTerm *term, Vec *params, Vec p_arr[], PetscErrorCode *ierr)
{
  PetscBool null_params = !*(void**) params ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(params);
  CHKFORTRANNULLOBJECT(p_arr);
  *ierr = TaoTermSumParametersUnpack(*term, params, p_arr);
  if (*ierr) return;
  if (! null_params && !*(void**) params) *(void **) params = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsumsetnumberterms_ TAOTERMSUMSETNUMBERTERMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsumsetnumberterms_ taotermsumsetnumberterms
#endif
PETSC_EXTERN void taotermsumsetnumberterms_(TaoTerm *term, PetscInt *n_terms, PetscErrorCode *ierr)
{
  *ierr = TaoTermSumSetNumberTerms(*term, *n_terms);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsumgetnumberterms_ TAOTERMSUMGETNUMBERTERMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsumgetnumberterms_ taotermsumgetnumberterms
#endif
PETSC_EXTERN void taotermsumgetnumberterms_(TaoTerm *term, PetscInt *n_terms, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n_terms);
  *ierr = TaoTermSumGetNumberTerms(*term, n_terms);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsumsetterm_ TAOTERMSUMSETTERM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsumsetterm_ taotermsumsetterm
#endif
PETSC_EXTERN void taotermsumsetterm_(TaoTerm *sumterm, PetscInt *index, char prefix[], PetscReal *scale, TaoTerm *term, Mat *map, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = TaoTermSumSetTerm(*sumterm, *index, c_prefix, *scale, *term, *map);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsumsettermhessianmatrices_ TAOTERMSUMSETTERMHESSIANMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsumsettermhessianmatrices_ taotermsumsettermhessianmatrices
#endif
PETSC_EXTERN void taotermsumsettermhessianmatrices_(TaoTerm *term, PetscInt *index, Mat *unmapped_H, Mat *unmapped_Hpre, Mat *mapped_H, Mat *mapped_Hpre, PetscErrorCode *ierr)
{
  *ierr = TaoTermSumSetTermHessianMatrices(*term, *index, *unmapped_H, *unmapped_Hpre, *mapped_H, *mapped_Hpre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsumgettermhessianmatrices_ TAOTERMSUMGETTERMHESSIANMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsumgettermhessianmatrices_ taotermsumgettermhessianmatrices
#endif
PETSC_EXTERN void taotermsumgettermhessianmatrices_(TaoTerm *term, PetscInt *index, Mat *unmapped_H, Mat *unmapped_Hpre, Mat *mapped_H, Mat *mapped_Hpre, PetscErrorCode *ierr)
{
  PetscBool null_unmapped_H = !*(void**) unmapped_H ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_unmapped_Hpre = !*(void**) unmapped_Hpre ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_mapped_H = !*(void**) mapped_H ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_mapped_Hpre = !*(void**) mapped_Hpre ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(unmapped_H);
  CHKFORTRANNULLOBJECT(unmapped_Hpre);
  CHKFORTRANNULLOBJECT(mapped_H);
  CHKFORTRANNULLOBJECT(mapped_Hpre);
  *ierr = TaoTermSumGetTermHessianMatrices(*term, *index, unmapped_H, unmapped_Hpre, mapped_H, mapped_Hpre);
  if (*ierr) return;
  if (! null_unmapped_H && !*(void**) unmapped_H) *(void **) unmapped_H = (void *)-2;
  if (! null_unmapped_Hpre && !*(void**) unmapped_Hpre) *(void **) unmapped_Hpre = (void *)-2;
  if (! null_mapped_H && !*(void**) mapped_H) *(void **) mapped_H = (void *)-2;
  if (! null_mapped_Hpre && !*(void**) mapped_Hpre) *(void **) mapped_Hpre = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsumgettermmask_ TAOTERMSUMGETTERMMASK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsumgettermmask_ taotermsumgettermmask
#endif
PETSC_EXTERN void taotermsumgettermmask_(TaoTerm *term, PetscInt *index, TaoTermMask *mask, PetscErrorCode *ierr)
{
  *ierr = TaoTermSumGetTermMask(*term, *index, mask);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsumsettermmask_ TAOTERMSUMSETTERMMASK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsumsettermmask_ taotermsumsettermmask
#endif
PETSC_EXTERN void taotermsumsettermmask_(TaoTerm *term, PetscInt *index, TaoTermMask *mask, PetscErrorCode *ierr)
{
  *ierr = TaoTermSumSetTermMask(*term, *index, *mask);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsumaddterm_ TAOTERMSUMADDTERM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsumaddterm_ taotermsumaddterm
#endif
PETSC_EXTERN void taotermsumaddterm_(TaoTerm *sumterm, char prefix[], PetscReal *scale, TaoTerm *term, Mat *map, PetscInt *index, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  CHKFORTRANNULLINTEGER(index);
  *ierr = TaoTermSumAddTerm(*sumterm, c_prefix, *scale, *term, *map, index);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
