#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscemacsclienterrorhandler_ PETSCEMACSCLIENTERRORHANDLER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscemacsclienterrorhandler_ petscemacsclienterrorhandler
#endif
PETSC_EXTERN void petscemacsclienterrorhandler_(MPI_Fint *comm, int *line, char fun[], char file[], PetscErrorCode *n, PetscErrorType *p, char mess[], PetscCtx ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fun, PETSC_FORTRAN_CHARLEN_T l_file, PETSC_FORTRAN_CHARLEN_T l_mess)
{
  char* c_fun;
  FIXCHAR(fun, l_fun, c_fun);
  char* c_file;
  FIXCHAR(file, l_file, c_file);
  char* c_mess;
  FIXCHAR(mess, l_mess, c_mess);
  *ierr = PetscEmacsClientErrorHandler(MPI_Comm_f2c(*(comm)), *line, c_fun, c_file, *n, *p, c_mess, ctx);
  if (*ierr) return;
  FREECHAR(fun, c_fun);
  FREECHAR(file, c_file);
  FREECHAR(mess, c_mess);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpoperrorhandler_ PETSCPOPERRORHANDLER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpoperrorhandler_ petscpoperrorhandler
#endif
PETSC_EXTERN void petscpoperrorhandler_(PetscErrorCode *ierr)
{
  *ierr = PetscPopErrorHandler();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscreturnerrorhandler_ PETSCRETURNERRORHANDLER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscreturnerrorhandler_ petscreturnerrorhandler
#endif
PETSC_EXTERN void petscreturnerrorhandler_(MPI_Fint *comm, int *line, char fun[], char file[], PetscErrorCode *n, PetscErrorType *p, char mess[], PetscCtx ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fun, PETSC_FORTRAN_CHARLEN_T l_file, PETSC_FORTRAN_CHARLEN_T l_mess)
{
  char* c_fun;
  FIXCHAR(fun, l_fun, c_fun);
  char* c_file;
  FIXCHAR(file, l_file, c_file);
  char* c_mess;
  FIXCHAR(mess, l_mess, c_mess);
  *ierr = PetscReturnErrorHandler(MPI_Comm_f2c(*(comm)), *line, c_fun, c_file, *n, *p, c_mess, ctx);
  if (*ierr) return;
  FREECHAR(fun, c_fun);
  FREECHAR(file, c_file);
  FREECHAR(mess, c_mess);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscerrormessage_ PETSCERRORMESSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscerrormessage_ petscerrormessage
#endif
PETSC_EXTERN void petscerrormessage_(PetscErrorCode *errnum, char text[], char specific[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_text, PETSC_FORTRAN_CHARLEN_T l_specific)
{
  char* c_text = PETSC_NULLPTR;
  char* c_specific = PETSC_NULLPTR;
  *ierr = PetscErrorMessage(*errnum, (const char **)&c_text, (const char **)&c_specific);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)text, c_text, l_text);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, text, l_text);
  *ierr = PetscStrncpy((char *)specific, c_specific, l_specific);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, specific, l_specific);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscintviewnumcolumns_ PETSCINTVIEWNUMCOLUMNS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscintviewnumcolumns_ petscintviewnumcolumns
#endif
PETSC_EXTERN void petscintviewnumcolumns_(PetscInt *N, PetscInt *Ncol, const PetscInt idx[], PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(idx);
  *ierr = PetscIntViewNumColumns(*N, *Ncol, idx, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrealviewnumcolumns_ PETSCREALVIEWNUMCOLUMNS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrealviewnumcolumns_ petscrealviewnumcolumns
#endif
PETSC_EXTERN void petscrealviewnumcolumns_(PetscInt *N, PetscInt *Ncol, const PetscReal idx[], PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLREAL(idx);
  *ierr = PetscRealViewNumColumns(*N, *Ncol, idx, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscscalarviewnumcolumns_ PETSCSCALARVIEWNUMCOLUMNS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscscalarviewnumcolumns_ petscscalarviewnumcolumns
#endif
PETSC_EXTERN void petscscalarviewnumcolumns_(PetscInt *N, PetscInt *Ncol, const PetscScalar idx[], PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLSCALAR(idx);
  *ierr = PetscScalarViewNumColumns(*N, *Ncol, idx, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscintview_ PETSCINTVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscintview_ petscintview
#endif
PETSC_EXTERN void petscintview_(PetscInt *N, const PetscInt idx[], PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(idx);
  *ierr = PetscIntView(*N, idx, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrealview_ PETSCREALVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrealview_ petscrealview
#endif
PETSC_EXTERN void petscrealview_(PetscInt *N, const PetscReal idx[], PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLREAL(idx);
  *ierr = PetscRealView(*N, idx, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscscalarview_ PETSCSCALARVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscscalarview_ petscscalarview
#endif
PETSC_EXTERN void petscscalarview_(PetscInt *N, const PetscScalar idx[], PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLSCALAR(idx);
  *ierr = PetscScalarView(*N, idx, v_viewer);
  if (*ierr) return;
}
