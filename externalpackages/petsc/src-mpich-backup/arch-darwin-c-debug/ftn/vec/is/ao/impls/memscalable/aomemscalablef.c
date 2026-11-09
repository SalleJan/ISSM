#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aocreatememoryscalable_ AOCREATEMEMORYSCALABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aocreatememoryscalable_ aocreatememoryscalable
#endif
PETSC_EXTERN void aocreatememoryscalable_(MPI_Fint *comm, PetscInt *napp, const PetscInt myapp[], const PetscInt mypetsc[], AO *aoout, PetscErrorCode *ierr)
{
  PetscBool null_aoout = !*(void**) aoout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(myapp);
  CHKFORTRANNULLINTEGER(mypetsc);
  CHKFORTRANNULLOBJECT(aoout);
  *ierr = AOCreateMemoryScalable(MPI_Comm_f2c(*(comm)), *napp, myapp, mypetsc, aoout);
  if (*ierr) return;
  if (! null_aoout && !*(void**) aoout) *(void **) aoout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aocreatememoryscalableis_ AOCREATEMEMORYSCALABLEIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aocreatememoryscalableis_ aocreatememoryscalableis
#endif
PETSC_EXTERN void aocreatememoryscalableis_(IS *isapp, IS *ispetsc, AO *aoout, PetscErrorCode *ierr)
{
  PetscBool null_aoout = !*(void**) aoout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(aoout);
  *ierr = AOCreateMemoryScalableIS(*isapp, *ispetsc, aoout);
  if (*ierr) return;
  if (! null_aoout && !*(void**) aoout) *(void **) aoout = (void *)-2;
}
