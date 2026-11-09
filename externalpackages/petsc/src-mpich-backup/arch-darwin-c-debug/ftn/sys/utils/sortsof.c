#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscintsortsemiordered_ PETSCINTSORTSEMIORDERED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscintsortsemiordered_ petscintsortsemiordered
#endif
PETSC_EXTERN void petscintsortsemiordered_(PetscInt *n, PetscInt arr[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(arr);
  *ierr = PetscIntSortSemiOrdered(*n, arr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscintsortsemiorderedwitharray_ PETSCINTSORTSEMIORDEREDWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscintsortsemiorderedwitharray_ petscintsortsemiorderedwitharray
#endif
PETSC_EXTERN void petscintsortsemiorderedwitharray_(PetscInt *n, PetscInt arr1[], PetscInt arr2[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(arr1);
  CHKFORTRANNULLINTEGER(arr2);
  *ierr = PetscIntSortSemiOrderedWithArray(*n, arr1, arr2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmpiintsortsemiordered_ PETSCMPIINTSORTSEMIORDERED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmpiintsortsemiordered_ petscmpiintsortsemiordered
#endif
PETSC_EXTERN void petscmpiintsortsemiordered_(PetscInt *n, PetscMPIInt arr[], PetscErrorCode *ierr)
{
  *ierr = PetscMPIIntSortSemiOrdered(*n, arr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmpiintsortsemiorderedwitharray_ PETSCMPIINTSORTSEMIORDEREDWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmpiintsortsemiorderedwitharray_ petscmpiintsortsemiorderedwitharray
#endif
PETSC_EXTERN void petscmpiintsortsemiorderedwitharray_(PetscInt *n, PetscMPIInt arr1[], PetscMPIInt arr2[], PetscErrorCode *ierr)
{
  *ierr = PetscMPIIntSortSemiOrderedWithArray(*n, arr1, arr2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrealsortsemiordered_ PETSCREALSORTSEMIORDERED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrealsortsemiordered_ petscrealsortsemiordered
#endif
PETSC_EXTERN void petscrealsortsemiordered_(PetscInt *n, PetscReal arr[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(arr);
  *ierr = PetscRealSortSemiOrdered(*n, arr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrealsortsemiorderedwitharrayint_ PETSCREALSORTSEMIORDEREDWITHARRAYINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrealsortsemiorderedwitharrayint_ petscrealsortsemiorderedwitharrayint
#endif
PETSC_EXTERN void petscrealsortsemiorderedwitharrayint_(PetscInt *n, PetscReal arr1[], PetscInt arr2[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(arr1);
  CHKFORTRANNULLINTEGER(arr2);
  *ierr = PetscRealSortSemiOrderedWithArrayInt(*n, arr1, arr2);
  if (*ierr) return;
}
