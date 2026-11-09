#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsctokenfind_ PETSCTOKENFIND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsctokenfind_ petsctokenfind
#endif
PETSC_EXTERN void petsctokenfind_(PetscToken *a, char result[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_result)
{
  char* c_result = PETSC_NULLPTR;
  *ierr = PetscTokenFind(*a, (const char **)&c_result);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)result, c_result, l_result);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, result, l_result);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsctokencreate_ PETSCTOKENCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsctokencreate_ petsctokencreate
#endif
PETSC_EXTERN void petsctokencreate_(char a[], char *b, PetscToken *t, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_a, PETSC_FORTRAN_CHARLEN_T l_b)
{
  PetscBool null_t = !*(void**) t ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(t);
  char* c_a;
  FIXCHAR(a, l_a, c_a);
  CHKFORTRANNULLOBJECT(t);
  *ierr = PetscTokenCreate(c_a, *b, t);
  if (*ierr) return;
  FREECHAR(a, c_a);
  if (! null_t && !*(void**) t) *(void **) t = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsctokendestroy_ PETSCTOKENDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsctokendestroy_ petsctokendestroy
#endif
PETSC_EXTERN void petsctokendestroy_(PetscToken *a, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(a);
  PetscBool null_a = !*(void**) a ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(a);
  *ierr = PetscTokenDestroy(a);
  if (*ierr) return;
  if (! null_a && !*(void**) a) *(void **) a = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscstrcasecmp_ PETSCSTRCASECMP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrcasecmp_ petscstrcasecmp
#endif
PETSC_EXTERN void petscstrcasecmp_(char a[], char b[], PetscBool *t, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_a, PETSC_FORTRAN_CHARLEN_T l_b)
{
  char* c_a;
  FIXCHAR(a, l_a, c_a);
  char* c_b;
  FIXCHAR(b, l_b, c_b);
  CHKFORTRANNULLBOOL(t);
  *ierr = PetscStrcasecmp(c_a, c_b, t);
  if (*ierr) return;
  FREECHAR(a, c_a);
  FREECHAR(b, c_b);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscstrinlist_ PETSCSTRINLIST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrinlist_ petscstrinlist
#endif
PETSC_EXTERN void petscstrinlist_(char str[], char list[], char *sep, PetscBool *found, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_str, PETSC_FORTRAN_CHARLEN_T l_list, PETSC_FORTRAN_CHARLEN_T l_sep)
{
  char* c_str;
  FIXCHAR(str, l_str, c_str);
  char* c_list;
  FIXCHAR(list, l_list, c_list);
  CHKFORTRANNULLBOOL(found);
  *ierr = PetscStrInList(c_str, c_list, *sep, found);
  if (*ierr) return;
  FREECHAR(str, c_str);
  FREECHAR(list, c_list);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetpetscdir_ PETSCGETPETSCDIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetpetscdir_ petscgetpetscdir
#endif
PETSC_EXTERN void petscgetpetscdir_(char dir[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dir)
{
  char* c_dir = PETSC_NULLPTR;
  *ierr = PetscGetPetscDir((const char **)&c_dir);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)dir, c_dir, l_dir);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, dir, l_dir);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscstrreplace_ PETSCSTRREPLACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrreplace_ petscstrreplace
#endif
PETSC_EXTERN void petscstrreplace_(MPI_Fint *comm, char aa[], char b[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_aa, PETSC_FORTRAN_CHARLEN_T l_b)
{
  char* c_aa;
  FIXCHAR(aa, l_aa, c_aa);
  *ierr = PetscStrreplace(MPI_Comm_f2c(*(comm)), c_aa, b, l_b);
  if (*ierr) return;
  FREECHAR(aa, c_aa);
  FIXRETURNCHAR(PETSC_TRUE, b, l_b);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscstrcat_ PETSCSTRCAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrcat_ petscstrcat
#endif
PETSC_EXTERN void petscstrcat_(char s[], char t[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_s, PETSC_FORTRAN_CHARLEN_T l_t)
{
  char* c_t;
  FIXCHAR(t, l_t, c_t);
  *ierr = PetscStrcat(s, c_t);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, s, l_s);
  FREECHAR(t, c_t);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscstrcpy_ PETSCSTRCPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrcpy_ petscstrcpy
#endif
PETSC_EXTERN void petscstrcpy_(char s[], char t[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_s, PETSC_FORTRAN_CHARLEN_T l_t)
{
  char* c_t;
  FIXCHAR(t, l_t, c_t);
  *ierr = PetscStrcpy(s, c_t);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, s, l_s);
  FREECHAR(t, c_t);
}
