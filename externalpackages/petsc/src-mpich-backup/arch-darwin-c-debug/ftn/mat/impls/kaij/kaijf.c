#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matkaijgetaij_ MATKAIJGETAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matkaijgetaij_ matkaijgetaij
#endif
PETSC_EXTERN void matkaijgetaij_(Mat *A, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatKAIJGetAIJ(*A, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matkaijsetaij_ MATKAIJSETAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matkaijsetaij_ matkaijsetaij
#endif
PETSC_EXTERN void matkaijsetaij_(Mat *A, Mat *B, PetscErrorCode *ierr)
{
  *ierr = MatKAIJSetAIJ(*A, *B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matkaijsets_ MATKAIJSETS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matkaijsets_ matkaijsets
#endif
PETSC_EXTERN void matkaijsets_(Mat *A, PetscInt *p, PetscInt *q, const PetscScalar S[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(S);
  *ierr = MatKAIJSetS(*A, *p, *q, S);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matkaijgetscaledidentity_ MATKAIJGETSCALEDIDENTITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matkaijgetscaledidentity_ matkaijgetscaledidentity
#endif
PETSC_EXTERN void matkaijgetscaledidentity_(Mat *A, PetscBool *identity, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(identity);
  *ierr = MatKAIJGetScaledIdentity(*A, identity);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matkaijsett_ MATKAIJSETT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matkaijsett_ matkaijsett
#endif
PETSC_EXTERN void matkaijsett_(Mat *A, PetscInt *p, PetscInt *q, const PetscScalar T[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(T);
  *ierr = MatKAIJSetT(*A, *p, *q, T);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatekaij_ MATCREATEKAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatekaij_ matcreatekaij
#endif
PETSC_EXTERN void matcreatekaij_(Mat *A, PetscInt *p, PetscInt *q, const PetscScalar S[], const PetscScalar T[], Mat *kaij, PetscErrorCode *ierr)
{
  PetscBool null_kaij = !*(void**) kaij ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(S);
  CHKFORTRANNULLSCALAR(T);
  CHKFORTRANNULLOBJECT(kaij);
  *ierr = MatCreateKAIJ(*A, *p, *q, S, T, kaij);
  if (*ierr) return;
  if (! null_kaij && !*(void**) kaij) *(void **) kaij = (void *)-2;
}
