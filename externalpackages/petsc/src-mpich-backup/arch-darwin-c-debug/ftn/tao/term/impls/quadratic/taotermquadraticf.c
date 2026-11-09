#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermquadraticgetmat_ TAOTERMQUADRATICGETMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermquadraticgetmat_ taotermquadraticgetmat
#endif
PETSC_EXTERN void taotermquadraticgetmat_(TaoTerm *term, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A);
  *ierr = TaoTermQuadraticGetMat(*term, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermquadraticsetmat_ TAOTERMQUADRATICSETMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermquadraticsetmat_ taotermquadraticsetmat
#endif
PETSC_EXTERN void taotermquadraticsetmat_(TaoTerm *term, Mat *A, PetscErrorCode *ierr)
{
  *ierr = TaoTermQuadraticSetMat(*term, *A);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcreatequadratic_ TAOTERMCREATEQUADRATIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcreatequadratic_ taotermcreatequadratic
#endif
PETSC_EXTERN void taotermcreatequadratic_(Mat *A, TaoTerm *term, PetscErrorCode *ierr)
{
  PetscBool null_term = !*(void**) term ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(term);
  *ierr = TaoTermCreateQuadratic(*A, term);
  if (*ierr) return;
  if (! null_term && !*(void**) term) *(void **) term = (void *)-2;
}
