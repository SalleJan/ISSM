#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aomappinghasapplicationindex_ AOMAPPINGHASAPPLICATIONINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aomappinghasapplicationindex_ aomappinghasapplicationindex
#endif
PETSC_EXTERN void aomappinghasapplicationindex_(AO *ao, PetscInt *idex, PetscBool *hasIndex, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasIndex);
  *ierr = AOMappingHasApplicationIndex(*ao, *idex, hasIndex);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aomappinghaspetscindex_ AOMAPPINGHASPETSCINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aomappinghaspetscindex_ aomappinghaspetscindex
#endif
PETSC_EXTERN void aomappinghaspetscindex_(AO *ao, PetscInt *idex, PetscBool *hasIndex, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasIndex);
  *ierr = AOMappingHasPetscIndex(*ao, *idex, hasIndex);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aocreatemapping_ AOCREATEMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aocreatemapping_ aocreatemapping
#endif
PETSC_EXTERN void aocreatemapping_(MPI_Fint *comm, PetscInt *napp, const PetscInt myapp[], const PetscInt mypetsc[], AO *aoout, PetscErrorCode *ierr)
{
  PetscBool null_aoout = !*(void**) aoout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(myapp);
  CHKFORTRANNULLINTEGER(mypetsc);
  CHKFORTRANNULLOBJECT(aoout);
  *ierr = AOCreateMapping(MPI_Comm_f2c(*(comm)), *napp, myapp, mypetsc, aoout);
  if (*ierr) return;
  if (! null_aoout && !*(void**) aoout) *(void **) aoout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aocreatemappingis_ AOCREATEMAPPINGIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aocreatemappingis_ aocreatemappingis
#endif
PETSC_EXTERN void aocreatemappingis_(IS *isapp, IS *ispetsc, AO *aoout, PetscErrorCode *ierr)
{
  PetscBool null_aoout = !*(void**) aoout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(aoout);
  *ierr = AOCreateMappingIS(*isapp, *ispetsc, aoout);
  if (*ierr) return;
  if (! null_aoout && !*(void**) aoout) *(void **) aoout = (void *)-2;
}
