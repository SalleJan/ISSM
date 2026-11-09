#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsetdebugterminal_ PETSCSETDEBUGTERMINAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsetdebugterminal_ petscsetdebugterminal
#endif
PETSC_EXTERN void petscsetdebugterminal_(char terminal[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_terminal)
{
  char* c_terminal;
  FIXCHAR(terminal, l_terminal, c_terminal);
  *ierr = PetscSetDebugTerminal(c_terminal);
  if (*ierr) return;
  FREECHAR(terminal, c_terminal);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsetdebugger_ PETSCSETDEBUGGER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsetdebugger_ petscsetdebugger
#endif
PETSC_EXTERN void petscsetdebugger_(char debugger[], PetscBool *usedebugterminal, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_debugger)
{
  char* c_debugger;
  FIXCHAR(debugger, l_debugger, c_debugger);
  *ierr = PetscSetDebugger(c_debugger, *usedebugterminal ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
  FREECHAR(debugger, c_debugger);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsetdefaultdebugger_ PETSCSETDEFAULTDEBUGGER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsetdefaultdebugger_ petscsetdefaultdebugger
#endif
PETSC_EXTERN void petscsetdefaultdebugger_(PetscErrorCode *ierr)
{
  *ierr = PetscSetDefaultDebugger();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsetdebuggerfromstring_ PETSCSETDEBUGGERFROMSTRING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsetdebuggerfromstring_ petscsetdebuggerfromstring
#endif
PETSC_EXTERN void petscsetdebuggerfromstring_(char string[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_string)
{
  char* c_string;
  FIXCHAR(string, l_string, c_string);
  *ierr = PetscSetDebuggerFromString(c_string);
  if (*ierr) return;
  FREECHAR(string, c_string);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscwaitonerror_ PETSCWAITONERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscwaitonerror_ petscwaitonerror
#endif
PETSC_EXTERN void petscwaitonerror_(PetscErrorCode *ierr)
{
  *ierr = PetscWaitOnError();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscattachdebugger_ PETSCATTACHDEBUGGER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscattachdebugger_ petscattachdebugger
#endif
PETSC_EXTERN void petscattachdebugger_(PetscErrorCode *ierr)
{
  *ierr = PetscAttachDebugger();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscattachdebuggererrorhandler_ PETSCATTACHDEBUGGERERRORHANDLER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscattachdebuggererrorhandler_ petscattachdebuggererrorhandler
#endif
PETSC_EXTERN void petscattachdebuggererrorhandler_(MPI_Fint *comm, int *line, char fun[], char file[], PetscErrorCode *num, PetscErrorType *p, char mess[], PetscCtx ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fun, PETSC_FORTRAN_CHARLEN_T l_file, PETSC_FORTRAN_CHARLEN_T l_mess)
{
  char* c_fun;
  FIXCHAR(fun, l_fun, c_fun);
  char* c_file;
  FIXCHAR(file, l_file, c_file);
  char* c_mess;
  FIXCHAR(mess, l_mess, c_mess);
  *ierr = PetscAttachDebuggerErrorHandler(MPI_Comm_f2c(*(comm)), *line, c_fun, c_file, *num, *p, c_mess, ctx);
  if (*ierr) return;
  FREECHAR(fun, c_fun);
  FREECHAR(file, c_file);
  FREECHAR(mess, c_mess);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscstopfordebugger_ PETSCSTOPFORDEBUGGER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstopfordebugger_ petscstopfordebugger
#endif
PETSC_EXTERN void petscstopfordebugger_(PetscErrorCode *ierr)
{
  *ierr = PetscStopForDebugger();
  if (*ierr) return;
}
