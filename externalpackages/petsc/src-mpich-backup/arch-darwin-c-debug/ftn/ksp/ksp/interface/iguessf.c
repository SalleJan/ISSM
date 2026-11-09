#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguesssetfromoptions_ KSPGUESSSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguesssetfromoptions_ kspguesssetfromoptions
#endif
PETSC_EXTERN void kspguesssetfromoptions_(KSPGuess *guess, PetscErrorCode *ierr)
{
  *ierr = KSPGuessSetFromOptions(*guess);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguesssettolerance_ KSPGUESSSETTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguesssettolerance_ kspguesssettolerance
#endif
PETSC_EXTERN void kspguesssettolerance_(KSPGuess *guess, PetscReal *tol, PetscErrorCode *ierr)
{
  *ierr = KSPGuessSetTolerance(*guess, *tol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguessdestroy_ KSPGUESSDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguessdestroy_ kspguessdestroy
#endif
PETSC_EXTERN void kspguessdestroy_(KSPGuess *guess, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(guess);
  PetscBool null_guess = !*(void**) guess ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(guess);
  *ierr = KSPGuessDestroy(guess);
  if (*ierr) return;
  if (! null_guess && !*(void**) guess) *(void **) guess = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguessview_ KSPGUESSVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguessview_ kspguessview
#endif
PETSC_EXTERN void kspguessview_(KSPGuess *guess, PetscViewer *view, PetscErrorCode *ierr)
{
  PetscViewer v_view = PetscPatchDefaultViewers(view);
  *ierr = KSPGuessView(*guess, v_view);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguesscreate_ KSPGUESSCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguesscreate_ kspguesscreate
#endif
PETSC_EXTERN void kspguesscreate_(MPI_Fint *comm, KSPGuess *guess, PetscErrorCode *ierr)
{
  PetscBool null_guess = !*(void**) guess ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(guess);
  CHKFORTRANNULLOBJECT(guess);
  *ierr = KSPGuessCreate(MPI_Comm_f2c(*(comm)), guess);
  if (*ierr) return;
  if (! null_guess && !*(void**) guess) *(void **) guess = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguesssettype_ KSPGUESSSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguesssettype_ kspguesssettype
#endif
PETSC_EXTERN void kspguesssettype_(KSPGuess *guess, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = KSPGuessSetType(*guess, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguessgettype_ KSPGUESSGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguessgettype_ kspguessgettype
#endif
PETSC_EXTERN void kspguessgettype_(KSPGuess *guess, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = KSPGuessGetType(*guess, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguessupdate_ KSPGUESSUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguessupdate_ kspguessupdate
#endif
PETSC_EXTERN void kspguessupdate_(KSPGuess *guess, Vec *rhs, Vec *sol, PetscErrorCode *ierr)
{
  *ierr = KSPGuessUpdate(*guess, *rhs, *sol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguessformguess_ KSPGUESSFORMGUESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguessformguess_ kspguessformguess
#endif
PETSC_EXTERN void kspguessformguess_(KSPGuess *guess, Vec *rhs, Vec *sol, PetscErrorCode *ierr)
{
  *ierr = KSPGuessFormGuess(*guess, *rhs, *sol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguesssetup_ KSPGUESSSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguesssetup_ kspguesssetup
#endif
PETSC_EXTERN void kspguesssetup_(KSPGuess *guess, PetscErrorCode *ierr)
{
  *ierr = KSPGuessSetUp(*guess);
  if (*ierr) return;
}
