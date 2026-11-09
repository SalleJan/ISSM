#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetscale_ DMPLEXGETSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetscale_ dmplexgetscale
#endif
PETSC_EXTERN void dmplexgetscale_(DM *dm, PetscUnit *unit, PetscReal *scale, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(scale);
  *ierr = DMPlexGetScale(*dm, *unit, scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetscale_ DMPLEXSETSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetscale_ dmplexsetscale
#endif
PETSC_EXTERN void dmplexsetscale_(DM *dm, PetscUnit *unit, PetscReal *scale, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetScale(*dm, *unit, *scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetusematclosurepermutation_ DMPLEXGETUSEMATCLOSUREPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetusematclosurepermutation_ dmplexgetusematclosurepermutation
#endif
PETSC_EXTERN void dmplexgetusematclosurepermutation_(DM *dm, PetscBool *useClPerm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(useClPerm);
  *ierr = DMPlexGetUseMatClosurePermutation(*dm, useClPerm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetusematclosurepermutation_ DMPLEXSETUSEMATCLOSUREPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetusematclosurepermutation_ dmplexsetusematclosurepermutation
#endif
PETSC_EXTERN void dmplexsetusematclosurepermutation_(DM *dm, PetscBool *useClPerm, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetUseMatClosurePermutation(*dm, *useClPerm ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreaterigidbody_ DMPLEXCREATERIGIDBODY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreaterigidbody_ dmplexcreaterigidbody
#endif
PETSC_EXTERN void dmplexcreaterigidbody_(DM *dm, PetscInt *field, MatNullSpace *sp, PetscErrorCode *ierr)
{
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sp);
  *ierr = DMPlexCreateRigidBody(*dm, *field, sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreaterigidbodies_ DMPLEXCREATERIGIDBODIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreaterigidbodies_ dmplexcreaterigidbodies
#endif
PETSC_EXTERN void dmplexcreaterigidbodies_(DM *dm, PetscInt *nb, DMLabel *label, const PetscInt nids[], const PetscInt ids[], MatNullSpace *sp, PetscErrorCode *ierr)
{
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nids);
  CHKFORTRANNULLINTEGER(ids);
  CHKFORTRANNULLOBJECT(sp);
  *ierr = DMPlexCreateRigidBodies(*dm, *nb, *label, nids, ids, sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetmaxprojectionheight_ DMPLEXSETMAXPROJECTIONHEIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetmaxprojectionheight_ dmplexsetmaxprojectionheight
#endif
PETSC_EXTERN void dmplexsetmaxprojectionheight_(DM *dm, PetscInt *height, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetMaxProjectionHeight(*dm, *height);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetmaxprojectionheight_ DMPLEXGETMAXPROJECTIONHEIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetmaxprojectionheight_ dmplexgetmaxprojectionheight
#endif
PETSC_EXTERN void dmplexgetmaxprojectionheight_(DM *dm, PetscInt *height, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(height);
  *ierr = DMPlexGetMaxProjectionHeight(*dm, height);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexglobaltolocalbasis_ DMPLEXGLOBALTOLOCALBASIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexglobaltolocalbasis_ dmplexglobaltolocalbasis
#endif
PETSC_EXTERN void dmplexglobaltolocalbasis_(DM *dm, Vec *lv, PetscErrorCode *ierr)
{
  *ierr = DMPlexGlobalToLocalBasis(*dm, *lv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlocaltoglobalbasis_ DMPLEXLOCALTOGLOBALBASIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlocaltoglobalbasis_ dmplexlocaltoglobalbasis
#endif
PETSC_EXTERN void dmplexlocaltoglobalbasis_(DM *dm, Vec *lv, PetscErrorCode *ierr)
{
  *ierr = DMPlexLocalToGlobalBasis(*dm, *lv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatebasisrotation_ DMPLEXCREATEBASISROTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatebasisrotation_ dmplexcreatebasisrotation
#endif
PETSC_EXTERN void dmplexcreatebasisrotation_(DM *dm, PetscReal *alpha, PetscReal *beta, PetscReal *gamma, PetscErrorCode *ierr)
{
  *ierr = DMPlexCreateBasisRotation(*dm, *alpha, *beta, *gamma);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexinsertboundaryvalues_ DMPLEXINSERTBOUNDARYVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexinsertboundaryvalues_ dmplexinsertboundaryvalues
#endif
PETSC_EXTERN void dmplexinsertboundaryvalues_(DM *dm, PetscBool *insertEssential, Vec *locX, PetscReal *time, Vec *faceGeomFVM, Vec *cellGeomFVM, Vec *gradFVM, PetscErrorCode *ierr)
{
  *ierr = DMPlexInsertBoundaryValues(*dm, *insertEssential ? PETSC_TRUE : PETSC_FALSE, *locX, *time, *faceGeomFVM, *cellGeomFVM, *gradFVM);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexinserttimederivativeboundaryvalues_ DMPLEXINSERTTIMEDERIVATIVEBOUNDARYVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexinserttimederivativeboundaryvalues_ dmplexinserttimederivativeboundaryvalues
#endif
PETSC_EXTERN void dmplexinserttimederivativeboundaryvalues_(DM *dm, PetscBool *insertEssential, Vec *locX_t, PetscReal *time, Vec *faceGeomFVM, Vec *cellGeomFVM, Vec *gradFVM, PetscErrorCode *ierr)
{
  *ierr = DMPlexInsertTimeDerivativeBoundaryValues(*dm, *insertEssential ? PETSC_TRUE : PETSC_FALSE, *locX_t, *time, *faceGeomFVM, *cellGeomFVM, *gradFVM);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexinsertbounds_ DMPLEXINSERTBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexinsertbounds_ dmplexinsertbounds
#endif
PETSC_EXTERN void dmplexinsertbounds_(DM *dm, PetscBool *lower, PetscReal *time, Vec *locB, PetscErrorCode *ierr)
{
  *ierr = DMPlexInsertBounds(*dm, *lower ? PETSC_TRUE : PETSC_FALSE, *time, *locB);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexinsertboundaryvaluesfvm_ DMPLEXINSERTBOUNDARYVALUESFVM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexinsertboundaryvaluesfvm_ dmplexinsertboundaryvaluesfvm
#endif
PETSC_EXTERN void dmplexinsertboundaryvaluesfvm_(DM *dm, PetscFV *fv, Vec *locX, PetscReal *time, Vec *locGradient, PetscErrorCode *ierr)
{
  PetscBool null_locGradient = !*(void**) locGradient ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(locGradient);
  *ierr = DMPlexInsertBoundaryValuesFVM(*dm, *fv, *locX, *time, locGradient);
  if (*ierr) return;
  if (! null_locGradient && !*(void**) locGradient) *(void **) locGradient = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputel2fluxdiffveclocal_ DMPLEXCOMPUTEL2FLUXDIFFVECLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputel2fluxdiffveclocal_ dmplexcomputel2fluxdiffveclocal
#endif
PETSC_EXTERN void dmplexcomputel2fluxdiffveclocal_(Vec *lu, PetscInt *f, Vec *lmu, PetscInt *mf, Vec *eFlux, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeL2FluxDiffVecLocal(*lu, *f, *lmu, *mf, *eFlux);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputel2fluxdiffvec_ DMPLEXCOMPUTEL2FLUXDIFFVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputel2fluxdiffvec_ dmplexcomputel2fluxdiffvec
#endif
PETSC_EXTERN void dmplexcomputel2fluxdiffvec_(Vec *u, PetscInt *f, Vec *mu, PetscInt *mf, Vec *eFlux, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeL2FluxDiffVec(*u, *f, *mu, *mf, *eFlux);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeclementinterpolant_ DMPLEXCOMPUTECLEMENTINTERPOLANT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeclementinterpolant_ dmplexcomputeclementinterpolant
#endif
PETSC_EXTERN void dmplexcomputeclementinterpolant_(DM *dm, Vec *locX, Vec *locC, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeClementInterpolant(*dm, *locX, *locC);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputegradientclementinterpolant_ DMPLEXCOMPUTEGRADIENTCLEMENTINTERPOLANT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputegradientclementinterpolant_ dmplexcomputegradientclementinterpolant
#endif
PETSC_EXTERN void dmplexcomputegradientclementinterpolant_(DM *dm, Vec *locX, Vec *locC, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeGradientClementInterpolant(*dm, *locX, *locC);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeintegralfem_ DMPLEXCOMPUTEINTEGRALFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeintegralfem_ dmplexcomputeintegralfem
#endif
PETSC_EXTERN void dmplexcomputeintegralfem_(DM *dm, Vec *X, PetscScalar *integral, PetscCtx ctx, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(integral);
  *ierr = DMPlexComputeIntegralFEM(*dm, *X, integral, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputecellwiseintegralfem_ DMPLEXCOMPUTECELLWISEINTEGRALFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputecellwiseintegralfem_ dmplexcomputecellwiseintegralfem
#endif
PETSC_EXTERN void dmplexcomputecellwiseintegralfem_(DM *dm, Vec *X, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeCellwiseIntegralFEM(*dm, *X, *F, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeinterpolatornested_ DMPLEXCOMPUTEINTERPOLATORNESTED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeinterpolatornested_ dmplexcomputeinterpolatornested
#endif
PETSC_EXTERN void dmplexcomputeinterpolatornested_(DM *dmc, DM *dmf, PetscBool *isRefined, Mat *In, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeInterpolatorNested(*dmc, *dmf, *isRefined ? PETSC_TRUE : PETSC_FALSE, *In, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputemassmatrixnested_ DMPLEXCOMPUTEMASSMATRIXNESTED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputemassmatrixnested_ dmplexcomputemassmatrixnested
#endif
PETSC_EXTERN void dmplexcomputemassmatrixnested_(DM *dmc, DM *dmf, Mat *mass, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeMassMatrixNested(*dmc, *dmf, *mass, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeinterpolatorgeneral_ DMPLEXCOMPUTEINTERPOLATORGENERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeinterpolatorgeneral_ dmplexcomputeinterpolatorgeneral
#endif
PETSC_EXTERN void dmplexcomputeinterpolatorgeneral_(DM *dmc, DM *dmf, Mat *In, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeInterpolatorGeneral(*dmc, *dmf, *In, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputemassmatrixgeneral_ DMPLEXCOMPUTEMASSMATRIXGENERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputemassmatrixgeneral_ dmplexcomputemassmatrixgeneral
#endif
PETSC_EXTERN void dmplexcomputemassmatrixgeneral_(DM *dmc, DM *dmf, Mat *mass, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeMassMatrixGeneral(*dmc, *dmf, *mass, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeinjectorfem_ DMPLEXCOMPUTEINJECTORFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeinjectorfem_ dmplexcomputeinjectorfem
#endif
PETSC_EXTERN void dmplexcomputeinjectorfem_(DM *dmc, DM *dmf, VecScatter *sc, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeInjectorFEM(*dmc, *dmf, sc, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetgeometryfvm_ DMPLEXGETGEOMETRYFVM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetgeometryfvm_ dmplexgetgeometryfvm
#endif
PETSC_EXTERN void dmplexgetgeometryfvm_(DM *dm, Vec *facegeom, Vec *cellgeom, PetscReal *minRadius, PetscErrorCode *ierr)
{
  PetscBool null_facegeom = !*(void**) facegeom ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_cellgeom = !*(void**) cellgeom ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(facegeom);
  CHKFORTRANNULLOBJECT(cellgeom);
  CHKFORTRANNULLREAL(minRadius);
  *ierr = DMPlexGetGeometryFVM(*dm, facegeom, cellgeom, minRadius);
  if (*ierr) return;
  if (! null_facegeom && !*(void**) facegeom) *(void **) facegeom = (void *)-2;
  if (! null_cellgeom && !*(void**) cellgeom) *(void **) cellgeom = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetgradientdm_ DMPLEXGETGRADIENTDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetgradientdm_ dmplexgetgradientdm
#endif
PETSC_EXTERN void dmplexgetgradientdm_(DM *dm, PetscFV *fv, DM *dmGrad, PetscErrorCode *ierr)
{
  PetscBool null_dmGrad = !*(void**) dmGrad ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmGrad);
  *ierr = DMPlexGetGradientDM(*dm, *fv, dmGrad);
  if (*ierr) return;
  if (! null_dmGrad && !*(void**) dmGrad) *(void **) dmGrad = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputebdresidualsinglebykey_ DMPLEXCOMPUTEBDRESIDUALSINGLEBYKEY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputebdresidualsinglebykey_ dmplexcomputebdresidualsinglebykey
#endif
PETSC_EXTERN void dmplexcomputebdresidualsinglebykey_(DM *dm, PetscWeakForm *wf, PetscFormKey *key, IS *facetIS, Vec *locX, Vec *locX_t, PetscReal *t, DMField *coordField, Vec *locF, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeBdResidualSingleByKey(*dm, *wf, *key, *facetIS, *locX, *locX_t, *t, *coordField, *locF);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputebdresidualsingle_ DMPLEXCOMPUTEBDRESIDUALSINGLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputebdresidualsingle_ dmplexcomputebdresidualsingle
#endif
PETSC_EXTERN void dmplexcomputebdresidualsingle_(DM *dm, PetscWeakForm *wf, PetscFormKey *key, Vec *locX, Vec *locX_t, PetscReal *t, Vec *locF, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeBdResidualSingle(*dm, *wf, *key, *locX, *locX_t, *t, *locF);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeresidualbykey_ DMPLEXCOMPUTERESIDUALBYKEY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeresidualbykey_ dmplexcomputeresidualbykey
#endif
PETSC_EXTERN void dmplexcomputeresidualbykey_(DM *dm, PetscFormKey *key, IS *cellIS, PetscReal *time, Vec *locX, Vec *locX_t, PetscReal *t, Vec *locF, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeResidualByKey(*dm, *key, *cellIS, *time, *locX, *locX_t, *t, *locF, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeresidualhybridbykey_ DMPLEXCOMPUTERESIDUALHYBRIDBYKEY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeresidualhybridbykey_ dmplexcomputeresidualhybridbykey
#endif
PETSC_EXTERN void dmplexcomputeresidualhybridbykey_(DM *dm, PetscFormKey key[], IS *cellIS, PetscReal *time, Vec *locX, Vec *locX_t, PetscReal *t, Vec *locF, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeResidualHybridByKey(*dm, key, *cellIS, *time, *locX, *locX_t, *t, *locF, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputebdjacobiansinglebylabel_ DMPLEXCOMPUTEBDJACOBIANSINGLEBYLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputebdjacobiansinglebylabel_ dmplexcomputebdjacobiansinglebylabel
#endif
PETSC_EXTERN void dmplexcomputebdjacobiansinglebylabel_(DM *dm, PetscWeakForm *wf, DMLabel *label, PetscInt *numValues, const PetscInt values[], PetscInt *fieldI, IS *facetIS, Vec *locX, Vec *locX_t, PetscReal *t, DMField *coordField, PetscReal *X_tShift, Mat *Jac, Mat *JacP, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(values);
  *ierr = DMPlexComputeBdJacobianSingleByLabel(*dm, *wf, *label, *numValues, values, *fieldI, *facetIS, *locX, *locX_t, *t, *coordField, *X_tShift, *Jac, *JacP);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputebdjacobiansingle_ DMPLEXCOMPUTEBDJACOBIANSINGLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputebdjacobiansingle_ dmplexcomputebdjacobiansingle
#endif
PETSC_EXTERN void dmplexcomputebdjacobiansingle_(DM *dm, PetscWeakForm *wf, DMLabel *label, PetscInt *numValues, const PetscInt values[], PetscInt *fieldI, Vec *locX, Vec *locX_t, PetscReal *t, PetscReal *X_tShift, Mat *Jac, Mat *JacP, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(values);
  *ierr = DMPlexComputeBdJacobianSingle(*dm, *wf, *label, *numValues, values, *fieldI, *locX, *locX_t, *t, *X_tShift, *Jac, *JacP);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputejacobianbykey_ DMPLEXCOMPUTEJACOBIANBYKEY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputejacobianbykey_ dmplexcomputejacobianbykey
#endif
PETSC_EXTERN void dmplexcomputejacobianbykey_(DM *dm, PetscFormKey *key, IS *cellIS, PetscReal *t, PetscReal *X_tShift, Vec *locX, Vec *locX_t, Mat *Jac, Mat *JacP, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeJacobianByKey(*dm, *key, *cellIS, *t, *X_tShift, *locX, *locX_t, *Jac, *JacP, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputejacobianbykeygeneral_ DMPLEXCOMPUTEJACOBIANBYKEYGENERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputejacobianbykeygeneral_ dmplexcomputejacobianbykeygeneral
#endif
PETSC_EXTERN void dmplexcomputejacobianbykeygeneral_(DM *dmr, DM *dmc, PetscFormKey *key, IS *cellIS, PetscReal *t, PetscReal *X_tShift, Vec *locX, Vec *locX_t, Mat *Jac, Mat *JacP, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeJacobianByKeyGeneral(*dmr, *dmc, *key, *cellIS, *t, *X_tShift, *locX, *locX_t, *Jac, *JacP, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputejacobianhybridbykey_ DMPLEXCOMPUTEJACOBIANHYBRIDBYKEY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputejacobianhybridbykey_ dmplexcomputejacobianhybridbykey
#endif
PETSC_EXTERN void dmplexcomputejacobianhybridbykey_(DM *dm, PetscFormKey key[], IS *cellIS, PetscReal *t, PetscReal *X_tShift, Vec *locX, Vec *locX_t, Mat *Jac, Mat *JacP, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeJacobianHybridByKey(*dm, key, *cellIS, *t, *X_tShift, *locX, *locX_t, *Jac, *JacP, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputejacobianactionbykey_ DMPLEXCOMPUTEJACOBIANACTIONBYKEY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputejacobianactionbykey_ dmplexcomputejacobianactionbykey
#endif
PETSC_EXTERN void dmplexcomputejacobianactionbykey_(DM *dm, PetscFormKey *key, IS *cellIS, PetscReal *t, PetscReal *X_tShift, Vec *locX, Vec *locX_t, Vec *locY, Vec *locF, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeJacobianActionByKey(*dm, *key, *cellIS, *t, *X_tShift, *locX, *locX_t, *locY, *locF, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputemoments_ DMPLEXCOMPUTEMOMENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputemoments_ dmplexcomputemoments
#endif
PETSC_EXTERN void dmplexcomputemoments_(DM *dm, Vec *u, PetscReal moments[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(moments);
  *ierr = DMPlexComputeMoments(*dm, *u, moments);
  if (*ierr) return;
}
