#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsccharacteristic.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define characteristicdestroy_ CHARACTERISTICDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define characteristicdestroy_ characteristicdestroy
#endif
PETSC_EXTERN void characteristicdestroy_(Characteristic *c, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(c);
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(c);
  *ierr = CharacteristicDestroy(c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsccharacteristic.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define characteristiccreate_ CHARACTERISTICCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define characteristiccreate_ characteristiccreate
#endif
PETSC_EXTERN void characteristiccreate_(MPI_Fint *comm, Characteristic *c, PetscErrorCode *ierr)
{
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(c);
  CHKFORTRANNULLOBJECT(c);
  *ierr = CharacteristicCreate(MPI_Comm_f2c(*(comm)), c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsccharacteristic.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define characteristicsettype_ CHARACTERISTICSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define characteristicsettype_ characteristicsettype
#endif
PETSC_EXTERN void characteristicsettype_(Characteristic *c, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = CharacteristicSetType(*c, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsccharacteristic.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define characteristicsetup_ CHARACTERISTICSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define characteristicsetup_ characteristicsetup
#endif
PETSC_EXTERN void characteristicsetup_(Characteristic *c, PetscErrorCode *ierr)
{
  *ierr = CharacteristicSetUp(*c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsccharacteristic.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define characteristicsolve_ CHARACTERISTICSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define characteristicsolve_ characteristicsolve
#endif
PETSC_EXTERN void characteristicsolve_(Characteristic *c, PetscReal *dt, Vec *solution, PetscErrorCode *ierr)
{
  *ierr = CharacteristicSolve(*c, *dt, *solution);
  if (*ierr) return;
}
