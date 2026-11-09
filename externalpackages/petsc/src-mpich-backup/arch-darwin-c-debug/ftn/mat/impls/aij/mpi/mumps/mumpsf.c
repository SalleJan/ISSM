#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpsseticntl_ MATMUMPSSETICNTL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpsseticntl_ matmumpsseticntl
#endif
PETSC_EXTERN void matmumpsseticntl_(Mat *F, PetscInt *icntl, PetscInt *ival, PetscErrorCode *ierr)
{
  *ierr = MatMumpsSetIcntl(*F, *icntl, *ival);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpsgeticntl_ MATMUMPSGETICNTL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpsgeticntl_ matmumpsgeticntl
#endif
PETSC_EXTERN void matmumpsgeticntl_(Mat *F, PetscInt *icntl, PetscInt *ival, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ival);
  *ierr = MatMumpsGetIcntl(*F, *icntl, ival);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpssetcntl_ MATMUMPSSETCNTL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpssetcntl_ matmumpssetcntl
#endif
PETSC_EXTERN void matmumpssetcntl_(Mat *F, PetscInt *icntl, PetscReal *val, PetscErrorCode *ierr)
{
  *ierr = MatMumpsSetCntl(*F, *icntl, *val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpsgetcntl_ MATMUMPSGETCNTL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpsgetcntl_ matmumpsgetcntl
#endif
PETSC_EXTERN void matmumpsgetcntl_(Mat *F, PetscInt *icntl, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(val);
  *ierr = MatMumpsGetCntl(*F, *icntl, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpsgetinverse_ MATMUMPSGETINVERSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpsgetinverse_ matmumpsgetinverse
#endif
PETSC_EXTERN void matmumpsgetinverse_(Mat *F, Mat *spRHS, PetscErrorCode *ierr)
{
  *ierr = MatMumpsGetInverse(*F, *spRHS);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpsgetinversetranspose_ MATMUMPSGETINVERSETRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpsgetinversetranspose_ matmumpsgetinversetranspose
#endif
PETSC_EXTERN void matmumpsgetinversetranspose_(Mat *F, Mat *spRHST, PetscErrorCode *ierr)
{
  *ierr = MatMumpsGetInverseTranspose(*F, *spRHST);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpssetblk_ MATMUMPSSETBLK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpssetblk_ matmumpssetblk
#endif
PETSC_EXTERN void matmumpssetblk_(Mat *F, PetscInt *nblk, const PetscInt blkvar[], const PetscInt blkptr[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(blkvar);
  CHKFORTRANNULLINTEGER(blkptr);
  *ierr = MatMumpsSetBlk(*F, *nblk, blkvar, blkptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpsgetinfo_ MATMUMPSGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpsgetinfo_ matmumpsgetinfo
#endif
PETSC_EXTERN void matmumpsgetinfo_(Mat *F, PetscInt *icntl, PetscInt *ival, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ival);
  *ierr = MatMumpsGetInfo(*F, *icntl, ival);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpsgetinfog_ MATMUMPSGETINFOG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpsgetinfog_ matmumpsgetinfog
#endif
PETSC_EXTERN void matmumpsgetinfog_(Mat *F, PetscInt *icntl, PetscInt *ival, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ival);
  *ierr = MatMumpsGetInfog(*F, *icntl, ival);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpsgetrinfo_ MATMUMPSGETRINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpsgetrinfo_ matmumpsgetrinfo
#endif
PETSC_EXTERN void matmumpsgetrinfo_(Mat *F, PetscInt *icntl, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(val);
  *ierr = MatMumpsGetRinfo(*F, *icntl, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpsgetrinfog_ MATMUMPSGETRINFOG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpsgetrinfog_ matmumpsgetrinfog
#endif
PETSC_EXTERN void matmumpsgetrinfog_(Mat *F, PetscInt *icntl, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(val);
  *ierr = MatMumpsGetRinfog(*F, *icntl, val);
  if (*ierr) return;
}
