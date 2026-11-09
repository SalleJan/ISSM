#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbyteswap_ PETSCBYTESWAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbyteswap_ petscbyteswap
#endif
PETSC_EXTERN void petscbyteswap_(void *data, PetscDataType *pdtype, PetscCount *count, PetscErrorCode *ierr)
{
  *ierr = PetscByteSwap(data, *pdtype, *count);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbinaryread_ PETSCBINARYREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbinaryread_ petscbinaryread
#endif
PETSC_EXTERN void petscbinaryread_(int *fd, void *data, PetscCount *num, PetscInt *count, PetscDataType *type, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(count);
  *ierr = PetscBinaryRead(*fd, data, *num, count, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbinarywrite_ PETSCBINARYWRITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbinarywrite_ petscbinarywrite
#endif
PETSC_EXTERN void petscbinarywrite_(int *fd, const void *p, PetscCount *n, PetscDataType *type, PetscErrorCode *ierr)
{
  *ierr = PetscBinaryWrite(*fd, p, *n, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbinaryopen_ PETSCBINARYOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbinaryopen_ petscbinaryopen
#endif
PETSC_EXTERN void petscbinaryopen_(char name[], PetscFileMode *mode, int *fd, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscBinaryOpen(c_name, *mode, fd);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbinaryclose_ PETSCBINARYCLOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbinaryclose_ petscbinaryclose
#endif
PETSC_EXTERN void petscbinaryclose_(int *fd, PetscErrorCode *ierr)
{
  *ierr = PetscBinaryClose(*fd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbinarysynchronizedread_ PETSCBINARYSYNCHRONIZEDREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbinarysynchronizedread_ petscbinarysynchronizedread
#endif
PETSC_EXTERN void petscbinarysynchronizedread_(MPI_Fint *comm, int *fd, void *data, PetscInt *num, PetscInt *count, PetscDataType *type, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(count);
  *ierr = PetscBinarySynchronizedRead(MPI_Comm_f2c(*(comm)), *fd, data, *num, count, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbinarysynchronizedwrite_ PETSCBINARYSYNCHRONIZEDWRITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbinarysynchronizedwrite_ petscbinarysynchronizedwrite
#endif
PETSC_EXTERN void petscbinarysynchronizedwrite_(MPI_Fint *comm, int *fd, const void *p, PetscInt *n, PetscDataType *type, PetscErrorCode *ierr)
{
  *ierr = PetscBinarySynchronizedWrite(MPI_Comm_f2c(*(comm)), *fd, p, *n, *type);
  if (*ierr) return;
}
