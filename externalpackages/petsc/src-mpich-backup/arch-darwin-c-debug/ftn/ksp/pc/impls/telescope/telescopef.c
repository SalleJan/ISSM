#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopegetksp_ PCTELESCOPEGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopegetksp_ pctelescopegetksp
#endif
PETSC_EXTERN void pctelescopegetksp_(PC *pc, KSP *subksp, PetscErrorCode *ierr)
{
  PetscBool null_subksp = !*(void**) subksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subksp);
  *ierr = PCTelescopeGetKSP(*pc, subksp);
  if (*ierr) return;
  if (! null_subksp && !*(void**) subksp) *(void **) subksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopegetreductionfactor_ PCTELESCOPEGETREDUCTIONFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopegetreductionfactor_ pctelescopegetreductionfactor
#endif
PETSC_EXTERN void pctelescopegetreductionfactor_(PC *pc, PetscInt *fact, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(fact);
  *ierr = PCTelescopeGetReductionFactor(*pc, fact);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopesetreductionfactor_ PCTELESCOPESETREDUCTIONFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopesetreductionfactor_ pctelescopesetreductionfactor
#endif
PETSC_EXTERN void pctelescopesetreductionfactor_(PC *pc, PetscInt *fact, PetscErrorCode *ierr)
{
  *ierr = PCTelescopeSetReductionFactor(*pc, *fact);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopegetignoredm_ PCTELESCOPEGETIGNOREDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopegetignoredm_ pctelescopegetignoredm
#endif
PETSC_EXTERN void pctelescopegetignoredm_(PC *pc, PetscBool *v, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(v);
  *ierr = PCTelescopeGetIgnoreDM(*pc, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopesetignoredm_ PCTELESCOPESETIGNOREDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopesetignoredm_ pctelescopesetignoredm
#endif
PETSC_EXTERN void pctelescopesetignoredm_(PC *pc, PetscBool *v, PetscErrorCode *ierr)
{
  *ierr = PCTelescopeSetIgnoreDM(*pc, *v ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopegetusecoarsedm_ PCTELESCOPEGETUSECOARSEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopegetusecoarsedm_ pctelescopegetusecoarsedm
#endif
PETSC_EXTERN void pctelescopegetusecoarsedm_(PC *pc, PetscBool *v, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(v);
  *ierr = PCTelescopeGetUseCoarseDM(*pc, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopesetusecoarsedm_ PCTELESCOPESETUSECOARSEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopesetusecoarsedm_ pctelescopesetusecoarsedm
#endif
PETSC_EXTERN void pctelescopesetusecoarsedm_(PC *pc, PetscBool *v, PetscErrorCode *ierr)
{
  *ierr = PCTelescopeSetUseCoarseDM(*pc, *v ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopegetignorekspcomputeoperators_ PCTELESCOPEGETIGNOREKSPCOMPUTEOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopegetignorekspcomputeoperators_ pctelescopegetignorekspcomputeoperators
#endif
PETSC_EXTERN void pctelescopegetignorekspcomputeoperators_(PC *pc, PetscBool *v, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(v);
  *ierr = PCTelescopeGetIgnoreKSPComputeOperators(*pc, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopesetignorekspcomputeoperators_ PCTELESCOPESETIGNOREKSPCOMPUTEOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopesetignorekspcomputeoperators_ pctelescopesetignorekspcomputeoperators
#endif
PETSC_EXTERN void pctelescopesetignorekspcomputeoperators_(PC *pc, PetscBool *v, PetscErrorCode *ierr)
{
  *ierr = PCTelescopeSetIgnoreKSPComputeOperators(*pc, *v ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopegetdm_ PCTELESCOPEGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopegetdm_ pctelescopegetdm
#endif
PETSC_EXTERN void pctelescopegetdm_(PC *pc, DM *subdm, PetscErrorCode *ierr)
{
  PetscBool null_subdm = !*(void**) subdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subdm);
  *ierr = PCTelescopeGetDM(*pc, subdm);
  if (*ierr) return;
  if (! null_subdm && !*(void**) subdm) *(void **) subdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopesetsubcommtype_ PCTELESCOPESETSUBCOMMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopesetsubcommtype_ pctelescopesetsubcommtype
#endif
PETSC_EXTERN void pctelescopesetsubcommtype_(PC *pc, PetscSubcommType *subcommtype, PetscErrorCode *ierr)
{
  *ierr = PCTelescopeSetSubcommType(*pc, *subcommtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pctelescopegetsubcommtype_ PCTELESCOPEGETSUBCOMMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pctelescopegetsubcommtype_ pctelescopegetsubcommtype
#endif
PETSC_EXTERN void pctelescopegetsubcommtype_(PC *pc, PetscSubcommType *subcommtype, PetscErrorCode *ierr)
{
  *ierr = PCTelescopeGetSubcommType(*pc, subcommtype);
  if (*ierr) return;
}
