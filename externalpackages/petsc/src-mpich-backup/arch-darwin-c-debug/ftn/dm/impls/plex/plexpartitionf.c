#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetpartitioner_ DMPLEXGETPARTITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetpartitioner_ dmplexgetpartitioner
#endif
PETSC_EXTERN void dmplexgetpartitioner_(DM *dm, PetscPartitioner *part, PetscErrorCode *ierr)
{
  PetscBool null_part = !*(void**) part ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(part);
  *ierr = DMPlexGetPartitioner(*dm, part);
  if (*ierr) return;
  if (! null_part && !*(void**) part) *(void **) part = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetpartitioner_ DMPLEXSETPARTITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetpartitioner_ dmplexsetpartitioner
#endif
PETSC_EXTERN void dmplexsetpartitioner_(DM *dm, PetscPartitioner *part, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetPartitioner(*dm, *part);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpartitionlabelclosure_ DMPLEXPARTITIONLABELCLOSURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpartitionlabelclosure_ dmplexpartitionlabelclosure
#endif
PETSC_EXTERN void dmplexpartitionlabelclosure_(DM *dm, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMPlexPartitionLabelClosure(*dm, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpartitionlabeladjacency_ DMPLEXPARTITIONLABELADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpartitionlabeladjacency_ dmplexpartitionlabeladjacency
#endif
PETSC_EXTERN void dmplexpartitionlabeladjacency_(DM *dm, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMPlexPartitionLabelAdjacency(*dm, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpartitionlabelpropagate_ DMPLEXPARTITIONLABELPROPAGATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpartitionlabelpropagate_ dmplexpartitionlabelpropagate
#endif
PETSC_EXTERN void dmplexpartitionlabelpropagate_(DM *dm, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMPlexPartitionLabelPropagate(*dm, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpartitionlabelinvert_ DMPLEXPARTITIONLABELINVERT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpartitionlabelinvert_ dmplexpartitionlabelinvert
#endif
PETSC_EXTERN void dmplexpartitionlabelinvert_(DM *dm, DMLabel *rootLabel, PetscSF *processSF, DMLabel *leafLabel, PetscErrorCode *ierr)
{
  *ierr = DMPlexPartitionLabelInvert(*dm, *rootLabel, *processSF, *leafLabel);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpartitionlabelcreatesf_ DMPLEXPARTITIONLABELCREATESF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpartitionlabelcreatesf_ dmplexpartitionlabelcreatesf
#endif
PETSC_EXTERN void dmplexpartitionlabelcreatesf_(DM *dm, DMLabel *label, PetscBool *sortRanks, PetscSF *sf, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  *ierr = DMPlexPartitionLabelCreateSF(*dm, *label, *sortRanks ? PETSC_TRUE : PETSC_FALSE, sf);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexrebalancesharedpoints_ DMPLEXREBALANCESHAREDPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexrebalancesharedpoints_ dmplexrebalancesharedpoints
#endif
PETSC_EXTERN void dmplexrebalancesharedpoints_(DM *dm, PetscInt *entityDepth, PetscBool *useInitialGuess, PetscBool *parallel, PetscBool *success, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(success);
  *ierr = DMPlexRebalanceSharedPoints(*dm, *entityDepth, *useInitialGuess ? PETSC_TRUE : PETSC_FALSE, *parallel ? PETSC_TRUE : PETSC_FALSE, success);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionerdmplexpartition_ PETSCPARTITIONERDMPLEXPARTITION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionerdmplexpartition_ petscpartitionerdmplexpartition
#endif
PETSC_EXTERN void petscpartitionerdmplexpartition_(PetscPartitioner *part, DM *dm, PetscSection *targetSection, PetscSection *partSection, IS *partition, PetscErrorCode *ierr)
{
  PetscBool null_partition = !*(void**) partition ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(partition);
  *ierr = PetscPartitionerDMPlexPartition(*part, *dm, *targetSection, *partSection, partition);
  if (*ierr) return;
  if (! null_partition && !*(void**) partition) *(void **) partition = (void *)-2;
}
