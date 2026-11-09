#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatesnesmfmore_ MATCREATESNESMFMORE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatesnesmfmore_ matcreatesnesmfmore
#endif
PETSC_EXTERN void matcreatesnesmfmore_(SNES *snes, Vec *x, Mat *J, PetscErrorCode *ierr)
{
  PetscBool null_J = !*(void**) J ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(J);
  *ierr = MatCreateSNESMFMore(*snes, *x, J);
  if (*ierr) return;
  if (! null_J && !*(void**) J) *(void **) J = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsnesmfmoresetparameters_ MATSNESMFMORESETPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsnesmfmoresetparameters_ matsnesmfmoresetparameters
#endif
PETSC_EXTERN void matsnesmfmoresetparameters_(Mat *mat, PetscReal *error, PetscReal *umin, PetscReal *h, PetscErrorCode *ierr)
{
  *ierr = MatSNESMFMoreSetParameters(*mat, *error, *umin, *h);
  if (*ierr) return;
}
