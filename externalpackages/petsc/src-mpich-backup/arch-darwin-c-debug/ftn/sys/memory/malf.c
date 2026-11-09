#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocclear_ PETSCMALLOCCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocclear_ petscmallocclear
#endif
PETSC_EXTERN void petscmallocclear_(PetscErrorCode *ierr)
{
  *ierr = PetscMallocClear();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmemorytrace_ PETSCMEMORYTRACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmemorytrace_ petscmemorytrace
#endif
PETSC_EXTERN void petscmemorytrace_(char label[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_label)
{
  char* c_label;
  FIXCHAR(label, l_label, c_label);
  *ierr = PetscMemoryTrace(c_label);
  if (*ierr) return;
  FREECHAR(label, c_label);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocsetdram_ PETSCMALLOCSETDRAM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocsetdram_ petscmallocsetdram
#endif
PETSC_EXTERN void petscmallocsetdram_(PetscErrorCode *ierr)
{
  *ierr = PetscMallocSetDRAM();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocresetdram_ PETSCMALLOCRESETDRAM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocresetdram_ petscmallocresetdram
#endif
PETSC_EXTERN void petscmallocresetdram_(PetscErrorCode *ierr)
{
  *ierr = PetscMallocResetDRAM();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocsetcoalesce_ PETSCMALLOCSETCOALESCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocsetcoalesce_ petscmallocsetcoalesce
#endif
PETSC_EXTERN void petscmallocsetcoalesce_(PetscBool *coalesce, PetscErrorCode *ierr)
{
  *ierr = PetscMallocSetCoalesce(*coalesce ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
