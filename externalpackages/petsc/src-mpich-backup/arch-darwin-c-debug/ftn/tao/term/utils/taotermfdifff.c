#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputegradientfd_ TAOTERMCOMPUTEGRADIENTFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputegradientfd_ taotermcomputegradientfd
#endif
PETSC_EXTERN void taotermcomputegradientfd_(TaoTerm *term, Vec *x, Vec *params, Vec *g, PetscErrorCode *ierr)
{
  *ierr = TaoTermComputeGradientFD(*term, *x, *params, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputehessianfd_ TAOTERMCOMPUTEHESSIANFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputehessianfd_ taotermcomputehessianfd
#endif
PETSC_EXTERN void taotermcomputehessianfd_(TaoTerm *term, Vec *x, Vec *params, Mat *H, Mat *Hpre, PetscErrorCode *ierr)
{
  *ierr = TaoTermComputeHessianFD(*term, *x, *params, *H, *Hpre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcreatehessianmffd_ TAOTERMCREATEHESSIANMFFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcreatehessianmffd_ taotermcreatehessianmffd
#endif
PETSC_EXTERN void taotermcreatehessianmffd_(TaoTerm *term, Mat *mffd, PetscErrorCode *ierr)
{
  PetscBool null_mffd = !*(void**) mffd ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mffd);
  *ierr = TaoTermCreateHessianMFFD(*term, mffd);
  if (*ierr) return;
  if (! null_mffd && !*(void**) mffd) *(void **) mffd = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputehessianmffd_ TAOTERMCOMPUTEHESSIANMFFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputehessianmffd_ taotermcomputehessianmffd
#endif
PETSC_EXTERN void taotermcomputehessianmffd_(TaoTerm *term, Vec *x, Vec *params, Mat *H, Mat *B, PetscErrorCode *ierr)
{
  *ierr = TaoTermComputeHessianMFFD(*term, *x, *params, *H, *B);
  if (*ierr) return;
}
