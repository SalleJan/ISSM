#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsnescomputeobjectivefem_ DMPLEXSNESCOMPUTEOBJECTIVEFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsnescomputeobjectivefem_ dmplexsnescomputeobjectivefem
#endif
PETSC_EXTERN void dmplexsnescomputeobjectivefem_(DM *dm, Vec *X, PetscReal *obj, PetscCtx ctx, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(obj);
  *ierr = DMPlexSNESComputeObjectiveFEM(*dm, *X, obj, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsnescomputeresidualfem_ DMPLEXSNESCOMPUTERESIDUALFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsnescomputeresidualfem_ dmplexsnescomputeresidualfem
#endif
PETSC_EXTERN void dmplexsnescomputeresidualfem_(DM *dm, Vec *X, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexSNESComputeResidualFEM(*dm, *X, *F, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsnescomputeresidualds_ DMPLEXSNESCOMPUTERESIDUALDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsnescomputeresidualds_ dmplexsnescomputeresidualds
#endif
PETSC_EXTERN void dmplexsnescomputeresidualds_(DM *dm, Vec *X, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexSNESComputeResidualDS(*dm, *X, *F, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsnescomputeboundaryfem_ DMPLEXSNESCOMPUTEBOUNDARYFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsnescomputeboundaryfem_ dmplexsnescomputeboundaryfem
#endif
PETSC_EXTERN void dmplexsnescomputeboundaryfem_(DM *dm, Vec *X, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexSNESComputeBoundaryFEM(*dm, *X, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsnescomputejacobianaction_ DMSNESCOMPUTEJACOBIANACTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsnescomputejacobianaction_ dmsnescomputejacobianaction
#endif
PETSC_EXTERN void dmsnescomputejacobianaction_(DM *dm, Vec *X, Vec *Y, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMSNESComputeJacobianAction(*dm, *X, *Y, *F, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsnescomputejacobianfem_ DMPLEXSNESCOMPUTEJACOBIANFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsnescomputejacobianfem_ dmplexsnescomputejacobianfem
#endif
PETSC_EXTERN void dmplexsnescomputejacobianfem_(DM *dm, Vec *X, Mat *Jac, Mat *JacP, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexSNESComputeJacobianFEM(*dm, *X, *Jac, *JacP, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsnescreatejacobianmf_ DMSNESCREATEJACOBIANMF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsnescreatejacobianmf_ dmsnescreatejacobianmf
#endif
PETSC_EXTERN void dmsnescreatejacobianmf_(DM *dm, Vec *X, PetscCtx ctx, Mat *J, PetscErrorCode *ierr)
{
  PetscBool null_J = !*(void**) J ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(J);
  *ierr = DMSNESCreateJacobianMF(*dm, *X, ctx, J);
  if (*ierr) return;
  if (! null_J && !*(void**) J) *(void **) J = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetsneslocalfem_ DMPLEXSETSNESLOCALFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetsneslocalfem_ dmplexsetsneslocalfem
#endif
PETSC_EXTERN void dmplexsetsneslocalfem_(DM *dm, PetscBool *use_obj, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetSNESLocalFEM(*dm, *use_obj ? PETSC_TRUE : PETSC_FALSE, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsnescheckdiscretization_ DMSNESCHECKDISCRETIZATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsnescheckdiscretization_ dmsnescheckdiscretization
#endif
PETSC_EXTERN void dmsnescheckdiscretization_(SNES *snes, DM *dm, PetscReal *t, Vec *u, PetscReal *tol, PetscReal error[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(error);
  *ierr = DMSNESCheckDiscretization(*snes, *dm, *t, *u, *tol, error);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsnescheckresidual_ DMSNESCHECKRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsnescheckresidual_ dmsnescheckresidual
#endif
PETSC_EXTERN void dmsnescheckresidual_(SNES *snes, DM *dm, Vec *u, PetscReal *tol, PetscReal *residual, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(residual);
  *ierr = DMSNESCheckResidual(*snes, *dm, *u, *tol, residual);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsnescheckjacobian_ DMSNESCHECKJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsnescheckjacobian_ dmsnescheckjacobian
#endif
PETSC_EXTERN void dmsnescheckjacobian_(SNES *snes, DM *dm, Vec *u, PetscReal *tol, PetscBool *isLinear, PetscReal *convRate, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isLinear);
  CHKFORTRANNULLREAL(convRate);
  *ierr = DMSNESCheckJacobian(*snes, *dm, *u, *tol, isLinear, convRate);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsnescheckfromoptions_ DMSNESCHECKFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsnescheckfromoptions_ dmsnescheckfromoptions
#endif
PETSC_EXTERN void dmsnescheckfromoptions_(SNES *snes, Vec *u, PetscErrorCode *ierr)
{
  *ierr = DMSNESCheckFromOptions(*snes, *u);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetsnesvariablebounds_ DMPLEXSETSNESVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetsnesvariablebounds_ dmplexsetsnesvariablebounds
#endif
PETSC_EXTERN void dmplexsetsnesvariablebounds_(DM *dm, SNES *snes, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetSNESVariableBounds(*dm, *snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesconvergedcorrectpressure_ SNESCONVERGEDCORRECTPRESSURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesconvergedcorrectpressure_ snesconvergedcorrectpressure
#endif
PETSC_EXTERN void snesconvergedcorrectpressure_(SNES *snes, PetscInt *it, PetscReal *xnorm, PetscReal *gnorm, PetscReal *f, SNESConvergedReason *reason, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESConvergedCorrectPressure(*snes, *it, *xnorm, *gnorm, *f, reason, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorfields_ SNESMONITORFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorfields_ snesmonitorfields
#endif
PETSC_EXTERN void snesmonitorfields_(SNES *snes, PetscInt *its, PetscReal *fgnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorFields(*snes, *its, *fgnorm, *vf);
  if (*ierr) return;
}
