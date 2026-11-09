#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsnesmfgetsnes_ MATSNESMFGETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsnesmfgetsnes_ matsnesmfgetsnes
#endif
PETSC_EXTERN void matsnesmfgetsnes_(Mat *J, SNES *snes, PetscErrorCode *ierr)
{
  PetscBool null_snes = !*(void**) snes ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(snes);
  *ierr = MatSNESMFGetSNES(*J, snes);
  if (*ierr) return;
  if (! null_snes && !*(void**) snes) *(void **) snes = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsnesmfsetreusebase_ MATSNESMFSETREUSEBASE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsnesmfsetreusebase_ matsnesmfsetreusebase
#endif
PETSC_EXTERN void matsnesmfsetreusebase_(Mat *J, PetscBool *use, PetscErrorCode *ierr)
{
  *ierr = MatSNESMFSetReuseBase(*J, *use ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsnesmfgetreusebase_ MATSNESMFGETREUSEBASE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsnesmfgetreusebase_ matsnesmfgetreusebase
#endif
PETSC_EXTERN void matsnesmfgetreusebase_(Mat *J, PetscBool *use, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(use);
  *ierr = MatSNESMFGetReuseBase(*J, use);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatesnesmf_ MATCREATESNESMF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatesnesmf_ matcreatesnesmf
#endif
PETSC_EXTERN void matcreatesnesmf_(SNES *snes, Mat *J, PetscErrorCode *ierr)
{
  PetscBool null_J = !*(void**) J ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(J);
  *ierr = MatCreateSNESMF(*snes, J);
  if (*ierr) return;
  if (! null_J && !*(void**) J) *(void **) J = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdcomputejacobian_ MATMFFDCOMPUTEJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdcomputejacobian_ matmffdcomputejacobian
#endif
PETSC_EXTERN void matmffdcomputejacobian_(SNES *snes, Vec *x, Mat *jac, Mat *B, void *dummy, PetscErrorCode *ierr)
{
  *ierr = MatMFFDComputeJacobian(*snes, *x, *jac, *B, dummy);
  if (*ierr) return;
}
