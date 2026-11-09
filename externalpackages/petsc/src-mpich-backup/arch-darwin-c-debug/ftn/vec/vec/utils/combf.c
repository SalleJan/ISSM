#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecdotbegin_ VECDOTBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecdotbegin_ vecdotbegin
#endif
PETSC_EXTERN void vecdotbegin_(Vec *x, Vec *y, PetscScalar *result, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(result);
  *ierr = VecDotBegin(*x, *y, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecdotend_ VECDOTEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecdotend_ vecdotend
#endif
PETSC_EXTERN void vecdotend_(Vec *x, Vec *y, PetscScalar *result, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(result);
  *ierr = VecDotEnd(*x, *y, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectdotbegin_ VECTDOTBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectdotbegin_ vectdotbegin
#endif
PETSC_EXTERN void vectdotbegin_(Vec *x, Vec *y, PetscScalar *result, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(result);
  *ierr = VecTDotBegin(*x, *y, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectdotend_ VECTDOTEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectdotend_ vectdotend
#endif
PETSC_EXTERN void vectdotend_(Vec *x, Vec *y, PetscScalar *result, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(result);
  *ierr = VecTDotEnd(*x, *y, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecnormbegin_ VECNORMBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecnormbegin_ vecnormbegin
#endif
PETSC_EXTERN void vecnormbegin_(Vec *x, NormType *ntype, PetscReal *result, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(result);
  *ierr = VecNormBegin(*x, *ntype, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecnormend_ VECNORMEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecnormend_ vecnormend
#endif
PETSC_EXTERN void vecnormend_(Vec *x, NormType *ntype, PetscReal *result, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(result);
  *ierr = VecNormEnd(*x, *ntype, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmdotbegin_ VECMDOTBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmdotbegin_ vecmdotbegin
#endif
PETSC_EXTERN void vecmdotbegin_(Vec *x, PetscInt *nv, const Vec y[], PetscScalar result[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(y);
  CHKFORTRANNULLSCALAR(result);
  *ierr = VecMDotBegin(*x, *nv, y, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmdotend_ VECMDOTEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmdotend_ vecmdotend
#endif
PETSC_EXTERN void vecmdotend_(Vec *x, PetscInt *nv, const Vec y[], PetscScalar result[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(y);
  CHKFORTRANNULLSCALAR(result);
  *ierr = VecMDotEnd(*x, *nv, y, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmtdotbegin_ VECMTDOTBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmtdotbegin_ vecmtdotbegin
#endif
PETSC_EXTERN void vecmtdotbegin_(Vec *x, PetscInt *nv, const Vec y[], PetscScalar result[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(y);
  CHKFORTRANNULLSCALAR(result);
  *ierr = VecMTDotBegin(*x, *nv, y, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmtdotend_ VECMTDOTEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmtdotend_ vecmtdotend
#endif
PETSC_EXTERN void vecmtdotend_(Vec *x, PetscInt *nv, const Vec y[], PetscScalar result[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(y);
  CHKFORTRANNULLSCALAR(result);
  *ierr = VecMTDotEnd(*x, *nv, y, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccommsplitreductionbegin_ PETSCCOMMSPLITREDUCTIONBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccommsplitreductionbegin_ petsccommsplitreductionbegin
#endif
PETSC_EXTERN void petsccommsplitreductionbegin_(MPI_Fint *comm, PetscErrorCode *ierr)
{
  *ierr = PetscCommSplitReductionBegin(MPI_Comm_f2c(*(comm)));
  if (*ierr) return;
}
