#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aocreatebasic_ AOCREATEBASIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aocreatebasic_ aocreatebasic
#endif
PETSC_EXTERN void aocreatebasic_(MPI_Fint *comm, PetscInt *napp, const PetscInt myapp[], const PetscInt mypetsc[], AO *aoout, PetscErrorCode *ierr)
{
  PetscBool null_aoout = !*(void**) aoout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(myapp);
  CHKFORTRANNULLINTEGER(mypetsc);
  CHKFORTRANNULLOBJECT(aoout);
  *ierr = AOCreateBasic(MPI_Comm_f2c(*(comm)), *napp, myapp, mypetsc, aoout);
  if (*ierr) return;
  if (! null_aoout && !*(void**) aoout) *(void **) aoout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aocreatebasicis_ AOCREATEBASICIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aocreatebasicis_ aocreatebasicis
#endif
PETSC_EXTERN void aocreatebasicis_(IS *isapp, IS *ispetsc, AO *aoout, PetscErrorCode *ierr)
{
  PetscBool null_aoout = !*(void**) aoout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(aoout);
  *ierr = AOCreateBasicIS(*isapp, *ispetsc, aoout);
  if (*ierr) return;
  if (! null_aoout && !*(void**) aoout) *(void **) aoout = (void *)-2;
}
