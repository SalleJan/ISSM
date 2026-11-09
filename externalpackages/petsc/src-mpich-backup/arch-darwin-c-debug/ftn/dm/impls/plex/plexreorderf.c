#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetordering_ DMPLEXGETORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetordering_ dmplexgetordering
#endif
PETSC_EXTERN void dmplexgetordering_(DM *dm, char *otype, DMLabel *label, IS *perm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_otype)
{
  PetscBool null_perm = !*(void**) perm ? PETSC_TRUE : PETSC_FALSE;
  char* c_otype;
  FIXCHAR(otype, l_otype, c_otype);
  CHKFORTRANNULLOBJECT(perm);
  *ierr = DMPlexGetOrdering(*dm, c_otype, *label, perm);
  if (*ierr) return;
  FREECHAR(otype, c_otype);
  if (! null_perm && !*(void**) perm) *(void **) perm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetordering1d_ DMPLEXGETORDERING1D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetordering1d_ dmplexgetordering1d
#endif
PETSC_EXTERN void dmplexgetordering1d_(DM *dm, IS *perm, PetscErrorCode *ierr)
{
  PetscBool null_perm = !*(void**) perm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(perm);
  *ierr = DMPlexGetOrdering1D(*dm, perm);
  if (*ierr) return;
  if (! null_perm && !*(void**) perm) *(void **) perm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpermute_ DMPLEXPERMUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpermute_ dmplexpermute
#endif
PETSC_EXTERN void dmplexpermute_(DM *dm, IS *perm, DM *pdm, PetscErrorCode *ierr)
{
  PetscBool null_pdm = !*(void**) pdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pdm);
  *ierr = DMPlexPermute(*dm, *perm, pdm);
  if (*ierr) return;
  if (! null_pdm && !*(void**) pdm) *(void **) pdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexreordersetdefault_ DMPLEXREORDERSETDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexreordersetdefault_ dmplexreordersetdefault
#endif
PETSC_EXTERN void dmplexreordersetdefault_(DM *dm, DMReorderDefaultFlag *reorder, PetscErrorCode *ierr)
{
  *ierr = DMPlexReorderSetDefault(*dm, *reorder);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexreordergetdefault_ DMPLEXREORDERGETDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexreordergetdefault_ dmplexreordergetdefault
#endif
PETSC_EXTERN void dmplexreordergetdefault_(DM *dm, DMReorderDefaultFlag *reorder, PetscErrorCode *ierr)
{
  *ierr = DMPlexReorderGetDefault(*dm, reorder);
  if (*ierr) return;
}
