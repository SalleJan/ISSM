#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatecoordinatespace_ DMPLEXCREATECOORDINATESPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatecoordinatespace_ dmplexcreatecoordinatespace
#endif
PETSC_EXTERN void dmplexcreatecoordinatespace_(DM *dm, PetscInt *degree, PetscBool *localized, PetscBool *project, PetscErrorCode *ierr)
{
  *ierr = DMPlexCreateCoordinateSpace(*dm, *degree, *localized ? PETSC_TRUE : PETSC_FALSE, *project ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatedoublet_ DMPLEXCREATEDOUBLET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatedoublet_ dmplexcreatedoublet
#endif
PETSC_EXTERN void dmplexcreatedoublet_(MPI_Fint *comm, PetscInt *dim, PetscBool *simplex, PetscBool *interpolate, PetscReal *refinementLimit, DM *newdm, PetscErrorCode *ierr)
{
  PetscBool null_newdm = !*(void**) newdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newdm);
  *ierr = DMPlexCreateDoublet(MPI_Comm_f2c(*(comm)), *dim, *simplex ? PETSC_TRUE : PETSC_FALSE, *interpolate ? PETSC_TRUE : PETSC_FALSE, *refinementLimit, newdm);
  if (*ierr) return;
  if (! null_newdm && !*(void**) newdm) *(void **) newdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateboxsurfacemesh_ DMPLEXCREATEBOXSURFACEMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateboxsurfacemesh_ dmplexcreateboxsurfacemesh
#endif
PETSC_EXTERN void dmplexcreateboxsurfacemesh_(MPI_Fint *comm, PetscInt *dim, const PetscInt faces[], const PetscReal lower[], const PetscReal upper[], PetscBool *interpolate, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(faces);
  CHKFORTRANNULLREAL(lower);
  CHKFORTRANNULLREAL(upper);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateBoxSurfaceMesh(MPI_Comm_f2c(*(comm)), *dim, faces, lower, upper, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateboxmesh_ DMPLEXCREATEBOXMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateboxmesh_ dmplexcreateboxmesh
#endif
PETSC_EXTERN void dmplexcreateboxmesh_(MPI_Fint *comm, PetscInt *dim, PetscBool *simplex, const PetscInt faces[], const PetscReal lower[], const PetscReal upper[], const DMBoundaryType periodicity[], PetscBool *interpolate, PetscInt *localizationHeight, PetscBool *sparseLocalize, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(faces);
  CHKFORTRANNULLREAL(lower);
  CHKFORTRANNULLREAL(upper);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateBoxMesh(MPI_Comm_f2c(*(comm)), *dim, *simplex ? PETSC_TRUE : PETSC_FALSE, faces, lower, upper, periodicity, *interpolate ? PETSC_TRUE : PETSC_FALSE, *localizationHeight, *sparseLocalize ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatewedgeboxmesh_ DMPLEXCREATEWEDGEBOXMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatewedgeboxmesh_ dmplexcreatewedgeboxmesh
#endif
PETSC_EXTERN void dmplexcreatewedgeboxmesh_(MPI_Fint *comm, const PetscInt faces[], const PetscReal lower[], const PetscReal upper[], const DMBoundaryType periodicity[], PetscBool *orderHeight, PetscBool *interpolate, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(faces);
  CHKFORTRANNULLREAL(lower);
  CHKFORTRANNULLREAL(upper);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateWedgeBoxMesh(MPI_Comm_f2c(*(comm)), faces, lower, upper, periodicity, *orderHeight ? PETSC_TRUE : PETSC_FALSE, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatehypercubicmesh_ DMPLEXCREATEHYPERCUBICMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatehypercubicmesh_ dmplexcreatehypercubicmesh
#endif
PETSC_EXTERN void dmplexcreatehypercubicmesh_(MPI_Fint *comm, PetscInt *dim, const PetscInt edges[], const PetscReal lower[], const PetscReal upper[], PetscInt *overlap, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(edges);
  CHKFORTRANNULLREAL(lower);
  CHKFORTRANNULLREAL(upper);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateHypercubicMesh(MPI_Comm_f2c(*(comm)), *dim, edges, lower, upper, *overlap, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetoptionsprefix_ DMPLEXSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetoptionsprefix_ dmplexsetoptionsprefix
#endif
PETSC_EXTERN void dmplexsetoptionsprefix_(DM *dm, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = DMPlexSetOptionsPrefix(*dm, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatehexcylindermesh_ DMPLEXCREATEHEXCYLINDERMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatehexcylindermesh_ dmplexcreatehexcylindermesh
#endif
PETSC_EXTERN void dmplexcreatehexcylindermesh_(MPI_Fint *comm, DMBoundaryType *periodicZ, PetscInt *Nr, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateHexCylinderMesh(MPI_Comm_f2c(*(comm)), *periodicZ, *Nr, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatewedgecylindermesh_ DMPLEXCREATEWEDGECYLINDERMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatewedgecylindermesh_ dmplexcreatewedgecylindermesh
#endif
PETSC_EXTERN void dmplexcreatewedgecylindermesh_(MPI_Fint *comm, PetscInt *n, PetscBool *interpolate, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateWedgeCylinderMesh(MPI_Comm_f2c(*(comm)), *n, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatetpsmesh_ DMPLEXCREATETPSMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatetpsmesh_ dmplexcreatetpsmesh
#endif
PETSC_EXTERN void dmplexcreatetpsmesh_(MPI_Fint *comm, DMPlexTPSType *tpstype, const PetscInt extent[], const DMBoundaryType periodic[], PetscBool *tps_distribute, PetscInt *refinements, PetscInt *layers, PetscReal *thickness, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(extent);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateTPSMesh(MPI_Comm_f2c(*(comm)), *tpstype, extent, periodic, *tps_distribute ? PETSC_TRUE : PETSC_FALSE, *refinements, *layers, *thickness, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatespheremesh_ DMPLEXCREATESPHEREMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatespheremesh_ dmplexcreatespheremesh
#endif
PETSC_EXTERN void dmplexcreatespheremesh_(MPI_Fint *comm, PetscInt *dim, PetscBool *simplex, PetscReal *R, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateSphereMesh(MPI_Comm_f2c(*(comm)), *dim, *simplex ? PETSC_TRUE : PETSC_FALSE, *R, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateballmesh_ DMPLEXCREATEBALLMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateballmesh_ dmplexcreateballmesh
#endif
PETSC_EXTERN void dmplexcreateballmesh_(MPI_Fint *comm, PetscInt *dim, PetscReal *R, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateBallMesh(MPI_Comm_f2c(*(comm)), *dim, *R, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatereferencecell_ DMPLEXCREATEREFERENCECELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatereferencecell_ dmplexcreatereferencecell
#endif
PETSC_EXTERN void dmplexcreatereferencecell_(MPI_Fint *comm, DMPolytopeType *ct, DM *refdm, PetscErrorCode *ierr)
{
  PetscBool null_refdm = !*(void**) refdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(refdm);
  *ierr = DMPlexCreateReferenceCell(MPI_Comm_f2c(*(comm)), *ct, refdm);
  if (*ierr) return;
  if (! null_refdm && !*(void**) refdm) *(void **) refdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreate_ DMPLEXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreate_ dmplexcreate
#endif
PETSC_EXTERN void dmplexcreate_(MPI_Fint *comm, DM *mesh, PetscErrorCode *ierr)
{
  PetscBool null_mesh = !*(void**) mesh ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(mesh);
  CHKFORTRANNULLOBJECT(mesh);
  *ierr = DMPlexCreate(MPI_Comm_f2c(*(comm)), mesh);
  if (*ierr) return;
  if (! null_mesh && !*(void**) mesh) *(void **) mesh = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexbuildcoordinatesfromcelllistparallel_ DMPLEXBUILDCOORDINATESFROMCELLLISTPARALLEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexbuildcoordinatesfromcelllistparallel_ dmplexbuildcoordinatesfromcelllistparallel
#endif
PETSC_EXTERN void dmplexbuildcoordinatesfromcelllistparallel_(DM *dm, PetscInt *spaceDim, PetscSF *sfVert, const PetscReal vertexCoords[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(vertexCoords);
  *ierr = DMPlexBuildCoordinatesFromCellListParallel(*dm, *spaceDim, *sfVert, vertexCoords);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexbuildfromcelllist_ DMPLEXBUILDFROMCELLLIST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexbuildfromcelllist_ dmplexbuildfromcelllist
#endif
PETSC_EXTERN void dmplexbuildfromcelllist_(DM *dm, PetscInt *numCells, PetscInt *numVertices, PetscInt *numCorners, const PetscInt cells[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cells);
  *ierr = DMPlexBuildFromCellList(*dm, *numCells, *numVertices, *numCorners, cells);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexbuildcoordinatesfromcelllist_ DMPLEXBUILDCOORDINATESFROMCELLLIST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexbuildcoordinatesfromcelllist_ dmplexbuildcoordinatesfromcelllist
#endif
PETSC_EXTERN void dmplexbuildcoordinatesfromcelllist_(DM *dm, PetscInt *spaceDim, const PetscReal vertexCoords[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(vertexCoords);
  *ierr = DMPlexBuildCoordinatesFromCellList(*dm, *spaceDim, vertexCoords);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatefromcelllistpetsc_ DMPLEXCREATEFROMCELLLISTPETSC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatefromcelllistpetsc_ dmplexcreatefromcelllistpetsc
#endif
PETSC_EXTERN void dmplexcreatefromcelllistpetsc_(MPI_Fint *comm, PetscInt *dim, PetscInt *numCells, PetscInt *numVertices, PetscInt *numCorners, PetscBool *interpolate, const PetscInt cells[], PetscInt *spaceDim, const PetscReal vertexCoords[], DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(cells);
  CHKFORTRANNULLREAL(vertexCoords);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateFromCellListPetsc(MPI_Comm_f2c(*(comm)), *dim, *numCells, *numVertices, *numCorners, *interpolate ? PETSC_TRUE : PETSC_FALSE, cells, *spaceDim, vertexCoords, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatefromdag_ DMPLEXCREATEFROMDAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatefromdag_ dmplexcreatefromdag
#endif
PETSC_EXTERN void dmplexcreatefromdag_(DM *dm, PetscInt *depth, const PetscInt numPoints[], const PetscInt coneSize[], const PetscInt cones[], const PetscInt coneOrientations[], const PetscScalar vertexCoords[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numPoints);
  CHKFORTRANNULLINTEGER(coneSize);
  CHKFORTRANNULLINTEGER(cones);
  CHKFORTRANNULLINTEGER(coneOrientations);
  CHKFORTRANNULLSCALAR(vertexCoords);
  *ierr = DMPlexCreateFromDAG(*dm, *depth, numPoints, coneSize, cones, coneOrientations, vertexCoords);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatefromfile_ DMPLEXCREATEFROMFILE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatefromfile_ dmplexcreatefromfile
#endif
PETSC_EXTERN void dmplexcreatefromfile_(MPI_Fint *comm, char filename[], char plexname[], PetscBool *interpolate, DM *dm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename, PETSC_FORTRAN_CHARLEN_T l_plexname)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  char* c_plexname;
  FIXCHAR(plexname, l_plexname, c_plexname);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateFromFile(MPI_Comm_f2c(*(comm)), c_filename, c_plexname, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
  FREECHAR(plexname, c_plexname);
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateephemeral_ DMPLEXCREATEEPHEMERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateephemeral_ dmplexcreateephemeral
#endif
PETSC_EXTERN void dmplexcreateephemeral_(DMPlexTransform *tr, char prefix[], DM *dm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateEphemeral(*tr, c_prefix, dm);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
