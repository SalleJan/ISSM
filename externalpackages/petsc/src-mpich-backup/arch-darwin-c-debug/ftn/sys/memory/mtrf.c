#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocvalidate_ PETSCMALLOCVALIDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocvalidate_ petscmallocvalidate
#endif
PETSC_EXTERN void petscmallocvalidate_(int *line, char function[], char file[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_function, PETSC_FORTRAN_CHARLEN_T l_file)
{
  char* c_function;
  FIXCHAR(function, l_function, c_function);
  char* c_file;
  FIXCHAR(file, l_file, c_file);
  *ierr = PetscMallocValidate(*line, c_function, c_file);
  if (*ierr) return;
  FREECHAR(function, c_function);
  FREECHAR(file, c_file);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmemoryview_ PETSCMEMORYVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmemoryview_ petscmemoryview
#endif
PETSC_EXTERN void petscmemoryview_(PetscViewer *viewer, char message[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_message)
{
  char* c_message;
  FIXCHAR(message, l_message, c_message);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscMemoryView(v_viewer, c_message);
  if (*ierr) return;
  FREECHAR(message, c_message);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocgetcurrentusage_ PETSCMALLOCGETCURRENTUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocgetcurrentusage_ petscmallocgetcurrentusage
#endif
PETSC_EXTERN void petscmallocgetcurrentusage_(PetscLogDouble *space, PetscErrorCode *ierr)
{
  *ierr = PetscMallocGetCurrentUsage(space);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocgetmaximumusage_ PETSCMALLOCGETMAXIMUMUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocgetmaximumusage_ petscmallocgetmaximumusage
#endif
PETSC_EXTERN void petscmallocgetmaximumusage_(PetscLogDouble *space, PetscErrorCode *ierr)
{
  *ierr = PetscMallocGetMaximumUsage(space);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocpushmaximumusage_ PETSCMALLOCPUSHMAXIMUMUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocpushmaximumusage_ petscmallocpushmaximumusage
#endif
PETSC_EXTERN void petscmallocpushmaximumusage_(int *event, PetscErrorCode *ierr)
{
  *ierr = PetscMallocPushMaximumUsage(*event);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocpopmaximumusage_ PETSCMALLOCPOPMAXIMUMUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocpopmaximumusage_ petscmallocpopmaximumusage
#endif
PETSC_EXTERN void petscmallocpopmaximumusage_(int *event, PetscLogDouble *mu, PetscErrorCode *ierr)
{
  *ierr = PetscMallocPopMaximumUsage(*event, mu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocviewset_ PETSCMALLOCVIEWSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocviewset_ petscmallocviewset
#endif
PETSC_EXTERN void petscmallocviewset_(PetscLogDouble *logmin, PetscErrorCode *ierr)
{
  *ierr = PetscMallocViewSet(*logmin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocviewget_ PETSCMALLOCVIEWGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocviewget_ petscmallocviewget
#endif
PETSC_EXTERN void petscmallocviewget_(PetscBool *logging, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(logging);
  *ierr = PetscMallocViewGet(logging);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmalloctraceset_ PETSCMALLOCTRACESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmalloctraceset_ petscmalloctraceset
#endif
PETSC_EXTERN void petscmalloctraceset_(PetscViewer *viewer, PetscBool *active, PetscLogDouble *logmin, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscMallocTraceSet(v_viewer, *active ? PETSC_TRUE : PETSC_FALSE, *logmin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmalloctraceget_ PETSCMALLOCTRACEGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmalloctraceget_ petscmalloctraceget
#endif
PETSC_EXTERN void petscmalloctraceget_(PetscBool *logging, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(logging);
  *ierr = PetscMallocTraceGet(logging);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocsetdebug_ PETSCMALLOCSETDEBUG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocsetdebug_ petscmallocsetdebug
#endif
PETSC_EXTERN void petscmallocsetdebug_(PetscBool *eachcall, PetscBool *initializenan, PetscErrorCode *ierr)
{
  *ierr = PetscMallocSetDebug(*eachcall ? PETSC_TRUE : PETSC_FALSE, *initializenan ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocgetdebug_ PETSCMALLOCGETDEBUG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocgetdebug_ petscmallocgetdebug
#endif
PETSC_EXTERN void petscmallocgetdebug_(PetscBool *basic, PetscBool *eachcall, PetscBool *initializenan, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(basic);
  CHKFORTRANNULLBOOL(eachcall);
  CHKFORTRANNULLBOOL(initializenan);
  *ierr = PetscMallocGetDebug(basic, eachcall, initializenan);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmalloclogrequestedsizeset_ PETSCMALLOCLOGREQUESTEDSIZESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmalloclogrequestedsizeset_ petscmalloclogrequestedsizeset
#endif
PETSC_EXTERN void petscmalloclogrequestedsizeset_(PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PetscMallocLogRequestedSizeSet(*flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmalloclogrequestedsizeget_ PETSCMALLOCLOGREQUESTEDSIZEGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmalloclogrequestedsizeget_ petscmalloclogrequestedsizeget
#endif
PETSC_EXTERN void petscmalloclogrequestedsizeget_(PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscMallocLogRequestedSizeGet(flg);
  if (*ierr) return;
}
