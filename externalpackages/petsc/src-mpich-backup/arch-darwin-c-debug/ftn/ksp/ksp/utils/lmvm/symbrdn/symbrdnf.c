#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsymbroydengetphi_ MATLMVMSYMBROYDENGETPHI
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsymbroydengetphi_ matlmvmsymbroydengetphi
#endif
PETSC_EXTERN void matlmvmsymbroydengetphi_(Mat *B, PetscReal *phi, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(phi);
  *ierr = MatLMVMSymBroydenGetPhi(*B, phi);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsymbroydensetphi_ MATLMVMSYMBROYDENSETPHI
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsymbroydensetphi_ matlmvmsymbroydensetphi
#endif
PETSC_EXTERN void matlmvmsymbroydensetphi_(Mat *B, PetscReal *phi, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSymBroydenSetPhi(*B, *phi);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsymbadbroydengetpsi_ MATLMVMSYMBADBROYDENGETPSI
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsymbadbroydengetpsi_ matlmvmsymbadbroydengetpsi
#endif
PETSC_EXTERN void matlmvmsymbadbroydengetpsi_(Mat *B, PetscReal *psi, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(psi);
  *ierr = MatLMVMSymBadBroydenGetPsi(*B, psi);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsymbadbroydensetpsi_ MATLMVMSYMBADBROYDENSETPSI
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsymbadbroydensetpsi_ matlmvmsymbadbroydensetpsi
#endif
PETSC_EXTERN void matlmvmsymbadbroydensetpsi_(Mat *B, PetscReal *psi, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSymBadBroydenSetPsi(*B, *psi);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsymbroydensetdelta_ MATLMVMSYMBROYDENSETDELTA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsymbroydensetdelta_ matlmvmsymbroydensetdelta
#endif
PETSC_EXTERN void matlmvmsymbroydensetdelta_(Mat *B, PetscScalar *delta, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSymBroydenSetDelta(*B, *delta);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsymbroydensetscaletype_ MATLMVMSYMBROYDENSETSCALETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsymbroydensetscaletype_ matlmvmsymbroydensetscaletype
#endif
PETSC_EXTERN void matlmvmsymbroydensetscaletype_(Mat *B, MatLMVMSymBroydenScaleType *stype, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSymBroydenSetScaleType(*B, *stype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatelmvmsymbroyden_ MATCREATELMVMSYMBROYDEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatelmvmsymbroyden_ matcreatelmvmsymbroyden
#endif
PETSC_EXTERN void matcreatelmvmsymbroyden_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatCreateLMVMSymBroyden(MPI_Comm_f2c(*(comm)), *n, *M_N, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
