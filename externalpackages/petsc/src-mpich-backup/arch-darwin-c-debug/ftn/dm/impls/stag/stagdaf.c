#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagvecsplittodmda_ DMSTAGVECSPLITTODMDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagvecsplittodmda_ dmstagvecsplittodmda
#endif
PETSC_EXTERN void dmstagvecsplittodmda_(DM *dm, Vec *vec, DMStagStencilLocation *loc, PetscInt *c, DM *pda, Vec *pdavec, PetscErrorCode *ierr)
{
  PetscBool null_pda = !*(void**) pda ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_pdavec = !*(void**) pdavec ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pda);
  CHKFORTRANNULLOBJECT(pdavec);
  *ierr = DMStagVecSplitToDMDA(*dm, *vec, *loc, *c, pda, pdavec);
  if (*ierr) return;
  if (! null_pda && !*(void**) pda) *(void **) pda = (void *)-2;
  if (! null_pdavec && !*(void**) pdavec) *(void **) pdavec = (void *)-2;
}
