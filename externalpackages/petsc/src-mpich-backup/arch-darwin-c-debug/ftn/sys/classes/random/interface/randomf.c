#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomgetvalue_ PETSCRANDOMGETVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomgetvalue_ petscrandomgetvalue
#endif
PETSC_EXTERN void petscrandomgetvalue_(PetscRandom *r, PetscScalar *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(val);
  *ierr = PetscRandomGetValue(*r, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomgetvaluereal_ PETSCRANDOMGETVALUEREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomgetvaluereal_ petscrandomgetvaluereal
#endif
PETSC_EXTERN void petscrandomgetvaluereal_(PetscRandom *r, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(val);
  *ierr = PetscRandomGetValueReal(*r, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomgetvalues_ PETSCRANDOMGETVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomgetvalues_ petscrandomgetvalues
#endif
PETSC_EXTERN void petscrandomgetvalues_(PetscRandom *r, PetscInt *n, PetscScalar *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(val);
  *ierr = PetscRandomGetValues(*r, *n, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomgetvaluesreal_ PETSCRANDOMGETVALUESREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomgetvaluesreal_ petscrandomgetvaluesreal
#endif
PETSC_EXTERN void petscrandomgetvaluesreal_(PetscRandom *r, PetscInt *n, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(val);
  *ierr = PetscRandomGetValuesReal(*r, *n, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomgetinterval_ PETSCRANDOMGETINTERVAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomgetinterval_ petscrandomgetinterval
#endif
PETSC_EXTERN void petscrandomgetinterval_(PetscRandom *r, PetscScalar *low, PetscScalar *high, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(low);
  CHKFORTRANNULLSCALAR(high);
  *ierr = PetscRandomGetInterval(*r, low, high);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomsetinterval_ PETSCRANDOMSETINTERVAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomsetinterval_ petscrandomsetinterval
#endif
PETSC_EXTERN void petscrandomsetinterval_(PetscRandom *r, PetscScalar *low, PetscScalar *high, PetscErrorCode *ierr)
{
  *ierr = PetscRandomSetInterval(*r, *low, *high);
  if (*ierr) return;
}
