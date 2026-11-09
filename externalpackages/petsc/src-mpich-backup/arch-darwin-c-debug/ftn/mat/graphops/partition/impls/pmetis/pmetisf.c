#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmeshtocellgraph_ MATMESHTOCELLGRAPH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmeshtocellgraph_ matmeshtocellgraph
#endif
PETSC_EXTERN void matmeshtocellgraph_(Mat *mesh, PetscInt *ncommonnodes, Mat *dual, PetscErrorCode *ierr)
{
  PetscBool null_dual = !*(void**) dual ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dual);
  *ierr = MatMeshToCellGraph(*mesh, *ncommonnodes, dual);
  if (*ierr) return;
  if (! null_dual && !*(void**) dual) *(void **) dual = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningparmetissetcoarsesequential_ MATPARTITIONINGPARMETISSETCOARSESEQUENTIAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningparmetissetcoarsesequential_ matpartitioningparmetissetcoarsesequential
#endif
PETSC_EXTERN void matpartitioningparmetissetcoarsesequential_(MatPartitioning *part, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningParmetisSetCoarseSequential(*part);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningparmetissetrepartition_ MATPARTITIONINGPARMETISSETREPARTITION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningparmetissetrepartition_ matpartitioningparmetissetrepartition
#endif
PETSC_EXTERN void matpartitioningparmetissetrepartition_(MatPartitioning *part, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningParmetisSetRepartition(*part);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningparmetisgetedgecut_ MATPARTITIONINGPARMETISGETEDGECUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningparmetisgetedgecut_ matpartitioningparmetisgetedgecut
#endif
PETSC_EXTERN void matpartitioningparmetisgetedgecut_(MatPartitioning *part, PetscInt *cut, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cut);
  *ierr = MatPartitioningParmetisGetEdgeCut(*part, cut);
  if (*ierr) return;
}
