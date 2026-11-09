#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetadjacencyuseanchors_ DMPLEXSETADJACENCYUSEANCHORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetadjacencyuseanchors_ dmplexsetadjacencyuseanchors
#endif
PETSC_EXTERN void dmplexsetadjacencyuseanchors_(DM *dm, PetscBool *useAnchors, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetAdjacencyUseAnchors(*dm, *useAnchors ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetadjacencyuseanchors_ DMPLEXGETADJACENCYUSEANCHORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetadjacencyuseanchors_ dmplexgetadjacencyuseanchors
#endif
PETSC_EXTERN void dmplexgetadjacencyuseanchors_(DM *dm, PetscBool *useAnchors, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(useAnchors);
  *ierr = DMPlexGetAdjacencyUseAnchors(*dm, useAnchors);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatetwosidedprocesssf_ DMPLEXCREATETWOSIDEDPROCESSSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatetwosidedprocesssf_ dmplexcreatetwosidedprocesssf
#endif
PETSC_EXTERN void dmplexcreatetwosidedprocesssf_(DM *dm, PetscSF *sfPoint, PetscSection *rootRankSection, IS *rootRanks, PetscSection *leafRankSection, IS *leafRanks, IS *processRanks, PetscSF *sfProcess, PetscErrorCode *ierr)
{
  PetscBool null_processRanks = !*(void**) processRanks ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_sfProcess = !*(void**) sfProcess ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(processRanks);
  CHKFORTRANNULLOBJECT(sfProcess);
  *ierr = DMPlexCreateTwoSidedProcessSF(*dm, *sfPoint, *rootRankSection, *rootRanks, *leafRankSection, *leafRanks, processRanks, sfProcess);
  if (*ierr) return;
  if (! null_processRanks && !*(void**) processRanks) *(void **) processRanks = (void *)-2;
  if (! null_sfProcess && !*(void**) sfProcess) *(void **) sfProcess = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexdistributeownership_ DMPLEXDISTRIBUTEOWNERSHIP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexdistributeownership_ dmplexdistributeownership
#endif
PETSC_EXTERN void dmplexdistributeownership_(DM *dm, PetscSection *rootSection, IS *rootrank, PetscSection *leafSection, IS *leafrank, PetscErrorCode *ierr)
{
  PetscBool null_rootrank = !*(void**) rootrank ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_leafrank = !*(void**) leafrank ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rootrank);
  CHKFORTRANNULLOBJECT(leafrank);
  *ierr = DMPlexDistributeOwnership(*dm, *rootSection, rootrank, *leafSection, leafrank);
  if (*ierr) return;
  if (! null_rootrank && !*(void**) rootrank) *(void **) rootrank = (void *)-2;
  if (! null_leafrank && !*(void**) leafrank) *(void **) leafrank = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateoverlaplabel_ DMPLEXCREATEOVERLAPLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateoverlaplabel_ dmplexcreateoverlaplabel
#endif
PETSC_EXTERN void dmplexcreateoverlaplabel_(DM *dm, PetscInt *levels, PetscSection *rootSection, IS *rootrank, PetscSection *leafSection, IS *leafrank, DMLabel *ovLabel, PetscErrorCode *ierr)
{
  PetscBool null_ovLabel = !*(void**) ovLabel ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ovLabel);
  *ierr = DMPlexCreateOverlapLabel(*dm, *levels, *rootSection, *rootrank, *leafSection, *leafrank, ovLabel);
  if (*ierr) return;
  if (! null_ovLabel && !*(void**) ovLabel) *(void **) ovLabel = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateoverlaplabelfromlabels_ DMPLEXCREATEOVERLAPLABELFROMLABELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateoverlaplabelfromlabels_ dmplexcreateoverlaplabelfromlabels
#endif
PETSC_EXTERN void dmplexcreateoverlaplabelfromlabels_(DM *dm, PetscInt *numLabels, const DMLabel label[], const PetscInt value[], PetscInt *numExLabels, const DMLabel exLabel[], const PetscInt exValue[], PetscSection *rootSection, IS *rootrank, PetscSection *leafSection, IS *leafrank, DMLabel *ovLabel, PetscErrorCode *ierr)
{
  PetscBool null_ovLabel = !*(void**) ovLabel ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(label);
  CHKFORTRANNULLINTEGER(value);
  CHKFORTRANNULLOBJECT(exLabel);
  CHKFORTRANNULLINTEGER(exValue);
  CHKFORTRANNULLOBJECT(ovLabel);
  *ierr = DMPlexCreateOverlapLabelFromLabels(*dm, *numLabels, label, value, *numExLabels, exLabel, exValue, *rootSection, *rootrank, *leafSection, *leafrank, ovLabel);
  if (*ierr) return;
  if (! null_ovLabel && !*(void**) ovLabel) *(void **) ovLabel = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateoverlapmigrationsf_ DMPLEXCREATEOVERLAPMIGRATIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateoverlapmigrationsf_ dmplexcreateoverlapmigrationsf
#endif
PETSC_EXTERN void dmplexcreateoverlapmigrationsf_(DM *dm, PetscSF *overlapSF, PetscSF *migrationSF, PetscErrorCode *ierr)
{
  PetscBool null_migrationSF = !*(void**) migrationSF ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(migrationSF);
  *ierr = DMPlexCreateOverlapMigrationSF(*dm, *overlapSF, migrationSF);
  if (*ierr) return;
  if (! null_migrationSF && !*(void**) migrationSF) *(void **) migrationSF = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexstratifymigrationsf_ DMPLEXSTRATIFYMIGRATIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexstratifymigrationsf_ dmplexstratifymigrationsf
#endif
PETSC_EXTERN void dmplexstratifymigrationsf_(DM *dm, PetscSF *sf, PetscSF *migrationSF, PetscErrorCode *ierr)
{
  PetscBool null_migrationSF = !*(void**) migrationSF ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(migrationSF);
  *ierr = DMPlexStratifyMigrationSF(*dm, *sf, migrationSF);
  if (*ierr) return;
  if (! null_migrationSF && !*(void**) migrationSF) *(void **) migrationSF = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexdistributefield_ DMPLEXDISTRIBUTEFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexdistributefield_ dmplexdistributefield
#endif
PETSC_EXTERN void dmplexdistributefield_(DM *dm, PetscSF *pointSF, PetscSection *originalSection, Vec *originalVec, PetscSection *newSection, Vec *newVec, PetscErrorCode *ierr)
{
  *ierr = DMPlexDistributeField(*dm, *pointSF, *originalSection, *originalVec, *newSection, *newVec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexdistributefieldis_ DMPLEXDISTRIBUTEFIELDIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexdistributefieldis_ dmplexdistributefieldis
#endif
PETSC_EXTERN void dmplexdistributefieldis_(DM *dm, PetscSF *pointSF, PetscSection *originalSection, IS *originalIS, PetscSection *newSection, IS *newIS, PetscErrorCode *ierr)
{
  PetscBool null_newIS = !*(void**) newIS ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newIS);
  *ierr = DMPlexDistributeFieldIS(*dm, *pointSF, *originalSection, *originalIS, *newSection, newIS);
  if (*ierr) return;
  if (! null_newIS && !*(void**) newIS) *(void **) newIS = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetpartitionbalance_ DMPLEXSETPARTITIONBALANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetpartitionbalance_ dmplexsetpartitionbalance
#endif
PETSC_EXTERN void dmplexsetpartitionbalance_(DM *dm, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetPartitionBalance(*dm, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetpartitionbalance_ DMPLEXGETPARTITIONBALANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetpartitionbalance_ dmplexgetpartitionbalance
#endif
PETSC_EXTERN void dmplexgetpartitionbalance_(DM *dm, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = DMPlexGetPartitionBalance(*dm, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatepointsf_ DMPLEXCREATEPOINTSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatepointsf_ dmplexcreatepointsf
#endif
PETSC_EXTERN void dmplexcreatepointsf_(DM *dm, PetscSF *migrationSF, PetscBool *ownership, PetscSF *pointSF, PetscErrorCode *ierr)
{
  PetscBool null_pointSF = !*(void**) pointSF ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pointSF);
  *ierr = DMPlexCreatePointSF(*dm, *migrationSF, *ownership ? PETSC_TRUE : PETSC_FALSE, pointSF);
  if (*ierr) return;
  if (! null_pointSF && !*(void**) pointSF) *(void **) pointSF = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmigrate_ DMPLEXMIGRATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmigrate_ dmplexmigrate
#endif
PETSC_EXTERN void dmplexmigrate_(DM *dm, PetscSF *sf, DM *targetDM, PetscErrorCode *ierr)
{
  *ierr = DMPlexMigrate(*dm, *sf, *targetDM);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexremapmigrationsf_ DMPLEXREMAPMIGRATIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexremapmigrationsf_ dmplexremapmigrationsf
#endif
PETSC_EXTERN void dmplexremapmigrationsf_(PetscSF *sfOverlap, PetscSF *sfMigration, PetscSF *sfMigrationNew, PetscErrorCode *ierr)
{
  PetscBool null_sfMigrationNew = !*(void**) sfMigrationNew ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sfMigrationNew);
  *ierr = DMPlexRemapMigrationSF(*sfOverlap, *sfMigration, sfMigrationNew);
  if (*ierr) return;
  if (! null_sfMigrationNew && !*(void**) sfMigrationNew) *(void **) sfMigrationNew = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexdistribute_ DMPLEXDISTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexdistribute_ dmplexdistribute
#endif
PETSC_EXTERN void dmplexdistribute_(DM *dm, PetscInt *overlap, PetscSF *sf, DM *dmParallel, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_dmParallel = !*(void**) dmParallel ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  CHKFORTRANNULLOBJECT(dmParallel);
  *ierr = DMPlexDistribute(*dm, *overlap, sf, dmParallel);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
  if (! null_dmParallel && !*(void**) dmParallel) *(void **) dmParallel = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexdistributeoverlap_ DMPLEXDISTRIBUTEOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexdistributeoverlap_ dmplexdistributeoverlap
#endif
PETSC_EXTERN void dmplexdistributeoverlap_(DM *dm, PetscInt *overlap, PetscSF *sf, DM *dmOverlap, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_dmOverlap = !*(void**) dmOverlap ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  CHKFORTRANNULLOBJECT(dmOverlap);
  *ierr = DMPlexDistributeOverlap(*dm, *overlap, sf, dmOverlap);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
  if (! null_dmOverlap && !*(void**) dmOverlap) *(void **) dmOverlap = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetoverlap_ DMPLEXGETOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetoverlap_ dmplexgetoverlap
#endif
PETSC_EXTERN void dmplexgetoverlap_(DM *dm, PetscInt *overlap, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(overlap);
  *ierr = DMPlexGetOverlap(*dm, overlap);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetoverlap_ DMPLEXSETOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetoverlap_ dmplexsetoverlap
#endif
PETSC_EXTERN void dmplexsetoverlap_(DM *dm, DM *dmSrc, PetscInt *overlap, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetOverlap(*dm, *dmSrc, *overlap);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexdistributesetdefault_ DMPLEXDISTRIBUTESETDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexdistributesetdefault_ dmplexdistributesetdefault
#endif
PETSC_EXTERN void dmplexdistributesetdefault_(DM *dm, PetscBool *dist, PetscErrorCode *ierr)
{
  *ierr = DMPlexDistributeSetDefault(*dm, *dist ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexdistributegetdefault_ DMPLEXDISTRIBUTEGETDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexdistributegetdefault_ dmplexdistributegetdefault
#endif
PETSC_EXTERN void dmplexdistributegetdefault_(DM *dm, PetscBool *dist, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(dist);
  *ierr = DMPlexDistributeGetDefault(*dm, dist);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetgatherdm_ DMPLEXGETGATHERDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetgatherdm_ dmplexgetgatherdm
#endif
PETSC_EXTERN void dmplexgetgatherdm_(DM *dm, PetscSF *sf, DM *gatherMesh, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_gatherMesh = !*(void**) gatherMesh ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  CHKFORTRANNULLOBJECT(gatherMesh);
  *ierr = DMPlexGetGatherDM(*dm, sf, gatherMesh);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
  if (! null_gatherMesh && !*(void**) gatherMesh) *(void **) gatherMesh = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetredundantdm_ DMPLEXGETREDUNDANTDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetredundantdm_ dmplexgetredundantdm
#endif
PETSC_EXTERN void dmplexgetredundantdm_(DM *dm, PetscSF *sf, DM *redundantMesh, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_redundantMesh = !*(void**) redundantMesh ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  CHKFORTRANNULLOBJECT(redundantMesh);
  *ierr = DMPlexGetRedundantDM(*dm, sf, redundantMesh);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
  if (! null_redundantMesh && !*(void**) redundantMesh) *(void **) redundantMesh = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexisdistributed_ DMPLEXISDISTRIBUTED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexisdistributed_ dmplexisdistributed
#endif
PETSC_EXTERN void dmplexisdistributed_(DM *dm, PetscBool *distributed, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(distributed);
  *ierr = DMPlexIsDistributed(*dm, distributed);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexdistributionsetname_ DMPLEXDISTRIBUTIONSETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexdistributionsetname_ dmplexdistributionsetname
#endif
PETSC_EXTERN void dmplexdistributionsetname_(DM *dm, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMPlexDistributionSetName(*dm, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexdistributiongetname_ DMPLEXDISTRIBUTIONGETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexdistributiongetname_ dmplexdistributiongetname
#endif
PETSC_EXTERN void dmplexdistributiongetname_(DM *dm, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = DMPlexDistributionGetName(*dm, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
