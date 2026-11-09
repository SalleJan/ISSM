#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfesettype_ PETSCFESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfesettype_ petscfesettype
#endif
PETSC_EXTERN void petscfesettype_(PetscFE *fem, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscFESetType(*fem, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegettype_ PETSCFEGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegettype_ petscfegettype
#endif
PETSC_EXTERN void petscfegettype_(PetscFE *fem, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscFEGetType(*fem, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeviewfromoptions_ PETSCFEVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeviewfromoptions_ petscfeviewfromoptions
#endif
PETSC_EXTERN void petscfeviewfromoptions_(PetscFE *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscFEViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeview_ PETSCFEVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeview_ petscfeview
#endif
PETSC_EXTERN void petscfeview_(PetscFE *fem, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscFEView(*fem, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfesetfromoptions_ PETSCFESETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfesetfromoptions_ petscfesetfromoptions
#endif
PETSC_EXTERN void petscfesetfromoptions_(PetscFE *fem, PetscErrorCode *ierr)
{
  *ierr = PetscFESetFromOptions(*fem);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfesetup_ PETSCFESETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfesetup_ petscfesetup
#endif
PETSC_EXTERN void petscfesetup_(PetscFE *fem, PetscErrorCode *ierr)
{
  *ierr = PetscFESetUp(*fem);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfedestroy_ PETSCFEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfedestroy_ petscfedestroy
#endif
PETSC_EXTERN void petscfedestroy_(PetscFE *fem, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(fem);
  PetscBool null_fem = !*(void**) fem ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fem);
  *ierr = PetscFEDestroy(fem);
  if (*ierr) return;
  if (! null_fem && !*(void**) fem) *(void **) fem = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreate_ PETSCFECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreate_ petscfecreate
#endif
PETSC_EXTERN void petscfecreate_(MPI_Fint *comm, PetscFE *fem, PetscErrorCode *ierr)
{
  PetscBool null_fem = !*(void**) fem ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(fem);
  CHKFORTRANNULLOBJECT(fem);
  *ierr = PetscFECreate(MPI_Comm_f2c(*(comm)), fem);
  if (*ierr) return;
  if (! null_fem && !*(void**) fem) *(void **) fem = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetspatialdimension_ PETSCFEGETSPATIALDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetspatialdimension_ petscfegetspatialdimension
#endif
PETSC_EXTERN void petscfegetspatialdimension_(PetscFE *fem, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = PetscFEGetSpatialDimension(*fem, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfesetnumcomponents_ PETSCFESETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfesetnumcomponents_ petscfesetnumcomponents
#endif
PETSC_EXTERN void petscfesetnumcomponents_(PetscFE *fem, PetscInt *comp, PetscErrorCode *ierr)
{
  *ierr = PetscFESetNumComponents(*fem, *comp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetnumcomponents_ PETSCFEGETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetnumcomponents_ petscfegetnumcomponents
#endif
PETSC_EXTERN void petscfegetnumcomponents_(PetscFE *fem, PetscInt *comp, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(comp);
  *ierr = PetscFEGetNumComponents(*fem, comp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfesettilesizes_ PETSCFESETTILESIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfesettilesizes_ petscfesettilesizes
#endif
PETSC_EXTERN void petscfesettilesizes_(PetscFE *fem, PetscInt *blockSize, PetscInt *numBlocks, PetscInt *batchSize, PetscInt *numBatches, PetscErrorCode *ierr)
{
  *ierr = PetscFESetTileSizes(*fem, *blockSize, *numBlocks, *batchSize, *numBatches);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegettilesizes_ PETSCFEGETTILESIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegettilesizes_ petscfegettilesizes
#endif
PETSC_EXTERN void petscfegettilesizes_(PetscFE *fem, PetscInt *blockSize, PetscInt *numBlocks, PetscInt *batchSize, PetscInt *numBatches, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(blockSize);
  CHKFORTRANNULLINTEGER(numBlocks);
  CHKFORTRANNULLINTEGER(batchSize);
  CHKFORTRANNULLINTEGER(numBatches);
  *ierr = PetscFEGetTileSizes(*fem, blockSize, numBlocks, batchSize, numBatches);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetbasisspace_ PETSCFEGETBASISSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetbasisspace_ petscfegetbasisspace
#endif
PETSC_EXTERN void petscfegetbasisspace_(PetscFE *fem, PetscSpace *sp, PetscErrorCode *ierr)
{
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sp);
  *ierr = PetscFEGetBasisSpace(*fem, sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfesetbasisspace_ PETSCFESETBASISSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfesetbasisspace_ petscfesetbasisspace
#endif
PETSC_EXTERN void petscfesetbasisspace_(PetscFE *fem, PetscSpace *sp, PetscErrorCode *ierr)
{
  *ierr = PetscFESetBasisSpace(*fem, *sp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetdualspace_ PETSCFEGETDUALSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetdualspace_ petscfegetdualspace
#endif
PETSC_EXTERN void petscfegetdualspace_(PetscFE *fem, PetscDualSpace *sp, PetscErrorCode *ierr)
{
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sp);
  *ierr = PetscFEGetDualSpace(*fem, sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfesetdualspace_ PETSCFESETDUALSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfesetdualspace_ petscfesetdualspace
#endif
PETSC_EXTERN void petscfesetdualspace_(PetscFE *fem, PetscDualSpace *sp, PetscErrorCode *ierr)
{
  *ierr = PetscFESetDualSpace(*fem, *sp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetquadrature_ PETSCFEGETQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetquadrature_ petscfegetquadrature
#endif
PETSC_EXTERN void petscfegetquadrature_(PetscFE *fem, PetscQuadrature *q, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscFEGetQuadrature(*fem, q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfesetquadrature_ PETSCFESETQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfesetquadrature_ petscfesetquadrature
#endif
PETSC_EXTERN void petscfesetquadrature_(PetscFE *fem, PetscQuadrature *q, PetscErrorCode *ierr)
{
  *ierr = PetscFESetQuadrature(*fem, *q);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetfacequadrature_ PETSCFEGETFACEQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetfacequadrature_ petscfegetfacequadrature
#endif
PETSC_EXTERN void petscfegetfacequadrature_(PetscFE *fem, PetscQuadrature *q, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscFEGetFaceQuadrature(*fem, q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfesetfacequadrature_ PETSCFESETFACEQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfesetfacequadrature_ petscfesetfacequadrature
#endif
PETSC_EXTERN void petscfesetfacequadrature_(PetscFE *fem, PetscQuadrature *q, PetscErrorCode *ierr)
{
  *ierr = PetscFESetFaceQuadrature(*fem, *q);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecopyquadrature_ PETSCFECOPYQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecopyquadrature_ petscfecopyquadrature
#endif
PETSC_EXTERN void petscfecopyquadrature_(PetscFE *sfe, PetscFE *tfe, PetscErrorCode *ierr)
{
  *ierr = PetscFECopyQuadrature(*sfe, *tfe);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetcelltabulation_ PETSCFEGETCELLTABULATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetcelltabulation_ petscfegetcelltabulation
#endif
PETSC_EXTERN void petscfegetcelltabulation_(PetscFE *fem, PetscInt *k, PetscTabulation *T, PetscErrorCode *ierr)
{
  PetscBool null_T = !*(void**) T ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(T);
  *ierr = PetscFEGetCellTabulation(*fem, *k, T);
  if (*ierr) return;
  if (! null_T && !*(void**) T) *(void **) T = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeexpandfacequadrature_ PETSCFEEXPANDFACEQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeexpandfacequadrature_ petscfeexpandfacequadrature
#endif
PETSC_EXTERN void petscfeexpandfacequadrature_(PetscFE *fe, PetscQuadrature *fq, PetscQuadrature *efq, PetscErrorCode *ierr)
{
  PetscBool null_efq = !*(void**) efq ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(efq);
  *ierr = PetscFEExpandFaceQuadrature(*fe, *fq, efq);
  if (*ierr) return;
  if (! null_efq && !*(void**) efq) *(void **) efq = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetfacetabulation_ PETSCFEGETFACETABULATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetfacetabulation_ petscfegetfacetabulation
#endif
PETSC_EXTERN void petscfegetfacetabulation_(PetscFE *fem, PetscInt *k, PetscTabulation *Tf, PetscErrorCode *ierr)
{
  PetscBool null_Tf = !*(void**) Tf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Tf);
  *ierr = PetscFEGetFaceTabulation(*fem, *k, Tf);
  if (*ierr) return;
  if (! null_Tf && !*(void**) Tf) *(void **) Tf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetfacecentroidtabulation_ PETSCFEGETFACECENTROIDTABULATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetfacecentroidtabulation_ petscfegetfacecentroidtabulation
#endif
PETSC_EXTERN void petscfegetfacecentroidtabulation_(PetscFE *fem, PetscTabulation *Tc, PetscErrorCode *ierr)
{
  PetscBool null_Tc = !*(void**) Tc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Tc);
  *ierr = PetscFEGetFaceCentroidTabulation(*fem, Tc);
  if (*ierr) return;
  if (! null_Tc && !*(void**) Tc) *(void **) Tc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreatetabulation_ PETSCFECREATETABULATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreatetabulation_ petscfecreatetabulation
#endif
PETSC_EXTERN void petscfecreatetabulation_(PetscFE *fem, PetscInt *nrepl, PetscInt *npoints, const PetscReal points[], PetscInt *K, PetscTabulation *T, PetscErrorCode *ierr)
{
  PetscBool null_T = !*(void**) T ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(points);
  CHKFORTRANNULLOBJECT(T);
  *ierr = PetscFECreateTabulation(*fem, *nrepl, *npoints, points, *K, T);
  if (*ierr) return;
  if (! null_T && !*(void**) T) *(void **) T = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecomputetabulation_ PETSCFECOMPUTETABULATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecomputetabulation_ petscfecomputetabulation
#endif
PETSC_EXTERN void petscfecomputetabulation_(PetscFE *fem, PetscInt *npoints, const PetscReal points[], PetscInt *K, PetscTabulation *T, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(points);
  *ierr = PetscFEComputeTabulation(*fem, *npoints, points, *K, *T);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreateheighttrace_ PETSCFECREATEHEIGHTTRACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreateheighttrace_ petscfecreateheighttrace
#endif
PETSC_EXTERN void petscfecreateheighttrace_(PetscFE *fe, PetscInt *height, PetscFE *trFE, PetscErrorCode *ierr)
{
  PetscBool null_trFE = !*(void**) trFE ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(trFE);
  *ierr = PetscFECreateHeightTrace(*fe, *height, trFE);
  if (*ierr) return;
  if (! null_trFE && !*(void**) trFE) *(void **) trFE = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetdimension_ PETSCFEGETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetdimension_ petscfegetdimension
#endif
PETSC_EXTERN void petscfegetdimension_(PetscFE *fem, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = PetscFEGetDimension(*fem, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfepushforward_ PETSCFEPUSHFORWARD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfepushforward_ petscfepushforward
#endif
PETSC_EXTERN void petscfepushforward_(PetscFE *fe, PetscFEGeom **fegeom, PetscInt *Nv, PetscScalar vals[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(vals);
  *ierr = PetscFEPushforward(*fe, *fegeom, *Nv, vals);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfepushforwardgradient_ PETSCFEPUSHFORWARDGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfepushforwardgradient_ petscfepushforwardgradient
#endif
PETSC_EXTERN void petscfepushforwardgradient_(PetscFE *fe, PetscFEGeom **fegeom, PetscInt *Nv, PetscScalar vals[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(vals);
  *ierr = PetscFEPushforwardGradient(*fe, *fegeom, *Nv, vals);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfepushforwardhessian_ PETSCFEPUSHFORWARDHESSIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfepushforwardhessian_ petscfepushforwardhessian
#endif
PETSC_EXTERN void petscfepushforwardhessian_(PetscFE *fe, PetscFEGeom **fegeom, PetscInt *Nv, PetscScalar vals[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(vals);
  *ierr = PetscFEPushforwardHessian(*fe, *fegeom, *Nv, vals);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeintegrate_ PETSCFEINTEGRATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeintegrate_ petscfeintegrate
#endif
PETSC_EXTERN void petscfeintegrate_(PetscDS *prob, PetscInt *field, PetscInt *Ne, PetscFEGeom **cgeom, const PetscScalar coefficients[], PetscDS *probAux, const PetscScalar coefficientsAux[], PetscScalar integral[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coefficients);
  CHKFORTRANNULLSCALAR(coefficientsAux);
  CHKFORTRANNULLSCALAR(integral);
  *ierr = PetscFEIntegrate(*prob, *field, *Ne, *cgeom, coefficients, *probAux, coefficientsAux, integral);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeintegrateresidual_ PETSCFEINTEGRATERESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeintegrateresidual_ petscfeintegrateresidual
#endif
PETSC_EXTERN void petscfeintegrateresidual_(PetscDS *ds, PetscFormKey *key, PetscInt *Ne, PetscFEGeom **cgeom, const PetscScalar coefficients[], const PetscScalar coefficients_t[], PetscDS *probAux, const PetscScalar coefficientsAux[], PetscReal *t, PetscScalar elemVec[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coefficients);
  CHKFORTRANNULLSCALAR(coefficients_t);
  CHKFORTRANNULLSCALAR(coefficientsAux);
  CHKFORTRANNULLSCALAR(elemVec);
  *ierr = PetscFEIntegrateResidual(*ds, *key, *Ne, *cgeom, coefficients, coefficients_t, *probAux, coefficientsAux, *t, elemVec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeintegratebdresidual_ PETSCFEINTEGRATEBDRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeintegratebdresidual_ petscfeintegratebdresidual
#endif
PETSC_EXTERN void petscfeintegratebdresidual_(PetscDS *ds, PetscWeakForm *wf, PetscFormKey *key, PetscInt *Ne, PetscFEGeom **fgeom, const PetscScalar coefficients[], const PetscScalar coefficients_t[], PetscDS *probAux, const PetscScalar coefficientsAux[], PetscReal *t, PetscScalar elemVec[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coefficients);
  CHKFORTRANNULLSCALAR(coefficients_t);
  CHKFORTRANNULLSCALAR(coefficientsAux);
  CHKFORTRANNULLSCALAR(elemVec);
  *ierr = PetscFEIntegrateBdResidual(*ds, *wf, *key, *Ne, *fgeom, coefficients, coefficients_t, *probAux, coefficientsAux, *t, elemVec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeintegratehybridresidual_ PETSCFEINTEGRATEHYBRIDRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeintegratehybridresidual_ petscfeintegratehybridresidual
#endif
PETSC_EXTERN void petscfeintegratehybridresidual_(PetscDS *ds, PetscDS *dsIn, PetscFormKey *key, PetscInt *s, PetscInt *Ne, PetscFEGeom **fgeom, PetscFEGeom **cgeom, const PetscScalar coefficients[], const PetscScalar coefficients_t[], PetscDS *probAux, const PetscScalar coefficientsAux[], PetscReal *t, PetscScalar elemVec[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coefficients);
  CHKFORTRANNULLSCALAR(coefficients_t);
  CHKFORTRANNULLSCALAR(coefficientsAux);
  CHKFORTRANNULLSCALAR(elemVec);
  *ierr = PetscFEIntegrateHybridResidual(*ds, *dsIn, *key, *s, *Ne, *fgeom, *cgeom, coefficients, coefficients_t, *probAux, coefficientsAux, *t, elemVec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeintegratejacobian_ PETSCFEINTEGRATEJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeintegratejacobian_ petscfeintegratejacobian
#endif
PETSC_EXTERN void petscfeintegratejacobian_(PetscDS *rds, PetscDS *cds, PetscFEJacobianType *jtype, PetscFormKey *key, PetscInt *Ne, PetscFEGeom **cgeom, const PetscScalar coefficients[], const PetscScalar coefficients_t[], PetscDS *dsAux, const PetscScalar coefficientsAux[], PetscReal *t, PetscReal *u_tshift, PetscScalar elemMat[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coefficients);
  CHKFORTRANNULLSCALAR(coefficients_t);
  CHKFORTRANNULLSCALAR(coefficientsAux);
  CHKFORTRANNULLSCALAR(elemMat);
  *ierr = PetscFEIntegrateJacobian(*rds, *cds, *jtype, *key, *Ne, *cgeom, coefficients, coefficients_t, *dsAux, coefficientsAux, *t, *u_tshift, elemMat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeintegratebdjacobian_ PETSCFEINTEGRATEBDJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeintegratebdjacobian_ petscfeintegratebdjacobian
#endif
PETSC_EXTERN void petscfeintegratebdjacobian_(PetscDS *ds, PetscWeakForm *wf, PetscFEJacobianType *jtype, PetscFormKey *key, PetscInt *Ne, PetscFEGeom **fgeom, const PetscScalar coefficients[], const PetscScalar coefficients_t[], PetscDS *probAux, const PetscScalar coefficientsAux[], PetscReal *t, PetscReal *u_tshift, PetscScalar elemMat[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coefficients);
  CHKFORTRANNULLSCALAR(coefficients_t);
  CHKFORTRANNULLSCALAR(coefficientsAux);
  CHKFORTRANNULLSCALAR(elemMat);
  *ierr = PetscFEIntegrateBdJacobian(*ds, *wf, *jtype, *key, *Ne, *fgeom, coefficients, coefficients_t, *probAux, coefficientsAux, *t, *u_tshift, elemMat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeintegratehybridjacobian_ PETSCFEINTEGRATEHYBRIDJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeintegratehybridjacobian_ petscfeintegratehybridjacobian
#endif
PETSC_EXTERN void petscfeintegratehybridjacobian_(PetscDS *ds, PetscDS *dsIn, PetscFEJacobianType *jtype, PetscFormKey *key, PetscInt *s, PetscInt *Ne, PetscFEGeom **fgeom, PetscFEGeom **cgeom, const PetscScalar coefficients[], const PetscScalar coefficients_t[], PetscDS *probAux, const PetscScalar coefficientsAux[], PetscReal *t, PetscReal *u_tshift, PetscScalar elemMat[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coefficients);
  CHKFORTRANNULLSCALAR(coefficients_t);
  CHKFORTRANNULLSCALAR(coefficientsAux);
  CHKFORTRANNULLSCALAR(elemMat);
  *ierr = PetscFEIntegrateHybridJacobian(*ds, *dsIn, *jtype, *key, *s, *Ne, *fgeom, *cgeom, coefficients, coefficients_t, *probAux, coefficientsAux, *t, *u_tshift, elemMat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfegetheightsubspace_ PETSCFEGETHEIGHTSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfegetheightsubspace_ petscfegetheightsubspace
#endif
PETSC_EXTERN void petscfegetheightsubspace_(PetscFE *fe, PetscInt *height, PetscFE *subfe, PetscErrorCode *ierr)
{
  PetscBool null_subfe = !*(void**) subfe ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subfe);
  *ierr = PetscFEGetHeightSubspace(*fe, *height, subfe);
  if (*ierr) return;
  if (! null_subfe && !*(void**) subfe) *(void **) subfe = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscferefine_ PETSCFEREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscferefine_ petscferefine
#endif
PETSC_EXTERN void petscferefine_(PetscFE *fe, PetscFE *feRef, PetscErrorCode *ierr)
{
  PetscBool null_feRef = !*(void**) feRef ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(feRef);
  *ierr = PetscFERefine(*fe, feRef);
  if (*ierr) return;
  if (! null_feRef && !*(void**) feRef) *(void **) feRef = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreatefromspaces_ PETSCFECREATEFROMSPACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreatefromspaces_ petscfecreatefromspaces
#endif
PETSC_EXTERN void petscfecreatefromspaces_(PetscSpace *P, PetscDualSpace *Q, PetscQuadrature *M_q, PetscQuadrature *fq, PetscFE *fem, PetscErrorCode *ierr)
{
  PetscBool null_fem = !*(void**) fem ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fem);
  *ierr = PetscFECreateFromSpaces(*P, *Q, *M_q, *fq, fem);
  if (*ierr) return;
  if (! null_fem && !*(void**) fem) *(void **) fem = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreatedefault_ PETSCFECREATEDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreatedefault_ petscfecreatedefault
#endif
PETSC_EXTERN void petscfecreatedefault_(MPI_Fint *comm, PetscInt *dim, PetscInt *Nc, PetscBool *isSimplex, char prefix[], PetscInt *qorder, PetscFE *fem, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  PetscBool null_fem = !*(void**) fem ? PETSC_TRUE : PETSC_FALSE;
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  CHKFORTRANNULLOBJECT(fem);
  *ierr = PetscFECreateDefault(MPI_Comm_f2c(*(comm)), *dim, *Nc, *isSimplex ? PETSC_TRUE : PETSC_FALSE, c_prefix, *qorder, fem);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
  if (! null_fem && !*(void**) fem) *(void **) fem = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreatebycell_ PETSCFECREATEBYCELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreatebycell_ petscfecreatebycell
#endif
PETSC_EXTERN void petscfecreatebycell_(MPI_Fint *comm, PetscInt *dim, PetscInt *Nc, DMPolytopeType *ct, char prefix[], PetscInt *qorder, PetscFE *fem, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  PetscBool null_fem = !*(void**) fem ? PETSC_TRUE : PETSC_FALSE;
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  CHKFORTRANNULLOBJECT(fem);
  *ierr = PetscFECreateByCell(MPI_Comm_f2c(*(comm)), *dim, *Nc, *ct, c_prefix, *qorder, fem);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
  if (! null_fem && !*(void**) fem) *(void **) fem = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreatelagrange_ PETSCFECREATELAGRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreatelagrange_ petscfecreatelagrange
#endif
PETSC_EXTERN void petscfecreatelagrange_(MPI_Fint *comm, PetscInt *dim, PetscInt *Nc, PetscBool *isSimplex, PetscInt *k, PetscInt *qorder, PetscFE *fem, PetscErrorCode *ierr)
{
  PetscBool null_fem = !*(void**) fem ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fem);
  *ierr = PetscFECreateLagrange(MPI_Comm_f2c(*(comm)), *dim, *Nc, *isSimplex ? PETSC_TRUE : PETSC_FALSE, *k, *qorder, fem);
  if (*ierr) return;
  if (! null_fem && !*(void**) fem) *(void **) fem = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreatelagrangebycell_ PETSCFECREATELAGRANGEBYCELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreatelagrangebycell_ petscfecreatelagrangebycell
#endif
PETSC_EXTERN void petscfecreatelagrangebycell_(MPI_Fint *comm, PetscInt *dim, PetscInt *Nc, DMPolytopeType *ct, PetscInt *k, PetscInt *qorder, PetscFE *fem, PetscErrorCode *ierr)
{
  PetscBool null_fem = !*(void**) fem ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fem);
  *ierr = PetscFECreateLagrangeByCell(MPI_Comm_f2c(*(comm)), *dim, *Nc, *ct, *k, *qorder, fem);
  if (*ierr) return;
  if (! null_fem && !*(void**) fem) *(void **) fem = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfelimitdegree_ PETSCFELIMITDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfelimitdegree_ petscfelimitdegree
#endif
PETSC_EXTERN void petscfelimitdegree_(PetscFE *fe, PetscInt *minDegree, PetscInt *maxDegree, PetscFE *newfe, PetscErrorCode *ierr)
{
  PetscBool null_newfe = !*(void**) newfe ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newfe);
  *ierr = PetscFELimitDegree(*fe, *minDegree, *maxDegree, newfe);
  if (*ierr) return;
  if (! null_newfe && !*(void**) newfe) *(void **) newfe = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreatebrokenelement_ PETSCFECREATEBROKENELEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreatebrokenelement_ petscfecreatebrokenelement
#endif
PETSC_EXTERN void petscfecreatebrokenelement_(PetscFE *cgfe, PetscFE *dgfe, PetscErrorCode *ierr)
{
  PetscBool null_dgfe = !*(void**) dgfe ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dgfe);
  *ierr = PetscFECreateBrokenElement(*cgfe, dgfe);
  if (*ierr) return;
  if (! null_dgfe && !*(void**) dgfe) *(void **) dgfe = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfesetname_ PETSCFESETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfesetname_ petscfesetname
#endif
PETSC_EXTERN void petscfesetname_(PetscFE *fe, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscFESetName(*fe, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfecreatecellgeometry_ PETSCFECREATECELLGEOMETRY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfecreatecellgeometry_ petscfecreatecellgeometry
#endif
PETSC_EXTERN void petscfecreatecellgeometry_(PetscFE *fe, PetscQuadrature *quad, PetscFEGeom **cgeom, PetscErrorCode *ierr)
{
  *ierr = PetscFECreateCellGeometry(*fe, *quad, *cgeom);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfedestroycellgeometry_ PETSCFEDESTROYCELLGEOMETRY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfedestroycellgeometry_ petscfedestroycellgeometry
#endif
PETSC_EXTERN void petscfedestroycellgeometry_(PetscFE *fe, PetscFEGeom **cgeom, PetscErrorCode *ierr)
{
  *ierr = PetscFEDestroyCellGeometry(*fe, *cgeom);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsctabulationdestroy_ PETSCTABULATIONDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsctabulationdestroy_ petsctabulationdestroy
#endif
PETSC_EXTERN void petsctabulationdestroy_(PetscTabulation *T, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(T);
  PetscBool null_T = !*(void**) T ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(T);
  *ierr = PetscTabulationDestroy(T);
  if (*ierr) return;
  if (! null_T && !*(void**) T) *(void **) T = (void *)-2;
}
