#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetnumcells_ DMDAGETNUMCELLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetnumcells_ dmdagetnumcells
#endif
PETSC_EXTERN void dmdagetnumcells_(DM *dm, PetscInt *numCellsX, PetscInt *numCellsY, PetscInt *numCellsZ, PetscInt *numCells, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numCellsX);
  CHKFORTRANNULLINTEGER(numCellsY);
  CHKFORTRANNULLINTEGER(numCellsZ);
  CHKFORTRANNULLINTEGER(numCells);
  *ierr = DMDAGetNumCells(*dm, numCellsX, numCellsY, numCellsZ, numCells);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetcellpoint_ DMDAGETCELLPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetcellpoint_ dmdagetcellpoint
#endif
PETSC_EXTERN void dmdagetcellpoint_(DM *dm, PetscInt *i, PetscInt *j, PetscInt *k, PetscInt *point, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(point);
  *ierr = DMDAGetCellPoint(*dm, *i, *j, *k, point);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetnumvertices_ DMDAGETNUMVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetnumvertices_ dmdagetnumvertices
#endif
PETSC_EXTERN void dmdagetnumvertices_(DM *dm, PetscInt *numVerticesX, PetscInt *numVerticesY, PetscInt *numVerticesZ, PetscInt *numVertices, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numVerticesX);
  CHKFORTRANNULLINTEGER(numVerticesY);
  CHKFORTRANNULLINTEGER(numVerticesZ);
  CHKFORTRANNULLINTEGER(numVertices);
  *ierr = DMDAGetNumVertices(*dm, numVerticesX, numVerticesY, numVerticesZ, numVertices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetnumfaces_ DMDAGETNUMFACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetnumfaces_ dmdagetnumfaces
#endif
PETSC_EXTERN void dmdagetnumfaces_(DM *dm, PetscInt *numXFacesX, PetscInt *numXFaces, PetscInt *numYFacesY, PetscInt *numYFaces, PetscInt *numZFacesZ, PetscInt *numZFaces, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numXFacesX);
  CHKFORTRANNULLINTEGER(numXFaces);
  CHKFORTRANNULLINTEGER(numYFacesY);
  CHKFORTRANNULLINTEGER(numYFaces);
  CHKFORTRANNULLINTEGER(numZFacesZ);
  CHKFORTRANNULLINTEGER(numZFaces);
  *ierr = DMDAGetNumFaces(*dm, numXFacesX, numXFaces, numYFacesY, numYFaces, numZFacesZ, numZFaces);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetheightstratum_ DMDAGETHEIGHTSTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetheightstratum_ dmdagetheightstratum
#endif
PETSC_EXTERN void dmdagetheightstratum_(DM *dm, PetscInt *height, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(pStart);
  CHKFORTRANNULLINTEGER(pEnd);
  *ierr = DMDAGetHeightStratum(*dm, *height, pStart, pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetdepthstratum_ DMDAGETDEPTHSTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetdepthstratum_ dmdagetdepthstratum
#endif
PETSC_EXTERN void dmdagetdepthstratum_(DM *dm, PetscInt *depth, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(pStart);
  CHKFORTRANNULLINTEGER(pEnd);
  *ierr = DMDAGetDepthStratum(*dm, *depth, pStart, pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetvertexcoordinates_ DMDASETVERTEXCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetvertexcoordinates_ dmdasetvertexcoordinates
#endif
PETSC_EXTERN void dmdasetvertexcoordinates_(DM *dm, PetscReal *xl, PetscReal *xu, PetscReal *yl, PetscReal *yu, PetscReal *zl, PetscReal *zu, PetscErrorCode *ierr)
{
  *ierr = DMDASetVertexCoordinates(*dm, *xl, *xu, *yl, *yu, *zl, *zu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetarray_ DMDAGETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetarray_ dmdagetarray
#endif
PETSC_EXTERN void dmdagetarray_(DM *da, PetscBool *ghosted, void *vptr, PetscErrorCode *ierr)
{
  *ierr = DMDAGetArray(*da, *ghosted ? PETSC_TRUE : PETSC_FALSE, vptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdarestorearray_ DMDARESTOREARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdarestorearray_ dmdarestorearray
#endif
PETSC_EXTERN void dmdarestorearray_(DM *da, PetscBool *ghosted, void *vptr, PetscErrorCode *ierr)
{
  *ierr = DMDARestoreArray(*da, *ghosted ? PETSC_TRUE : PETSC_FALSE, vptr);
  if (*ierr) return;
}
