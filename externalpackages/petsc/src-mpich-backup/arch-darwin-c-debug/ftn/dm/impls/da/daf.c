#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetsizes_ DMDASETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetsizes_ dmdasetsizes
#endif
PETSC_EXTERN void dmdasetsizes_(DM *da, PetscInt *M, PetscInt *N, PetscInt *P, PetscErrorCode *ierr)
{
  *ierr = DMDASetSizes(*da, *M, *N, *P);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetnumprocs_ DMDASETNUMPROCS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetnumprocs_ dmdasetnumprocs
#endif
PETSC_EXTERN void dmdasetnumprocs_(DM *da, PetscInt *m, PetscInt *n, PetscInt *p, PetscErrorCode *ierr)
{
  *ierr = DMDASetNumProcs(*da, *m, *n, *p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetboundarytype_ DMDAGETBOUNDARYTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetboundarytype_ dmdagetboundarytype
#endif
PETSC_EXTERN void dmdagetboundarytype_(DM *da, DMBoundaryType *bx, DMBoundaryType *by, DMBoundaryType *bz, PetscErrorCode *ierr)
{
  *ierr = DMDAGetBoundaryType(*da, bx, by, bz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetboundarytype_ DMDASETBOUNDARYTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetboundarytype_ dmdasetboundarytype
#endif
PETSC_EXTERN void dmdasetboundarytype_(DM *da, DMBoundaryType *bx, DMBoundaryType *by, DMBoundaryType *bz, PetscErrorCode *ierr)
{
  *ierr = DMDASetBoundaryType(*da, *bx, *by, *bz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetdof_ DMDASETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetdof_ dmdasetdof
#endif
PETSC_EXTERN void dmdasetdof_(DM *da, PetscInt *dof, PetscErrorCode *ierr)
{
  *ierr = DMDASetDof(*da, *dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetdof_ DMDAGETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetdof_ dmdagetdof
#endif
PETSC_EXTERN void dmdagetdof_(DM *da, PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof);
  *ierr = DMDAGetDof(*da, dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetoverlap_ DMDAGETOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetoverlap_ dmdagetoverlap
#endif
PETSC_EXTERN void dmdagetoverlap_(DM *da, PetscInt *x, PetscInt *y, PetscInt *z, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(x);
  CHKFORTRANNULLINTEGER(y);
  CHKFORTRANNULLINTEGER(z);
  *ierr = DMDAGetOverlap(*da, x, y, z);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetoverlap_ DMDASETOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetoverlap_ dmdasetoverlap
#endif
PETSC_EXTERN void dmdasetoverlap_(DM *da, PetscInt *x, PetscInt *y, PetscInt *z, PetscErrorCode *ierr)
{
  *ierr = DMDASetOverlap(*da, *x, *y, *z);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetnumlocalsubdomains_ DMDAGETNUMLOCALSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetnumlocalsubdomains_ dmdagetnumlocalsubdomains
#endif
PETSC_EXTERN void dmdagetnumlocalsubdomains_(DM *da, PetscInt *Nsub, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Nsub);
  *ierr = DMDAGetNumLocalSubDomains(*da, Nsub);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetnumlocalsubdomains_ DMDASETNUMLOCALSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetnumlocalsubdomains_ dmdasetnumlocalsubdomains
#endif
PETSC_EXTERN void dmdasetnumlocalsubdomains_(DM *da, PetscInt *Nsub, PetscErrorCode *ierr)
{
  *ierr = DMDASetNumLocalSubDomains(*da, *Nsub);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetoffset_ DMDASETOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetoffset_ dmdasetoffset
#endif
PETSC_EXTERN void dmdasetoffset_(DM *da, PetscInt *xo, PetscInt *yo, PetscInt *zo, PetscInt *Mo, PetscInt *No, PetscInt *Po, PetscErrorCode *ierr)
{
  *ierr = DMDASetOffset(*da, *xo, *yo, *zo, *Mo, *No, *Po);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetoffset_ DMDAGETOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetoffset_ dmdagetoffset
#endif
PETSC_EXTERN void dmdagetoffset_(DM *da, PetscInt *xo, PetscInt *yo, PetscInt *zo, PetscInt *Mo, PetscInt *No, PetscInt *Po, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(xo);
  CHKFORTRANNULLINTEGER(yo);
  CHKFORTRANNULLINTEGER(zo);
  CHKFORTRANNULLINTEGER(Mo);
  CHKFORTRANNULLINTEGER(No);
  CHKFORTRANNULLINTEGER(Po);
  *ierr = DMDAGetOffset(*da, xo, yo, zo, Mo, No, Po);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetnonoverlappingregion_ DMDAGETNONOVERLAPPINGREGION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetnonoverlappingregion_ dmdagetnonoverlappingregion
#endif
PETSC_EXTERN void dmdagetnonoverlappingregion_(DM *da, PetscInt *xs, PetscInt *ys, PetscInt *zs, PetscInt *xm, PetscInt *ym, PetscInt *zm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(xs);
  CHKFORTRANNULLINTEGER(ys);
  CHKFORTRANNULLINTEGER(zs);
  CHKFORTRANNULLINTEGER(xm);
  CHKFORTRANNULLINTEGER(ym);
  CHKFORTRANNULLINTEGER(zm);
  *ierr = DMDAGetNonOverlappingRegion(*da, xs, ys, zs, xm, ym, zm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetnonoverlappingregion_ DMDASETNONOVERLAPPINGREGION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetnonoverlappingregion_ dmdasetnonoverlappingregion
#endif
PETSC_EXTERN void dmdasetnonoverlappingregion_(DM *da, PetscInt *xs, PetscInt *ys, PetscInt *zs, PetscInt *xm, PetscInt *ym, PetscInt *zm, PetscErrorCode *ierr)
{
  *ierr = DMDASetNonOverlappingRegion(*da, *xs, *ys, *zs, *xm, *ym, *zm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetstenciltype_ DMDASETSTENCILTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetstenciltype_ dmdasetstenciltype
#endif
PETSC_EXTERN void dmdasetstenciltype_(DM *da, DMDAStencilType *stype, PetscErrorCode *ierr)
{
  *ierr = DMDASetStencilType(*da, *stype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetstenciltype_ DMDAGETSTENCILTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetstenciltype_ dmdagetstenciltype
#endif
PETSC_EXTERN void dmdagetstenciltype_(DM *da, DMDAStencilType *stype, PetscErrorCode *ierr)
{
  *ierr = DMDAGetStencilType(*da, stype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetstencilwidth_ DMDASETSTENCILWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetstencilwidth_ dmdasetstencilwidth
#endif
PETSC_EXTERN void dmdasetstencilwidth_(DM *da, PetscInt *width, PetscErrorCode *ierr)
{
  *ierr = DMDASetStencilWidth(*da, *width);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetstencilwidth_ DMDAGETSTENCILWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetstencilwidth_ dmdagetstencilwidth
#endif
PETSC_EXTERN void dmdagetstencilwidth_(DM *da, PetscInt *width, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(width);
  *ierr = DMDAGetStencilWidth(*da, width);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetownershipranges_ DMDASETOWNERSHIPRANGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetownershipranges_ dmdasetownershipranges
#endif
PETSC_EXTERN void dmdasetownershipranges_(DM *da, const PetscInt lx[], const PetscInt ly[], const PetscInt lz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lx);
  CHKFORTRANNULLINTEGER(ly);
  CHKFORTRANNULLINTEGER(lz);
  *ierr = DMDASetOwnershipRanges(*da, lx, ly, lz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetinterpolationtype_ DMDASETINTERPOLATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetinterpolationtype_ dmdasetinterpolationtype
#endif
PETSC_EXTERN void dmdasetinterpolationtype_(DM *da, DMDAInterpolationType *ctype, PetscErrorCode *ierr)
{
  *ierr = DMDASetInterpolationType(*da, *ctype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetinterpolationtype_ DMDAGETINTERPOLATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetinterpolationtype_ dmdagetinterpolationtype
#endif
PETSC_EXTERN void dmdagetinterpolationtype_(DM *da, DMDAInterpolationType *ctype, PetscErrorCode *ierr)
{
  *ierr = DMDAGetInterpolationType(*da, ctype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetrefinementfactor_ DMDASETREFINEMENTFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetrefinementfactor_ dmdasetrefinementfactor
#endif
PETSC_EXTERN void dmdasetrefinementfactor_(DM *da, PetscInt *refine_x, PetscInt *refine_y, PetscInt *refine_z, PetscErrorCode *ierr)
{
  *ierr = DMDASetRefinementFactor(*da, *refine_x, *refine_y, *refine_z);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetrefinementfactor_ DMDAGETREFINEMENTFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetrefinementfactor_ dmdagetrefinementfactor
#endif
PETSC_EXTERN void dmdagetrefinementfactor_(DM *da, PetscInt *refine_x, PetscInt *refine_y, PetscInt *refine_z, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(refine_x);
  CHKFORTRANNULLINTEGER(refine_y);
  CHKFORTRANNULLINTEGER(refine_z);
  *ierr = DMDAGetRefinementFactor(*da, refine_x, refine_y, refine_z);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdamapmatstenciltoglobal_ DMDAMAPMATSTENCILTOGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdamapmatstenciltoglobal_ dmdamapmatstenciltoglobal
#endif
PETSC_EXTERN void dmdamapmatstenciltoglobal_(DM *da, PetscInt *m, const MatStencil idxm[], PetscInt gidxm[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(gidxm);
  *ierr = DMDAMapMatStencilToGlobal(*da, *m, idxm, gidxm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetgllcoordinates_ DMDASETGLLCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetgllcoordinates_ dmdasetgllcoordinates
#endif
PETSC_EXTERN void dmdasetgllcoordinates_(DM *da, PetscInt *n, PetscReal *nodes, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(nodes);
  *ierr = DMDASetGLLCoordinates(*da, *n, nodes);
  if (*ierr) return;
}
