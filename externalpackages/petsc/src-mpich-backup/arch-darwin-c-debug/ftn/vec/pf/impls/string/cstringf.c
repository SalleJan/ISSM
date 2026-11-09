#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfstringsetfunction_ PFSTRINGSETFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfstringsetfunction_ pfstringsetfunction
#endif
PETSC_EXTERN void pfstringsetfunction_(PF *pf, char string[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_string)
{
  char* c_string;
  FIXCHAR(string, l_string, c_string);
  *ierr = PFStringSetFunction(*pf, c_string);
  if (*ierr) return;
  FREECHAR(string, c_string);
}
