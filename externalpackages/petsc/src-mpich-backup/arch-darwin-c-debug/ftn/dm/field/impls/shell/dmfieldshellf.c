#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldshellgetcontextcptr_ DMFIELDSHELLGETCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldshellgetcontextcptr_ dmfieldshellgetcontextcptr
#endif
PETSC_EXTERN void dmfieldshellgetcontextcptr_(DMField *field, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = DMFieldShellGetContext(*field, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldshellevaluatefedefault_ DMFIELDSHELLEVALUATEFEDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldshellevaluatefedefault_ dmfieldshellevaluatefedefault
#endif
PETSC_EXTERN void dmfieldshellevaluatefedefault_(DMField *field, IS *pointIS, PetscQuadrature *quad, PetscDataType *type, void *B, void *D, void *H, PetscErrorCode *ierr)
{
  *ierr = DMFieldShellEvaluateFEDefault(*field, *pointIS, *quad, *type, B, D, H);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldshellevaluatefvdefault_ DMFIELDSHELLEVALUATEFVDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldshellevaluatefvdefault_ dmfieldshellevaluatefvdefault
#endif
PETSC_EXTERN void dmfieldshellevaluatefvdefault_(DMField *field, IS *pointIS, PetscDataType *type, void *B, void *D, void *H, PetscErrorCode *ierr)
{
  *ierr = DMFieldShellEvaluateFVDefault(*field, *pointIS, *type, B, D, H);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldcreateshell_ DMFIELDCREATESHELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldcreateshell_ dmfieldcreateshell
#endif
PETSC_EXTERN void dmfieldcreateshell_(DM *dm, PetscInt *numComponents, DMFieldContinuity *continuity, PetscCtx ctx, DMField *field, PetscErrorCode *ierr)
{
  PetscBool null_field = !*(void**) field ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(field);
  *ierr = DMFieldCreateShell(*dm, *numComponents, *continuity, ctx, field);
  if (*ierr) return;
  if (! null_field && !*(void**) field) *(void **) field = (void *)-2;
}
