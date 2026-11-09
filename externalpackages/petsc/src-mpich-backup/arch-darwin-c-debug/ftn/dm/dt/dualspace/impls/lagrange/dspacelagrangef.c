#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangegetcontinuity_ PETSCDUALSPACELAGRANGEGETCONTINUITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangegetcontinuity_ petscdualspacelagrangegetcontinuity
#endif
PETSC_EXTERN void petscdualspacelagrangegetcontinuity_(PetscDualSpace *sp, PetscBool *continuous, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(continuous);
  *ierr = PetscDualSpaceLagrangeGetContinuity(*sp, continuous);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangesetcontinuity_ PETSCDUALSPACELAGRANGESETCONTINUITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangesetcontinuity_ petscdualspacelagrangesetcontinuity
#endif
PETSC_EXTERN void petscdualspacelagrangesetcontinuity_(PetscDualSpace *sp, PetscBool *continuous, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceLagrangeSetContinuity(*sp, *continuous ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangegettensor_ PETSCDUALSPACELAGRANGEGETTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangegettensor_ petscdualspacelagrangegettensor
#endif
PETSC_EXTERN void petscdualspacelagrangegettensor_(PetscDualSpace *sp, PetscBool *tensor, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(tensor);
  *ierr = PetscDualSpaceLagrangeGetTensor(*sp, tensor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangesettensor_ PETSCDUALSPACELAGRANGESETTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangesettensor_ petscdualspacelagrangesettensor
#endif
PETSC_EXTERN void petscdualspacelagrangesettensor_(PetscDualSpace *sp, PetscBool *tensor, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceLagrangeSetTensor(*sp, *tensor ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangegettrimmed_ PETSCDUALSPACELAGRANGEGETTRIMMED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangegettrimmed_ petscdualspacelagrangegettrimmed
#endif
PETSC_EXTERN void petscdualspacelagrangegettrimmed_(PetscDualSpace *sp, PetscBool *trimmed, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(trimmed);
  *ierr = PetscDualSpaceLagrangeGetTrimmed(*sp, trimmed);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangesettrimmed_ PETSCDUALSPACELAGRANGESETTRIMMED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangesettrimmed_ petscdualspacelagrangesettrimmed
#endif
PETSC_EXTERN void petscdualspacelagrangesettrimmed_(PetscDualSpace *sp, PetscBool *trimmed, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceLagrangeSetTrimmed(*sp, *trimmed ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangegetnodetype_ PETSCDUALSPACELAGRANGEGETNODETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangegetnodetype_ petscdualspacelagrangegetnodetype
#endif
PETSC_EXTERN void petscdualspacelagrangegetnodetype_(PetscDualSpace *sp, PetscDTNodeType *nodeType, PetscBool *boundary, PetscReal *exponent, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(boundary);
  CHKFORTRANNULLREAL(exponent);
  *ierr = PetscDualSpaceLagrangeGetNodeType(*sp, nodeType, boundary, exponent);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangesetnodetype_ PETSCDUALSPACELAGRANGESETNODETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangesetnodetype_ petscdualspacelagrangesetnodetype
#endif
PETSC_EXTERN void petscdualspacelagrangesetnodetype_(PetscDualSpace *sp, PetscDTNodeType *nodeType, PetscBool *boundary, PetscReal *exponent, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceLagrangeSetNodeType(*sp, *nodeType, *boundary ? PETSC_TRUE : PETSC_FALSE, *exponent);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangegetusemoments_ PETSCDUALSPACELAGRANGEGETUSEMOMENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangegetusemoments_ petscdualspacelagrangegetusemoments
#endif
PETSC_EXTERN void petscdualspacelagrangegetusemoments_(PetscDualSpace *sp, PetscBool *useMoments, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(useMoments);
  *ierr = PetscDualSpaceLagrangeGetUseMoments(*sp, useMoments);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangesetusemoments_ PETSCDUALSPACELAGRANGESETUSEMOMENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangesetusemoments_ petscdualspacelagrangesetusemoments
#endif
PETSC_EXTERN void petscdualspacelagrangesetusemoments_(PetscDualSpace *sp, PetscBool *useMoments, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceLagrangeSetUseMoments(*sp, *useMoments ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangegetmomentorder_ PETSCDUALSPACELAGRANGEGETMOMENTORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangegetmomentorder_ petscdualspacelagrangegetmomentorder
#endif
PETSC_EXTERN void petscdualspacelagrangegetmomentorder_(PetscDualSpace *sp, PetscInt *order, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(order);
  *ierr = PetscDualSpaceLagrangeGetMomentOrder(*sp, order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacelagrangesetmomentorder_ PETSCDUALSPACELAGRANGESETMOMENTORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacelagrangesetmomentorder_ petscdualspacelagrangesetmomentorder
#endif
PETSC_EXTERN void petscdualspacelagrangesetmomentorder_(PetscDualSpace *sp, PetscInt *order, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceLagrangeSetMomentOrder(*sp, *order);
  if (*ierr) return;
}
