#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewersocketopen_ PETSCVIEWERSOCKETOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewersocketopen_ petscviewersocketopen
#endif
PETSC_EXTERN void petscviewersocketopen_(MPI_Fint *comm, char machine[], int *port, PetscViewer *lab, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_machine)
{
  PetscBool null_lab = !*(void**) lab ? PETSC_TRUE : PETSC_FALSE;
  char* c_machine;
  FIXCHAR(machine, l_machine, c_machine);
  CHKFORTRANNULLOBJECT(lab);
  *ierr = PetscViewerSocketOpen(MPI_Comm_f2c(*(comm)), c_machine, *port, lab);
  if (*ierr) return;
  FREECHAR(machine, c_machine);
  if (! null_lab && !*(void**) lab) *(void **) lab = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewersocketsetconnection_ PETSCVIEWERSOCKETSETCONNECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewersocketsetconnection_ petscviewersocketsetconnection
#endif
PETSC_EXTERN void petscviewersocketsetconnection_(PetscViewer *v, char machine[], int *port, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_machine)
{
  char* c_machine;
  FIXCHAR(machine, l_machine, c_machine);
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscViewerSocketSetConnection(v_v, c_machine, *port);
  if (*ierr) return;
  FREECHAR(machine, c_machine);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscopensocket_ PETSCOPENSOCKET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscopensocket_ petscopensocket
#endif
PETSC_EXTERN void petscopensocket_(char hostname[], int *portnum, int *t, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_hostname)
{
  char* c_hostname;
  FIXCHAR(hostname, l_hostname, c_hostname);
  *ierr = PetscOpenSocket(c_hostname, *portnum, t);
  if (*ierr) return;
  FREECHAR(hostname, c_hostname);
}
