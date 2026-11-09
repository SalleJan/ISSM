#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetboundarytypes_ DMSTAGGETBOUNDARYTYPES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetboundarytypes_ dmstaggetboundarytypes
#endif
PETSC_EXTERN void dmstaggetboundarytypes_(DM *dm, DMBoundaryType *boundaryTypeX, DMBoundaryType *boundaryTypeY, DMBoundaryType *boundaryTypeZ, PetscErrorCode *ierr)
{
  *ierr = DMStagGetBoundaryTypes(*dm, boundaryTypeX, boundaryTypeY, boundaryTypeZ);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetproductcoordinatearrays_ DMSTAGGETPRODUCTCOORDINATEARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetproductcoordinatearrays_ dmstaggetproductcoordinatearrays
#endif
PETSC_EXTERN void dmstaggetproductcoordinatearrays_(DM *dm, void *arrX, void *arrY, void *arrZ, PetscErrorCode *ierr)
{
  *ierr = DMStagGetProductCoordinateArrays(*dm, arrX, arrY, arrZ);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetproductcoordinatearraysread_ DMSTAGGETPRODUCTCOORDINATEARRAYSREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetproductcoordinatearraysread_ dmstaggetproductcoordinatearraysread
#endif
PETSC_EXTERN void dmstaggetproductcoordinatearraysread_(DM *dm, void *arrX, void *arrY, void *arrZ, PetscErrorCode *ierr)
{
  *ierr = DMStagGetProductCoordinateArraysRead(*dm, arrX, arrY, arrZ);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetcorners_ DMSTAGGETCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetcorners_ dmstaggetcorners
#endif
PETSC_EXTERN void dmstaggetcorners_(DM *dm, PetscInt *x, PetscInt *y, PetscInt *z, PetscInt *m, PetscInt *n, PetscInt *p, PetscInt *nExtrax, PetscInt *nExtray, PetscInt *nExtraz, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(x);
  CHKFORTRANNULLINTEGER(y);
  CHKFORTRANNULLINTEGER(z);
  CHKFORTRANNULLINTEGER(m);
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(p);
  CHKFORTRANNULLINTEGER(nExtrax);
  CHKFORTRANNULLINTEGER(nExtray);
  CHKFORTRANNULLINTEGER(nExtraz);
  *ierr = DMStagGetCorners(*dm, x, y, z, m, n, p, nExtrax, nExtray, nExtraz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetdof_ DMSTAGGETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetdof_ dmstaggetdof
#endif
PETSC_EXTERN void dmstaggetdof_(DM *dm, PetscInt *dof0, PetscInt *dof1, PetscInt *dof2, PetscInt *dof3, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof0);
  CHKFORTRANNULLINTEGER(dof1);
  CHKFORTRANNULLINTEGER(dof2);
  CHKFORTRANNULLINTEGER(dof3);
  *ierr = DMStagGetDOF(*dm, dof0, dof1, dof2, dof3);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetghostcorners_ DMSTAGGETGHOSTCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetghostcorners_ dmstaggetghostcorners
#endif
PETSC_EXTERN void dmstaggetghostcorners_(DM *dm, PetscInt *x, PetscInt *y, PetscInt *z, PetscInt *m, PetscInt *n, PetscInt *p, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(x);
  CHKFORTRANNULLINTEGER(y);
  CHKFORTRANNULLINTEGER(z);
  CHKFORTRANNULLINTEGER(m);
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(p);
  *ierr = DMStagGetGhostCorners(*dm, x, y, z, m, n, p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetglobalsizes_ DMSTAGGETGLOBALSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetglobalsizes_ dmstaggetglobalsizes
#endif
PETSC_EXTERN void dmstaggetglobalsizes_(DM *dm, PetscInt *M, PetscInt *N, PetscInt *P, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(M);
  CHKFORTRANNULLINTEGER(N);
  CHKFORTRANNULLINTEGER(P);
  *ierr = DMStagGetGlobalSizes(*dm, M, N, P);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetisfirstrank_ DMSTAGGETISFIRSTRANK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetisfirstrank_ dmstaggetisfirstrank
#endif
PETSC_EXTERN void dmstaggetisfirstrank_(DM *dm, PetscBool *isFirstRank0, PetscBool *isFirstRank1, PetscBool *isFirstRank2, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isFirstRank0);
  CHKFORTRANNULLBOOL(isFirstRank1);
  CHKFORTRANNULLBOOL(isFirstRank2);
  *ierr = DMStagGetIsFirstRank(*dm, isFirstRank0, isFirstRank1, isFirstRank2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetislastrank_ DMSTAGGETISLASTRANK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetislastrank_ dmstaggetislastrank
#endif
PETSC_EXTERN void dmstaggetislastrank_(DM *dm, PetscBool *isLastRank0, PetscBool *isLastRank1, PetscBool *isLastRank2, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isLastRank0);
  CHKFORTRANNULLBOOL(isLastRank1);
  CHKFORTRANNULLBOOL(isLastRank2);
  *ierr = DMStagGetIsLastRank(*dm, isLastRank0, isLastRank1, isLastRank2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetlocalsizes_ DMSTAGGETLOCALSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetlocalsizes_ dmstaggetlocalsizes
#endif
PETSC_EXTERN void dmstaggetlocalsizes_(DM *dm, PetscInt *m, PetscInt *n, PetscInt *p, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(m);
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(p);
  *ierr = DMStagGetLocalSizes(*dm, m, n, p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetnumranks_ DMSTAGGETNUMRANKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetnumranks_ dmstaggetnumranks
#endif
PETSC_EXTERN void dmstaggetnumranks_(DM *dm, PetscInt *nRanks0, PetscInt *nRanks1, PetscInt *nRanks2, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nRanks0);
  CHKFORTRANNULLINTEGER(nRanks1);
  CHKFORTRANNULLINTEGER(nRanks2);
  *ierr = DMStagGetNumRanks(*dm, nRanks0, nRanks1, nRanks2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetentries_ DMSTAGGETENTRIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetentries_ dmstaggetentries
#endif
PETSC_EXTERN void dmstaggetentries_(DM *dm, PetscInt *entries, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(entries);
  *ierr = DMStagGetEntries(*dm, entries);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetentrieslocal_ DMSTAGGETENTRIESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetentrieslocal_ dmstaggetentrieslocal
#endif
PETSC_EXTERN void dmstaggetentrieslocal_(DM *dm, PetscInt *entries, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(entries);
  *ierr = DMStagGetEntriesLocal(*dm, entries);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetentriesperelement_ DMSTAGGETENTRIESPERELEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetentriesperelement_ dmstaggetentriesperelement
#endif
PETSC_EXTERN void dmstaggetentriesperelement_(DM *dm, PetscInt *entriesPerElement, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(entriesPerElement);
  *ierr = DMStagGetEntriesPerElement(*dm, entriesPerElement);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetstenciltype_ DMSTAGGETSTENCILTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetstenciltype_ dmstaggetstenciltype
#endif
PETSC_EXTERN void dmstaggetstenciltype_(DM *dm, DMStagStencilType *stencilType, PetscErrorCode *ierr)
{
  *ierr = DMStagGetStencilType(*dm, stencilType);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetstencilwidth_ DMSTAGGETSTENCILWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetstencilwidth_ dmstaggetstencilwidth
#endif
PETSC_EXTERN void dmstaggetstencilwidth_(DM *dm, PetscInt *stencilWidth, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(stencilWidth);
  *ierr = DMStagGetStencilWidth(*dm, stencilWidth);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagcreatecompatibledmstag_ DMSTAGCREATECOMPATIBLEDMSTAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagcreatecompatibledmstag_ dmstagcreatecompatibledmstag
#endif
PETSC_EXTERN void dmstagcreatecompatibledmstag_(DM *dm, PetscInt *dof0, PetscInt *dof1, PetscInt *dof2, PetscInt *dof3, DM *newdm, PetscErrorCode *ierr)
{
  PetscBool null_newdm = !*(void**) newdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newdm);
  *ierr = DMStagCreateCompatibleDMStag(*dm, *dof0, *dof1, *dof2, *dof3, newdm);
  if (*ierr) return;
  if (! null_newdm && !*(void**) newdm) *(void **) newdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetlocationslot_ DMSTAGGETLOCATIONSLOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetlocationslot_ dmstaggetlocationslot
#endif
PETSC_EXTERN void dmstaggetlocationslot_(DM *dm, DMStagStencilLocation *loc, PetscInt *c, PetscInt *slot, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(slot);
  *ierr = DMStagGetLocationSlot(*dm, *loc, *c, slot);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstaggetrefinementfactor_ DMSTAGGETREFINEMENTFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstaggetrefinementfactor_ dmstaggetrefinementfactor
#endif
PETSC_EXTERN void dmstaggetrefinementfactor_(DM *dm, PetscInt *refine_x, PetscInt *refine_y, PetscInt *refine_z, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(refine_x);
  CHKFORTRANNULLINTEGER(refine_y);
  CHKFORTRANNULLINTEGER(refine_z);
  *ierr = DMStagGetRefinementFactor(*dm, refine_x, refine_y, refine_z);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagmigratevec_ DMSTAGMIGRATEVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagmigratevec_ dmstagmigratevec
#endif
PETSC_EXTERN void dmstagmigratevec_(DM *dm, Vec *vec, DM *dmTo, Vec *vecTo, PetscErrorCode *ierr)
{
  *ierr = DMStagMigrateVec(*dm, *vec, *dmTo, *vecTo);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagpopulatelocaltoglobalinjective_ DMSTAGPOPULATELOCALTOGLOBALINJECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagpopulatelocaltoglobalinjective_ dmstagpopulatelocaltoglobalinjective
#endif
PETSC_EXTERN void dmstagpopulatelocaltoglobalinjective_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMStagPopulateLocalToGlobalInjective(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagrestoreproductcoordinatearrays_ DMSTAGRESTOREPRODUCTCOORDINATEARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagrestoreproductcoordinatearrays_ dmstagrestoreproductcoordinatearrays
#endif
PETSC_EXTERN void dmstagrestoreproductcoordinatearrays_(DM *dm, void *arrX, void *arrY, void *arrZ, PetscErrorCode *ierr)
{
  *ierr = DMStagRestoreProductCoordinateArrays(*dm, arrX, arrY, arrZ);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagrestoreproductcoordinatearraysread_ DMSTAGRESTOREPRODUCTCOORDINATEARRAYSREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagrestoreproductcoordinatearraysread_ dmstagrestoreproductcoordinatearraysread
#endif
PETSC_EXTERN void dmstagrestoreproductcoordinatearraysread_(DM *dm, void *arrX, void *arrY, void *arrZ, PetscErrorCode *ierr)
{
  *ierr = DMStagRestoreProductCoordinateArraysRead(*dm, arrX, arrY, arrZ);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetboundarytypes_ DMSTAGSETBOUNDARYTYPES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetboundarytypes_ dmstagsetboundarytypes
#endif
PETSC_EXTERN void dmstagsetboundarytypes_(DM *dm, DMBoundaryType *boundaryType0, DMBoundaryType *boundaryType1, DMBoundaryType *boundaryType2, PetscErrorCode *ierr)
{
  *ierr = DMStagSetBoundaryTypes(*dm, *boundaryType0, *boundaryType1, *boundaryType2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetcoordinatedmtype_ DMSTAGSETCOORDINATEDMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetcoordinatedmtype_ dmstagsetcoordinatedmtype
#endif
PETSC_EXTERN void dmstagsetcoordinatedmtype_(DM *dm, char *dmtype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dmtype)
{
  char* c_dmtype;
  FIXCHAR(dmtype, l_dmtype, c_dmtype);
  *ierr = DMStagSetCoordinateDMType(*dm, c_dmtype);
  if (*ierr) return;
  FREECHAR(dmtype, c_dmtype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetdof_ DMSTAGSETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetdof_ dmstagsetdof
#endif
PETSC_EXTERN void dmstagsetdof_(DM *dm, PetscInt *dof0, PetscInt *dof1, PetscInt *dof2, PetscInt *dof3, PetscErrorCode *ierr)
{
  *ierr = DMStagSetDOF(*dm, *dof0, *dof1, *dof2, *dof3);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetnumranks_ DMSTAGSETNUMRANKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetnumranks_ dmstagsetnumranks
#endif
PETSC_EXTERN void dmstagsetnumranks_(DM *dm, PetscInt *nRanks0, PetscInt *nRanks1, PetscInt *nRanks2, PetscErrorCode *ierr)
{
  *ierr = DMStagSetNumRanks(*dm, *nRanks0, *nRanks1, *nRanks2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetstenciltype_ DMSTAGSETSTENCILTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetstenciltype_ dmstagsetstenciltype
#endif
PETSC_EXTERN void dmstagsetstenciltype_(DM *dm, DMStagStencilType *stencilType, PetscErrorCode *ierr)
{
  *ierr = DMStagSetStencilType(*dm, *stencilType);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetstencilwidth_ DMSTAGSETSTENCILWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetstencilwidth_ dmstagsetstencilwidth
#endif
PETSC_EXTERN void dmstagsetstencilwidth_(DM *dm, PetscInt *stencilWidth, PetscErrorCode *ierr)
{
  *ierr = DMStagSetStencilWidth(*dm, *stencilWidth);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetglobalsizes_ DMSTAGSETGLOBALSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetglobalsizes_ dmstagsetglobalsizes
#endif
PETSC_EXTERN void dmstagsetglobalsizes_(DM *dm, PetscInt *N0, PetscInt *N1, PetscInt *N2, PetscErrorCode *ierr)
{
  *ierr = DMStagSetGlobalSizes(*dm, *N0, *N1, *N2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetownershipranges_ DMSTAGSETOWNERSHIPRANGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetownershipranges_ dmstagsetownershipranges
#endif
PETSC_EXTERN void dmstagsetownershipranges_(DM *dm, const PetscInt lx[], const PetscInt ly[], const PetscInt lz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lx);
  CHKFORTRANNULLINTEGER(ly);
  CHKFORTRANNULLINTEGER(lz);
  *ierr = DMStagSetOwnershipRanges(*dm, lx, ly, lz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetrefinementfactor_ DMSTAGSETREFINEMENTFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetrefinementfactor_ dmstagsetrefinementfactor
#endif
PETSC_EXTERN void dmstagsetrefinementfactor_(DM *dm, PetscInt *refine_x, PetscInt *refine_y, PetscInt *refine_z, PetscErrorCode *ierr)
{
  *ierr = DMStagSetRefinementFactor(*dm, *refine_x, *refine_y, *refine_z);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetuniformcoordinates_ DMSTAGSETUNIFORMCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetuniformcoordinates_ dmstagsetuniformcoordinates
#endif
PETSC_EXTERN void dmstagsetuniformcoordinates_(DM *dm, PetscReal *xmin, PetscReal *xmax, PetscReal *ymin, PetscReal *ymax, PetscReal *zmin, PetscReal *zmax, PetscErrorCode *ierr)
{
  *ierr = DMStagSetUniformCoordinates(*dm, *xmin, *xmax, *ymin, *ymax, *zmin, *zmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetuniformcoordinatesexplicit_ DMSTAGSETUNIFORMCOORDINATESEXPLICIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetuniformcoordinatesexplicit_ dmstagsetuniformcoordinatesexplicit
#endif
PETSC_EXTERN void dmstagsetuniformcoordinatesexplicit_(DM *dm, PetscReal *xmin, PetscReal *xmax, PetscReal *ymin, PetscReal *ymax, PetscReal *zmin, PetscReal *zmax, PetscErrorCode *ierr)
{
  *ierr = DMStagSetUniformCoordinatesExplicit(*dm, *xmin, *xmax, *ymin, *ymax, *zmin, *zmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagsetuniformcoordinatesproduct_ DMSTAGSETUNIFORMCOORDINATESPRODUCT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagsetuniformcoordinatesproduct_ dmstagsetuniformcoordinatesproduct
#endif
PETSC_EXTERN void dmstagsetuniformcoordinatesproduct_(DM *dm, PetscReal *xmin, PetscReal *xmax, PetscReal *ymin, PetscReal *ymax, PetscReal *zmin, PetscReal *zmax, PetscErrorCode *ierr)
{
  *ierr = DMStagSetUniformCoordinatesProduct(*dm, *xmin, *xmax, *ymin, *ymax, *zmin, *zmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagvecgetarray_ DMSTAGVECGETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagvecgetarray_ dmstagvecgetarray
#endif
PETSC_EXTERN void dmstagvecgetarray_(DM *dm, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMStagVecGetArray(*dm, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagvecgetarrayread_ DMSTAGVECGETARRAYREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagvecgetarrayread_ dmstagvecgetarrayread
#endif
PETSC_EXTERN void dmstagvecgetarrayread_(DM *dm, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMStagVecGetArrayRead(*dm, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagvecrestorearray_ DMSTAGVECRESTOREARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagvecrestorearray_ dmstagvecrestorearray
#endif
PETSC_EXTERN void dmstagvecrestorearray_(DM *dm, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMStagVecRestoreArray(*dm, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagvecrestorearrayread_ DMSTAGVECRESTOREARRAYREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagvecrestorearrayread_ dmstagvecrestorearrayread
#endif
PETSC_EXTERN void dmstagvecrestorearrayread_(DM *dm, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMStagVecRestoreArrayRead(*dm, *vec, array);
  if (*ierr) return;
}
