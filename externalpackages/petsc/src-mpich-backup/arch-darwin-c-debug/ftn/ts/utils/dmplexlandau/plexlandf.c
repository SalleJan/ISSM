#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsclandau.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlandauaddmaxwellians_ DMPLEXLANDAUADDMAXWELLIANS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlandauaddmaxwellians_ dmplexlandauaddmaxwellians
#endif
PETSC_EXTERN void dmplexlandauaddmaxwellians_(DM *dm, Vec *X, PetscReal *time, PetscReal temps[], PetscReal ns[], PetscInt *grid, PetscInt *b_id, PetscInt *n_batch, void *actx, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(temps);
  CHKFORTRANNULLREAL(ns);
  *ierr = DMPlexLandauAddMaxwellians(*dm, *X, *time, temps, ns, *grid, *b_id, *n_batch, actx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsclandau.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlandaucreatevelocityspace_ DMPLEXLANDAUCREATEVELOCITYSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlandaucreatevelocityspace_ dmplexlandaucreatevelocityspace
#endif
PETSC_EXTERN void dmplexlandaucreatevelocityspace_(MPI_Fint *comm, PetscInt *dim, char prefix[], Vec *X, Mat *J, DM *pack, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  PetscBool null_X = !*(void**) X ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_J = !*(void**) J ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_pack = !*(void**) pack ? PETSC_TRUE : PETSC_FALSE;
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  CHKFORTRANNULLOBJECT(X);
  CHKFORTRANNULLOBJECT(J);
  CHKFORTRANNULLOBJECT(pack);
  *ierr = DMPlexLandauCreateVelocitySpace(MPI_Comm_f2c(*(comm)), *dim, c_prefix, X, J, pack);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
  if (! null_X && !*(void**) X) *(void **) X = (void *)-2;
  if (! null_J && !*(void**) J) *(void **) J = (void *)-2;
  if (! null_pack && !*(void**) pack) *(void **) pack = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsclandau.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlandaudestroyvelocityspace_ DMPLEXLANDAUDESTROYVELOCITYSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlandaudestroyvelocityspace_ dmplexlandaudestroyvelocityspace
#endif
PETSC_EXTERN void dmplexlandaudestroyvelocityspace_(DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexLandauDestroyVelocitySpace(dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsclandau.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlandauprintnorms_ DMPLEXLANDAUPRINTNORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlandauprintnorms_ dmplexlandauprintnorms
#endif
PETSC_EXTERN void dmplexlandauprintnorms_(Vec *X, PetscInt *stepi, PetscErrorCode *ierr)
{
  *ierr = DMPlexLandauPrintNorms(*X, *stepi);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsclandau.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlandaucreatemassmatrix_ DMPLEXLANDAUCREATEMASSMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlandaucreatemassmatrix_ dmplexlandaucreatemassmatrix
#endif
PETSC_EXTERN void dmplexlandaucreatemassmatrix_(DM *pack, Mat *Amat, PetscErrorCode *ierr)
{
  PetscBool null_Amat = !*(void**) Amat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Amat);
  *ierr = DMPlexLandauCreateMassMatrix(*pack, Amat);
  if (*ierr) return;
  if (! null_Amat && !*(void**) Amat) *(void **) Amat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsclandau.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlandauifunction_ DMPLEXLANDAUIFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlandauifunction_ dmplexlandauifunction
#endif
PETSC_EXTERN void dmplexlandauifunction_(TS *ts, PetscReal *time_dummy, Vec *X, Vec *X_t, Vec *F, void *actx, PetscErrorCode *ierr)
{
  *ierr = DMPlexLandauIFunction(*ts, *time_dummy, *X, *X_t, *F, actx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsclandau.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlandauijacobian_ DMPLEXLANDAUIJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlandauijacobian_ dmplexlandauijacobian
#endif
PETSC_EXTERN void dmplexlandauijacobian_(TS *ts, PetscReal *time_dummy, Vec *X, Vec *U_tdummy, PetscReal *shift, Mat *Amat, Mat *Pmat, void *actx, PetscErrorCode *ierr)
{
  *ierr = DMPlexLandauIJacobian(*ts, *time_dummy, *X, *U_tdummy, *shift, *Amat, *Pmat, actx);
  if (*ierr) return;
}
