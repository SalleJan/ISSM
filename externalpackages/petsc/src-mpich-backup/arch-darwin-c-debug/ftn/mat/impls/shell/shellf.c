#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matshellgetcontextcptr_ MATSHELLGETCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matshellgetcontextcptr_ matshellgetcontextcptr
#endif
PETSC_EXTERN void matshellgetcontextcptr_(Mat *mat, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = MatShellGetContext(*mat, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateshell_ MATCREATESHELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateshell_ matcreateshell
#endif
PETSC_EXTERN void matcreateshell_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscCtx ctx, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateShell(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, ctx, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matshellsetcontext_ MATSHELLSETCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matshellsetcontext_ matshellsetcontext
#endif
PETSC_EXTERN void matshellsetcontext_(Mat *mat, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = MatShellSetContext(*mat, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matshellsetvectype_ MATSHELLSETVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matshellsetvectype_ matshellsetvectype
#endif
PETSC_EXTERN void matshellsetvectype_(Mat *mat, char *vtype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_vtype)
{
  char* c_vtype;
  FIXCHAR(vtype, l_vtype, c_vtype);
  *ierr = MatShellSetVecType(*mat, c_vtype);
  if (*ierr) return;
  FREECHAR(vtype, c_vtype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matshellsetmanagescalingshifts_ MATSHELLSETMANAGESCALINGSHIFTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matshellsetmanagescalingshifts_ matshellsetmanagescalingshifts
#endif
PETSC_EXTERN void matshellsetmanagescalingshifts_(Mat *A, PetscErrorCode *ierr)
{
  *ierr = MatShellSetManageScalingShifts(*A);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matisshell_ MATISSHELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matisshell_ matisshell
#endif
PETSC_EXTERN void matisshell_(Mat *mat, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatIsShell(*mat, flg);
  if (*ierr) return;
}
