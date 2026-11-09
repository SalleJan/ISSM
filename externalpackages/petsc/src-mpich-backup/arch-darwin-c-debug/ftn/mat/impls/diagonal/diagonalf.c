#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdiagonalgetdiagonal_ MATDIAGONALGETDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdiagonalgetdiagonal_ matdiagonalgetdiagonal
#endif
PETSC_EXTERN void matdiagonalgetdiagonal_(Mat *A, Vec *diag, PetscErrorCode *ierr)
{
  PetscBool null_diag = !*(void**) diag ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(diag);
  *ierr = MatDiagonalGetDiagonal(*A, diag);
  if (*ierr) return;
  if (! null_diag && !*(void**) diag) *(void **) diag = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdiagonalrestorediagonal_ MATDIAGONALRESTOREDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdiagonalrestorediagonal_ matdiagonalrestorediagonal
#endif
PETSC_EXTERN void matdiagonalrestorediagonal_(Mat *A, Vec *diag, PetscErrorCode *ierr)
{
  PetscBool null_diag = !*(void**) diag ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(diag);
  *ierr = MatDiagonalRestoreDiagonal(*A, diag);
  if (*ierr) return;
  if (! null_diag && !*(void**) diag) *(void **) diag = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdiagonalgetinversediagonal_ MATDIAGONALGETINVERSEDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdiagonalgetinversediagonal_ matdiagonalgetinversediagonal
#endif
PETSC_EXTERN void matdiagonalgetinversediagonal_(Mat *A, Vec *inv_diag, PetscErrorCode *ierr)
{
  PetscBool null_inv_diag = !*(void**) inv_diag ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(inv_diag);
  *ierr = MatDiagonalGetInverseDiagonal(*A, inv_diag);
  if (*ierr) return;
  if (! null_inv_diag && !*(void**) inv_diag) *(void **) inv_diag = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdiagonalrestoreinversediagonal_ MATDIAGONALRESTOREINVERSEDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdiagonalrestoreinversediagonal_ matdiagonalrestoreinversediagonal
#endif
PETSC_EXTERN void matdiagonalrestoreinversediagonal_(Mat *A, Vec *inv_diag, PetscErrorCode *ierr)
{
  PetscBool null_inv_diag = !*(void**) inv_diag ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(inv_diag);
  *ierr = MatDiagonalRestoreInverseDiagonal(*A, inv_diag);
  if (*ierr) return;
  if (! null_inv_diag && !*(void**) inv_diag) *(void **) inv_diag = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdiagonalsetdiagonal_ MATDIAGONALSETDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdiagonalsetdiagonal_ matdiagonalsetdiagonal
#endif
PETSC_EXTERN void matdiagonalsetdiagonal_(Mat *J, Vec *diag, PetscErrorCode *ierr)
{
  *ierr = MatDiagonalSetDiagonal(*J, *diag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatediagonal_ MATCREATEDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatediagonal_ matcreatediagonal
#endif
PETSC_EXTERN void matcreatediagonal_(Vec *diag, Mat *J, PetscErrorCode *ierr)
{
  PetscBool null_J = !*(void**) J ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(J);
  *ierr = MatCreateDiagonal(*diag, J);
  if (*ierr) return;
  if (! null_J && !*(void**) J) *(void **) J = (void *)-2;
}
