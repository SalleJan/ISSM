#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabcreateboxmesh_ DMMOABCREATEBOXMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabcreateboxmesh_ dmmoabcreateboxmesh
#endif
PETSC_EXTERN void dmmoabcreateboxmesh_(MPI_Fint *comm, PetscInt *dim, PetscBool *useSimplex, const PetscReal *bounds, PetscInt *nele, PetscInt *nghost, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(bounds);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMMoabCreateBoxMesh(MPI_Comm_f2c(*(comm)), *dim, *useSimplex ? PETSC_TRUE : PETSC_FALSE, bounds, *nele, *nghost, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabloadfromfile_ DMMOABLOADFROMFILE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabloadfromfile_ dmmoabloadfromfile
#endif
PETSC_EXTERN void dmmoabloadfromfile_(MPI_Fint *comm, PetscInt *dim, PetscInt *nghost, char filename[], char usrreadopts[], DM *dm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename, PETSC_FORTRAN_CHARLEN_T l_usrreadopts)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  char* c_usrreadopts;
  FIXCHAR(usrreadopts, l_usrreadopts, c_usrreadopts);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMMoabLoadFromFile(MPI_Comm_f2c(*(comm)), *dim, *nghost, c_filename, c_usrreadopts, dm);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
  FREECHAR(usrreadopts, c_usrreadopts);
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabrenumbermeshentities_ DMMOABRENUMBERMESHENTITIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabrenumbermeshentities_ dmmoabrenumbermeshentities
#endif
PETSC_EXTERN void dmmoabrenumbermeshentities_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMMoabRenumberMeshEntities(*dm);
  if (*ierr) return;
}
