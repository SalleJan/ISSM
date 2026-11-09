#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscformatconvertgetsize_ PETSCFORMATCONVERTGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscformatconvertgetsize_ petscformatconvertgetsize
#endif
PETSC_EXTERN void petscformatconvertgetsize_(char format[], size_t *size, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_format)
{
  char* c_format;
  FIXCHAR(format, l_format, c_format);
  *ierr = PetscFormatConvertGetSize(c_format, size);
  if (*ierr) return;
  FREECHAR(format, c_format);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscformatconvert_ PETSCFORMATCONVERT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscformatconvert_ petscformatconvert
#endif
PETSC_EXTERN void petscformatconvert_(char format[], char newformat[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_format, PETSC_FORTRAN_CHARLEN_T l_newformat)
{
  char* c_format;
  FIXCHAR(format, l_format, c_format);
  *ierr = PetscFormatConvert(c_format, newformat);
  if (*ierr) return;
  FREECHAR(format, c_format);
  FIXRETURNCHAR(PETSC_TRUE, newformat, l_newformat);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscformatrealarray_ PETSCFORMATREALARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscformatrealarray_ petscformatrealarray
#endif
PETSC_EXTERN void petscformatrealarray_(char buf[], char fmt[], PetscInt *n, const PetscReal x[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_buf, PETSC_FORTRAN_CHARLEN_T l_fmt)
{
  char* c_fmt;
  FIXCHAR(fmt, l_fmt, c_fmt);
  CHKFORTRANNULLREAL(x);
  *ierr = PetscFormatRealArray(buf, l_buf, c_fmt, *n, x);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, buf, l_buf);
  FREECHAR(fmt, c_fmt);
}
