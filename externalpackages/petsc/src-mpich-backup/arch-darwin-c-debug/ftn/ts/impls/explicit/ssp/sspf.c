#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssspsettype_ TSSSPSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssspsettype_ tssspsettype
#endif
PETSC_EXTERN void tssspsettype_(TS *ts, char *ssptype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_ssptype)
{
  char* c_ssptype;
  FIXCHAR(ssptype, l_ssptype, c_ssptype);
  *ierr = TSSSPSetType(*ts, c_ssptype);
  if (*ierr) return;
  FREECHAR(ssptype, c_ssptype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssspgettype_ TSSSPGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssspgettype_ tssspgettype
#endif
PETSC_EXTERN void tssspgettype_(TS *ts, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = TSSSPGetType(*ts, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssspsetnumstages_ TSSSPSETNUMSTAGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssspsetnumstages_ tssspsetnumstages
#endif
PETSC_EXTERN void tssspsetnumstages_(TS *ts, PetscInt *nstages, PetscErrorCode *ierr)
{
  *ierr = TSSSPSetNumStages(*ts, *nstages);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssspgetnumstages_ TSSSPGETNUMSTAGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssspgetnumstages_ tssspgetnumstages
#endif
PETSC_EXTERN void tssspgetnumstages_(TS *ts, PetscInt *nstages, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nstages);
  *ierr = TSSSPGetNumStages(*ts, nstages);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssspinitializepackage_ TSSSPINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssspinitializepackage_ tssspinitializepackage
#endif
PETSC_EXTERN void tssspinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSSSPInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssspfinalizepackage_ TSSSPFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssspfinalizepackage_ tssspfinalizepackage
#endif
PETSC_EXTERN void tssspfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSSSPFinalizePackage();
  if (*ierr) return;
}
