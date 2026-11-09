#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtfactorial_ PETSCDTFACTORIAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtfactorial_ petscdtfactorial
#endif
PETSC_EXTERN void petscdtfactorial_(PetscInt *n, PetscReal *factorial, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(factorial);
  *ierr = PetscDTFactorial(*n, factorial);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtfactorialint_ PETSCDTFACTORIALINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtfactorialint_ petscdtfactorialint
#endif
PETSC_EXTERN void petscdtfactorialint_(PetscInt *n, PetscInt *factorial, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(factorial);
  *ierr = PetscDTFactorialInt(*n, factorial);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtbinomial_ PETSCDTBINOMIAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtbinomial_ petscdtbinomial
#endif
PETSC_EXTERN void petscdtbinomial_(PetscInt *n, PetscInt *k, PetscReal *binomial, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(binomial);
  *ierr = PetscDTBinomial(*n, *k, binomial);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtbinomialint_ PETSCDTBINOMIALINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtbinomialint_ petscdtbinomialint
#endif
PETSC_EXTERN void petscdtbinomialint_(PetscInt *n, PetscInt *k, PetscInt *binomial, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(binomial);
  *ierr = PetscDTBinomialInt(*n, *k, binomial);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtenumperm_ PETSCDTENUMPERM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtenumperm_ petscdtenumperm
#endif
PETSC_EXTERN void petscdtenumperm_(PetscInt *n, PetscInt *k, PetscInt *perm, PetscBool *isOdd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(perm);
  CHKFORTRANNULLBOOL(isOdd);
  *ierr = PetscDTEnumPerm(*n, *k, perm, isOdd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtpermindex_ PETSCDTPERMINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtpermindex_ petscdtpermindex
#endif
PETSC_EXTERN void petscdtpermindex_(PetscInt *n, const PetscInt *perm, PetscInt *k, PetscBool *isOdd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(perm);
  CHKFORTRANNULLINTEGER(k);
  CHKFORTRANNULLBOOL(isOdd);
  *ierr = PetscDTPermIndex(*n, perm, k, isOdd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtenumsubset_ PETSCDTENUMSUBSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtenumsubset_ petscdtenumsubset
#endif
PETSC_EXTERN void petscdtenumsubset_(PetscInt *n, PetscInt *k, PetscInt *j, PetscInt *subset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(subset);
  *ierr = PetscDTEnumSubset(*n, *k, *j, subset);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtsubsetindex_ PETSCDTSUBSETINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtsubsetindex_ petscdtsubsetindex
#endif
PETSC_EXTERN void petscdtsubsetindex_(PetscInt *n, PetscInt *k, const PetscInt *subset, PetscInt *index, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(subset);
  CHKFORTRANNULLINTEGER(index);
  *ierr = PetscDTSubsetIndex(*n, *k, subset, index);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtenumsplit_ PETSCDTENUMSPLIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtenumsplit_ petscdtenumsplit
#endif
PETSC_EXTERN void petscdtenumsplit_(PetscInt *n, PetscInt *k, PetscInt *j, PetscInt *perm, PetscBool *isOdd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(perm);
  CHKFORTRANNULLBOOL(isOdd);
  *ierr = PetscDTEnumSplit(*n, *k, *j, perm, isOdd);
  if (*ierr) return;
}
