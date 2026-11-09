#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestdestroy_ PETSCCONVESTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestdestroy_ petscconvestdestroy
#endif
PETSC_EXTERN void petscconvestdestroy_(PetscConvEst *ce, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ce);
  PetscBool null_ce = !*(void**) ce ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ce);
  *ierr = PetscConvEstDestroy(ce);
  if (*ierr) return;
  if (! null_ce && !*(void**) ce) *(void **) ce = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestsetfromoptions_ PETSCCONVESTSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestsetfromoptions_ petscconvestsetfromoptions
#endif
PETSC_EXTERN void petscconvestsetfromoptions_(PetscConvEst *ce, PetscErrorCode *ierr)
{
  *ierr = PetscConvEstSetFromOptions(*ce);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestview_ PETSCCONVESTVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestview_ petscconvestview
#endif
PETSC_EXTERN void petscconvestview_(PetscConvEst *ce, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscConvEstView(*ce, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestgetsolver_ PETSCCONVESTGETSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestgetsolver_ petscconvestgetsolver
#endif
PETSC_EXTERN void petscconvestgetsolver_(PetscConvEst *ce, PetscObject *solver, PetscErrorCode *ierr)
{
  PetscBool null_solver = !*(void**) solver ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(solver);
  *ierr = PetscConvEstGetSolver(*ce, solver);
  if (*ierr) return;
  if (! null_solver && !*(void**) solver) *(void **) solver = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestsetsolver_ PETSCCONVESTSETSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestsetsolver_ petscconvestsetsolver
#endif
PETSC_EXTERN void petscconvestsetsolver_(PetscConvEst *ce, PetscObject *solver, PetscErrorCode *ierr)
{
  *ierr = PetscConvEstSetSolver(*ce, *solver);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestsetup_ PETSCCONVESTSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestsetup_ petscconvestsetup
#endif
PETSC_EXTERN void petscconvestsetup_(PetscConvEst *ce, PetscErrorCode *ierr)
{
  *ierr = PetscConvEstSetUp(*ce);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestcomputeinitialguess_ PETSCCONVESTCOMPUTEINITIALGUESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestcomputeinitialguess_ petscconvestcomputeinitialguess
#endif
PETSC_EXTERN void petscconvestcomputeinitialguess_(PetscConvEst *ce, PetscInt *r, DM *dm, Vec *u, PetscErrorCode *ierr)
{
  *ierr = PetscConvEstComputeInitialGuess(*ce, *r, *dm, *u);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestcomputeerror_ PETSCCONVESTCOMPUTEERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestcomputeerror_ petscconvestcomputeerror
#endif
PETSC_EXTERN void petscconvestcomputeerror_(PetscConvEst *ce, PetscInt *r, DM *dm, Vec *u, PetscReal errors[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(errors);
  *ierr = PetscConvEstComputeError(*ce, *r, *dm, *u, errors);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestmonitordefault_ PETSCCONVESTMONITORDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestmonitordefault_ petscconvestmonitordefault
#endif
PETSC_EXTERN void petscconvestmonitordefault_(PetscConvEst *ce, PetscInt *r, PetscErrorCode *ierr)
{
  *ierr = PetscConvEstMonitorDefault(*ce, *r);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestgetconvrate_ PETSCCONVESTGETCONVRATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestgetconvrate_ petscconvestgetconvrate
#endif
PETSC_EXTERN void petscconvestgetconvrate_(PetscConvEst *ce, PetscReal alpha[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(alpha);
  *ierr = PetscConvEstGetConvRate(*ce, alpha);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestrateview_ PETSCCONVESTRATEVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestrateview_ petscconvestrateview
#endif
PETSC_EXTERN void petscconvestrateview_(PetscConvEst *ce, const PetscReal alpha[], PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLREAL(alpha);
  *ierr = PetscConvEstRateView(*ce, alpha, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscconvest.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestcreate_ PETSCCONVESTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestcreate_ petscconvestcreate
#endif
PETSC_EXTERN void petscconvestcreate_(MPI_Fint *comm, PetscConvEst *ce, PetscErrorCode *ierr)
{
  PetscBool null_ce = !*(void**) ce ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ce);
  CHKFORTRANNULLOBJECT(ce);
  *ierr = PetscConvEstCreate(MPI_Comm_f2c(*(comm)), ce);
  if (*ierr) return;
  if (! null_ce && !*(void**) ce) *(void **) ce = (void *)-2;
}
