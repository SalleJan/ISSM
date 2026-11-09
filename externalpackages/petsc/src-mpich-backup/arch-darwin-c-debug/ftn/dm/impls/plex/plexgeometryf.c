#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgridhashcreate_ PETSCGRIDHASHCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgridhashcreate_ petscgridhashcreate
#endif
PETSC_EXTERN void petscgridhashcreate_(MPI_Fint *comm, PetscInt *dim, const PetscScalar point[], PetscGridHash *box, PetscErrorCode *ierr)
{
  PetscBool null_box = !*(void**) box ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(box);
  CHKFORTRANNULLSCALAR(point);
  CHKFORTRANNULLOBJECT(box);
  *ierr = PetscGridHashCreate(MPI_Comm_f2c(*(comm)), *dim, point, box);
  if (*ierr) return;
  if (! null_box && !*(void**) box) *(void **) box = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgridhashenlarge_ PETSCGRIDHASHENLARGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgridhashenlarge_ petscgridhashenlarge
#endif
PETSC_EXTERN void petscgridhashenlarge_(PetscGridHash *box, const PetscScalar point[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(point);
  *ierr = PetscGridHashEnlarge(*box, point);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgridhashsetgrid_ PETSCGRIDHASHSETGRID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgridhashsetgrid_ petscgridhashsetgrid
#endif
PETSC_EXTERN void petscgridhashsetgrid_(PetscGridHash *box, const PetscInt n[], const PetscReal h[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLREAL(h);
  *ierr = PetscGridHashSetGrid(*box, n, h);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgridhashgetenclosingbox_ PETSCGRIDHASHGETENCLOSINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgridhashgetenclosingbox_ petscgridhashgetenclosingbox
#endif
PETSC_EXTERN void petscgridhashgetenclosingbox_(PetscGridHash *box, PetscInt *numPoints, const PetscScalar points[], PetscInt dboxes[], PetscInt boxes[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(points);
  CHKFORTRANNULLINTEGER(dboxes);
  CHKFORTRANNULLINTEGER(boxes);
  *ierr = PetscGridHashGetEnclosingBox(*box, *numPoints, points, dboxes, boxes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgridhashdestroy_ PETSCGRIDHASHDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgridhashdestroy_ petscgridhashdestroy
#endif
PETSC_EXTERN void petscgridhashdestroy_(PetscGridHash *box, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(box);
  PetscBool null_box = !*(void**) box ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(box);
  *ierr = PetscGridHashDestroy(box);
  if (*ierr) return;
  if (! null_box && !*(void**) box) *(void **) box = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexfindvertices_ DMPLEXFINDVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexfindvertices_ dmplexfindvertices
#endif
PETSC_EXTERN void dmplexfindvertices_(DM *dm, Vec *coordinates, PetscReal *eps, IS *points, PetscErrorCode *ierr)
{
  PetscBool null_points = !*(void**) points ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(points);
  *ierr = DMPlexFindVertices(*dm, *coordinates, *eps, points);
  if (*ierr) return;
  if (! null_points && !*(void**) points) *(void **) points = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeprojection2dto1d_ DMPLEXCOMPUTEPROJECTION2DTO1D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeprojection2dto1d_ dmplexcomputeprojection2dto1d
#endif
PETSC_EXTERN void dmplexcomputeprojection2dto1d_(PetscScalar coords[], PetscReal R[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coords);
  CHKFORTRANNULLREAL(R);
  *ierr = DMPlexComputeProjection2Dto1D(coords, R);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeprojection3dto1d_ DMPLEXCOMPUTEPROJECTION3DTO1D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeprojection3dto1d_ dmplexcomputeprojection3dto1d
#endif
PETSC_EXTERN void dmplexcomputeprojection3dto1d_(PetscScalar coords[], PetscReal R[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coords);
  CHKFORTRANNULLREAL(R);
  *ierr = DMPlexComputeProjection3Dto1D(coords, R);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeprojection3dto2d_ DMPLEXCOMPUTEPROJECTION3DTO2D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeprojection3dto2d_ dmplexcomputeprojection3dto2d
#endif
PETSC_EXTERN void dmplexcomputeprojection3dto2d_(PetscInt *coordSize, PetscScalar coords[], PetscReal R[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coords);
  CHKFORTRANNULLREAL(R);
  *ierr = DMPlexComputeProjection3Dto2D(*coordSize, coords, R);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputecellgeometryaffinefem_ DMPLEXCOMPUTECELLGEOMETRYAFFINEFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputecellgeometryaffinefem_ dmplexcomputecellgeometryaffinefem
#endif
PETSC_EXTERN void dmplexcomputecellgeometryaffinefem_(DM *dm, PetscInt *cell, PetscReal v0[], PetscReal J[], PetscReal invJ[], PetscReal *detJ, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(v0);
  CHKFORTRANNULLREAL(J);
  CHKFORTRANNULLREAL(invJ);
  CHKFORTRANNULLREAL(detJ);
  *ierr = DMPlexComputeCellGeometryAffineFEM(*dm, *cell, v0, J, invJ, detJ);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputecellgeometryfem_ DMPLEXCOMPUTECELLGEOMETRYFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputecellgeometryfem_ dmplexcomputecellgeometryfem
#endif
PETSC_EXTERN void dmplexcomputecellgeometryfem_(DM *dm, PetscInt *cell, PetscQuadrature *quad, PetscReal v[], PetscReal J[], PetscReal invJ[], PetscReal detJ[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(v);
  CHKFORTRANNULLREAL(J);
  CHKFORTRANNULLREAL(invJ);
  CHKFORTRANNULLREAL(detJ);
  *ierr = DMPlexComputeCellGeometryFEM(*dm, *cell, *quad, v, J, invJ, detJ);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputecellgeometryfvm_ DMPLEXCOMPUTECELLGEOMETRYFVM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputecellgeometryfvm_ dmplexcomputecellgeometryfvm
#endif
PETSC_EXTERN void dmplexcomputecellgeometryfvm_(DM *dm, PetscInt *cell, PetscReal *vol, PetscReal centroid[], PetscReal normal[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(vol);
  CHKFORTRANNULLREAL(centroid);
  CHKFORTRANNULLREAL(normal);
  *ierr = DMPlexComputeCellGeometryFVM(*dm, *cell, vol, centroid, normal);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputegeometryfvm_ DMPLEXCOMPUTEGEOMETRYFVM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputegeometryfvm_ dmplexcomputegeometryfvm
#endif
PETSC_EXTERN void dmplexcomputegeometryfvm_(DM *dm, Vec *cellgeom, Vec *facegeom, PetscErrorCode *ierr)
{
  PetscBool null_cellgeom = !*(void**) cellgeom ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_facegeom = !*(void**) facegeom ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(cellgeom);
  CHKFORTRANNULLOBJECT(facegeom);
  *ierr = DMPlexComputeGeometryFVM(*dm, cellgeom, facegeom);
  if (*ierr) return;
  if (! null_cellgeom && !*(void**) cellgeom) *(void **) cellgeom = (void *)-2;
  if (! null_facegeom && !*(void**) facegeom) *(void **) facegeom = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetminradius_ DMPLEXGETMINRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetminradius_ dmplexgetminradius
#endif
PETSC_EXTERN void dmplexgetminradius_(DM *dm, PetscReal *minradius, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(minradius);
  *ierr = DMPlexGetMinRadius(*dm, minradius);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetminradius_ DMPLEXSETMINRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetminradius_ dmplexsetminradius
#endif
PETSC_EXTERN void dmplexsetminradius_(DM *dm, PetscReal *minradius, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetMinRadius(*dm, *minradius);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputegradientfvm_ DMPLEXCOMPUTEGRADIENTFVM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputegradientfvm_ dmplexcomputegradientfvm
#endif
PETSC_EXTERN void dmplexcomputegradientfvm_(DM *dm, PetscFV *fvm, Vec *faceGeometry, Vec *cellGeometry, DM *dmGrad, PetscErrorCode *ierr)
{
  PetscBool null_dmGrad = !*(void**) dmGrad ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmGrad);
  *ierr = DMPlexComputeGradientFVM(*dm, *fvm, *faceGeometry, *cellGeometry, dmGrad);
  if (*ierr) return;
  if (! null_dmGrad && !*(void**) dmGrad) *(void **) dmGrad = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetdatafvm_ DMPLEXGETDATAFVM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetdatafvm_ dmplexgetdatafvm
#endif
PETSC_EXTERN void dmplexgetdatafvm_(DM *dm, PetscFV *fv, Vec *cellgeom, Vec *facegeom, DM *gradDM, PetscErrorCode *ierr)
{
  PetscBool null_cellgeom = !*(void**) cellgeom ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_facegeom = !*(void**) facegeom ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_gradDM = !*(void**) gradDM ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(cellgeom);
  CHKFORTRANNULLOBJECT(facegeom);
  CHKFORTRANNULLOBJECT(gradDM);
  *ierr = DMPlexGetDataFVM(*dm, *fv, cellgeom, facegeom, gradDM);
  if (*ierr) return;
  if (! null_cellgeom && !*(void**) cellgeom) *(void **) cellgeom = (void *)-2;
  if (! null_facegeom && !*(void**) facegeom) *(void **) facegeom = (void *)-2;
  if (! null_gradDM && !*(void**) gradDM) *(void **) gradDM = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcoordinatestoreference_ DMPLEXCOORDINATESTOREFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcoordinatestoreference_ dmplexcoordinatestoreference
#endif
PETSC_EXTERN void dmplexcoordinatestoreference_(DM *dm, PetscInt *cell, PetscInt *numPoints, const PetscReal realCoords[], PetscReal refCoords[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(realCoords);
  CHKFORTRANNULLREAL(refCoords);
  *ierr = DMPlexCoordinatesToReference(*dm, *cell, *numPoints, realCoords, refCoords);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexreferencetocoordinates_ DMPLEXREFERENCETOCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexreferencetocoordinates_ dmplexreferencetocoordinates
#endif
PETSC_EXTERN void dmplexreferencetocoordinates_(DM *dm, PetscInt *cell, PetscInt *numPoints, const PetscReal refCoords[], PetscReal realCoords[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(refCoords);
  CHKFORTRANNULLREAL(realCoords);
  *ierr = DMPlexReferenceToCoordinates(*dm, *cell, *numPoints, refCoords, realCoords);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsheargeometry_ DMPLEXSHEARGEOMETRY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsheargeometry_ dmplexsheargeometry
#endif
PETSC_EXTERN void dmplexsheargeometry_(DM *dm, DMDirection *direction, PetscReal multipliers[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(multipliers);
  *ierr = DMPlexShearGeometry(*dm, *direction, multipliers);
  if (*ierr) return;
}
