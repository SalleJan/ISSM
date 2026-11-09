#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestregistertype_ DMFORESTREGISTERTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestregistertype_ dmforestregistertype
#endif
PETSC_EXTERN void dmforestregistertype_(char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMForestRegisterType(c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmisforest_ DMISFOREST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmisforest_ dmisforest
#endif
PETSC_EXTERN void dmisforest_(DM *dm, PetscBool *isForest, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isForest);
  *ierr = DMIsForest(*dm, isForest);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforesttemplate_ DMFORESTTEMPLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforesttemplate_ dmforesttemplate
#endif
PETSC_EXTERN void dmforesttemplate_(DM *dm, MPI_Fint *comm, DM *tedm, PetscErrorCode *ierr)
{
  PetscBool null_tedm = !*(void**) tedm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tedm);
  *ierr = DMForestTemplate(*dm, MPI_Comm_f2c(*(comm)), tedm);
  if (*ierr) return;
  if (! null_tedm && !*(void**) tedm) *(void **) tedm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsettopology_ DMFORESTSETTOPOLOGY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsettopology_ dmforestsettopology
#endif
PETSC_EXTERN void dmforestsettopology_(DM *dm, char *topology, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_topology)
{
  char* c_topology;
  FIXCHAR(topology, l_topology, c_topology);
  *ierr = DMForestSetTopology(*dm, c_topology);
  if (*ierr) return;
  FREECHAR(topology, c_topology);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgettopology_ DMFORESTGETTOPOLOGY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgettopology_ dmforestgettopology
#endif
PETSC_EXTERN void dmforestgettopology_(DM *dm, char *topology, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_topology)
{
  char* c_topology = PETSC_NULLPTR;
  *ierr = DMForestGetTopology(*dm, (const char **)&c_topology);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)topology, c_topology, l_topology);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, topology, l_topology);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetbasedm_ DMFORESTSETBASEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetbasedm_ dmforestsetbasedm
#endif
PETSC_EXTERN void dmforestsetbasedm_(DM *dm, DM *base, PetscErrorCode *ierr)
{
  *ierr = DMForestSetBaseDM(*dm, *base);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetbasedm_ DMFORESTGETBASEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetbasedm_ dmforestgetbasedm
#endif
PETSC_EXTERN void dmforestgetbasedm_(DM *dm, DM *base, PetscErrorCode *ierr)
{
  PetscBool null_base = !*(void**) base ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(base);
  *ierr = DMForestGetBaseDM(*dm, base);
  if (*ierr) return;
  if (! null_base && !*(void**) base) *(void **) base = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetadaptivityforest_ DMFORESTSETADAPTIVITYFOREST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetadaptivityforest_ dmforestsetadaptivityforest
#endif
PETSC_EXTERN void dmforestsetadaptivityforest_(DM *dm, DM *adapt, PetscErrorCode *ierr)
{
  *ierr = DMForestSetAdaptivityForest(*dm, *adapt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetadaptivityforest_ DMFORESTGETADAPTIVITYFOREST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetadaptivityforest_ dmforestgetadaptivityforest
#endif
PETSC_EXTERN void dmforestgetadaptivityforest_(DM *dm, DM *adapt, PetscErrorCode *ierr)
{
  PetscBool null_adapt = !*(void**) adapt ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(adapt);
  *ierr = DMForestGetAdaptivityForest(*dm, adapt);
  if (*ierr) return;
  if (! null_adapt && !*(void**) adapt) *(void **) adapt = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetadaptivitypurpose_ DMFORESTSETADAPTIVITYPURPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetadaptivitypurpose_ dmforestsetadaptivitypurpose
#endif
PETSC_EXTERN void dmforestsetadaptivitypurpose_(DM *dm, DMAdaptFlag *purpose, PetscErrorCode *ierr)
{
  *ierr = DMForestSetAdaptivityPurpose(*dm, *purpose);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetadaptivitypurpose_ DMFORESTGETADAPTIVITYPURPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetadaptivitypurpose_ dmforestgetadaptivitypurpose
#endif
PETSC_EXTERN void dmforestgetadaptivitypurpose_(DM *dm, DMAdaptFlag *purpose, PetscErrorCode *ierr)
{
  *ierr = DMForestGetAdaptivityPurpose(*dm, purpose);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetadjacencydimension_ DMFORESTSETADJACENCYDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetadjacencydimension_ dmforestsetadjacencydimension
#endif
PETSC_EXTERN void dmforestsetadjacencydimension_(DM *dm, PetscInt *adjDim, PetscErrorCode *ierr)
{
  *ierr = DMForestSetAdjacencyDimension(*dm, *adjDim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetadjacencycodimension_ DMFORESTSETADJACENCYCODIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetadjacencycodimension_ dmforestsetadjacencycodimension
#endif
PETSC_EXTERN void dmforestsetadjacencycodimension_(DM *dm, PetscInt *adjCodim, PetscErrorCode *ierr)
{
  *ierr = DMForestSetAdjacencyCodimension(*dm, *adjCodim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetadjacencydimension_ DMFORESTGETADJACENCYDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetadjacencydimension_ dmforestgetadjacencydimension
#endif
PETSC_EXTERN void dmforestgetadjacencydimension_(DM *dm, PetscInt *adjDim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(adjDim);
  *ierr = DMForestGetAdjacencyDimension(*dm, adjDim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetadjacencycodimension_ DMFORESTGETADJACENCYCODIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetadjacencycodimension_ dmforestgetadjacencycodimension
#endif
PETSC_EXTERN void dmforestgetadjacencycodimension_(DM *dm, PetscInt *adjCodim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(adjCodim);
  *ierr = DMForestGetAdjacencyCodimension(*dm, adjCodim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetpartitionoverlap_ DMFORESTSETPARTITIONOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetpartitionoverlap_ dmforestsetpartitionoverlap
#endif
PETSC_EXTERN void dmforestsetpartitionoverlap_(DM *dm, PetscInt *overlap, PetscErrorCode *ierr)
{
  *ierr = DMForestSetPartitionOverlap(*dm, *overlap);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetpartitionoverlap_ DMFORESTGETPARTITIONOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetpartitionoverlap_ dmforestgetpartitionoverlap
#endif
PETSC_EXTERN void dmforestgetpartitionoverlap_(DM *dm, PetscInt *overlap, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(overlap);
  *ierr = DMForestGetPartitionOverlap(*dm, overlap);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetminimumrefinement_ DMFORESTSETMINIMUMREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetminimumrefinement_ dmforestsetminimumrefinement
#endif
PETSC_EXTERN void dmforestsetminimumrefinement_(DM *dm, PetscInt *minRefinement, PetscErrorCode *ierr)
{
  *ierr = DMForestSetMinimumRefinement(*dm, *minRefinement);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetminimumrefinement_ DMFORESTGETMINIMUMREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetminimumrefinement_ dmforestgetminimumrefinement
#endif
PETSC_EXTERN void dmforestgetminimumrefinement_(DM *dm, PetscInt *minRefinement, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(minRefinement);
  *ierr = DMForestGetMinimumRefinement(*dm, minRefinement);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetinitialrefinement_ DMFORESTSETINITIALREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetinitialrefinement_ dmforestsetinitialrefinement
#endif
PETSC_EXTERN void dmforestsetinitialrefinement_(DM *dm, PetscInt *initRefinement, PetscErrorCode *ierr)
{
  *ierr = DMForestSetInitialRefinement(*dm, *initRefinement);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetinitialrefinement_ DMFORESTGETINITIALREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetinitialrefinement_ dmforestgetinitialrefinement
#endif
PETSC_EXTERN void dmforestgetinitialrefinement_(DM *dm, PetscInt *initRefinement, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(initRefinement);
  *ierr = DMForestGetInitialRefinement(*dm, initRefinement);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetmaximumrefinement_ DMFORESTSETMAXIMUMREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetmaximumrefinement_ dmforestsetmaximumrefinement
#endif
PETSC_EXTERN void dmforestsetmaximumrefinement_(DM *dm, PetscInt *maxRefinement, PetscErrorCode *ierr)
{
  *ierr = DMForestSetMaximumRefinement(*dm, *maxRefinement);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetmaximumrefinement_ DMFORESTGETMAXIMUMREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetmaximumrefinement_ dmforestgetmaximumrefinement
#endif
PETSC_EXTERN void dmforestgetmaximumrefinement_(DM *dm, PetscInt *maxRefinement, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(maxRefinement);
  *ierr = DMForestGetMaximumRefinement(*dm, maxRefinement);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetadaptivitystrategy_ DMFORESTSETADAPTIVITYSTRATEGY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetadaptivitystrategy_ dmforestsetadaptivitystrategy
#endif
PETSC_EXTERN void dmforestsetadaptivitystrategy_(DM *dm, char *adaptStrategy, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_adaptStrategy)
{
  char* c_adaptStrategy;
  FIXCHAR(adaptStrategy, l_adaptStrategy, c_adaptStrategy);
  *ierr = DMForestSetAdaptivityStrategy(*dm, c_adaptStrategy);
  if (*ierr) return;
  FREECHAR(adaptStrategy, c_adaptStrategy);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetadaptivitystrategy_ DMFORESTGETADAPTIVITYSTRATEGY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetadaptivitystrategy_ dmforestgetadaptivitystrategy
#endif
PETSC_EXTERN void dmforestgetadaptivitystrategy_(DM *dm, char *adaptStrategy, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_adaptStrategy)
{
  char* c_adaptStrategy = PETSC_NULLPTR;
  *ierr = DMForestGetAdaptivityStrategy(*dm, (const char **)&c_adaptStrategy);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)adaptStrategy, c_adaptStrategy, l_adaptStrategy);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, adaptStrategy, l_adaptStrategy);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetadaptivitysuccess_ DMFORESTGETADAPTIVITYSUCCESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetadaptivitysuccess_ dmforestgetadaptivitysuccess
#endif
PETSC_EXTERN void dmforestgetadaptivitysuccess_(DM *dm, PetscBool *success, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(success);
  *ierr = DMForestGetAdaptivitySuccess(*dm, success);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetcomputeadaptivitysf_ DMFORESTSETCOMPUTEADAPTIVITYSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetcomputeadaptivitysf_ dmforestsetcomputeadaptivitysf
#endif
PETSC_EXTERN void dmforestsetcomputeadaptivitysf_(DM *dm, PetscBool *computeSF, PetscErrorCode *ierr)
{
  *ierr = DMForestSetComputeAdaptivitySF(*dm, *computeSF ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforesttransfervec_ DMFORESTTRANSFERVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforesttransfervec_ dmforesttransfervec
#endif
PETSC_EXTERN void dmforesttransfervec_(DM *dmIn, Vec *vecIn, DM *dmOut, Vec *vecOut, PetscBool *useBCs, PetscReal *time, PetscErrorCode *ierr)
{
  *ierr = DMForestTransferVec(*dmIn, *vecIn, *dmOut, *vecOut, *useBCs ? PETSC_TRUE : PETSC_FALSE, *time);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforesttransfervecfrombase_ DMFORESTTRANSFERVECFROMBASE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforesttransfervecfrombase_ dmforesttransfervecfrombase
#endif
PETSC_EXTERN void dmforesttransfervecfrombase_(DM *dm, Vec *vecIn, Vec *vecOut, PetscErrorCode *ierr)
{
  *ierr = DMForestTransferVecFromBase(*dm, *vecIn, *vecOut);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetcomputeadaptivitysf_ DMFORESTGETCOMPUTEADAPTIVITYSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetcomputeadaptivitysf_ dmforestgetcomputeadaptivitysf
#endif
PETSC_EXTERN void dmforestgetcomputeadaptivitysf_(DM *dm, PetscBool *computeSF, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(computeSF);
  *ierr = DMForestGetComputeAdaptivitySF(*dm, computeSF);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetadaptivitysf_ DMFORESTGETADAPTIVITYSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetadaptivitysf_ dmforestgetadaptivitysf
#endif
PETSC_EXTERN void dmforestgetadaptivitysf_(DM *dm, PetscSF *preCoarseToFine, PetscSF *coarseToPreFine, PetscErrorCode *ierr)
{
  PetscBool null_preCoarseToFine = !*(void**) preCoarseToFine ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_coarseToPreFine = !*(void**) coarseToPreFine ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(preCoarseToFine);
  CHKFORTRANNULLOBJECT(coarseToPreFine);
  *ierr = DMForestGetAdaptivitySF(*dm, preCoarseToFine, coarseToPreFine);
  if (*ierr) return;
  if (! null_preCoarseToFine && !*(void**) preCoarseToFine) *(void **) preCoarseToFine = (void *)-2;
  if (! null_coarseToPreFine && !*(void**) coarseToPreFine) *(void **) coarseToPreFine = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetgradefactor_ DMFORESTSETGRADEFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetgradefactor_ dmforestsetgradefactor
#endif
PETSC_EXTERN void dmforestsetgradefactor_(DM *dm, PetscInt *grade, PetscErrorCode *ierr)
{
  *ierr = DMForestSetGradeFactor(*dm, *grade);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetgradefactor_ DMFORESTGETGRADEFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetgradefactor_ dmforestgetgradefactor
#endif
PETSC_EXTERN void dmforestgetgradefactor_(DM *dm, PetscInt *grade, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(grade);
  *ierr = DMForestGetGradeFactor(*dm, grade);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetcellweightfactor_ DMFORESTSETCELLWEIGHTFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetcellweightfactor_ dmforestsetcellweightfactor
#endif
PETSC_EXTERN void dmforestsetcellweightfactor_(DM *dm, PetscReal *weightsFactor, PetscErrorCode *ierr)
{
  *ierr = DMForestSetCellWeightFactor(*dm, *weightsFactor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetcellweightfactor_ DMFORESTGETCELLWEIGHTFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetcellweightfactor_ dmforestgetcellweightfactor
#endif
PETSC_EXTERN void dmforestgetcellweightfactor_(DM *dm, PetscReal *weightsFactor, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(weightsFactor);
  *ierr = DMForestGetCellWeightFactor(*dm, weightsFactor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetcellchart_ DMFORESTGETCELLCHART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetcellchart_ dmforestgetcellchart
#endif
PETSC_EXTERN void dmforestgetcellchart_(DM *dm, PetscInt *cStart, PetscInt *cEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cStart);
  CHKFORTRANNULLINTEGER(cEnd);
  *ierr = DMForestGetCellChart(*dm, cStart, cEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetcellsf_ DMFORESTGETCELLSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetcellsf_ dmforestgetcellsf
#endif
PETSC_EXTERN void dmforestgetcellsf_(DM *dm, PetscSF *cellSF, PetscErrorCode *ierr)
{
  PetscBool null_cellSF = !*(void**) cellSF ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(cellSF);
  *ierr = DMForestGetCellSF(*dm, cellSF);
  if (*ierr) return;
  if (! null_cellSF && !*(void**) cellSF) *(void **) cellSF = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetadaptivitylabel_ DMFORESTSETADAPTIVITYLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetadaptivitylabel_ dmforestsetadaptivitylabel
#endif
PETSC_EXTERN void dmforestsetadaptivitylabel_(DM *dm, DMLabel *adaptLabel, PetscErrorCode *ierr)
{
  *ierr = DMForestSetAdaptivityLabel(*dm, *adaptLabel);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetadaptivitylabel_ DMFORESTGETADAPTIVITYLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetadaptivitylabel_ dmforestgetadaptivitylabel
#endif
PETSC_EXTERN void dmforestgetadaptivitylabel_(DM *dm, DMLabel *adaptLabel, PetscErrorCode *ierr)
{
  PetscBool null_adaptLabel = !*(void**) adaptLabel ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(adaptLabel);
  *ierr = DMForestGetAdaptivityLabel(*dm, adaptLabel);
  if (*ierr) return;
  if (! null_adaptLabel && !*(void**) adaptLabel) *(void **) adaptLabel = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetcellweights_ DMFORESTSETCELLWEIGHTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetcellweights_ dmforestsetcellweights
#endif
PETSC_EXTERN void dmforestsetcellweights_(DM *dm, PetscReal weights[], PetscCopyMode *copyMode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(weights);
  *ierr = DMForestSetCellWeights(*dm, weights, *copyMode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestsetweightcapacity_ DMFORESTSETWEIGHTCAPACITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestsetweightcapacity_ dmforestsetweightcapacity
#endif
PETSC_EXTERN void dmforestsetweightcapacity_(DM *dm, PetscReal *capacity, PetscErrorCode *ierr)
{
  *ierr = DMForestSetWeightCapacity(*dm, *capacity);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmforest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmforestgetweightcapacity_ DMFORESTGETWEIGHTCAPACITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmforestgetweightcapacity_ dmforestgetweightcapacity
#endif
PETSC_EXTERN void dmforestgetweightcapacity_(DM *dm, PetscReal *capacity, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(capacity);
  *ierr = DMForestGetWeightCapacity(*dm, capacity);
  if (*ierr) return;
}
