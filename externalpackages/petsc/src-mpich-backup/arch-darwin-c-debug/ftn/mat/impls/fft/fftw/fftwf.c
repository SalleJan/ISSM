#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscatterpetsctofftw_ VECSCATTERPETSCTOFFTW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscatterpetsctofftw_ vecscatterpetsctofftw
#endif
PETSC_EXTERN void vecscatterpetsctofftw_(Mat *A, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecScatterPetscToFFTW(*A, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscatterfftwtopetsc_ VECSCATTERFFTWTOPETSC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscatterfftwtopetsc_ vecscatterfftwtopetsc
#endif
PETSC_EXTERN void vecscatterfftwtopetsc_(Mat *A, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecScatterFFTWToPetsc(*A, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatevecsfftw_ MATCREATEVECSFFTW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatevecsfftw_ matcreatevecsfftw
#endif
PETSC_EXTERN void matcreatevecsfftw_(Mat *A, Vec *x, Vec *y, Vec *z, PetscErrorCode *ierr)
{
  PetscBool null_x = !*(void**) x ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_y = !*(void**) y ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_z = !*(void**) z ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(x);
  CHKFORTRANNULLOBJECT(y);
  CHKFORTRANNULLOBJECT(z);
  *ierr = MatCreateVecsFFTW(*A, x, y, z);
  if (*ierr) return;
  if (! null_x && !*(void**) x) *(void **) x = (void *)-2;
  if (! null_y && !*(void**) y) *(void **) y = (void *)-2;
  if (! null_z && !*(void**) z) *(void **) z = (void *)-2;
}
