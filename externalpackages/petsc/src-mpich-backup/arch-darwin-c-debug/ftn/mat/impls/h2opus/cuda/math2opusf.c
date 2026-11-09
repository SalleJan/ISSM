#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define math2opussetnativemult_ MATH2OPUSSETNATIVEMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define math2opussetnativemult_ math2opussetnativemult
#endif
PETSC_EXTERN void math2opussetnativemult_(Mat *A, PetscBool *nm, PetscErrorCode *ierr)
{
  *ierr = MatH2OpusSetNativeMult(*A, *nm ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define math2opusgetnativemult_ MATH2OPUSGETNATIVEMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define math2opusgetnativemult_ math2opusgetnativemult
#endif
PETSC_EXTERN void math2opusgetnativemult_(Mat *A, PetscBool *nm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(nm);
  *ierr = MatH2OpusGetNativeMult(*A, nm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define math2opusorthogonalize_ MATH2OPUSORTHOGONALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define math2opusorthogonalize_ math2opusorthogonalize
#endif
PETSC_EXTERN void math2opusorthogonalize_(Mat *A, PetscErrorCode *ierr)
{
  *ierr = MatH2OpusOrthogonalize(*A);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define math2opuscompress_ MATH2OPUSCOMPRESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define math2opuscompress_ math2opuscompress
#endif
PETSC_EXTERN void math2opuscompress_(Mat *A, PetscReal *tol, PetscErrorCode *ierr)
{
  *ierr = MatH2OpusCompress(*A, *tol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define math2opussetsamplingmat_ MATH2OPUSSETSAMPLINGMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define math2opussetsamplingmat_ math2opussetsamplingmat
#endif
PETSC_EXTERN void math2opussetsamplingmat_(Mat *A, Mat *B, PetscInt *bs, PetscReal *tol, PetscErrorCode *ierr)
{
  *ierr = MatH2OpusSetSamplingMat(*A, *B, *bs, *tol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateh2opusfrommat_ MATCREATEH2OPUSFROMMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateh2opusfrommat_ matcreateh2opusfrommat
#endif
PETSC_EXTERN void matcreateh2opusfrommat_(Mat *B, PetscInt *spacedim, const PetscReal coords[], PetscBool *cdist, PetscReal *eta, PetscInt *leafsize, PetscInt *maxrank, PetscInt *bs, PetscReal *rtol, Mat *nA, PetscErrorCode *ierr)
{
  PetscBool null_nA = !*(void**) nA ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(coords);
  CHKFORTRANNULLOBJECT(nA);
  *ierr = MatCreateH2OpusFromMat(*B, *spacedim, coords, *cdist ? PETSC_TRUE : PETSC_FALSE, *eta, *leafsize, *maxrank, *bs, *rtol, nA);
  if (*ierr) return;
  if (! null_nA && !*(void**) nA) *(void **) nA = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define math2opusgetindexmap_ MATH2OPUSGETINDEXMAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define math2opusgetindexmap_ math2opusgetindexmap
#endif
PETSC_EXTERN void math2opusgetindexmap_(Mat *A, IS *indexmap, PetscErrorCode *ierr)
{
  PetscBool null_indexmap = !*(void**) indexmap ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(indexmap);
  *ierr = MatH2OpusGetIndexMap(*A, indexmap);
  if (*ierr) return;
  if (! null_indexmap && !*(void**) indexmap) *(void **) indexmap = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define math2opusmapvec_ MATH2OPUSMAPVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define math2opusmapvec_ math2opusmapvec
#endif
PETSC_EXTERN void math2opusmapvec_(Mat *A, PetscBool *nativetopetsc, Vec *in, Vec *out, PetscErrorCode *ierr)
{
  PetscBool null_out = !*(void**) out ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(out);
  *ierr = MatH2OpusMapVec(*A, *nativetopetsc ? PETSC_TRUE : PETSC_FALSE, *in, out);
  if (*ierr) return;
  if (! null_out && !*(void**) out) *(void **) out = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define math2opuslowrankupdate_ MATH2OPUSLOWRANKUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define math2opuslowrankupdate_ math2opuslowrankupdate
#endif
PETSC_EXTERN void math2opuslowrankupdate_(Mat *A, Mat *U, Mat *V, PetscScalar *s, PetscErrorCode *ierr)
{
  *ierr = MatH2OpusLowRankUpdate(*A, *U, *V, *s);
  if (*ierr) return;
}
