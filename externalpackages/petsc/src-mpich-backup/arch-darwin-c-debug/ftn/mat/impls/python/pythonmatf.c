#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpythonsettype_ MATPYTHONSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpythonsettype_ matpythonsettype
#endif
PETSC_EXTERN void matpythonsettype_(Mat *mat, char pyname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  char* c_pyname;
  FIXCHAR(pyname, l_pyname, c_pyname);
  *ierr = MatPythonSetType(*mat, c_pyname);
  if (*ierr) return;
  FREECHAR(pyname, c_pyname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpythongettype_ MATPYTHONGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpythongettype_ matpythongettype
#endif
PETSC_EXTERN void matpythongettype_(Mat *mat, char pyname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  char* c_pyname = PETSC_NULLPTR;
  *ierr = MatPythonGetType(*mat, (const char **)&c_pyname);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)pyname, c_pyname, l_pyname);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, pyname, l_pyname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpythoncreate_ MATPYTHONCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpythoncreate_ matpythoncreate
#endif
PETSC_EXTERN void matpythoncreate_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, char pyname[], Mat *A, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(A);
  char* c_pyname;
  FIXCHAR(pyname, l_pyname, c_pyname);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatPythonCreate(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, c_pyname, A);
  if (*ierr) return;
  FREECHAR(pyname, c_pyname);
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
