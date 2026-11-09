#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pccompositesettype_ PCCOMPOSITESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pccompositesettype_ pccompositesettype
#endif
PETSC_EXTERN void pccompositesettype_(PC *pc, PCCompositeType *type, PetscErrorCode *ierr)
{
  *ierr = PCCompositeSetType(*pc, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pccompositegettype_ PCCOMPOSITEGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pccompositegettype_ pccompositegettype
#endif
PETSC_EXTERN void pccompositegettype_(PC *pc, PCCompositeType *type, PetscErrorCode *ierr)
{
  *ierr = PCCompositeGetType(*pc, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pccompositespecialsetalpha_ PCCOMPOSITESPECIALSETALPHA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pccompositespecialsetalpha_ pccompositespecialsetalpha
#endif
PETSC_EXTERN void pccompositespecialsetalpha_(PC *pc, PetscScalar *alpha, PetscErrorCode *ierr)
{
  *ierr = PCCompositeSpecialSetAlpha(*pc, *alpha);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pccompositespecialsetalphamat_ PCCOMPOSITESPECIALSETALPHAMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pccompositespecialsetalphamat_ pccompositespecialsetalphamat
#endif
PETSC_EXTERN void pccompositespecialsetalphamat_(PC *pc, Mat *alpha_mat, PetscErrorCode *ierr)
{
  *ierr = PCCompositeSpecialSetAlphaMat(*pc, *alpha_mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pccompositeaddpctype_ PCCOMPOSITEADDPCTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pccompositeaddpctype_ pccompositeaddpctype
#endif
PETSC_EXTERN void pccompositeaddpctype_(PC *pc, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PCCompositeAddPCType(*pc, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pccompositeaddpc_ PCCOMPOSITEADDPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pccompositeaddpc_ pccompositeaddpc
#endif
PETSC_EXTERN void pccompositeaddpc_(PC *pc, PC *subpc, PetscErrorCode *ierr)
{
  *ierr = PCCompositeAddPC(*pc, *subpc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pccompositegetnumberpc_ PCCOMPOSITEGETNUMBERPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pccompositegetnumberpc_ pccompositegetnumberpc
#endif
PETSC_EXTERN void pccompositegetnumberpc_(PC *pc, PetscInt *num, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(num);
  *ierr = PCCompositeGetNumberPC(*pc, num);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pccompositegetpc_ PCCOMPOSITEGETPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pccompositegetpc_ pccompositegetpc
#endif
PETSC_EXTERN void pccompositegetpc_(PC *pc, PetscInt *n, PC *subpc, PetscErrorCode *ierr)
{
  PetscBool null_subpc = !*(void**) subpc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subpc);
  *ierr = PCCompositeGetPC(*pc, *n, subpc);
  if (*ierr) return;
  if (! null_subpc && !*(void**) subpc) *(void **) subpc = (void *)-2;
}
