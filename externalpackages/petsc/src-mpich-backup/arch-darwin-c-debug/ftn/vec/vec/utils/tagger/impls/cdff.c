#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggercdfsetmethod_ VECTAGGERCDFSETMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggercdfsetmethod_ vectaggercdfsetmethod
#endif
PETSC_EXTERN void vectaggercdfsetmethod_(VecTagger *tagger, VecTaggerCDFMethod *method, PetscErrorCode *ierr)
{
  *ierr = VecTaggerCDFSetMethod(*tagger, *method);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggercdfgetmethod_ VECTAGGERCDFGETMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggercdfgetmethod_ vectaggercdfgetmethod
#endif
PETSC_EXTERN void vectaggercdfgetmethod_(VecTagger *tagger, VecTaggerCDFMethod *method, PetscErrorCode *ierr)
{
  *ierr = VecTaggerCDFGetMethod(*tagger, method);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggercdfiterativesettolerances_ VECTAGGERCDFITERATIVESETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggercdfiterativesettolerances_ vectaggercdfiterativesettolerances
#endif
PETSC_EXTERN void vectaggercdfiterativesettolerances_(VecTagger *tagger, PetscInt *maxit, PetscReal *rtol, PetscReal *atol, PetscErrorCode *ierr)
{
  *ierr = VecTaggerCDFIterativeSetTolerances(*tagger, *maxit, *rtol, *atol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggercdfiterativegettolerances_ VECTAGGERCDFITERATIVEGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggercdfiterativegettolerances_ vectaggercdfiterativegettolerances
#endif
PETSC_EXTERN void vectaggercdfiterativegettolerances_(VecTagger *tagger, PetscInt *maxit, PetscReal *rtol, PetscReal *atol, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(maxit);
  CHKFORTRANNULLREAL(rtol);
  CHKFORTRANNULLREAL(atol);
  *ierr = VecTaggerCDFIterativeGetTolerances(*tagger, maxit, rtol, atol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggercdfsetbox_ VECTAGGERCDFSETBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggercdfsetbox_ vectaggercdfsetbox
#endif
PETSC_EXTERN void vectaggercdfsetbox_(VecTagger *tagger, VecTaggerBox box[], PetscErrorCode *ierr)
{
  *ierr = VecTaggerCDFSetBox(*tagger, box);
  if (*ierr) return;
}
