#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmumpssetooctmpdir_ MATMUMPSSETOOCTMPDIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmumpssetooctmpdir_ matmumpssetooctmpdir
#endif
PETSC_EXTERN void matmumpssetooctmpdir_(Mat *F, char tmpdir[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_tmpdir)
{
  char* c_tmpdir;
  FIXCHAR(tmpdir, l_tmpdir, c_tmpdir);
  *ierr = MatMumpsSetOocTmpDir(*F, c_tmpdir);
  if (*ierr) return;
  FREECHAR(tmpdir, c_tmpdir);
}
