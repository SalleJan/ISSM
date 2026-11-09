#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformregisterall_ DMPLEXTRANSFORMREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformregisterall_ dmplextransformregisterall
#endif
PETSC_EXTERN void dmplextransformregisterall_(PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformRegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformregisterdestroy_ DMPLEXTRANSFORMREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformregisterdestroy_ dmplextransformregisterdestroy
#endif
PETSC_EXTERN void dmplextransformregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformcreate_ DMPLEXTRANSFORMCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformcreate_ dmplextransformcreate
#endif
PETSC_EXTERN void dmplextransformcreate_(MPI_Fint *comm, DMPlexTransform *tr, PetscErrorCode *ierr)
{
  PetscBool null_tr = !*(void**) tr ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(tr);
  CHKFORTRANNULLOBJECT(tr);
  *ierr = DMPlexTransformCreate(MPI_Comm_f2c(*(comm)), tr);
  if (*ierr) return;
  if (! null_tr && !*(void**) tr) *(void **) tr = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformsettype_ DMPLEXTRANSFORMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformsettype_ dmplextransformsettype
#endif
PETSC_EXTERN void dmplextransformsettype_(DMPlexTransform *tr, char *method, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_method)
{
  char* c_method;
  FIXCHAR(method, l_method, c_method);
  *ierr = DMPlexTransformSetType(*tr, c_method);
  if (*ierr) return;
  FREECHAR(method, c_method);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgettype_ DMPLEXTRANSFORMGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgettype_ dmplextransformgettype
#endif
PETSC_EXTERN void dmplextransformgettype_(DMPlexTransform *tr, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = DMPlexTransformGetType(*tr, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformview_ DMPLEXTRANSFORMVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformview_ dmplextransformview
#endif
PETSC_EXTERN void dmplextransformview_(DMPlexTransform *tr, PetscViewer *v, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = DMPlexTransformView(*tr, v_v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformsetfromoptions_ DMPLEXTRANSFORMSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformsetfromoptions_ dmplextransformsetfromoptions
#endif
PETSC_EXTERN void dmplextransformsetfromoptions_(DMPlexTransform *tr, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformSetFromOptions(*tr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformdestroy_ DMPLEXTRANSFORMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformdestroy_ dmplextransformdestroy
#endif
PETSC_EXTERN void dmplextransformdestroy_(DMPlexTransform *tr, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(tr);
  PetscBool null_tr = !*(void**) tr ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tr);
  *ierr = DMPlexTransformDestroy(tr);
  if (*ierr) return;
  if (! null_tr && !*(void**) tr) *(void **) tr = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformsetup_ DMPLEXTRANSFORMSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformsetup_ dmplextransformsetup
#endif
PETSC_EXTERN void dmplextransformsetup_(DMPlexTransform *tr, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformSetUp(*tr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetdm_ DMPLEXTRANSFORMGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetdm_ dmplextransformgetdm
#endif
PETSC_EXTERN void dmplextransformgetdm_(DMPlexTransform *tr, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexTransformGetDM(*tr, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformsetdm_ DMPLEXTRANSFORMSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformsetdm_ dmplextransformsetdm
#endif
PETSC_EXTERN void dmplextransformsetdm_(DMPlexTransform *tr, DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformSetDM(*tr, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetactive_ DMPLEXTRANSFORMGETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetactive_ dmplextransformgetactive
#endif
PETSC_EXTERN void dmplextransformgetactive_(DMPlexTransform *tr, DMLabel *active, PetscErrorCode *ierr)
{
  PetscBool null_active = !*(void**) active ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(active);
  *ierr = DMPlexTransformGetActive(*tr, active);
  if (*ierr) return;
  if (! null_active && !*(void**) active) *(void **) active = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformsetactive_ DMPLEXTRANSFORMSETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformsetactive_ dmplextransformsetactive
#endif
PETSC_EXTERN void dmplextransformsetactive_(DMPlexTransform *tr, DMLabel *active, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformSetActive(*tr, *active);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgettransformtypes_ DMPLEXTRANSFORMGETTRANSFORMTYPES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgettransformtypes_ dmplextransformgettransformtypes
#endif
PETSC_EXTERN void dmplextransformgettransformtypes_(DMPlexTransform *tr, DMLabel *trType, PetscErrorCode *ierr)
{
  PetscBool null_trType = !*(void**) trType ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(trType);
  *ierr = DMPlexTransformGetTransformTypes(*tr, trType);
  if (*ierr) return;
  if (! null_trType && !*(void**) trType) *(void **) trType = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformsettransformtypes_ DMPLEXTRANSFORMSETTRANSFORMTYPES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformsettransformtypes_ dmplextransformsettransformtypes
#endif
PETSC_EXTERN void dmplextransformsettransformtypes_(DMPlexTransform *tr, DMLabel *trType, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformSetTransformTypes(*tr, *trType);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformsetdimensions_ DMPLEXTRANSFORMSETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformsetdimensions_ dmplextransformsetdimensions
#endif
PETSC_EXTERN void dmplextransformsetdimensions_(DMPlexTransform *tr, DM *dm, DM *trdm, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformSetDimensions(*tr, *dm, *trdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetchart_ DMPLEXTRANSFORMGETCHART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetchart_ dmplextransformgetchart
#endif
PETSC_EXTERN void dmplextransformgetchart_(DMPlexTransform *tr, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(pStart);
  CHKFORTRANNULLINTEGER(pEnd);
  *ierr = DMPlexTransformGetChart(*tr, pStart, pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetcelltype_ DMPLEXTRANSFORMGETCELLTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetcelltype_ dmplextransformgetcelltype
#endif
PETSC_EXTERN void dmplextransformgetcelltype_(DMPlexTransform *tr, PetscInt *cell, DMPolytopeType *celltype, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformGetCellType(*tr, *cell, celltype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetcelltypestratum_ DMPLEXTRANSFORMGETCELLTYPESTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetcelltypestratum_ dmplextransformgetcelltypestratum
#endif
PETSC_EXTERN void dmplextransformgetcelltypestratum_(DMPlexTransform *tr, DMPolytopeType *celltype, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = DMPlexTransformGetCellTypeStratum(*tr, *celltype, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetdepth_ DMPLEXTRANSFORMGETDEPTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetdepth_ dmplextransformgetdepth
#endif
PETSC_EXTERN void dmplextransformgetdepth_(DMPlexTransform *tr, PetscInt *depth, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(depth);
  *ierr = DMPlexTransformGetDepth(*tr, depth);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetdepthstratum_ DMPLEXTRANSFORMGETDEPTHSTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetdepthstratum_ dmplextransformgetdepthstratum
#endif
PETSC_EXTERN void dmplextransformgetdepthstratum_(DMPlexTransform *tr, PetscInt *depth, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = DMPlexTransformGetDepthStratum(*tr, *depth, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetmatchstrata_ DMPLEXTRANSFORMGETMATCHSTRATA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetmatchstrata_ dmplextransformgetmatchstrata
#endif
PETSC_EXTERN void dmplextransformgetmatchstrata_(DMPlexTransform *tr, PetscBool *match, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(match);
  *ierr = DMPlexTransformGetMatchStrata(*tr, match);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformsetmatchstrata_ DMPLEXTRANSFORMSETMATCHSTRATA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformsetmatchstrata_ dmplextransformsetmatchstrata
#endif
PETSC_EXTERN void dmplextransformsetmatchstrata_(DMPlexTransform *tr, PetscBool *match, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformSetMatchStrata(*tr, *match ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgettargetpoint_ DMPLEXTRANSFORMGETTARGETPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgettargetpoint_ dmplextransformgettargetpoint
#endif
PETSC_EXTERN void dmplextransformgettargetpoint_(DMPlexTransform *tr, DMPolytopeType *ct, DMPolytopeType *ctNew, PetscInt *p, PetscInt *r, PetscInt *pNew, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(pNew);
  *ierr = DMPlexTransformGetTargetPoint(*tr, *ct, *ctNew, *p, *r, pNew);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetsourcepoint_ DMPLEXTRANSFORMGETSOURCEPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetsourcepoint_ dmplextransformgetsourcepoint
#endif
PETSC_EXTERN void dmplextransformgetsourcepoint_(DMPlexTransform *tr, PetscInt *pNew, DMPolytopeType *ct, DMPolytopeType *ctNew, PetscInt *p, PetscInt *r, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(p);
  CHKFORTRANNULLINTEGER(r);
  *ierr = DMPlexTransformGetSourcePoint(*tr, *pNew, ct, ctNew, p, r);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetsubcellorientationidentity_ DMPLEXTRANSFORMGETSUBCELLORIENTATIONIDENTITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetsubcellorientationidentity_ dmplextransformgetsubcellorientationidentity
#endif
PETSC_EXTERN void dmplextransformgetsubcellorientationidentity_(DMPlexTransform *tr, DMPolytopeType *sct, PetscInt *sp, PetscInt *so, DMPolytopeType *tct, PetscInt *r, PetscInt *o, PetscInt *rnew, PetscInt *onew, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rnew);
  CHKFORTRANNULLINTEGER(onew);
  *ierr = DMPlexTransformGetSubcellOrientationIdentity(*tr, *sct, *sp, *so, *tct, *r, *o, rnew, onew);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetsubcellorientation_ DMPLEXTRANSFORMGETSUBCELLORIENTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetsubcellorientation_ dmplextransformgetsubcellorientation
#endif
PETSC_EXTERN void dmplextransformgetsubcellorientation_(DMPlexTransform *tr, DMPolytopeType *sct, PetscInt *sp, PetscInt *so, DMPolytopeType *tct, PetscInt *r, PetscInt *o, PetscInt *rnew, PetscInt *onew, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rnew);
  CHKFORTRANNULLINTEGER(onew);
  *ierr = DMPlexTransformGetSubcellOrientation(*tr, *sct, *sp, *so, *tct, *r, *o, rnew, onew);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformgetconesize_ DMPLEXTRANSFORMGETCONESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformgetconesize_ dmplextransformgetconesize
#endif
PETSC_EXTERN void dmplextransformgetconesize_(DMPlexTransform *tr, PetscInt *q, PetscInt *coneSize, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(coneSize);
  *ierr = DMPlexTransformGetConeSize(*tr, *q, coneSize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformmapcoordinates_ DMPLEXTRANSFORMMAPCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformmapcoordinates_ dmplextransformmapcoordinates
#endif
PETSC_EXTERN void dmplextransformmapcoordinates_(DMPlexTransform *tr, DMPolytopeType *pct, DMPolytopeType *ct, PetscInt *p, PetscInt *r, PetscInt *Nv, PetscInt *dE, const PetscScalar in[], PetscScalar out[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(in);
  CHKFORTRANNULLSCALAR(out);
  *ierr = DMPlexTransformMapCoordinates(*tr, *pct, *ct, *p, *r, *Nv, *dE, in, out);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformcreatedisclabels_ DMPLEXTRANSFORMCREATEDISCLABELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformcreatedisclabels_ dmplextransformcreatedisclabels
#endif
PETSC_EXTERN void dmplextransformcreatedisclabels_(DMPlexTransform *tr, DM *rdm, PetscErrorCode *ierr)
{
  *ierr = DMPlexTransformCreateDiscLabels(*tr, *rdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformapply_ DMPLEXTRANSFORMAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformapply_ dmplextransformapply
#endif
PETSC_EXTERN void dmplextransformapply_(DMPlexTransform *tr, DM *dm, DM *trdm, PetscErrorCode *ierr)
{
  PetscBool null_trdm = !*(void**) trdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(trdm);
  *ierr = DMPlexTransformApply(*tr, *dm, trdm);
  if (*ierr) return;
  if (! null_trdm && !*(void**) trdm) *(void **) trdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransformadaptlabel_ DMPLEXTRANSFORMADAPTLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransformadaptlabel_ dmplextransformadaptlabel
#endif
PETSC_EXTERN void dmplextransformadaptlabel_(DM *dm, Vec *metric, DMLabel *adaptLabel, DMLabel *rgLabel, DM *rdm, PetscErrorCode *ierr)
{
  PetscBool null_rdm = !*(void**) rdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rdm);
  *ierr = DMPlexTransformAdaptLabel(*dm, *metric, *adaptLabel, *rgLabel, rdm);
  if (*ierr) return;
  if (! null_rdm && !*(void**) rdm) *(void **) rdm = (void *)-2;
}
