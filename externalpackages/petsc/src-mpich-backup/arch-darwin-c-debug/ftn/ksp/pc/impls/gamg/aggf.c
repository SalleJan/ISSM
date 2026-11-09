#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetnsmooths_ PCGAMGSETNSMOOTHS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetnsmooths_ pcgamgsetnsmooths
#endif
PETSC_EXTERN void pcgamgsetnsmooths_(PC *pc, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetNSmooths(*pc, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetaggressivelevels_ PCGAMGSETAGGRESSIVELEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetaggressivelevels_ pcgamgsetaggressivelevels
#endif
PETSC_EXTERN void pcgamgsetaggressivelevels_(PC *pc, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetAggressiveLevels(*pc, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgmisksetaggressive_ PCGAMGMISKSETAGGRESSIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgmisksetaggressive_ pcgamgmisksetaggressive
#endif
PETSC_EXTERN void pcgamgmisksetaggressive_(PC *pc, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PCGAMGMISkSetAggressive(*pc, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetaggressivesquaregraph_ PCGAMGSETAGGRESSIVESQUAREGRAPH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetaggressivesquaregraph_ pcgamgsetaggressivesquaregraph
#endif
PETSC_EXTERN void pcgamgsetaggressivesquaregraph_(PC *pc, PetscBool *b, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetAggressiveSquareGraph(*pc, *b ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgmisksetmindegreeordering_ PCGAMGMISKSETMINDEGREEORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgmisksetmindegreeordering_ pcgamgmisksetmindegreeordering
#endif
PETSC_EXTERN void pcgamgmisksetmindegreeordering_(PC *pc, PetscBool *b, PetscErrorCode *ierr)
{
  *ierr = PCGAMGMISkSetMinDegreeOrdering(*pc, *b ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetlowmemoryfilter_ PCGAMGSETLOWMEMORYFILTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetlowmemoryfilter_ pcgamgsetlowmemoryfilter
#endif
PETSC_EXTERN void pcgamgsetlowmemoryfilter_(PC *pc, PetscBool *b, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetLowMemoryFilter(*pc, *b ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgsetgraphsymmetrize_ PCGAMGSETGRAPHSYMMETRIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgsetgraphsymmetrize_ pcgamgsetgraphsymmetrize
#endif
PETSC_EXTERN void pcgamgsetgraphsymmetrize_(PC *pc, PetscBool *b, PetscErrorCode *ierr)
{
  *ierr = PCGAMGSetGraphSymmetrize(*pc, *b ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
