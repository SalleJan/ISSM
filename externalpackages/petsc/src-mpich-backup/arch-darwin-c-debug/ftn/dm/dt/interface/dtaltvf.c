#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtaltvapply_ PETSCDTALTVAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtaltvapply_ petscdtaltvapply
#endif
PETSC_EXTERN void petscdtaltvapply_(PetscInt *N, PetscInt *k, const PetscReal *w, const PetscReal *v, PetscReal *wv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(w);
  CHKFORTRANNULLREAL(v);
  CHKFORTRANNULLREAL(wv);
  *ierr = PetscDTAltVApply(*N, *k, w, v, wv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtaltvwedge_ PETSCDTALTVWEDGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtaltvwedge_ petscdtaltvwedge
#endif
PETSC_EXTERN void petscdtaltvwedge_(PetscInt *N, PetscInt *j, PetscInt *k, const PetscReal *a, const PetscReal *b, PetscReal *awedgeb, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(a);
  CHKFORTRANNULLREAL(b);
  CHKFORTRANNULLREAL(awedgeb);
  *ierr = PetscDTAltVWedge(*N, *j, *k, a, b, awedgeb);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtaltvwedgematrix_ PETSCDTALTVWEDGEMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtaltvwedgematrix_ petscdtaltvwedgematrix
#endif
PETSC_EXTERN void petscdtaltvwedgematrix_(PetscInt *N, PetscInt *j, PetscInt *k, const PetscReal *a, PetscReal *awedgeMat, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(a);
  CHKFORTRANNULLREAL(awedgeMat);
  *ierr = PetscDTAltVWedgeMatrix(*N, *j, *k, a, awedgeMat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtaltvpullback_ PETSCDTALTVPULLBACK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtaltvpullback_ petscdtaltvpullback
#endif
PETSC_EXTERN void petscdtaltvpullback_(PetscInt *N, PetscInt *M, const PetscReal *L, PetscInt *k, const PetscReal *w, PetscReal *Lstarw, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(L);
  CHKFORTRANNULLREAL(w);
  CHKFORTRANNULLREAL(Lstarw);
  *ierr = PetscDTAltVPullback(*N, *M, L, *k, w, Lstarw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtaltvpullbackmatrix_ PETSCDTALTVPULLBACKMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtaltvpullbackmatrix_ petscdtaltvpullbackmatrix
#endif
PETSC_EXTERN void petscdtaltvpullbackmatrix_(PetscInt *N, PetscInt *M, const PetscReal *L, PetscInt *k, PetscReal *Lstar, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(L);
  CHKFORTRANNULLREAL(Lstar);
  *ierr = PetscDTAltVPullbackMatrix(*N, *M, L, *k, Lstar);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtaltvinterior_ PETSCDTALTVINTERIOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtaltvinterior_ petscdtaltvinterior
#endif
PETSC_EXTERN void petscdtaltvinterior_(PetscInt *N, PetscInt *k, const PetscReal *w, const PetscReal *v, PetscReal *wIntv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(w);
  CHKFORTRANNULLREAL(v);
  CHKFORTRANNULLREAL(wIntv);
  *ierr = PetscDTAltVInterior(*N, *k, w, v, wIntv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtaltvinteriormatrix_ PETSCDTALTVINTERIORMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtaltvinteriormatrix_ petscdtaltvinteriormatrix
#endif
PETSC_EXTERN void petscdtaltvinteriormatrix_(PetscInt *N, PetscInt *k, const PetscReal *v, PetscReal *intvMat, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(v);
  CHKFORTRANNULLREAL(intvMat);
  *ierr = PetscDTAltVInteriorMatrix(*N, *k, v, intvMat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtaltvstar_ PETSCDTALTVSTAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtaltvstar_ petscdtaltvstar
#endif
PETSC_EXTERN void petscdtaltvstar_(PetscInt *N, PetscInt *k, PetscInt *pow, const PetscReal *w, PetscReal *starw, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(w);
  CHKFORTRANNULLREAL(starw);
  *ierr = PetscDTAltVStar(*N, *k, *pow, w, starw);
  if (*ierr) return;
}
