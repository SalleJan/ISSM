#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdllibraryprintpath_ PETSCDLLIBRARYPRINTPATH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdllibraryprintpath_ petscdllibraryprintpath
#endif
PETSC_EXTERN void petscdllibraryprintpath_(PetscDLLibrary *libs, PetscErrorCode *ierr)
{
  *ierr = PetscDLLibraryPrintPath(*libs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdllibraryretrieve_ PETSCDLLIBRARYRETRIEVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdllibraryretrieve_ petscdllibraryretrieve
#endif
PETSC_EXTERN void petscdllibraryretrieve_(MPI_Fint *comm, char libname[], char lname[], PetscBool *found, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_libname, PETSC_FORTRAN_CHARLEN_T l_lname)
{
  char* c_libname;
  FIXCHAR(libname, l_libname, c_libname);
  CHKFORTRANNULLBOOL(found);
  *ierr = PetscDLLibraryRetrieve(MPI_Comm_f2c(*(comm)), c_libname, lname, l_lname, found);
  if (*ierr) return;
  FREECHAR(libname, c_libname);
  FIXRETURNCHAR(PETSC_TRUE, lname, l_lname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdllibraryopen_ PETSCDLLIBRARYOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdllibraryopen_ petscdllibraryopen
#endif
PETSC_EXTERN void petscdllibraryopen_(MPI_Fint *comm, char path[], PetscDLLibrary *entry, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_path)
{
  PetscBool null_entry = !*(void**) entry ? PETSC_TRUE : PETSC_FALSE;
  char* c_path;
  FIXCHAR(path, l_path, c_path);
  CHKFORTRANNULLOBJECT(entry);
  *ierr = PetscDLLibraryOpen(MPI_Comm_f2c(*(comm)), c_path, entry);
  if (*ierr) return;
  FREECHAR(path, c_path);
  if (! null_entry && !*(void**) entry) *(void **) entry = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdllibraryappend_ PETSCDLLIBRARYAPPEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdllibraryappend_ petscdllibraryappend
#endif
PETSC_EXTERN void petscdllibraryappend_(MPI_Fint *comm, PetscDLLibrary *outlist, char path[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_path)
{
  PetscBool null_outlist = !*(void**) outlist ? PETSC_TRUE : PETSC_FALSE;
  char* c_path;
  FIXCHAR(path, l_path, c_path);
  CHKFORTRANNULLOBJECT(outlist);
  *ierr = PetscDLLibraryAppend(MPI_Comm_f2c(*(comm)), outlist, c_path);
  if (*ierr) return;
  FREECHAR(path, c_path);
  if (! null_outlist && !*(void**) outlist) *(void **) outlist = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdllibraryprepend_ PETSCDLLIBRARYPREPEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdllibraryprepend_ petscdllibraryprepend
#endif
PETSC_EXTERN void petscdllibraryprepend_(MPI_Fint *comm, PetscDLLibrary *outlist, char path[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_path)
{
  PetscBool null_outlist = !*(void**) outlist ? PETSC_TRUE : PETSC_FALSE;
  char* c_path;
  FIXCHAR(path, l_path, c_path);
  CHKFORTRANNULLOBJECT(outlist);
  *ierr = PetscDLLibraryPrepend(MPI_Comm_f2c(*(comm)), outlist, c_path);
  if (*ierr) return;
  FREECHAR(path, c_path);
  if (! null_outlist && !*(void**) outlist) *(void **) outlist = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdllibraryclose_ PETSCDLLIBRARYCLOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdllibraryclose_ petscdllibraryclose
#endif
PETSC_EXTERN void petscdllibraryclose_(PetscDLLibrary *list, PetscErrorCode *ierr)
{
  *ierr = PetscDLLibraryClose(*list);
  if (*ierr) return;
}
