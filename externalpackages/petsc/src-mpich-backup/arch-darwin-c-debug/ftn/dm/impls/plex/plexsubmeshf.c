#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmarkboundaryfaces_ DMPLEXMARKBOUNDARYFACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmarkboundaryfaces_ dmplexmarkboundaryfaces
#endif
PETSC_EXTERN void dmplexmarkboundaryfaces_(DM *dm, PetscInt *val, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMPlexMarkBoundaryFaces(*dm, *val, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlabelcomplete_ DMPLEXLABELCOMPLETE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlabelcomplete_ dmplexlabelcomplete
#endif
PETSC_EXTERN void dmplexlabelcomplete_(DM *dm, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMPlexLabelComplete(*dm, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlabeladdcells_ DMPLEXLABELADDCELLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlabeladdcells_ dmplexlabeladdcells
#endif
PETSC_EXTERN void dmplexlabeladdcells_(DM *dm, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMPlexLabelAddCells(*dm, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlabeladdfacecells_ DMPLEXLABELADDFACECELLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlabeladdfacecells_ dmplexlabeladdfacecells
#endif
PETSC_EXTERN void dmplexlabeladdfacecells_(DM *dm, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMPlexLabelAddFaceCells(*dm, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlabelclearcells_ DMPLEXLABELCLEARCELLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlabelclearcells_ dmplexlabelclearcells
#endif
PETSC_EXTERN void dmplexlabelclearcells_(DM *dm, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMPlexLabelClearCells(*dm, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexconstructghostcells_ DMPLEXCONSTRUCTGHOSTCELLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexconstructghostcells_ dmplexconstructghostcells
#endif
PETSC_EXTERN void dmplexconstructghostcells_(DM *dm, char labelName[], PetscInt *numGhostCells, DM *dmGhosted, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_labelName)
{
  PetscBool null_dmGhosted = !*(void**) dmGhosted ? PETSC_TRUE : PETSC_FALSE;
  char* c_labelName;
  FIXCHAR(labelName, l_labelName, c_labelName);
  CHKFORTRANNULLINTEGER(numGhostCells);
  CHKFORTRANNULLOBJECT(dmGhosted);
  *ierr = DMPlexConstructGhostCells(*dm, c_labelName, numGhostCells, dmGhosted);
  if (*ierr) return;
  FREECHAR(labelName, c_labelName);
  if (! null_dmGhosted && !*(void**) dmGhosted) *(void **) dmGhosted = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexconstructcohesivecells_ DMPLEXCONSTRUCTCOHESIVECELLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexconstructcohesivecells_ dmplexconstructcohesivecells
#endif
PETSC_EXTERN void dmplexconstructcohesivecells_(DM *dm, DMLabel *label, DMLabel *splitLabel, DM *dmSplit, PetscErrorCode *ierr)
{
  PetscBool null_dmSplit = !*(void**) dmSplit ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmSplit);
  *ierr = DMPlexConstructCohesiveCells(*dm, *label, *splitLabel, dmSplit);
  if (*ierr) return;
  if (! null_dmSplit && !*(void**) dmSplit) *(void **) dmSplit = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexlabelcohesivecomplete_ DMPLEXLABELCOHESIVECOMPLETE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexlabelcohesivecomplete_ dmplexlabelcohesivecomplete
#endif
PETSC_EXTERN void dmplexlabelcohesivecomplete_(DM *dm, DMLabel *label, DMLabel *blabel, PetscInt *bvalue, PetscBool *flip, PetscBool *split, DM *subdm, PetscErrorCode *ierr)
{
  *ierr = DMPlexLabelCohesiveComplete(*dm, *label, *blabel, *bvalue, *flip ? PETSC_TRUE : PETSC_FALSE, *split ? PETSC_TRUE : PETSC_FALSE, *subdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatehybridmesh_ DMPLEXCREATEHYBRIDMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatehybridmesh_ dmplexcreatehybridmesh
#endif
PETSC_EXTERN void dmplexcreatehybridmesh_(DM *dm, DMLabel *label, DMLabel *bdlabel, PetscInt *bdvalue, DMLabel *hybridLabel, DMLabel *splitLabel, DM *dmInterface, DM *dmHybrid, PetscErrorCode *ierr)
{
  PetscBool null_hybridLabel = !*(void**) hybridLabel ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_splitLabel = !*(void**) splitLabel ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_dmInterface = !*(void**) dmInterface ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_dmHybrid = !*(void**) dmHybrid ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(hybridLabel);
  CHKFORTRANNULLOBJECT(splitLabel);
  CHKFORTRANNULLOBJECT(dmInterface);
  CHKFORTRANNULLOBJECT(dmHybrid);
  *ierr = DMPlexCreateHybridMesh(*dm, *label, *bdlabel, *bdvalue, hybridLabel, splitLabel, dmInterface, dmHybrid);
  if (*ierr) return;
  if (! null_hybridLabel && !*(void**) hybridLabel) *(void **) hybridLabel = (void *)-2;
  if (! null_splitLabel && !*(void**) splitLabel) *(void **) splitLabel = (void *)-2;
  if (! null_dmInterface && !*(void**) dmInterface) *(void **) dmInterface = (void *)-2;
  if (! null_dmHybrid && !*(void**) dmHybrid) *(void **) dmHybrid = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetorientedface_ DMPLEXGETORIENTEDFACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetorientedface_ dmplexgetorientedface
#endif
PETSC_EXTERN void dmplexgetorientedface_(DM *dm, PetscInt *cell, PetscInt *faceSize, const PetscInt face[], PetscInt *numCorners, PetscInt indices[], PetscInt origVertices[], PetscInt faceVertices[], PetscBool *posOriented, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(face);
  CHKFORTRANNULLINTEGER(indices);
  CHKFORTRANNULLINTEGER(origVertices);
  CHKFORTRANNULLINTEGER(faceVertices);
  CHKFORTRANNULLBOOL(posOriented);
  *ierr = DMPlexGetOrientedFace(*dm, *cell, *faceSize, face, *numCorners, indices, origVertices, faceVertices, posOriented);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatesubmesh_ DMPLEXCREATESUBMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatesubmesh_ dmplexcreatesubmesh
#endif
PETSC_EXTERN void dmplexcreatesubmesh_(DM *dm, DMLabel *vertexLabel, PetscInt *value, PetscBool *markedFaces, DM *subdm, PetscErrorCode *ierr)
{
  PetscBool null_subdm = !*(void**) subdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subdm);
  *ierr = DMPlexCreateSubmesh(*dm, *vertexLabel, *value, *markedFaces ? PETSC_TRUE : PETSC_FALSE, subdm);
  if (*ierr) return;
  if (! null_subdm && !*(void**) subdm) *(void **) subdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatecohesivesubmesh_ DMPLEXCREATECOHESIVESUBMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatecohesivesubmesh_ dmplexcreatecohesivesubmesh
#endif
PETSC_EXTERN void dmplexcreatecohesivesubmesh_(DM *dm, PetscBool *hasLagrange, char label[], PetscInt *value, DM *subdm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_label)
{
  PetscBool null_subdm = !*(void**) subdm ? PETSC_TRUE : PETSC_FALSE;
  char* c_label;
  FIXCHAR(label, l_label, c_label);
  CHKFORTRANNULLOBJECT(subdm);
  *ierr = DMPlexCreateCohesiveSubmesh(*dm, *hasLagrange ? PETSC_TRUE : PETSC_FALSE, c_label, *value, subdm);
  if (*ierr) return;
  FREECHAR(label, c_label);
  if (! null_subdm && !*(void**) subdm) *(void **) subdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexreordercohesivesupports_ DMPLEXREORDERCOHESIVESUPPORTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexreordercohesivesupports_ dmplexreordercohesivesupports
#endif
PETSC_EXTERN void dmplexreordercohesivesupports_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexReorderCohesiveSupports(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexfilter_ DMPLEXFILTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexfilter_ dmplexfilter
#endif
PETSC_EXTERN void dmplexfilter_(DM *dm, DMLabel *cellLabel, PetscInt *value, PetscBool *ignoreLabelHalo, PetscBool *sanitizeSubmesh, MPI_Fint *comm, PetscSF *ownershipTransferSF, DM *subdm, PetscErrorCode *ierr)
{
  PetscBool null_ownershipTransferSF = !*(void**) ownershipTransferSF ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_subdm = !*(void**) subdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ownershipTransferSF);
  CHKFORTRANNULLOBJECT(subdm);
  *ierr = DMPlexFilter(*dm, *cellLabel, *value, *ignoreLabelHalo ? PETSC_TRUE : PETSC_FALSE, *sanitizeSubmesh ? PETSC_TRUE : PETSC_FALSE, MPI_Comm_f2c(*(comm)), ownershipTransferSF, subdm);
  if (*ierr) return;
  if (! null_ownershipTransferSF && !*(void**) ownershipTransferSF) *(void **) ownershipTransferSF = (void *)-2;
  if (! null_subdm && !*(void**) subdm) *(void **) subdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetsubpointmap_ DMPLEXGETSUBPOINTMAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetsubpointmap_ dmplexgetsubpointmap
#endif
PETSC_EXTERN void dmplexgetsubpointmap_(DM *dm, DMLabel *subpointMap, PetscErrorCode *ierr)
{
  PetscBool null_subpointMap = !*(void**) subpointMap ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subpointMap);
  *ierr = DMPlexGetSubpointMap(*dm, subpointMap);
  if (*ierr) return;
  if (! null_subpointMap && !*(void**) subpointMap) *(void **) subpointMap = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetsubpointmap_ DMPLEXSETSUBPOINTMAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetsubpointmap_ dmplexsetsubpointmap
#endif
PETSC_EXTERN void dmplexsetsubpointmap_(DM *dm, DMLabel *subpointMap, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetSubpointMap(*dm, *subpointMap);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetsubpointis_ DMPLEXGETSUBPOINTIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetsubpointis_ dmplexgetsubpointis
#endif
PETSC_EXTERN void dmplexgetsubpointis_(DM *dm, IS *subpointIS, PetscErrorCode *ierr)
{
  PetscBool null_subpointIS = !*(void**) subpointIS ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subpointIS);
  *ierr = DMPlexGetSubpointIS(*dm, subpointIS);
  if (*ierr) return;
  if (! null_subpointIS && !*(void**) subpointIS) *(void **) subpointIS = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetenclosurerelation_ DMGETENCLOSURERELATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetenclosurerelation_ dmgetenclosurerelation
#endif
PETSC_EXTERN void dmgetenclosurerelation_(DM *dmA, DM *dmB, DMEnclosureType *rel, PetscErrorCode *ierr)
{
  *ierr = DMGetEnclosureRelation(*dmA, *dmB, rel);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetenclosurepoint_ DMGETENCLOSUREPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetenclosurepoint_ dmgetenclosurepoint
#endif
PETSC_EXTERN void dmgetenclosurepoint_(DM *dmA, DM *dmB, DMEnclosureType *etype, PetscInt *pB, PetscInt *pA, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(pA);
  *ierr = DMGetEnclosurePoint(*dmA, *dmB, *etype, *pB, pA);
  if (*ierr) return;
}
