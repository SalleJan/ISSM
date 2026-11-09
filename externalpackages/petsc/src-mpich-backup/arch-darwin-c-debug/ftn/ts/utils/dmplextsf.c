#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextscomputerhsfunctionfvm_ DMPLEXTSCOMPUTERHSFUNCTIONFVM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextscomputerhsfunctionfvm_ dmplextscomputerhsfunctionfvm
#endif
PETSC_EXTERN void dmplextscomputerhsfunctionfvm_(DM *dm, PetscReal *time, Vec *locX, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexTSComputeRHSFunctionFVM(*dm, *time, *locX, *F, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextscomputeboundary_ DMPLEXTSCOMPUTEBOUNDARY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextscomputeboundary_ dmplextscomputeboundary
#endif
PETSC_EXTERN void dmplextscomputeboundary_(DM *dm, PetscReal *time, Vec *locX, Vec *locX_t, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexTSComputeBoundary(*dm, *time, *locX, *locX_t, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextscomputeifunctionfem_ DMPLEXTSCOMPUTEIFUNCTIONFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextscomputeifunctionfem_ dmplextscomputeifunctionfem
#endif
PETSC_EXTERN void dmplextscomputeifunctionfem_(DM *dm, PetscReal *time, Vec *locX, Vec *locX_t, Vec *locF, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexTSComputeIFunctionFEM(*dm, *time, *locX, *locX_t, *locF, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextscomputeijacobianfem_ DMPLEXTSCOMPUTEIJACOBIANFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextscomputeijacobianfem_ dmplextscomputeijacobianfem
#endif
PETSC_EXTERN void dmplextscomputeijacobianfem_(DM *dm, PetscReal *time, Vec *locX, Vec *locX_t, PetscReal *X_tShift, Mat *Jac, Mat *JacP, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexTSComputeIJacobianFEM(*dm, *time, *locX, *locX_t, *X_tShift, *Jac, *JacP, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextscomputerhsfunctionfem_ DMPLEXTSCOMPUTERHSFUNCTIONFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextscomputerhsfunctionfem_ dmplextscomputerhsfunctionfem
#endif
PETSC_EXTERN void dmplextscomputerhsfunctionfem_(DM *dm, PetscReal *time, Vec *locX, Vec *locG, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexTSComputeRHSFunctionFEM(*dm, *time, *locX, *locG, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmtscheckresidual_ DMTSCHECKRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmtscheckresidual_ dmtscheckresidual
#endif
PETSC_EXTERN void dmtscheckresidual_(TS *ts, DM *dm, PetscReal *t, Vec *u, Vec *u_t, PetscReal *tol, PetscReal *residual, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(residual);
  *ierr = DMTSCheckResidual(*ts, *dm, *t, *u, *u_t, *tol, residual);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmtscheckjacobian_ DMTSCHECKJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmtscheckjacobian_ dmtscheckjacobian
#endif
PETSC_EXTERN void dmtscheckjacobian_(TS *ts, DM *dm, PetscReal *t, Vec *u, Vec *u_t, PetscReal *tol, PetscBool *isLinear, PetscReal *convRate, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isLinear);
  CHKFORTRANNULLREAL(convRate);
  *ierr = DMTSCheckJacobian(*ts, *dm, *t, *u, *u_t, *tol, isLinear, convRate);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmtscheckfromoptions_ DMTSCHECKFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmtscheckfromoptions_ dmtscheckfromoptions
#endif
PETSC_EXTERN void dmtscheckfromoptions_(TS *ts, Vec *u, PetscErrorCode *ierr)
{
  *ierr = DMTSCheckFromOptions(*ts, *u);
  if (*ierr) return;
}
