#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionscreate_ PETSCOPTIONSCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionscreate_ petscoptionscreate
#endif
PETSC_EXTERN void petscoptionscreate_(PetscOptions *options, PetscErrorCode *ierr)
{
  PetscBool null_options = !*(void**) options ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(options);
  CHKFORTRANNULLOBJECT(options);
  *ierr = PetscOptionsCreate(options);
  if (*ierr) return;
  if (! null_options && !*(void**) options) *(void **) options = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsdestroy_ PETSCOPTIONSDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsdestroy_ petscoptionsdestroy
#endif
PETSC_EXTERN void petscoptionsdestroy_(PetscOptions *options, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(options);
  PetscBool null_options = !*(void**) options ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(options);
  *ierr = PetscOptionsDestroy(options);
  if (*ierr) return;
  if (! null_options && !*(void**) options) *(void **) options = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionscreatedefault_ PETSCOPTIONSCREATEDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionscreatedefault_ petscoptionscreatedefault
#endif
PETSC_EXTERN void petscoptionscreatedefault_(PetscErrorCode *ierr)
{
  *ierr = PetscOptionsCreateDefault();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionspush_ PETSCOPTIONSPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionspush_ petscoptionspush
#endif
PETSC_EXTERN void petscoptionspush_(PetscOptions *opt, PetscErrorCode *ierr)
{
  *ierr = PetscOptionsPush(*opt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionspop_ PETSCOPTIONSPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionspop_ petscoptionspop
#endif
PETSC_EXTERN void petscoptionspop_(PetscErrorCode *ierr)
{
  *ierr = PetscOptionsPop();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsdestroydefault_ PETSCOPTIONSDESTROYDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsdestroydefault_ petscoptionsdestroydefault
#endif
PETSC_EXTERN void petscoptionsdestroydefault_(PetscErrorCode *ierr)
{
  *ierr = PetscOptionsDestroyDefault();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsvalidkey_ PETSCOPTIONSVALIDKEY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsvalidkey_ petscoptionsvalidkey
#endif
PETSC_EXTERN void petscoptionsvalidkey_(char key[], PetscBool *valid, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_key)
{
  char* c_key;
  FIXCHAR(key, l_key, c_key);
  CHKFORTRANNULLBOOL(valid);
  *ierr = PetscOptionsValidKey(c_key, valid);
  if (*ierr) return;
  FREECHAR(key, c_key);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsinsertstring_ PETSCOPTIONSINSERTSTRING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsinsertstring_ petscoptionsinsertstring
#endif
PETSC_EXTERN void petscoptionsinsertstring_(PetscOptions *options, char in_str[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_in_str)
{
  char* c_in_str;
  FIXCHAR(in_str, l_in_str, c_in_str);
  *ierr = PetscOptionsInsertString(*options, c_in_str);
  if (*ierr) return;
  FREECHAR(in_str, c_in_str);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsinsertfile_ PETSCOPTIONSINSERTFILE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsinsertfile_ petscoptionsinsertfile
#endif
PETSC_EXTERN void petscoptionsinsertfile_(MPI_Fint *comm, PetscOptions *options, char file[], PetscBool *require, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_file)
{
  char* c_file;
  FIXCHAR(file, l_file, c_file);
  *ierr = PetscOptionsInsertFile(MPI_Comm_f2c(*(comm)), *options, c_file, *require ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
  FREECHAR(file, c_file);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsview_ PETSCOPTIONSVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsview_ petscoptionsview
#endif
PETSC_EXTERN void petscoptionsview_(PetscOptions *options, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscOptionsView(*options, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionslefterror_ PETSCOPTIONSLEFTERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionslefterror_ petscoptionslefterror
#endif
PETSC_EXTERN void petscoptionslefterror_(PetscErrorCode *ierr)
{
  *ierr = PetscOptionsLeftError();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsprefixpush_ PETSCOPTIONSPREFIXPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsprefixpush_ petscoptionsprefixpush
#endif
PETSC_EXTERN void petscoptionsprefixpush_(PetscOptions *options, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = PetscOptionsPrefixPush(*options, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsprefixpop_ PETSCOPTIONSPREFIXPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsprefixpop_ petscoptionsprefixpop
#endif
PETSC_EXTERN void petscoptionsprefixpop_(PetscOptions *options, PetscErrorCode *ierr)
{
  *ierr = PetscOptionsPrefixPop(*options);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsclear_ PETSCOPTIONSCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsclear_ petscoptionsclear
#endif
PETSC_EXTERN void petscoptionsclear_(PetscOptions *options, PetscErrorCode *ierr)
{
  *ierr = PetscOptionsClear(*options);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionssetalias_ PETSCOPTIONSSETALIAS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionssetalias_ petscoptionssetalias
#endif
PETSC_EXTERN void petscoptionssetalias_(PetscOptions *options, char newname[], char oldname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_newname, PETSC_FORTRAN_CHARLEN_T l_oldname)
{
  char* c_newname;
  FIXCHAR(newname, l_newname, c_newname);
  char* c_oldname;
  FIXCHAR(oldname, l_oldname, c_oldname);
  *ierr = PetscOptionsSetAlias(*options, c_newname, c_oldname);
  if (*ierr) return;
  FREECHAR(newname, c_newname);
  FREECHAR(oldname, c_oldname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionssetvalue_ PETSCOPTIONSSETVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionssetvalue_ petscoptionssetvalue
#endif
PETSC_EXTERN void petscoptionssetvalue_(PetscOptions *options, char name[], char value[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_value)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_value;
  FIXCHAR(value, l_value, c_value);
  *ierr = PetscOptionsSetValue(*options, c_name, c_value);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(value, c_value);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsclearvalue_ PETSCOPTIONSCLEARVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsclearvalue_ petscoptionsclearvalue
#endif
PETSC_EXTERN void petscoptionsclearvalue_(PetscOptions *options, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscOptionsClearValue(*options, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsfindpair_ PETSCOPTIONSFINDPAIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsfindpair_ petscoptionsfindpair
#endif
PETSC_EXTERN void petscoptionsfindpair_(PetscOptions *options, char pre[], char name[], char value[], PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_value)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_value = PETSC_NULLPTR;
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsFindPair(*options, c_pre, c_name, (const char **)&c_value, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
  *ierr = PetscStrncpy((char *)value, c_value, l_value);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, value, l_value);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsreject_ PETSCOPTIONSREJECT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsreject_ petscoptionsreject
#endif
PETSC_EXTERN void petscoptionsreject_(PetscOptions *options, char pre[], char name[], char mess[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_mess)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_mess;
  FIXCHAR(mess, l_mess, c_mess);
  *ierr = PetscOptionsReject(*options, c_pre, c_name, c_mess);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
  FREECHAR(mess, c_mess);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionshashelp_ PETSCOPTIONSHASHELP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionshashelp_ petscoptionshashelp
#endif
PETSC_EXTERN void petscoptionshashelp_(PetscOptions *options, PetscBool *set, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsHasHelp(*options, set);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionshasname_ PETSCOPTIONSHASNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionshasname_ petscoptionshasname
#endif
PETSC_EXTERN void petscoptionshasname_(PetscOptions *options, char pre[], char name[], PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsHasName(*options, c_pre, c_name, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsused_ PETSCOPTIONSUSED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsused_ petscoptionsused
#endif
PETSC_EXTERN void petscoptionsused_(PetscOptions *options, char name[], PetscBool *used, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(used);
  *ierr = PetscOptionsUsed(*options, c_name, used);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsallused_ PETSCOPTIONSALLUSED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsallused_ petscoptionsallused
#endif
PETSC_EXTERN void petscoptionsallused_(PetscOptions *options, PetscInt *N, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(N);
  *ierr = PetscOptionsAllUsed(*options, N);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsleft_ PETSCOPTIONSLEFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsleft_ petscoptionsleft
#endif
PETSC_EXTERN void petscoptionsleft_(PetscOptions *options, PetscErrorCode *ierr)
{
  *ierr = PetscOptionsLeft(*options);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsmonitordefault_ PETSCOPTIONSMONITORDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsmonitordefault_ petscoptionsmonitordefault
#endif
PETSC_EXTERN void petscoptionsmonitordefault_(char name[], char value[], PetscOptionSource *source, PetscCtx ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_value)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_value;
  FIXCHAR(value, l_value, c_value);
  *ierr = PetscOptionsMonitorDefault(c_name, c_value, *source, ctx);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(value, c_value);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsstringtobool_ PETSCOPTIONSSTRINGTOBOOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsstringtobool_ petscoptionsstringtobool
#endif
PETSC_EXTERN void petscoptionsstringtobool_(char value[], PetscBool *a, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_value)
{
  char* c_value;
  FIXCHAR(value, l_value, c_value);
  CHKFORTRANNULLBOOL(a);
  *ierr = PetscOptionsStringToBool(c_value, a);
  if (*ierr) return;
  FREECHAR(value, c_value);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsstringtoint_ PETSCOPTIONSSTRINGTOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsstringtoint_ petscoptionsstringtoint
#endif
PETSC_EXTERN void petscoptionsstringtoint_(char name[], PetscInt *a, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(a);
  *ierr = PetscOptionsStringToInt(c_name, a);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsstringtoreal_ PETSCOPTIONSSTRINGTOREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsstringtoreal_ petscoptionsstringtoreal
#endif
PETSC_EXTERN void petscoptionsstringtoreal_(char name[], PetscReal *a, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(a);
  *ierr = PetscOptionsStringToReal(c_name, a);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsstringtoscalar_ PETSCOPTIONSSTRINGTOSCALAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsstringtoscalar_ petscoptionsstringtoscalar
#endif
PETSC_EXTERN void petscoptionsstringtoscalar_(char name[], PetscScalar *a, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLSCALAR(a);
  *ierr = PetscOptionsStringToScalar(c_name, a);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetbool_ PETSCOPTIONSGETBOOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetbool_ petscoptionsgetbool
#endif
PETSC_EXTERN void petscoptionsgetbool_(PetscOptions *options, char pre[], char name[], PetscBool *ivalue, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(ivalue);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetBool(*options, c_pre, c_name, ivalue, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetbool3_ PETSCOPTIONSGETBOOL3
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetbool3_ petscoptionsgetbool3
#endif
PETSC_EXTERN void petscoptionsgetbool3_(PetscOptions *options, char pre[], char name[], PetscBool3 *ivalue, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetBool3(*options, c_pre, c_name, ivalue, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetint_ PETSCOPTIONSGETINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetint_ petscoptionsgetint
#endif
PETSC_EXTERN void petscoptionsgetint_(PetscOptions *options, char pre[], char name[], PetscInt *ivalue, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(ivalue);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetInt(*options, c_pre, c_name, ivalue, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetmpiint_ PETSCOPTIONSGETMPIINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetmpiint_ petscoptionsgetmpiint
#endif
PETSC_EXTERN void petscoptionsgetmpiint_(PetscOptions *options, char pre[], char name[], PetscMPIInt *ivalue, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetMPIInt(*options, c_pre, c_name, ivalue, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetreal_ PETSCOPTIONSGETREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetreal_ petscoptionsgetreal
#endif
PETSC_EXTERN void petscoptionsgetreal_(PetscOptions *options, char pre[], char name[], PetscReal *dvalue, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(dvalue);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetReal(*options, c_pre, c_name, dvalue, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetscalar_ PETSCOPTIONSGETSCALAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetscalar_ petscoptionsgetscalar
#endif
PETSC_EXTERN void petscoptionsgetscalar_(PetscOptions *options, char pre[], char name[], PetscScalar *dvalue, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLSCALAR(dvalue);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetScalar(*options, c_pre, c_name, dvalue, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetboolarray_ PETSCOPTIONSGETBOOLARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetboolarray_ petscoptionsgetboolarray
#endif
PETSC_EXTERN void petscoptionsgetboolarray_(PetscOptions *options, char pre[], char name[], PetscBool dvalue[], PetscInt *nmax, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(dvalue);
  CHKFORTRANNULLINTEGER(nmax);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetBoolArray(*options, c_pre, c_name, dvalue, nmax, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetintarray_ PETSCOPTIONSGETINTARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetintarray_ petscoptionsgetintarray
#endif
PETSC_EXTERN void petscoptionsgetintarray_(PetscOptions *options, char pre[], char name[], PetscInt ivalue[], PetscInt *nmax, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(ivalue);
  CHKFORTRANNULLINTEGER(nmax);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetIntArray(*options, c_pre, c_name, ivalue, nmax, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetrealarray_ PETSCOPTIONSGETREALARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetrealarray_ petscoptionsgetrealarray
#endif
PETSC_EXTERN void petscoptionsgetrealarray_(PetscOptions *options, char pre[], char name[], PetscReal dvalue[], PetscInt *nmax, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(dvalue);
  CHKFORTRANNULLINTEGER(nmax);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetRealArray(*options, c_pre, c_name, dvalue, nmax, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetscalararray_ PETSCOPTIONSGETSCALARARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetscalararray_ petscoptionsgetscalararray
#endif
PETSC_EXTERN void petscoptionsgetscalararray_(PetscOptions *options, char pre[], char name[], PetscScalar dvalue[], PetscInt *nmax, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLSCALAR(dvalue);
  CHKFORTRANNULLINTEGER(nmax);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetScalarArray(*options, c_pre, c_name, dvalue, nmax, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
