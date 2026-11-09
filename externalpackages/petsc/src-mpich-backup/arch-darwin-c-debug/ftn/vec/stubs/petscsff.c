#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcreateembeddedsf_ PETSCSFCREATEEMBEDDEDSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcreateembeddedsf_ petscsfcreateembeddedsf
#endif
PETSC_EXTERN void petscsfcreateembeddedsf_(PetscSF *sf, PetscInt *nselected, const PetscInt selected[], PetscSF *esf, PetscErrorCode *ierr)
{
  PetscBool null_esf = !*(void**) esf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(selected);
  CHKFORTRANNULLOBJECT(esf);
  *ierr = PetscSFCreateEmbeddedSF(*sf, *nselected, selected, esf);
  if (*ierr) return;
  if (! null_esf && !*(void**) esf) *(void **) esf = (void *)-2;
}
