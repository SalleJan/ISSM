#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabcreatevector_ DMMOABCREATEVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabcreatevector_ dmmoabcreatevector
#endif
PETSC_EXTERN void dmmoabcreatevector_(DM *dm, moab::Tag *tag, const moab::Range *range, PetscBool *is_global_vec, PetscBool *destroy_tag, Vec *vec, PetscErrorCode *ierr)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMMoabCreateVector(*dm, *tag, range, *is_global_vec ? PETSC_TRUE : PETSC_FALSE, *destroy_tag ? PETSC_TRUE : PETSC_FALSE, vec);
  if (*ierr) return;
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetvectag_ DMMOABGETVECTAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetvectag_ dmmoabgetvectag
#endif
PETSC_EXTERN void dmmoabgetvectag_(Vec *vec, moab::Tag *tag, PetscErrorCode *ierr)
{
  *ierr = DMMoabGetVecTag(*vec, tag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetvecrange_ DMMOABGETVECRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetvecrange_ dmmoabgetvecrange
#endif
PETSC_EXTERN void dmmoabgetvecrange_(Vec *vec, moab::Range *range, PetscErrorCode *ierr)
{
  *ierr = DMMoabGetVecRange(*vec, range);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabvecgetarray_ DMMOABVECGETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabvecgetarray_ dmmoabvecgetarray
#endif
PETSC_EXTERN void dmmoabvecgetarray_(DM *dm, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMMoabVecGetArray(*dm, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabvecrestorearray_ DMMOABVECRESTOREARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabvecrestorearray_ dmmoabvecrestorearray
#endif
PETSC_EXTERN void dmmoabvecrestorearray_(DM *dm, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMMoabVecRestoreArray(*dm, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabvecgetarrayread_ DMMOABVECGETARRAYREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabvecgetarrayread_ dmmoabvecgetarrayread
#endif
PETSC_EXTERN void dmmoabvecgetarrayread_(DM *dm, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMMoabVecGetArrayRead(*dm, *vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabvecrestorearrayread_ DMMOABVECRESTOREARRAYREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabvecrestorearrayread_ dmmoabvecrestorearrayread
#endif
PETSC_EXTERN void dmmoabvecrestorearrayread_(DM *dm, Vec *vec, void *array, PetscErrorCode *ierr)
{
  *ierr = DMMoabVecRestoreArrayRead(*dm, *vec, array);
  if (*ierr) return;
}
