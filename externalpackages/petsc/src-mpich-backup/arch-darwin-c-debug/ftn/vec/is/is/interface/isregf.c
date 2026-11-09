#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscreate_ ISCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscreate_ iscreate
#endif
PETSC_EXTERN void iscreate_(MPI_Fint *comm, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(is);
  CHKFORTRANNULLOBJECT(is);
  *ierr = ISCreate(MPI_Comm_f2c(*(comm)), is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issettype_ ISSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issettype_ issettype
#endif
PETSC_EXTERN void issettype_(IS *is, char *method, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_method)
{
  char* c_method;
  FIXCHAR(method, l_method, c_method);
  *ierr = ISSetType(*is, c_method);
  if (*ierr) return;
  FREECHAR(method, c_method);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgettype_ ISGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgettype_ isgettype
#endif
PETSC_EXTERN void isgettype_(IS *is, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = ISGetType(*is, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
