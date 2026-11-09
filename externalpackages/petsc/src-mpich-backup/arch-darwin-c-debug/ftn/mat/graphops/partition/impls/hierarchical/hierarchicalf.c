#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioninghierarchicalgetfineparts_ MATPARTITIONINGHIERARCHICALGETFINEPARTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioninghierarchicalgetfineparts_ matpartitioninghierarchicalgetfineparts
#endif
PETSC_EXTERN void matpartitioninghierarchicalgetfineparts_(MatPartitioning *part, IS *fineparts, PetscErrorCode *ierr)
{
  PetscBool null_fineparts = !*(void**) fineparts ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fineparts);
  *ierr = MatPartitioningHierarchicalGetFineparts(*part, fineparts);
  if (*ierr) return;
  if (! null_fineparts && !*(void**) fineparts) *(void **) fineparts = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioninghierarchicalgetcoarseparts_ MATPARTITIONINGHIERARCHICALGETCOARSEPARTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioninghierarchicalgetcoarseparts_ matpartitioninghierarchicalgetcoarseparts
#endif
PETSC_EXTERN void matpartitioninghierarchicalgetcoarseparts_(MatPartitioning *part, IS *coarseparts, PetscErrorCode *ierr)
{
  PetscBool null_coarseparts = !*(void**) coarseparts ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(coarseparts);
  *ierr = MatPartitioningHierarchicalGetCoarseparts(*part, coarseparts);
  if (*ierr) return;
  if (! null_coarseparts && !*(void**) coarseparts) *(void **) coarseparts = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioninghierarchicalsetncoarseparts_ MATPARTITIONINGHIERARCHICALSETNCOARSEPARTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioninghierarchicalsetncoarseparts_ matpartitioninghierarchicalsetncoarseparts
#endif
PETSC_EXTERN void matpartitioninghierarchicalsetncoarseparts_(MatPartitioning *part, PetscInt *ncoarseparts, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningHierarchicalSetNcoarseparts(*part, *ncoarseparts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioninghierarchicalsetnfineparts_ MATPARTITIONINGHIERARCHICALSETNFINEPARTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioninghierarchicalsetnfineparts_ matpartitioninghierarchicalsetnfineparts
#endif
PETSC_EXTERN void matpartitioninghierarchicalsetnfineparts_(MatPartitioning *part, PetscInt *nfineparts, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningHierarchicalSetNfineparts(*part, *nfineparts);
  if (*ierr) return;
}
