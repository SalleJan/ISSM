#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoaboutput_ DMMOABOUTPUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoaboutput_ dmmoaboutput
#endif
PETSC_EXTERN void dmmoaboutput_(DM *dm, char filename[], char usrwriteopts[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename, PETSC_FORTRAN_CHARLEN_T l_usrwriteopts)
{
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  char* c_usrwriteopts;
  FIXCHAR(usrwriteopts, l_usrwriteopts, c_usrwriteopts);
  *ierr = DMMoabOutput(*dm, c_filename, c_usrwriteopts);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
  FREECHAR(usrwriteopts, c_usrwriteopts);
}
