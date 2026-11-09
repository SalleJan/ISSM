#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningptscotchsetimbalance_ MATPARTITIONINGPTSCOTCHSETIMBALANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningptscotchsetimbalance_ matpartitioningptscotchsetimbalance
#endif
PETSC_EXTERN void matpartitioningptscotchsetimbalance_(MatPartitioning *part, PetscReal *imb, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningPTScotchSetImbalance(*part, *imb);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningptscotchgetimbalance_ MATPARTITIONINGPTSCOTCHGETIMBALANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningptscotchgetimbalance_ matpartitioningptscotchgetimbalance
#endif
PETSC_EXTERN void matpartitioningptscotchgetimbalance_(MatPartitioning *part, PetscReal *imb, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(imb);
  *ierr = MatPartitioningPTScotchGetImbalance(*part, imb);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningptscotchsetstrategy_ MATPARTITIONINGPTSCOTCHSETSTRATEGY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningptscotchsetstrategy_ matpartitioningptscotchsetstrategy
#endif
PETSC_EXTERN void matpartitioningptscotchsetstrategy_(MatPartitioning *part, MPPTScotchStrategyType *strategy, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningPTScotchSetStrategy(*part, *strategy);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningptscotchgetstrategy_ MATPARTITIONINGPTSCOTCHGETSTRATEGY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningptscotchgetstrategy_ matpartitioningptscotchgetstrategy
#endif
PETSC_EXTERN void matpartitioningptscotchgetstrategy_(MatPartitioning *part, MPPTScotchStrategyType *strategy, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningPTScotchGetStrategy(*part, strategy);
  if (*ierr) return;
}
