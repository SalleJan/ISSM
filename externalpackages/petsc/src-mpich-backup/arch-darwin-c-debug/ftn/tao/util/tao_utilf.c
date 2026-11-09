#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecfischer_ VECFISCHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecfischer_ vecfischer
#endif
PETSC_EXTERN void vecfischer_(Vec *X, Vec *F, Vec *L, Vec *U, Vec *FB, PetscErrorCode *ierr)
{
  *ierr = VecFischer(*X, *F, *L, *U, *FB);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsfischer_ VECSFISCHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsfischer_ vecsfischer
#endif
PETSC_EXTERN void vecsfischer_(Vec *X, Vec *F, Vec *L, Vec *U, PetscReal *mu, Vec *FB, PetscErrorCode *ierr)
{
  *ierr = VecSFischer(*X, *F, *L, *U, *mu, *FB);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdfischer_ MATDFISCHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdfischer_ matdfischer
#endif
PETSC_EXTERN void matdfischer_(Mat *jac, Vec *X, Vec *Con, Vec *XL, Vec *XU, Vec *T1, Vec *T2, Vec *Da, Vec *Db, PetscErrorCode *ierr)
{
  *ierr = MatDFischer(*jac, *X, *Con, *XL, *XU, *T1, *T2, *Da, *Db);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdsfischer_ MATDSFISCHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdsfischer_ matdsfischer
#endif
PETSC_EXTERN void matdsfischer_(Mat *jac, Vec *X, Vec *Con, Vec *XL, Vec *XU, PetscReal *mu, Vec *T1, Vec *T2, Vec *Da, Vec *Db, Vec *Dm, PetscErrorCode *ierr)
{
  *ierr = MatDSFischer(*jac, *X, *Con, *XL, *XU, *mu, *T1, *T2, *Da, *Db, *Dm);
  if (*ierr) return;
}
