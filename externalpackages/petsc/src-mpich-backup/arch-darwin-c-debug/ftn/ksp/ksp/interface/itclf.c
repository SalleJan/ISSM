#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetoptionsprefix_ KSPSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetoptionsprefix_ kspsetoptionsprefix
#endif
PETSC_EXTERN void kspsetoptionsprefix_(KSP *ksp, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = KSPSetOptionsPrefix(*ksp, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspappendoptionsprefix_ KSPAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspappendoptionsprefix_ kspappendoptionsprefix
#endif
PETSC_EXTERN void kspappendoptionsprefix_(KSP *ksp, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = KSPAppendOptionsPrefix(*ksp, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetusefischerguess_ KSPSETUSEFISCHERGUESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetusefischerguess_ kspsetusefischerguess
#endif
PETSC_EXTERN void kspsetusefischerguess_(KSP *ksp, PetscInt *model, PetscInt *size, PetscErrorCode *ierr)
{
  *ierr = KSPSetUseFischerGuess(*ksp, *model, *size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetguess_ KSPSETGUESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetguess_ kspsetguess
#endif
PETSC_EXTERN void kspsetguess_(KSP *ksp, KSPGuess *guess, PetscErrorCode *ierr)
{
  *ierr = KSPSetGuess(*ksp, *guess);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetguess_ KSPGETGUESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetguess_ kspgetguess
#endif
PETSC_EXTERN void kspgetguess_(KSP *ksp, KSPGuess *guess, PetscErrorCode *ierr)
{
  PetscBool null_guess = !*(void**) guess ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(guess);
  *ierr = KSPGetGuess(*ksp, guess);
  if (*ierr) return;
  if (! null_guess && !*(void**) guess) *(void **) guess = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetoptionsprefix_ KSPGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetoptionsprefix_ kspgetoptionsprefix
#endif
PETSC_EXTERN void kspgetoptionsprefix_(KSP *ksp, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix = PETSC_NULLPTR;
  *ierr = KSPGetOptionsPrefix(*ksp, (const char **)&c_prefix);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)prefix, c_prefix, l_prefix);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, prefix, l_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorsetfromoptions_ KSPMONITORSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorsetfromoptions_ kspmonitorsetfromoptions
#endif
PETSC_EXTERN void kspmonitorsetfromoptions_(KSP *ksp, char opt[], char name[], PetscCtx ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_opt, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_opt;
  FIXCHAR(opt, l_opt, c_opt);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = KSPMonitorSetFromOptions(*ksp, c_opt, c_name, ctx);
  if (*ierr) return;
  FREECHAR(opt, c_opt);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetfromoptions_ KSPSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetfromoptions_ kspsetfromoptions
#endif
PETSC_EXTERN void kspsetfromoptions_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPSetFromOptions(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspresetfromoptions_ KSPRESETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspresetfromoptions_ kspresetfromoptions
#endif
PETSC_EXTERN void kspresetfromoptions_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPResetFromOptions(*ksp);
  if (*ierr) return;
}
