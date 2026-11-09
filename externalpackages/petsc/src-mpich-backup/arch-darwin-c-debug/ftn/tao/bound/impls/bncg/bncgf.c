#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taobncggettype_ TAOBNCGGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taobncggettype_ taobncggettype
#endif
PETSC_EXTERN void taobncggettype_(Tao *tao, TaoBNCGType *type, PetscErrorCode *ierr)
{
  *ierr = TaoBNCGGetType(*tao, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taobncgsettype_ TAOBNCGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taobncgsettype_ taobncgsettype
#endif
PETSC_EXTERN void taobncgsettype_(Tao *tao, TaoBNCGType *type, PetscErrorCode *ierr)
{
  *ierr = TaoBNCGSetType(*tao, *type);
  if (*ierr) return;
}
