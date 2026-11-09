#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcjacobisetuseabs_ PCJACOBISETUSEABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcjacobisetuseabs_ pcjacobisetuseabs
#endif
PETSC_EXTERN void pcjacobisetuseabs_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCJacobiSetUseAbs(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcjacobigetuseabs_ PCJACOBIGETUSEABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcjacobigetuseabs_ pcjacobigetuseabs
#endif
PETSC_EXTERN void pcjacobigetuseabs_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCJacobiGetUseAbs(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcjacobisetrowl1scale_ PCJACOBISETROWL1SCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcjacobisetrowl1scale_ pcjacobisetrowl1scale
#endif
PETSC_EXTERN void pcjacobisetrowl1scale_(PC *pc, PetscReal *scale, PetscErrorCode *ierr)
{
  *ierr = PCJacobiSetRowl1Scale(*pc, *scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcjacobigetrowl1scale_ PCJACOBIGETROWL1SCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcjacobigetrowl1scale_ pcjacobigetrowl1scale
#endif
PETSC_EXTERN void pcjacobigetrowl1scale_(PC *pc, PetscReal *scale, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(scale);
  *ierr = PCJacobiGetRowl1Scale(*pc, scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcjacobisetfixdiagonal_ PCJACOBISETFIXDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcjacobisetfixdiagonal_ pcjacobisetfixdiagonal
#endif
PETSC_EXTERN void pcjacobisetfixdiagonal_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCJacobiSetFixDiagonal(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcjacobigetfixdiagonal_ PCJACOBIGETFIXDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcjacobigetfixdiagonal_ pcjacobigetfixdiagonal
#endif
PETSC_EXTERN void pcjacobigetfixdiagonal_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCJacobiGetFixDiagonal(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcjacobigetdiagonal_ PCJACOBIGETDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcjacobigetdiagonal_ pcjacobigetdiagonal
#endif
PETSC_EXTERN void pcjacobigetdiagonal_(PC *pc, Vec *diagonal, Vec *diagonal_sqrt, PetscErrorCode *ierr)
{
  *ierr = PCJacobiGetDiagonal(*pc, *diagonal, *diagonal_sqrt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcjacobisettype_ PCJACOBISETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcjacobisettype_ pcjacobisettype
#endif
PETSC_EXTERN void pcjacobisettype_(PC *pc, PCJacobiType *type, PetscErrorCode *ierr)
{
  *ierr = PCJacobiSetType(*pc, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcjacobigettype_ PCJACOBIGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcjacobigettype_ pcjacobigettype
#endif
PETSC_EXTERN void pcjacobigettype_(PC *pc, PCJacobiType *type, PetscErrorCode *ierr)
{
  *ierr = PCJacobiGetType(*pc, type);
  if (*ierr) return;
}
