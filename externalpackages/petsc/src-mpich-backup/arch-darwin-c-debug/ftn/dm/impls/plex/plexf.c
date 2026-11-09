#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexissimplex_ DMPLEXISSIMPLEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexissimplex_ dmplexissimplex
#endif
PETSC_EXTERN void dmplexissimplex_(DM *dm, PetscBool *simplex, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(simplex);
  *ierr = DMPlexIsSimplex(*dm, simplex);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetsimplexorboxcells_ DMPLEXGETSIMPLEXORBOXCELLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetsimplexorboxcells_ dmplexgetsimplexorboxcells
#endif
PETSC_EXTERN void dmplexgetsimplexorboxcells_(DM *dm, PetscInt *height, PetscInt *cStart, PetscInt *cEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cStart);
  CHKFORTRANNULLINTEGER(cEnd);
  *ierr = DMPlexGetSimplexOrBoxCells(*dm, *height, cStart, cEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexvecview1d_ DMPLEXVECVIEW1D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexvecview1d_ dmplexvecview1d
#endif
PETSC_EXTERN void dmplexvecview1d_(DM *dm, PetscInt *n, Vec u[], PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(u);
  *ierr = DMPlexVecView1D(*dm, *n, u, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextopologyview_ DMPLEXTOPOLOGYVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextopologyview_ dmplextopologyview
#endif
PETSC_EXTERN void dmplextopologyview_(DM *dm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexTopologyView(*dm, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcoordinatesview_ DMPLEXCOORDINATESVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcoordinatesview_ dmplexcoordinatesview
#endif
PETSC_EXTERN void dmplexcoordinatesview_(DM *dm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexCoordinatesView(*dm, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlabelsview_ DMPLEXLABELSVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlabelsview_ dmplexlabelsview
#endif
PETSC_EXTERN void dmplexlabelsview_(DM *dm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexLabelsView(*dm, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsectionview_ DMPLEXSECTIONVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsectionview_ dmplexsectionview
#endif
PETSC_EXTERN void dmplexsectionview_(DM *dm, PetscViewer *viewer, DM *sectiondm, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexSectionView(*dm, v_viewer, *sectiondm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexglobalvectorview_ DMPLEXGLOBALVECTORVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexglobalvectorview_ dmplexglobalvectorview
#endif
PETSC_EXTERN void dmplexglobalvectorview_(DM *dm, PetscViewer *viewer, DM *sectiondm, Vec *vec, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexGlobalVectorView(*dm, v_viewer, *sectiondm, *vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlocalvectorview_ DMPLEXLOCALVECTORVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlocalvectorview_ dmplexlocalvectorview
#endif
PETSC_EXTERN void dmplexlocalvectorview_(DM *dm, PetscViewer *viewer, DM *sectiondm, Vec *vec, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexLocalVectorView(*dm, v_viewer, *sectiondm, *vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextopologyload_ DMPLEXTOPOLOGYLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextopologyload_ dmplextopologyload
#endif
PETSC_EXTERN void dmplextopologyload_(DM *dm, PetscViewer *viewer, PetscSF *globalToLocalPointSF, PetscErrorCode *ierr)
{
  PetscBool null_globalToLocalPointSF = !*(void**) globalToLocalPointSF ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(globalToLocalPointSF);
  *ierr = DMPlexTopologyLoad(*dm, v_viewer, globalToLocalPointSF);
  if (*ierr) return;
  if (! null_globalToLocalPointSF && !*(void**) globalToLocalPointSF) *(void **) globalToLocalPointSF = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcoordinatesload_ DMPLEXCOORDINATESLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcoordinatesload_ dmplexcoordinatesload
#endif
PETSC_EXTERN void dmplexcoordinatesload_(DM *dm, PetscViewer *viewer, PetscSF *globalToLocalPointSF, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexCoordinatesLoad(*dm, v_viewer, *globalToLocalPointSF);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlabelsload_ DMPLEXLABELSLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlabelsload_ dmplexlabelsload
#endif
PETSC_EXTERN void dmplexlabelsload_(DM *dm, PetscViewer *viewer, PetscSF *globalToLocalPointSF, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexLabelsLoad(*dm, v_viewer, *globalToLocalPointSF);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsectionload_ DMPLEXSECTIONLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsectionload_ dmplexsectionload
#endif
PETSC_EXTERN void dmplexsectionload_(DM *dm, PetscViewer *viewer, DM *sectiondm, PetscSF *globalToLocalPointSF, PetscSF *globalDofSF, PetscSF *localDofSF, PetscErrorCode *ierr)
{
  PetscBool null_globalDofSF = !*(void**) globalDofSF ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_localDofSF = !*(void**) localDofSF ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(globalDofSF);
  CHKFORTRANNULLOBJECT(localDofSF);
  *ierr = DMPlexSectionLoad(*dm, v_viewer, *sectiondm, *globalToLocalPointSF, globalDofSF, localDofSF);
  if (*ierr) return;
  if (! null_globalDofSF && !*(void**) globalDofSF) *(void **) globalDofSF = (void *)-2;
  if (! null_localDofSF && !*(void**) localDofSF) *(void **) localDofSF = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexglobalvectorload_ DMPLEXGLOBALVECTORLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexglobalvectorload_ dmplexglobalvectorload
#endif
PETSC_EXTERN void dmplexglobalvectorload_(DM *dm, PetscViewer *viewer, DM *sectiondm, PetscSF *sf, Vec *vec, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexGlobalVectorLoad(*dm, v_viewer, *sectiondm, *sf, *vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlocalvectorload_ DMPLEXLOCALVECTORLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlocalvectorload_ dmplexlocalvectorload
#endif
PETSC_EXTERN void dmplexlocalvectorload_(DM *dm, PetscViewer *viewer, DM *sectiondm, PetscSF *sf, Vec *vec, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexLocalVectorLoad(*dm, v_viewer, *sectiondm, *sf, *vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetsubdomainsection_ DMPLEXGETSUBDOMAINSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetsubdomainsection_ dmplexgetsubdomainsection
#endif
PETSC_EXTERN void dmplexgetsubdomainsection_(DM *dm, PetscSection *subsection, PetscErrorCode *ierr)
{
  PetscBool null_subsection = !*(void**) subsection ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subsection);
  *ierr = DMPlexGetSubdomainSection(*dm, subsection);
  if (*ierr) return;
  if (! null_subsection && !*(void**) subsection) *(void **) subsection = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetchart_ DMPLEXGETCHART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetchart_ dmplexgetchart
#endif
PETSC_EXTERN void dmplexgetchart_(DM *dm, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(pStart);
  CHKFORTRANNULLINTEGER(pEnd);
  *ierr = DMPlexGetChart(*dm, pStart, pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetchart_ DMPLEXSETCHART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetchart_ dmplexsetchart
#endif
PETSC_EXTERN void dmplexsetchart_(DM *dm, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetChart(*dm, *pStart, *pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetconesize_ DMPLEXGETCONESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetconesize_ dmplexgetconesize
#endif
PETSC_EXTERN void dmplexgetconesize_(DM *dm, PetscInt *p, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = DMPlexGetConeSize(*dm, *p, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetconesize_ DMPLEXSETCONESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetconesize_ dmplexsetconesize
#endif
PETSC_EXTERN void dmplexsetconesize_(DM *dm, PetscInt *p, PetscInt *size, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetConeSize(*dm, *p, *size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetconetuple_ DMPLEXGETCONETUPLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetconetuple_ dmplexgetconetuple
#endif
PETSC_EXTERN void dmplexgetconetuple_(DM *dm, IS *p, PetscSection *pConesSection, IS *pCones, PetscErrorCode *ierr)
{
  PetscBool null_pConesSection = !*(void**) pConesSection ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_pCones = !*(void**) pCones ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pConesSection);
  CHKFORTRANNULLOBJECT(pCones);
  *ierr = DMPlexGetConeTuple(*dm, *p, pConesSection, pCones);
  if (*ierr) return;
  if (! null_pConesSection && !*(void**) pConesSection) *(void **) pConesSection = (void *)-2;
  if (! null_pCones && !*(void**) pCones) *(void **) pCones = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetconerecursivevertices_ DMPLEXGETCONERECURSIVEVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetconerecursivevertices_ dmplexgetconerecursivevertices
#endif
PETSC_EXTERN void dmplexgetconerecursivevertices_(DM *dm, IS *points, IS *expandedPoints, PetscErrorCode *ierr)
{
  PetscBool null_expandedPoints = !*(void**) expandedPoints ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(expandedPoints);
  *ierr = DMPlexGetConeRecursiveVertices(*dm, *points, expandedPoints);
  if (*ierr) return;
  if (! null_expandedPoints && !*(void**) expandedPoints) *(void **) expandedPoints = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetcone_ DMPLEXSETCONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetcone_ dmplexsetcone
#endif
PETSC_EXTERN void dmplexsetcone_(DM *dm, PetscInt *p, const PetscInt cone[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cone);
  *ierr = DMPlexSetCone(*dm, *p, cone);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetconeorientation_ DMPLEXSETCONEORIENTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetconeorientation_ dmplexsetconeorientation
#endif
PETSC_EXTERN void dmplexsetconeorientation_(DM *dm, PetscInt *p, const PetscInt coneOrientation[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(coneOrientation);
  *ierr = DMPlexSetConeOrientation(*dm, *p, coneOrientation);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexinsertcone_ DMPLEXINSERTCONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexinsertcone_ dmplexinsertcone
#endif
PETSC_EXTERN void dmplexinsertcone_(DM *dm, PetscInt *p, PetscInt *conePos, PetscInt *conePoint, PetscErrorCode *ierr)
{
  *ierr = DMPlexInsertCone(*dm, *p, *conePos, *conePoint);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexinsertconeorientation_ DMPLEXINSERTCONEORIENTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexinsertconeorientation_ dmplexinsertconeorientation
#endif
PETSC_EXTERN void dmplexinsertconeorientation_(DM *dm, PetscInt *p, PetscInt *conePos, PetscInt *coneOrientation, PetscErrorCode *ierr)
{
  *ierr = DMPlexInsertConeOrientation(*dm, *p, *conePos, *coneOrientation);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetsupportsize_ DMPLEXGETSUPPORTSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetsupportsize_ dmplexgetsupportsize
#endif
PETSC_EXTERN void dmplexgetsupportsize_(DM *dm, PetscInt *p, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = DMPlexGetSupportSize(*dm, *p, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetsupportsize_ DMPLEXSETSUPPORTSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetsupportsize_ dmplexsetsupportsize
#endif
PETSC_EXTERN void dmplexsetsupportsize_(DM *dm, PetscInt *p, PetscInt *size, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetSupportSize(*dm, *p, *size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetsupport_ DMPLEXSETSUPPORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetsupport_ dmplexsetsupport
#endif
PETSC_EXTERN void dmplexsetsupport_(DM *dm, PetscInt *p, const PetscInt support[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(support);
  *ierr = DMPlexSetSupport(*dm, *p, support);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexinsertsupport_ DMPLEXINSERTSUPPORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexinsertsupport_ dmplexinsertsupport
#endif
PETSC_EXTERN void dmplexinsertsupport_(DM *dm, PetscInt *p, PetscInt *supportPos, PetscInt *supportPoint, PetscErrorCode *ierr)
{
  *ierr = DMPlexInsertSupport(*dm, *p, *supportPos, *supportPoint);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetmaxsizes_ DMPLEXGETMAXSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetmaxsizes_ dmplexgetmaxsizes
#endif
PETSC_EXTERN void dmplexgetmaxsizes_(DM *dm, PetscInt *maxConeSize, PetscInt *maxSupportSize, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(maxConeSize);
  CHKFORTRANNULLINTEGER(maxSupportSize);
  *ierr = DMPlexGetMaxSizes(*dm, maxConeSize, maxSupportSize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsymmetrize_ DMPLEXSYMMETRIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsymmetrize_ dmplexsymmetrize
#endif
PETSC_EXTERN void dmplexsymmetrize_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexSymmetrize(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexstratify_ DMPLEXSTRATIFY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexstratify_ dmplexstratify
#endif
PETSC_EXTERN void dmplexstratify_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexStratify(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputecelltypes_ DMPLEXCOMPUTECELLTYPES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputecelltypes_ dmplexcomputecelltypes
#endif
PETSC_EXTERN void dmplexcomputecelltypes_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexComputeCellTypes(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexequal_ DMPLEXEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexequal_ dmplexequal
#endif
PETSC_EXTERN void dmplexequal_(DM *dmA, DM *dmB, PetscBool *equal, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(equal);
  *ierr = DMPlexEqual(*dmA, *dmB, equal);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetnumfacevertices_ DMPLEXGETNUMFACEVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetnumfacevertices_ dmplexgetnumfacevertices
#endif
PETSC_EXTERN void dmplexgetnumfacevertices_(DM *dm, PetscInt *cellDim, PetscInt *numCorners, PetscInt *numFaceVertices, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numFaceVertices);
  *ierr = DMPlexGetNumFaceVertices(*dm, *cellDim, *numCorners, numFaceVertices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetdepthlabel_ DMPLEXGETDEPTHLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetdepthlabel_ dmplexgetdepthlabel
#endif
PETSC_EXTERN void dmplexgetdepthlabel_(DM *dm, DMLabel *depthLabel, PetscErrorCode *ierr)
{
  PetscBool null_depthLabel = !*(void**) depthLabel ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(depthLabel);
  *ierr = DMPlexGetDepthLabel(*dm, depthLabel);
  if (*ierr) return;
  if (! null_depthLabel && !*(void**) depthLabel) *(void **) depthLabel = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetdepth_ DMPLEXGETDEPTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetdepth_ dmplexgetdepth
#endif
PETSC_EXTERN void dmplexgetdepth_(DM *dm, PetscInt *depth, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(depth);
  *ierr = DMPlexGetDepth(*dm, depth);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetdepthstratum_ DMPLEXGETDEPTHSTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetdepthstratum_ dmplexgetdepthstratum
#endif
PETSC_EXTERN void dmplexgetdepthstratum_(DM *dm, PetscInt *depth, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = DMPlexGetDepthStratum(*dm, *depth, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetheightstratum_ DMPLEXGETHEIGHTSTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetheightstratum_ dmplexgetheightstratum
#endif
PETSC_EXTERN void dmplexgetheightstratum_(DM *dm, PetscInt *height, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = DMPlexGetHeightStratum(*dm, *height, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetpointdepth_ DMPLEXGETPOINTDEPTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetpointdepth_ dmplexgetpointdepth
#endif
PETSC_EXTERN void dmplexgetpointdepth_(DM *dm, PetscInt *point, PetscInt *depth, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(depth);
  *ierr = DMPlexGetPointDepth(*dm, *point, depth);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetpointheight_ DMPLEXGETPOINTHEIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetpointheight_ dmplexgetpointheight
#endif
PETSC_EXTERN void dmplexgetpointheight_(DM *dm, PetscInt *point, PetscInt *height, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(height);
  *ierr = DMPlexGetPointHeight(*dm, *point, height);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetcelltypelabel_ DMPLEXGETCELLTYPELABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetcelltypelabel_ dmplexgetcelltypelabel
#endif
PETSC_EXTERN void dmplexgetcelltypelabel_(DM *dm, DMLabel *celltypeLabel, PetscErrorCode *ierr)
{
  PetscBool null_celltypeLabel = !*(void**) celltypeLabel ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(celltypeLabel);
  *ierr = DMPlexGetCellTypeLabel(*dm, celltypeLabel);
  if (*ierr) return;
  if (! null_celltypeLabel && !*(void**) celltypeLabel) *(void **) celltypeLabel = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetcelltype_ DMPLEXGETCELLTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetcelltype_ dmplexgetcelltype
#endif
PETSC_EXTERN void dmplexgetcelltype_(DM *dm, PetscInt *cell, DMPolytopeType *celltype, PetscErrorCode *ierr)
{
  *ierr = DMPlexGetCellType(*dm, *cell, celltype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetcelltype_ DMPLEXSETCELLTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetcelltype_ dmplexsetcelltype
#endif
PETSC_EXTERN void dmplexsetcelltype_(DM *dm, PetscInt *cell, DMPolytopeType *celltype, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetCellType(*dm, *cell, *celltype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetconesection_ DMPLEXGETCONESECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetconesection_ dmplexgetconesection
#endif
PETSC_EXTERN void dmplexgetconesection_(DM *dm, PetscSection *section, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(section);
  *ierr = DMPlexGetConeSection(*dm, section);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetsupportsection_ DMPLEXGETSUPPORTSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetsupportsection_ dmplexgetsupportsection
#endif
PETSC_EXTERN void dmplexgetsupportsection_(DM *dm, PetscSection *section, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(section);
  *ierr = DMPlexGetSupportSection(*dm, section);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetclosurepermutationtensor_ DMPLEXSETCLOSUREPERMUTATIONTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetclosurepermutationtensor_ dmplexsetclosurepermutationtensor
#endif
PETSC_EXTERN void dmplexsetclosurepermutationtensor_(DM *dm, PetscInt *point, PetscSection *section, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetClosurePermutationTensor(*dm, *point, *section);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexvecsetclosure_ DMPLEXVECSETCLOSURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexvecsetclosure_ dmplexvecsetclosure
#endif
PETSC_EXTERN void dmplexvecsetclosure_(DM *dm, PetscSection *section, Vec *v, PetscInt *point, const PetscScalar values[], InsertMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(values);
  *ierr = DMPlexVecSetClosure(*dm, *section, *v, *point, values, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmatsetclosure_ DMPLEXMATSETCLOSURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmatsetclosure_ dmplexmatsetclosure
#endif
PETSC_EXTERN void dmplexmatsetclosure_(DM *dm, PetscSection *section, PetscSection *globalSection, Mat *A, PetscInt *point, const PetscScalar values[], InsertMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(values);
  *ierr = DMPlexMatSetClosure(*dm, *section, *globalSection, *A, *point, values, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmatsetclosuregeneral_ DMPLEXMATSETCLOSUREGENERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmatsetclosuregeneral_ dmplexmatsetclosuregeneral
#endif
PETSC_EXTERN void dmplexmatsetclosuregeneral_(DM *dmRow, PetscSection *sectionRow, PetscSection *globalSectionRow, PetscBool *useRowPerm, DM *dmCol, PetscSection *sectionCol, PetscSection *globalSectionCol, PetscBool *useColPerm, Mat *A, PetscInt *point, const PetscScalar values[], InsertMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(values);
  *ierr = DMPlexMatSetClosureGeneral(*dmRow, *sectionRow, *globalSectionRow, *useRowPerm ? PETSC_TRUE : PETSC_FALSE, *dmCol, *sectionCol, *globalSectionCol, *useColPerm ? PETSC_TRUE : PETSC_FALSE, *A, *point, values, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmatsetclosurerefined_ DMPLEXMATSETCLOSUREREFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmatsetclosurerefined_ dmplexmatsetclosurerefined
#endif
PETSC_EXTERN void dmplexmatsetclosurerefined_(DM *dmf, PetscSection *fsection, PetscSection *globalFSection, DM *dmc, PetscSection *csection, PetscSection *globalCSection, Mat *A, PetscInt *point, const PetscScalar values[], InsertMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(values);
  *ierr = DMPlexMatSetClosureRefined(*dmf, *fsection, *globalFSection, *dmc, *csection, *globalCSection, *A, *point, values, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmatgetclosureindicesrefined_ DMPLEXMATGETCLOSUREINDICESREFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmatgetclosureindicesrefined_ dmplexmatgetclosureindicesrefined
#endif
PETSC_EXTERN void dmplexmatgetclosureindicesrefined_(DM *dmf, PetscSection *fsection, PetscSection *globalFSection, DM *dmc, PetscSection *csection, PetscSection *globalCSection, PetscInt *point, PetscInt cindices[], PetscInt findices[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cindices);
  CHKFORTRANNULLINTEGER(findices);
  *ierr = DMPlexMatGetClosureIndicesRefined(*dmf, *fsection, *globalFSection, *dmc, *csection, *globalCSection, *point, cindices, findices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetvtkcellheight_ DMPLEXGETVTKCELLHEIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetvtkcellheight_ dmplexgetvtkcellheight
#endif
PETSC_EXTERN void dmplexgetvtkcellheight_(DM *dm, PetscInt *cellHeight, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cellHeight);
  *ierr = DMPlexGetVTKCellHeight(*dm, cellHeight);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetvtkcellheight_ DMPLEXSETVTKCELLHEIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetvtkcellheight_ dmplexsetvtkcellheight
#endif
PETSC_EXTERN void dmplexsetvtkcellheight_(DM *dm, PetscInt *cellHeight, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetVTKCellHeight(*dm, *cellHeight);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetcelltypestratum_ DMPLEXGETCELLTYPESTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetcelltypestratum_ dmplexgetcelltypestratum
#endif
PETSC_EXTERN void dmplexgetcelltypestratum_(DM *dm, DMPolytopeType *ct, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = DMPlexGetCellTypeStratum(*dm, *ct, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetdepthstratumglobalsize_ DMPLEXGETDEPTHSTRATUMGLOBALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetdepthstratumglobalsize_ dmplexgetdepthstratumglobalsize
#endif
PETSC_EXTERN void dmplexgetdepthstratumglobalsize_(DM *dm, PetscInt *depth, PetscInt *gsize, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(gsize);
  *ierr = DMPlexGetDepthStratumGlobalSize(*dm, *depth, gsize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatecellnumbering_ DMPLEXCREATECELLNUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatecellnumbering_ dmplexcreatecellnumbering
#endif
PETSC_EXTERN void dmplexcreatecellnumbering_(DM *dm, PetscBool *includeAll, IS *globalCellNumbers, PetscErrorCode *ierr)
{
  PetscBool null_globalCellNumbers = !*(void**) globalCellNumbers ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(globalCellNumbers);
  *ierr = DMPlexCreateCellNumbering(*dm, *includeAll ? PETSC_TRUE : PETSC_FALSE, globalCellNumbers);
  if (*ierr) return;
  if (! null_globalCellNumbers && !*(void**) globalCellNumbers) *(void **) globalCellNumbers = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetcellnumbering_ DMPLEXGETCELLNUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetcellnumbering_ dmplexgetcellnumbering
#endif
PETSC_EXTERN void dmplexgetcellnumbering_(DM *dm, IS *globalCellNumbers, PetscErrorCode *ierr)
{
  PetscBool null_globalCellNumbers = !*(void**) globalCellNumbers ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(globalCellNumbers);
  *ierr = DMPlexGetCellNumbering(*dm, globalCellNumbers);
  if (*ierr) return;
  if (! null_globalCellNumbers && !*(void**) globalCellNumbers) *(void **) globalCellNumbers = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetvertexnumbering_ DMPLEXGETVERTEXNUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetvertexnumbering_ dmplexgetvertexnumbering
#endif
PETSC_EXTERN void dmplexgetvertexnumbering_(DM *dm, IS *globalVertexNumbers, PetscErrorCode *ierr)
{
  PetscBool null_globalVertexNumbers = !*(void**) globalVertexNumbers ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(globalVertexNumbers);
  *ierr = DMPlexGetVertexNumbering(*dm, globalVertexNumbers);
  if (*ierr) return;
  if (! null_globalVertexNumbers && !*(void**) globalVertexNumbers) *(void **) globalVertexNumbers = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatepointnumbering_ DMPLEXCREATEPOINTNUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatepointnumbering_ dmplexcreatepointnumbering
#endif
PETSC_EXTERN void dmplexcreatepointnumbering_(DM *dm, IS *globalPointNumbers, PetscErrorCode *ierr)
{
  PetscBool null_globalPointNumbers = !*(void**) globalPointNumbers ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(globalPointNumbers);
  *ierr = DMPlexCreatePointNumbering(*dm, globalPointNumbers);
  if (*ierr) return;
  if (! null_globalPointNumbers && !*(void**) globalPointNumbers) *(void **) globalPointNumbers = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateedgenumbering_ DMPLEXCREATEEDGENUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateedgenumbering_ dmplexcreateedgenumbering
#endif
PETSC_EXTERN void dmplexcreateedgenumbering_(DM *dm, IS *globalEdgeNumbers, PetscErrorCode *ierr)
{
  PetscBool null_globalEdgeNumbers = !*(void**) globalEdgeNumbers ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(globalEdgeNumbers);
  *ierr = DMPlexCreateEdgeNumbering(*dm, globalEdgeNumbers);
  if (*ierr) return;
  if (! null_globalEdgeNumbers && !*(void**) globalEdgeNumbers) *(void **) globalEdgeNumbers = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreaterankfield_ DMPLEXCREATERANKFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreaterankfield_ dmplexcreaterankfield
#endif
PETSC_EXTERN void dmplexcreaterankfield_(DM *dm, Vec *ranks, PetscErrorCode *ierr)
{
  PetscBool null_ranks = !*(void**) ranks ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ranks);
  *ierr = DMPlexCreateRankField(*dm, ranks);
  if (*ierr) return;
  if (! null_ranks && !*(void**) ranks) *(void **) ranks = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatelabelfield_ DMPLEXCREATELABELFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatelabelfield_ dmplexcreatelabelfield
#endif
PETSC_EXTERN void dmplexcreatelabelfield_(DM *dm, DMLabel *label, Vec *val, PetscErrorCode *ierr)
{
  PetscBool null_val = !*(void**) val ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(val);
  *ierr = DMPlexCreateLabelField(*dm, *label, val);
  if (*ierr) return;
  if (! null_val && !*(void**) val) *(void **) val = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexchecksymmetry_ DMPLEXCHECKSYMMETRY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexchecksymmetry_ dmplexchecksymmetry
#endif
PETSC_EXTERN void dmplexchecksymmetry_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexCheckSymmetry(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcheckskeleton_ DMPLEXCHECKSKELETON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcheckskeleton_ dmplexcheckskeleton
#endif
PETSC_EXTERN void dmplexcheckskeleton_(DM *dm, PetscInt *cellHeight, PetscErrorCode *ierr)
{
  *ierr = DMPlexCheckSkeleton(*dm, *cellHeight);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcheckfaces_ DMPLEXCHECKFACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcheckfaces_ dmplexcheckfaces
#endif
PETSC_EXTERN void dmplexcheckfaces_(DM *dm, PetscInt *cellHeight, PetscErrorCode *ierr)
{
  *ierr = DMPlexCheckFaces(*dm, *cellHeight);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcheckgeometry_ DMPLEXCHECKGEOMETRY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcheckgeometry_ dmplexcheckgeometry
#endif
PETSC_EXTERN void dmplexcheckgeometry_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexCheckGeometry(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcheckpointsf_ DMPLEXCHECKPOINTSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcheckpointsf_ dmplexcheckpointsf
#endif
PETSC_EXTERN void dmplexcheckpointsf_(DM *dm, PetscSF *pointSF, PetscBool *allowExtraRoots, PetscErrorCode *ierr)
{
  *ierr = DMPlexCheckPointSF(*dm, *pointSF, *allowExtraRoots ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcheckorphanvertices_ DMPLEXCHECKORPHANVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcheckorphanvertices_ dmplexcheckorphanvertices
#endif
PETSC_EXTERN void dmplexcheckorphanvertices_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexCheckOrphanVertices(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcheck_ DMPLEXCHECK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcheck_ dmplexcheck
#endif
PETSC_EXTERN void dmplexcheck_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexCheck(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcheckcellshape_ DMPLEXCHECKCELLSHAPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcheckcellshape_ dmplexcheckcellshape
#endif
PETSC_EXTERN void dmplexcheckcellshape_(DM *dm, PetscBool *output, PetscReal *condLimit, PetscErrorCode *ierr)
{
  *ierr = DMPlexCheckCellShape(*dm, *output ? PETSC_TRUE : PETSC_FALSE, *condLimit);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeorthogonalquality_ DMPLEXCOMPUTEORTHOGONALQUALITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeorthogonalquality_ dmplexcomputeorthogonalquality
#endif
PETSC_EXTERN void dmplexcomputeorthogonalquality_(DM *dm, PetscFV *fv, PetscReal *atol, Vec *OrthQual, DMLabel *OrthQualLabel, PetscErrorCode *ierr)
{
  PetscBool null_OrthQual = !*(void**) OrthQual ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_OrthQualLabel = !*(void**) OrthQualLabel ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(OrthQual);
  CHKFORTRANNULLOBJECT(OrthQualLabel);
  *ierr = DMPlexComputeOrthogonalQuality(*dm, *fv, *atol, OrthQual, OrthQualLabel);
  if (*ierr) return;
  if (! null_OrthQual && !*(void**) OrthQual) *(void **) OrthQual = (void *)-2;
  if (! null_OrthQualLabel && !*(void**) OrthQualLabel) *(void **) OrthQualLabel = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetregularrefinement_ DMPLEXGETREGULARREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetregularrefinement_ dmplexgetregularrefinement
#endif
PETSC_EXTERN void dmplexgetregularrefinement_(DM *dm, PetscBool *regular, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(regular);
  *ierr = DMPlexGetRegularRefinement(*dm, regular);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetregularrefinement_ DMPLEXSETREGULARREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetregularrefinement_ dmplexsetregularrefinement
#endif
PETSC_EXTERN void dmplexsetregularrefinement_(DM *dm, PetscBool *regular, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetRegularRefinement(*dm, *regular ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetanchors_ DMPLEXGETANCHORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetanchors_ dmplexgetanchors
#endif
PETSC_EXTERN void dmplexgetanchors_(DM *dm, PetscSection *anchorSection, IS *anchorIS, PetscErrorCode *ierr)
{
  PetscBool null_anchorSection = !*(void**) anchorSection ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_anchorIS = !*(void**) anchorIS ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(anchorSection);
  CHKFORTRANNULLOBJECT(anchorIS);
  *ierr = DMPlexGetAnchors(*dm, anchorSection, anchorIS);
  if (*ierr) return;
  if (! null_anchorSection && !*(void**) anchorSection) *(void **) anchorSection = (void *)-2;
  if (! null_anchorIS && !*(void**) anchorIS) *(void **) anchorIS = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetanchors_ DMPLEXSETANCHORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetanchors_ dmplexsetanchors
#endif
PETSC_EXTERN void dmplexsetanchors_(DM *dm, PetscSection *anchorSection, IS *anchorIS, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetAnchors(*dm, *anchorSection, *anchorIS);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmonitorthroughput_ DMPLEXMONITORTHROUGHPUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmonitorthroughput_ dmplexmonitorthroughput
#endif
PETSC_EXTERN void dmplexmonitorthroughput_(DM *dm, void *unused, PetscErrorCode *ierr)
{
  *ierr = DMPlexMonitorThroughput(*dm, unused);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatecoloring_ DMPLEXCREATECOLORING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatecoloring_ dmplexcreatecoloring
#endif
PETSC_EXTERN void dmplexcreatecoloring_(DM *dm, PetscInt *depth, PetscInt *distance, ISColoring *coloring, PetscErrorCode *ierr)
{
  PetscBool null_coloring = !*(void**) coloring ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(coloring);
  *ierr = DMPlexCreateColoring(*dm, *depth, *distance, coloring);
  if (*ierr) return;
  if (! null_coloring && !*(void**) coloring) *(void **) coloring = (void *)-2;
}
