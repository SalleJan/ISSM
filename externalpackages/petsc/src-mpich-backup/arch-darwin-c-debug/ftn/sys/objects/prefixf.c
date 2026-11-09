#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectgetoptions_ PETSCOBJECTGETOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectgetoptions_ petscobjectgetoptions
#endif
PETSC_EXTERN void petscobjectgetoptions_(PetscObject *obj, PetscOptions *options, PetscErrorCode *ierr)
{
  PetscBool null_options = !*(void**) options ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(options);
  *ierr = PetscObjectGetOptions(*obj, options);
  if (*ierr) return;
  if (! null_options && !*(void**) options) *(void **) options = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsetoptions_ PETSCOBJECTSETOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsetoptions_ petscobjectsetoptions
#endif
PETSC_EXTERN void petscobjectsetoptions_(PetscObject *obj, PetscOptions *options, PetscErrorCode *ierr)
{
  *ierr = PetscObjectSetOptions(*obj, *options);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsetoptionsprefix_ PETSCOBJECTSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsetoptionsprefix_ petscobjectsetoptionsprefix
#endif
PETSC_EXTERN void petscobjectsetoptionsprefix_(PetscObject *obj, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = PetscObjectSetOptionsPrefix(*obj, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectappendoptionsprefix_ PETSCOBJECTAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectappendoptionsprefix_ petscobjectappendoptionsprefix
#endif
PETSC_EXTERN void petscobjectappendoptionsprefix_(PetscObject *obj, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = PetscObjectAppendOptionsPrefix(*obj, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectgetoptionsprefix_ PETSCOBJECTGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectgetoptionsprefix_ petscobjectgetoptionsprefix
#endif
PETSC_EXTERN void petscobjectgetoptionsprefix_(PetscObject *obj, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix = PETSC_NULLPTR;
  *ierr = PetscObjectGetOptionsPrefix(*obj, (const char **)&c_prefix);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)prefix, c_prefix, l_prefix);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, prefix, l_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectprependoptionsprefix_ PETSCOBJECTPREPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectprependoptionsprefix_ petscobjectprependoptionsprefix
#endif
PETSC_EXTERN void petscobjectprependoptionsprefix_(PetscObject *obj, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = PetscObjectPrependOptionsPrefix(*obj, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
