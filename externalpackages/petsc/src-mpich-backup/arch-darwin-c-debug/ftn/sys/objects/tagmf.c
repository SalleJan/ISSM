#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectgetnewtag_ PETSCOBJECTGETNEWTAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectgetnewtag_ petscobjectgetnewtag
#endif
PETSC_EXTERN void petscobjectgetnewtag_(PetscObject *obj, PetscMPIInt *tag, PetscErrorCode *ierr)
{
  *ierr = PetscObjectGetNewTag(*obj, tag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectslistgetglobalnumbering_ PETSCOBJECTSLISTGETGLOBALNUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectslistgetglobalnumbering_ petscobjectslistgetglobalnumbering
#endif
PETSC_EXTERN void petscobjectslistgetglobalnumbering_(MPI_Fint *comm, PetscInt *len, PetscObject objlist[], PetscInt *count, PetscInt *numbering, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(objlist);
  CHKFORTRANNULLINTEGER(count);
  CHKFORTRANNULLINTEGER(numbering);
  *ierr = PetscObjectsListGetGlobalNumbering(MPI_Comm_f2c(*(comm)), *len, objlist, count, numbering);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccommgetnewtag_ PETSCCOMMGETNEWTAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccommgetnewtag_ petsccommgetnewtag
#endif
PETSC_EXTERN void petsccommgetnewtag_(MPI_Fint *comm, PetscMPIInt *tag, PetscErrorCode *ierr)
{
  *ierr = PetscCommGetNewTag(MPI_Comm_f2c(*(comm)), tag);
  if (*ierr) return;
}
