#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscstrtolower_ PETSCSTRTOLOWER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrtolower_ petscstrtolower
#endif
PETSC_EXTERN void petscstrtolower_(char a[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_a)
{
  *ierr = PetscStrtolower(a);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, a, l_a);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscstrtoupper_ PETSCSTRTOUPPER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrtoupper_ petscstrtoupper
#endif
PETSC_EXTERN void petscstrtoupper_(char a[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_a)
{
  *ierr = PetscStrtoupper(a);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, a, l_a);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscstrlen_ PETSCSTRLEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrlen_ petscstrlen
#endif
PETSC_EXTERN void petscstrlen_(char s[], size_t *len, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_s)
{
  char* c_s;
  FIXCHAR(s, l_s, c_s);
  *ierr = PetscStrlen(c_s, len);
  if (*ierr) return;
  FREECHAR(s, c_s);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscstrcmp_ PETSCSTRCMP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrcmp_ petscstrcmp
#endif
PETSC_EXTERN void petscstrcmp_(char a[], char b[], PetscBool *flg, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_a, PETSC_FORTRAN_CHARLEN_T l_b)
{
  char* c_a;
  FIXCHAR(a, l_a, c_a);
  char* c_b;
  FIXCHAR(b, l_b, c_b);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscStrcmp(c_a, c_b, flg);
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
  #define petscstrlcat_ PETSCSTRLCAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrlcat_ petscstrlcat
#endif
PETSC_EXTERN void petscstrlcat_(char s[], char t[], size_t *n, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_s, PETSC_FORTRAN_CHARLEN_T l_t)
{
  char* c_t;
  FIXCHAR(t, l_t, c_t);
  *ierr = PetscStrlcat(s, c_t, *n);
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
  #define petscstrncmp_ PETSCSTRNCMP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrncmp_ petscstrncmp
#endif
PETSC_EXTERN void petscstrncmp_(char a[], char b[], size_t *n, PetscBool *t, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_a, PETSC_FORTRAN_CHARLEN_T l_b)
{
  char* c_a;
  FIXCHAR(a, l_a, c_a);
  char* c_b;
  FIXCHAR(b, l_b, c_b);
  CHKFORTRANNULLBOOL(t);
  *ierr = PetscStrncmp(c_a, c_b, *n, t);
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
  #define petscstrgrt_ PETSCSTRGRT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrgrt_ petscstrgrt
#endif
PETSC_EXTERN void petscstrgrt_(char a[], char b[], PetscBool *t, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_a, PETSC_FORTRAN_CHARLEN_T l_b)
{
  char* c_a;
  FIXCHAR(a, l_a, c_a);
  char* c_b;
  FIXCHAR(b, l_b, c_b);
  CHKFORTRANNULLBOOL(t);
  *ierr = PetscStrgrt(c_a, c_b, t);
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
  #define petscstrendswith_ PETSCSTRENDSWITH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrendswith_ petscstrendswith
#endif
PETSC_EXTERN void petscstrendswith_(char a[], char b[], PetscBool *flg, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_a, PETSC_FORTRAN_CHARLEN_T l_b)
{
  char* c_a;
  FIXCHAR(a, l_a, c_a);
  char* c_b;
  FIXCHAR(b, l_b, c_b);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscStrendswith(c_a, c_b, flg);
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
  #define petscstrbeginswith_ PETSCSTRBEGINSWITH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscstrbeginswith_ petscstrbeginswith
#endif
PETSC_EXTERN void petscstrbeginswith_(char a[], char b[], PetscBool *flg, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_a, PETSC_FORTRAN_CHARLEN_T l_b)
{
  char* c_a;
  FIXCHAR(a, l_a, c_a);
  char* c_b;
  FIXCHAR(b, l_b, c_b);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscStrbeginswith(c_a, c_b, flg);
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
  #define petscmemmove_ PETSCMEMMOVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmemmove_ petscmemmove
#endif
PETSC_EXTERN void petscmemmove_(void *a, const void *b, size_t *n, PetscErrorCode *ierr)
{
  *ierr = PetscMemmove(a, b, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmemcpy_ PETSCMEMCPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmemcpy_ petscmemcpy
#endif
PETSC_EXTERN void petscmemcpy_(void *a, const void *b, size_t *n, PetscErrorCode *ierr)
{
  *ierr = PetscMemcpy(a, b, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscstring.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmemzero_ PETSCMEMZERO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmemzero_ petscmemzero
#endif
PETSC_EXTERN void petscmemzero_(void *a, size_t *n, PetscErrorCode *ierr)
{
  *ierr = PetscMemzero(a, *n);
  if (*ierr) return;
}
