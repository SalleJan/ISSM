#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmemorygetcurrentusage_ PETSCMEMORYGETCURRENTUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmemorygetcurrentusage_ petscmemorygetcurrentusage
#endif
PETSC_EXTERN void petscmemorygetcurrentusage_(PetscLogDouble *mem, PetscErrorCode *ierr)
{
  *ierr = PetscMemoryGetCurrentUsage(mem);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmemorygetmaximumusage_ PETSCMEMORYGETMAXIMUMUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmemorygetmaximumusage_ petscmemorygetmaximumusage
#endif
PETSC_EXTERN void petscmemorygetmaximumusage_(PetscLogDouble *mem, PetscErrorCode *ierr)
{
  *ierr = PetscMemoryGetMaximumUsage(mem);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmemorysetgetmaximumusage_ PETSCMEMORYSETGETMAXIMUMUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmemorysetgetmaximumusage_ petscmemorysetgetmaximumusage
#endif
PETSC_EXTERN void petscmemorysetgetmaximumusage_(PetscErrorCode *ierr)
{
  *ierr = PetscMemorySetGetMaximumUsage();
  if (*ierr) return;
}
