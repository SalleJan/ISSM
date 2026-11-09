#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsarkimexregisterdestroy_ TSARKIMEXREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsarkimexregisterdestroy_ tsarkimexregisterdestroy
#endif
PETSC_EXTERN void tsarkimexregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = TSARKIMEXRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsarkimexinitializepackage_ TSARKIMEXINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsarkimexinitializepackage_ tsarkimexinitializepackage
#endif
PETSC_EXTERN void tsarkimexinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSARKIMEXInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsarkimexfinalizepackage_ TSARKIMEXFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsarkimexfinalizepackage_ tsarkimexfinalizepackage
#endif
PETSC_EXTERN void tsarkimexfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSARKIMEXFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsarkimexregister_ TSARKIMEXREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsarkimexregister_ tsarkimexregister
#endif
PETSC_EXTERN void tsarkimexregister_(char *name, PetscInt *order, PetscInt *s, const PetscReal At[], const PetscReal bt[], const PetscReal ct[], const PetscReal A[], const PetscReal b[], const PetscReal c[], const PetscReal bembedt[], const PetscReal bembed[], PetscInt *pinterp, const PetscReal binterpt[], const PetscReal binterp[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(At);
  CHKFORTRANNULLREAL(bt);
  CHKFORTRANNULLREAL(ct);
  CHKFORTRANNULLREAL(A);
  CHKFORTRANNULLREAL(b);
  CHKFORTRANNULLREAL(c);
  CHKFORTRANNULLREAL(bembedt);
  CHKFORTRANNULLREAL(bembed);
  CHKFORTRANNULLREAL(binterpt);
  CHKFORTRANNULLREAL(binterp);
  *ierr = TSARKIMEXRegister(c_name, *order, *s, At, bt, ct, A, b, c, bembedt, bembed, *pinterp, binterpt, binterp);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsdirkregister_ TSDIRKREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsdirkregister_ tsdirkregister
#endif
PETSC_EXTERN void tsdirkregister_(char *name, PetscInt *order, PetscInt *s, const PetscReal At[], const PetscReal bt[], const PetscReal ct[], const PetscReal bembedt[], PetscInt *pinterp, const PetscReal binterpt[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(At);
  CHKFORTRANNULLREAL(bt);
  CHKFORTRANNULLREAL(ct);
  CHKFORTRANNULLREAL(bembedt);
  CHKFORTRANNULLREAL(binterpt);
  *ierr = TSDIRKRegister(c_name, *order, *s, At, bt, ct, bembedt, *pinterp, binterpt);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsarkimexsettype_ TSARKIMEXSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsarkimexsettype_ tsarkimexsettype
#endif
PETSC_EXTERN void tsarkimexsettype_(TS *ts, char *arktype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_arktype)
{
  char* c_arktype;
  FIXCHAR(arktype, l_arktype, c_arktype);
  *ierr = TSARKIMEXSetType(*ts, c_arktype);
  if (*ierr) return;
  FREECHAR(arktype, c_arktype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsarkimexgettype_ TSARKIMEXGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsarkimexgettype_ tsarkimexgettype
#endif
PETSC_EXTERN void tsarkimexgettype_(TS *ts, char *arktype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_arktype)
{
  char* c_arktype = PETSC_NULLPTR;
  *ierr = TSARKIMEXGetType(*ts, (const char **)&c_arktype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)arktype, c_arktype, l_arktype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, arktype, l_arktype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsarkimexsetfullyimplicit_ TSARKIMEXSETFULLYIMPLICIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsarkimexsetfullyimplicit_ tsarkimexsetfullyimplicit
#endif
PETSC_EXTERN void tsarkimexsetfullyimplicit_(TS *ts, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = TSARKIMEXSetFullyImplicit(*ts, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsarkimexgetfullyimplicit_ TSARKIMEXGETFULLYIMPLICIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsarkimexgetfullyimplicit_ tsarkimexgetfullyimplicit
#endif
PETSC_EXTERN void tsarkimexgetfullyimplicit_(TS *ts, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = TSARKIMEXGetFullyImplicit(*ts, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsdirksettype_ TSDIRKSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsdirksettype_ tsdirksettype
#endif
PETSC_EXTERN void tsdirksettype_(TS *ts, char *dirktype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dirktype)
{
  char* c_dirktype;
  FIXCHAR(dirktype, l_dirktype, c_dirktype);
  *ierr = TSDIRKSetType(*ts, c_dirktype);
  if (*ierr) return;
  FREECHAR(dirktype, c_dirktype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsdirkgettype_ TSDIRKGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsdirkgettype_ tsdirkgettype
#endif
PETSC_EXTERN void tsdirkgettype_(TS *ts, char *dirktype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dirktype)
{
  char* c_dirktype = PETSC_NULLPTR;
  *ierr = TSDIRKGetType(*ts, (const char **)&c_dirktype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)dirktype, c_dirktype, l_dirktype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, dirktype, l_dirktype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsarkimexsetfastslowsplit_ TSARKIMEXSETFASTSLOWSPLIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsarkimexsetfastslowsplit_ tsarkimexsetfastslowsplit
#endif
PETSC_EXTERN void tsarkimexsetfastslowsplit_(TS *ts, PetscBool *fastslow, PetscErrorCode *ierr)
{
  *ierr = TSARKIMEXSetFastSlowSplit(*ts, *fastslow ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsarkimexgetfastslowsplit_ TSARKIMEXGETFASTSLOWSPLIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsarkimexgetfastslowsplit_ tsarkimexgetfastslowsplit
#endif
PETSC_EXTERN void tsarkimexgetfastslowsplit_(TS *ts, PetscBool *fastslow, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(fastslow);
  *ierr = TSARKIMEXGetFastSlowSplit(*ts, fastslow);
  if (*ierr) return;
}
