#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsettype_ PCSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsettype_ pcsettype
#endif
PETSC_EXTERN void pcsettype_(PC *pc, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PCSetType(*pc, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgettype_ PCGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgettype_ pcgettype
#endif
PETSC_EXTERN void pcgettype_(PC *pc, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = PCGetType(*pc, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetfromoptions_ PCSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetfromoptions_ pcsetfromoptions
#endif
PETSC_EXTERN void pcsetfromoptions_(PC *pc, PetscErrorCode *ierr)
{
  *ierr = PCSetFromOptions(*pc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetdm_ PCSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetdm_ pcsetdm
#endif
PETSC_EXTERN void pcsetdm_(PC *pc, DM *dm, PetscErrorCode *ierr)
{
  *ierr = PCSetDM(*pc, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgetdm_ PCGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgetdm_ pcgetdm
#endif
PETSC_EXTERN void pcgetdm_(PC *pc, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = PCGetDM(*pc, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcsetapplicationcontext_ PCSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcsetapplicationcontext_ pcsetapplicationcontext
#endif
PETSC_EXTERN void pcsetapplicationcontext_(PC *pc, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = PCSetApplicationContext(*pc, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgetapplicationcontextcptr_ PCGETAPPLICATIONCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgetapplicationcontextcptr_ pcgetapplicationcontextcptr
#endif
PETSC_EXTERN void pcgetapplicationcontextcptr_(PC *pc, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = PCGetApplicationContext(*pc, ctx);
  if (*ierr) return;
}
