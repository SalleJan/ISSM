#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoterml1setepsilon_ TAOTERML1SETEPSILON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoterml1setepsilon_ taoterml1setepsilon
#endif
PETSC_EXTERN void taoterml1setepsilon_(TaoTerm *term, PetscReal *epsilon, PetscErrorCode *ierr)
{
  *ierr = TaoTermL1SetEpsilon(*term, *epsilon);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoterml1getepsilon_ TAOTERML1GETEPSILON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoterml1getepsilon_ taoterml1getepsilon
#endif
PETSC_EXTERN void taoterml1getepsilon_(TaoTerm *term, PetscReal *epsilon, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(epsilon);
  *ierr = TaoTermL1GetEpsilon(*term, epsilon);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcreatel1_ TAOTERMCREATEL1
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcreatel1_ taotermcreatel1
#endif
PETSC_EXTERN void taotermcreatel1_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, PetscReal *epsilon, TaoTerm *term, PetscErrorCode *ierr)
{
  PetscBool null_term = !*(void**) term ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(term);
  *ierr = TaoTermCreateL1(MPI_Comm_f2c(*(comm)), *n, *M_N, *epsilon, term);
  if (*ierr) return;
  if (! null_term && !*(void**) term) *(void **) term = (void *)-2;
}
