#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmsregisterall_ SNESMSREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmsregisterall_ snesmsregisterall
#endif
PETSC_EXTERN void snesmsregisterall_(PetscErrorCode *ierr)
{
  *ierr = SNESMSRegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmsregisterdestroy_ SNESMSREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmsregisterdestroy_ snesmsregisterdestroy
#endif
PETSC_EXTERN void snesmsregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = SNESMSRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmsinitializepackage_ SNESMSINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmsinitializepackage_ snesmsinitializepackage
#endif
PETSC_EXTERN void snesmsinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = SNESMSInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmsfinalizepackage_ SNESMSFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmsfinalizepackage_ snesmsfinalizepackage
#endif
PETSC_EXTERN void snesmsfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = SNESMSFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmsregister_ SNESMSREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmsregister_ snesmsregister
#endif
PETSC_EXTERN void snesmsregister_(char *name, PetscInt *nstages, PetscInt *nregisters, PetscReal *stability, const PetscReal gamma[], const PetscReal delta[], const PetscReal betasub[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(gamma);
  CHKFORTRANNULLREAL(delta);
  CHKFORTRANNULLREAL(betasub);
  *ierr = SNESMSRegister(c_name, *nstages, *nregisters, *stability, gamma, delta, betasub);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmsgettype_ SNESMSGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmsgettype_ snesmsgettype
#endif
PETSC_EXTERN void snesmsgettype_(SNES *snes, char *mstype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_mstype)
{
  char* c_mstype = PETSC_NULLPTR;
  *ierr = SNESMSGetType(*snes, (const char **)&c_mstype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)mstype, c_mstype, l_mstype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, mstype, l_mstype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmssettype_ SNESMSSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmssettype_ snesmssettype
#endif
PETSC_EXTERN void snesmssettype_(SNES *snes, char *mstype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_mstype)
{
  char* c_mstype;
  FIXCHAR(mstype, l_mstype, c_mstype);
  *ierr = SNESMSSetType(*snes, c_mstype);
  if (*ierr) return;
  FREECHAR(mstype, c_mstype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmsgetdamping_ SNESMSGETDAMPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmsgetdamping_ snesmsgetdamping
#endif
PETSC_EXTERN void snesmsgetdamping_(SNES *snes, PetscReal *damping, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(damping);
  *ierr = SNESMSGetDamping(*snes, damping);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmssetdamping_ SNESMSSETDAMPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmssetdamping_ snesmssetdamping
#endif
PETSC_EXTERN void snesmssetdamping_(SNES *snes, PetscReal *damping, PetscErrorCode *ierr)
{
  *ierr = SNESMSSetDamping(*snes, *damping);
  if (*ierr) return;
}
