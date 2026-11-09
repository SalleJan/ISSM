#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrhssplitsetis_ TSRHSSPLITSETIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrhssplitsetis_ tsrhssplitsetis
#endif
PETSC_EXTERN void tsrhssplitsetis_(TS *ts, char splitname[], IS *is, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_splitname)
{
  char* c_splitname;
  FIXCHAR(splitname, l_splitname, c_splitname);
  *ierr = TSRHSSplitSetIS(*ts, c_splitname, *is);
  if (*ierr) return;
  FREECHAR(splitname, c_splitname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrhssplitgetis_ TSRHSSPLITGETIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrhssplitgetis_ tsrhssplitgetis
#endif
PETSC_EXTERN void tsrhssplitgetis_(TS *ts, char splitname[], IS *is, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_splitname)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  char* c_splitname;
  FIXCHAR(splitname, l_splitname, c_splitname);
  CHKFORTRANNULLOBJECT(is);
  *ierr = TSRHSSplitGetIS(*ts, c_splitname, is);
  if (*ierr) return;
  FREECHAR(splitname, c_splitname);
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrhssplitgetsubts_ TSRHSSPLITGETSUBTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrhssplitgetsubts_ tsrhssplitgetsubts
#endif
PETSC_EXTERN void tsrhssplitgetsubts_(TS *ts, char splitname[], TS *subts, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_splitname)
{
  PetscBool null_subts = !*(void**) subts ? PETSC_TRUE : PETSC_FALSE;
  char* c_splitname;
  FIXCHAR(splitname, l_splitname, c_splitname);
  CHKFORTRANNULLOBJECT(subts);
  *ierr = TSRHSSplitGetSubTS(*ts, c_splitname, subts);
  if (*ierr) return;
  FREECHAR(splitname, c_splitname);
  if (! null_subts && !*(void**) subts) *(void **) subts = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrhssplitgetsnes_ TSRHSSPLITGETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrhssplitgetsnes_ tsrhssplitgetsnes
#endif
PETSC_EXTERN void tsrhssplitgetsnes_(TS *ts, SNES *snes, PetscErrorCode *ierr)
{
  PetscBool null_snes = !*(void**) snes ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(snes);
  *ierr = TSRHSSplitGetSNES(*ts, snes);
  if (*ierr) return;
  if (! null_snes && !*(void**) snes) *(void **) snes = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrhssplitsetsnes_ TSRHSSPLITSETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrhssplitsetsnes_ tsrhssplitsetsnes
#endif
PETSC_EXTERN void tsrhssplitsetsnes_(TS *ts, SNES *snes, PetscErrorCode *ierr)
{
  *ierr = TSRHSSplitSetSNES(*ts, *snes);
  if (*ierr) return;
}
