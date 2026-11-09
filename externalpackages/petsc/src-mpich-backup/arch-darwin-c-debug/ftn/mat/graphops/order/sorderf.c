#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetordering_ MATGETORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetordering_ matgetordering
#endif
PETSC_EXTERN void matgetordering_(Mat *mat, char *type, IS *rperm, IS *cperm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  PetscBool null_rperm = !*(void**) rperm ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_cperm = !*(void**) cperm ? PETSC_TRUE : PETSC_FALSE;
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  CHKFORTRANNULLOBJECT(rperm);
  CHKFORTRANNULLOBJECT(cperm);
  *ierr = MatGetOrdering(*mat, c_type, rperm, cperm);
  if (*ierr) return;
  FREECHAR(type, c_type);
  if (! null_rperm && !*(void**) rperm) *(void **) rperm = (void *)-2;
  if (! null_cperm && !*(void**) cperm) *(void **) cperm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetorderinglist_ MATGETORDERINGLIST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetorderinglist_ matgetorderinglist
#endif
PETSC_EXTERN void matgetorderinglist_(PetscFunctionList *list, PetscErrorCode *ierr)
{
  PetscBool null_list = !*(void**) list ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(list);
  *ierr = MatGetOrderingList(list);
  if (*ierr) return;
  if (! null_list && !*(void**) list) *(void **) list = (void *)-2;
}
