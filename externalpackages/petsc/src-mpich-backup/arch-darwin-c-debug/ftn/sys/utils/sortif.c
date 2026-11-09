#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortedint_ PETSCSORTEDINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortedint_ petscsortedint
#endif
PETSC_EXTERN void petscsortedint_(PetscCount *n, const PetscInt X[], PetscBool *sorted, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  CHKFORTRANNULLBOOL(sorted);
  *ierr = PetscSortedInt(*n, X, sorted);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortedint64_ PETSCSORTEDINT64
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortedint64_ petscsortedint64
#endif
PETSC_EXTERN void petscsortedint64_(PetscCount *n, const PetscInt64 X[], PetscBool *sorted, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(sorted);
  *ierr = PetscSortedInt64(*n, X, sorted);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortint_ PETSCSORTINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortint_ petscsortint
#endif
PETSC_EXTERN void petscsortint_(PetscCount *n, PetscInt X[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  *ierr = PetscSortInt(*n, X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortint64_ PETSCSORTINT64
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortint64_ petscsortint64
#endif
PETSC_EXTERN void petscsortint64_(PetscCount *n, PetscInt64 X[], PetscErrorCode *ierr)
{
  *ierr = PetscSortInt64(*n, X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortcount_ PETSCSORTCOUNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortcount_ petscsortcount
#endif
PETSC_EXTERN void petscsortcount_(PetscCount *n, PetscCount X[], PetscErrorCode *ierr)
{
  *ierr = PetscSortCount(*n, X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortreverseint_ PETSCSORTREVERSEINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortreverseint_ petscsortreverseint
#endif
PETSC_EXTERN void petscsortreverseint_(PetscCount *n, PetscInt X[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  *ierr = PetscSortReverseInt(*n, X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortedremovedupsint_ PETSCSORTEDREMOVEDUPSINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortedremovedupsint_ petscsortedremovedupsint
#endif
PETSC_EXTERN void petscsortedremovedupsint_(PetscInt *n, PetscInt X[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(X);
  *ierr = PetscSortedRemoveDupsInt(n, X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortedcheckdupsint_ PETSCSORTEDCHECKDUPSINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortedcheckdupsint_ petscsortedcheckdupsint
#endif
PETSC_EXTERN void petscsortedcheckdupsint_(PetscCount *n, const PetscInt X[], PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscSortedCheckDupsInt(*n, X, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortedcheckdupscount_ PETSCSORTEDCHECKDUPSCOUNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortedcheckdupscount_ petscsortedcheckdupscount
#endif
PETSC_EXTERN void petscsortedcheckdupscount_(PetscCount *n, const PetscCount X[], PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscSortedCheckDupsCount(*n, X, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortremovedupsint_ PETSCSORTREMOVEDUPSINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortremovedupsint_ petscsortremovedupsint
#endif
PETSC_EXTERN void petscsortremovedupsint_(PetscInt *n, PetscInt X[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(X);
  *ierr = PetscSortRemoveDupsInt(n, X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfindint_ PETSCFINDINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfindint_ petscfindint
#endif
PETSC_EXTERN void petscfindint_(PetscInt *key, PetscCount *n, const PetscInt X[], PetscInt *loc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  CHKFORTRANNULLINTEGER(loc);
  *ierr = PetscFindInt(*key, *n, X, loc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfindcount_ PETSCFINDCOUNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfindcount_ petscfindcount
#endif
PETSC_EXTERN void petscfindcount_(PetscCount *key, PetscCount *n, const PetscCount X[], PetscCount *loc, PetscErrorCode *ierr)
{
  *ierr = PetscFindCount(*key, *n, X, loc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccheckdupsint_ PETSCCHECKDUPSINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccheckdupsint_ petsccheckdupsint
#endif
PETSC_EXTERN void petsccheckdupsint_(PetscInt *n, const PetscInt X[], PetscBool *dups, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  CHKFORTRANNULLBOOL(dups);
  *ierr = PetscCheckDupsInt(*n, X, dups);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfindmpiint_ PETSCFINDMPIINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfindmpiint_ petscfindmpiint
#endif
PETSC_EXTERN void petscfindmpiint_(PetscMPIInt *key, PetscCount *n, const PetscMPIInt X[], PetscInt *loc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(loc);
  *ierr = PetscFindMPIInt(*key, *n, X, loc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortintwitharray_ PETSCSORTINTWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortintwitharray_ petscsortintwitharray
#endif
PETSC_EXTERN void petscsortintwitharray_(PetscCount *n, PetscInt X[], PetscInt Y[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  CHKFORTRANNULLINTEGER(Y);
  *ierr = PetscSortIntWithArray(*n, X, Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortintwitharraypair_ PETSCSORTINTWITHARRAYPAIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortintwitharraypair_ petscsortintwitharraypair
#endif
PETSC_EXTERN void petscsortintwitharraypair_(PetscCount *n, PetscInt X[], PetscInt Y[], PetscInt Z[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  CHKFORTRANNULLINTEGER(Y);
  CHKFORTRANNULLINTEGER(Z);
  *ierr = PetscSortIntWithArrayPair(*n, X, Y, Z);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortintwithmpiintarray_ PETSCSORTINTWITHMPIINTARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortintwithmpiintarray_ petscsortintwithmpiintarray
#endif
PETSC_EXTERN void petscsortintwithmpiintarray_(PetscCount *n, PetscInt X[], PetscMPIInt Y[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  *ierr = PetscSortIntWithMPIIntArray(*n, X, Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortintwithcountarray_ PETSCSORTINTWITHCOUNTARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortintwithcountarray_ petscsortintwithcountarray
#endif
PETSC_EXTERN void petscsortintwithcountarray_(PetscCount *n, PetscInt X[], PetscCount Y[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  *ierr = PetscSortIntWithCountArray(*n, X, Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortintwithintcountarraypair_ PETSCSORTINTWITHINTCOUNTARRAYPAIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortintwithintcountarraypair_ petscsortintwithintcountarraypair
#endif
PETSC_EXTERN void petscsortintwithintcountarraypair_(PetscCount *n, PetscInt X[], PetscInt Y[], PetscCount Z[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  CHKFORTRANNULLINTEGER(Y);
  *ierr = PetscSortIntWithIntCountArrayPair(*n, X, Y, Z);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortedmpiint_ PETSCSORTEDMPIINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortedmpiint_ petscsortedmpiint
#endif
PETSC_EXTERN void petscsortedmpiint_(PetscCount *n, const PetscMPIInt X[], PetscBool *sorted, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(sorted);
  *ierr = PetscSortedMPIInt(*n, X, sorted);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortmpiint_ PETSCSORTMPIINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortmpiint_ petscsortmpiint
#endif
PETSC_EXTERN void petscsortmpiint_(PetscCount *n, PetscMPIInt X[], PetscErrorCode *ierr)
{
  *ierr = PetscSortMPIInt(*n, X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortremovedupsmpiint_ PETSCSORTREMOVEDUPSMPIINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortremovedupsmpiint_ petscsortremovedupsmpiint
#endif
PETSC_EXTERN void petscsortremovedupsmpiint_(PetscInt *n, PetscMPIInt X[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  *ierr = PetscSortRemoveDupsMPIInt(n, X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortmpiintwitharray_ PETSCSORTMPIINTWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortmpiintwitharray_ petscsortmpiintwitharray
#endif
PETSC_EXTERN void petscsortmpiintwitharray_(PetscCount *n, PetscMPIInt X[], PetscMPIInt Y[], PetscErrorCode *ierr)
{
  *ierr = PetscSortMPIIntWithArray(*n, X, Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortmpiintwithintarray_ PETSCSORTMPIINTWITHINTARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortmpiintwithintarray_ petscsortmpiintwithintarray
#endif
PETSC_EXTERN void petscsortmpiintwithintarray_(PetscCount *n, PetscMPIInt X[], PetscInt Y[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Y);
  *ierr = PetscSortMPIIntWithIntArray(*n, X, Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortintwithscalararray_ PETSCSORTINTWITHSCALARARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortintwithscalararray_ petscsortintwithscalararray
#endif
PETSC_EXTERN void petscsortintwithscalararray_(PetscCount *n, PetscInt X[], PetscScalar Y[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  CHKFORTRANNULLSCALAR(Y);
  *ierr = PetscSortIntWithScalarArray(*n, X, Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortintwithdataarray_ PETSCSORTINTWITHDATAARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortintwithdataarray_ petscsortintwithdataarray
#endif
PETSC_EXTERN void petscsortintwithdataarray_(PetscCount *n, PetscInt X[], void *Y, size_t *size, void *t2, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(X);
  *ierr = PetscSortIntWithDataArray(*n, X, Y, *size, t2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscparallelsortedint_ PETSCPARALLELSORTEDINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscparallelsortedint_ petscparallelsortedint
#endif
PETSC_EXTERN void petscparallelsortedint_(MPI_Fint *comm, PetscInt *n, const PetscInt keys[], PetscBool *is_sorted, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(keys);
  CHKFORTRANNULLBOOL(is_sorted);
  *ierr = PetscParallelSortedInt(MPI_Comm_f2c(*(comm)), *n, keys, is_sorted);
  if (*ierr) return;
}
