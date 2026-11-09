#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreate_ VECCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreate_ veccreate
#endif
PETSC_EXTERN void veccreate_(MPI_Fint *comm, Vec *vec, PetscErrorCode *ierr)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(vec);
  CHKFORTRANNULLOBJECT(vec);
  *ierr = VecCreate(MPI_Comm_f2c(*(comm)), vec);
  if (*ierr) return;
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreatefromoptions_ VECCREATEFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreatefromoptions_ veccreatefromoptions
#endif
PETSC_EXTERN void veccreatefromoptions_(MPI_Fint *comm, char prefix[], PetscInt *bs, PetscInt *m, PetscInt *n, Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  CHKFORTRANNULLOBJECT(vec);
  *ierr = VecCreateFromOptions(MPI_Comm_f2c(*(comm)), c_prefix, *bs, *m, *n, vec);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
