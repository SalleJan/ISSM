#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningpartysetglobal_ MATPARTITIONINGPARTYSETGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningpartysetglobal_ matpartitioningpartysetglobal
#endif
PETSC_EXTERN void matpartitioningpartysetglobal_(MatPartitioning *part, char global[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_global)
{
  char* c_global;
  FIXCHAR(global, l_global, c_global);
  *ierr = MatPartitioningPartySetGlobal(*part, c_global);
  if (*ierr) return;
  FREECHAR(global, c_global);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningpartysetlocal_ MATPARTITIONINGPARTYSETLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningpartysetlocal_ matpartitioningpartysetlocal
#endif
PETSC_EXTERN void matpartitioningpartysetlocal_(MatPartitioning *part, char local[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_local)
{
  char* c_local;
  FIXCHAR(local, l_local, c_local);
  *ierr = MatPartitioningPartySetLocal(*part, c_local);
  if (*ierr) return;
  FREECHAR(local, c_local);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningpartysetcoarselevel_ MATPARTITIONINGPARTYSETCOARSELEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningpartysetcoarselevel_ matpartitioningpartysetcoarselevel
#endif
PETSC_EXTERN void matpartitioningpartysetcoarselevel_(MatPartitioning *part, PetscReal *level, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningPartySetCoarseLevel(*part, *level);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningpartysetmatchoptimization_ MATPARTITIONINGPARTYSETMATCHOPTIMIZATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningpartysetmatchoptimization_ matpartitioningpartysetmatchoptimization
#endif
PETSC_EXTERN void matpartitioningpartysetmatchoptimization_(MatPartitioning *part, PetscBool *opt, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningPartySetMatchOptimization(*part, *opt ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningpartysetbipart_ MATPARTITIONINGPARTYSETBIPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningpartysetbipart_ matpartitioningpartysetbipart
#endif
PETSC_EXTERN void matpartitioningpartysetbipart_(MatPartitioning *part, PetscBool *bp, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningPartySetBipart(*part, *bp ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
