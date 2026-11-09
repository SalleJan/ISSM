#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcspaisetepsilon_ PCSPAISETEPSILON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcspaisetepsilon_ pcspaisetepsilon
#endif
PETSC_EXTERN void pcspaisetepsilon_(PC *pc, PetscReal *epsilon1, PetscErrorCode *ierr)
{
  *ierr = PCSPAISetEpsilon(*pc, *epsilon1);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcspaisetnbsteps_ PCSPAISETNBSTEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcspaisetnbsteps_ pcspaisetnbsteps
#endif
PETSC_EXTERN void pcspaisetnbsteps_(PC *pc, PetscInt *nbsteps1, PetscErrorCode *ierr)
{
  *ierr = PCSPAISetNBSteps(*pc, *nbsteps1);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcspaisetmax_ PCSPAISETMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcspaisetmax_ pcspaisetmax
#endif
PETSC_EXTERN void pcspaisetmax_(PC *pc, PetscInt *max1, PetscErrorCode *ierr)
{
  *ierr = PCSPAISetMax(*pc, *max1);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcspaisetmaxnew_ PCSPAISETMAXNEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcspaisetmaxnew_ pcspaisetmaxnew
#endif
PETSC_EXTERN void pcspaisetmaxnew_(PC *pc, PetscInt *maxnew1, PetscErrorCode *ierr)
{
  *ierr = PCSPAISetMaxNew(*pc, *maxnew1);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcspaisetblocksize_ PCSPAISETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcspaisetblocksize_ pcspaisetblocksize
#endif
PETSC_EXTERN void pcspaisetblocksize_(PC *pc, PetscInt *block_size1, PetscErrorCode *ierr)
{
  *ierr = PCSPAISetBlockSize(*pc, *block_size1);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcspaisetcachesize_ PCSPAISETCACHESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcspaisetcachesize_ pcspaisetcachesize
#endif
PETSC_EXTERN void pcspaisetcachesize_(PC *pc, PetscInt *cache_size, PetscErrorCode *ierr)
{
  *ierr = PCSPAISetCacheSize(*pc, *cache_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcspaisetverbose_ PCSPAISETVERBOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcspaisetverbose_ pcspaisetverbose
#endif
PETSC_EXTERN void pcspaisetverbose_(PC *pc, PetscInt *verbose, PetscErrorCode *ierr)
{
  *ierr = PCSPAISetVerbose(*pc, *verbose);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcspaisetsp_ PCSPAISETSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcspaisetsp_ pcspaisetsp
#endif
PETSC_EXTERN void pcspaisetsp_(PC *pc, PetscInt *sp, PetscErrorCode *ierr)
{
  *ierr = PCSPAISetSp(*pc, *sp);
  if (*ierr) return;
}
