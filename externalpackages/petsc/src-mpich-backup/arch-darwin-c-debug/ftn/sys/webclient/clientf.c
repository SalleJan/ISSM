#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscwebclient.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petschttpsrequest_ PETSCHTTPSREQUEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petschttpsrequest_ petschttpsrequest
#endif
PETSC_EXTERN void petschttpsrequest_(char type[], char url[], char header[], char ctype[], char body[], SSL *ssl, char buff[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type, PETSC_FORTRAN_CHARLEN_T l_url, PETSC_FORTRAN_CHARLEN_T l_header, PETSC_FORTRAN_CHARLEN_T l_ctype, PETSC_FORTRAN_CHARLEN_T l_body, PETSC_FORTRAN_CHARLEN_T l_buff)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  char* c_url;
  FIXCHAR(url, l_url, c_url);
  char* c_header;
  FIXCHAR(header, l_header, c_header);
  char* c_ctype;
  FIXCHAR(ctype, l_ctype, c_ctype);
  char* c_body;
  FIXCHAR(body, l_body, c_body);
  *ierr = PetscHTTPSRequest(c_type, c_url, c_header, c_ctype, c_body, ssl, buff, l_buff);
  if (*ierr) return;
  FREECHAR(type, c_type);
  FREECHAR(url, c_url);
  FREECHAR(header, c_header);
  FREECHAR(ctype, c_ctype);
  FREECHAR(body, c_body);
  FIXRETURNCHAR(PETSC_TRUE, buff, l_buff);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscwebclient.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petschttprequest_ PETSCHTTPREQUEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petschttprequest_ petschttprequest
#endif
PETSC_EXTERN void petschttprequest_(char type[], char url[], char header[], char ctype[], char body[], int *sock, char buff[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type, PETSC_FORTRAN_CHARLEN_T l_url, PETSC_FORTRAN_CHARLEN_T l_header, PETSC_FORTRAN_CHARLEN_T l_ctype, PETSC_FORTRAN_CHARLEN_T l_body, PETSC_FORTRAN_CHARLEN_T l_buff)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  char* c_url;
  FIXCHAR(url, l_url, c_url);
  char* c_header;
  FIXCHAR(header, l_header, c_header);
  char* c_ctype;
  FIXCHAR(ctype, l_ctype, c_ctype);
  char* c_body;
  FIXCHAR(body, l_body, c_body);
  *ierr = PetscHTTPRequest(c_type, c_url, c_header, c_ctype, c_body, *sock, buff, l_buff);
  if (*ierr) return;
  FREECHAR(type, c_type);
  FREECHAR(url, c_url);
  FREECHAR(header, c_header);
  FREECHAR(ctype, c_ctype);
  FREECHAR(body, c_body);
  FIXRETURNCHAR(PETSC_TRUE, buff, l_buff);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpulljsonvalue_ PETSCPULLJSONVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpulljsonvalue_ petscpulljsonvalue
#endif
PETSC_EXTERN void petscpulljsonvalue_(char buff[], char key[], char value[], PetscBool *found, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_buff, PETSC_FORTRAN_CHARLEN_T l_key, PETSC_FORTRAN_CHARLEN_T l_value)
{
  char* c_buff;
  FIXCHAR(buff, l_buff, c_buff);
  char* c_key;
  FIXCHAR(key, l_key, c_key);
  CHKFORTRANNULLBOOL(found);
  *ierr = PetscPullJSONValue(c_buff, c_key, value, l_value, found);
  if (*ierr) return;
  FREECHAR(buff, c_buff);
  FREECHAR(key, c_key);
  FIXRETURNCHAR(PETSC_TRUE, value, l_value);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpushjsonvalue_ PETSCPUSHJSONVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpushjsonvalue_ petscpushjsonvalue
#endif
PETSC_EXTERN void petscpushjsonvalue_(char buff[], char key[], char value[], size_t *bufflen, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_buff, PETSC_FORTRAN_CHARLEN_T l_key, PETSC_FORTRAN_CHARLEN_T l_value)
{
  char* c_key;
  FIXCHAR(key, l_key, c_key);
  char* c_value;
  FIXCHAR(value, l_value, c_value);
  *ierr = PetscPushJSONValue(buff, c_key, c_value, *bufflen);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, buff, l_buff);
  FREECHAR(key, c_key);
  FREECHAR(value, c_value);
}
