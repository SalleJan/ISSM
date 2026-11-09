#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensembletfactor_ PETSCDAENSEMBLETFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensembletfactor_ petscdaensembletfactor
#endif
PETSC_EXTERN void petscdaensembletfactor_(PetscDA *da, Mat *S, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleTFactor(*da, *S);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensembleapplytinverse_ PETSCDAENSEMBLEAPPLYTINVERSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensembleapplytinverse_ petscdaensembleapplytinverse
#endif
PETSC_EXTERN void petscdaensembleapplytinverse_(PetscDA *da, Vec *sdel, Vec *w, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleApplyTInverse(*da, *sdel, *w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensembleapplysqrttinverse_ PETSCDAENSEMBLEAPPLYSQRTTINVERSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensembleapplysqrttinverse_ petscdaensembleapplysqrttinverse
#endif
PETSC_EXTERN void petscdaensembleapplysqrttinverse_(PetscDA *da, Mat *U, Mat *Y, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleApplySqrtTInverse(*da, *U, *Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblesetsqrttype_ PETSCDAENSEMBLESETSQRTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblesetsqrttype_ petscdaensemblesetsqrttype
#endif
PETSC_EXTERN void petscdaensemblesetsqrttype_(PetscDA *da, PetscDASqrtType *type, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleSetSqrtType(*da, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblegetsqrttype_ PETSCDAENSEMBLEGETSQRTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblegetsqrttype_ petscdaensemblegetsqrttype
#endif
PETSC_EXTERN void petscdaensemblegetsqrttype_(PetscDA *da, PetscDASqrtType *type, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleGetSqrtType(*da, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblesetinflation_ PETSCDAENSEMBLESETINFLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblesetinflation_ petscdaensemblesetinflation
#endif
PETSC_EXTERN void petscdaensemblesetinflation_(PetscDA *da, PetscReal *inflation, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleSetInflation(*da, *inflation);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblegetinflation_ PETSCDAENSEMBLEGETINFLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblegetinflation_ petscdaensemblegetinflation
#endif
PETSC_EXTERN void petscdaensemblegetinflation_(PetscDA *da, PetscReal *inflation, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(inflation);
  *ierr = PetscDAEnsembleGetInflation(*da, inflation);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblegetmember_ PETSCDAENSEMBLEGETMEMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblegetmember_ petscdaensemblegetmember
#endif
PETSC_EXTERN void petscdaensemblegetmember_(PetscDA *da, PetscInt *member_idx, Vec *member, PetscErrorCode *ierr)
{
  PetscBool null_member = !*(void**) member ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(member);
  *ierr = PetscDAEnsembleGetMember(*da, *member_idx, member);
  if (*ierr) return;
  if (! null_member && !*(void**) member) *(void **) member = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblerestoremember_ PETSCDAENSEMBLERESTOREMEMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblerestoremember_ petscdaensemblerestoremember
#endif
PETSC_EXTERN void petscdaensemblerestoremember_(PetscDA *da, PetscInt *member_idx, Vec *member, PetscErrorCode *ierr)
{
  PetscBool null_member = !*(void**) member ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(member);
  *ierr = PetscDAEnsembleRestoreMember(*da, *member_idx, member);
  if (*ierr) return;
  if (! null_member && !*(void**) member) *(void **) member = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblesetmember_ PETSCDAENSEMBLESETMEMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblesetmember_ petscdaensemblesetmember
#endif
PETSC_EXTERN void petscdaensemblesetmember_(PetscDA *da, PetscInt *member_idx, Vec *member, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleSetMember(*da, *member_idx, *member);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblecomputemean_ PETSCDAENSEMBLECOMPUTEMEAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblecomputemean_ petscdaensemblecomputemean
#endif
PETSC_EXTERN void petscdaensemblecomputemean_(PetscDA *da, Vec *mean, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleComputeMean(*da, *mean);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensembleinitialize_ PETSCDAENSEMBLEINITIALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensembleinitialize_ petscdaensembleinitialize
#endif
PETSC_EXTERN void petscdaensembleinitialize_(PetscDA *da, Vec *x0, PetscReal *obs_error_std, PetscRandom *rng, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleInitialize(*da, *x0, *obs_error_std, *rng);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblecomputeanomalies_ PETSCDAENSEMBLECOMPUTEANOMALIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblecomputeanomalies_ petscdaensemblecomputeanomalies
#endif
PETSC_EXTERN void petscdaensemblecomputeanomalies_(PetscDA *da, Vec *mean_in, Mat *anomalies_out, PetscErrorCode *ierr)
{
  PetscBool null_anomalies_out = !*(void**) anomalies_out ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(anomalies_out);
  *ierr = PetscDAEnsembleComputeAnomalies(*da, *mean_in, anomalies_out);
  if (*ierr) return;
  if (! null_anomalies_out && !*(void**) anomalies_out) *(void **) anomalies_out = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensembleanalysis_ PETSCDAENSEMBLEANALYSIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensembleanalysis_ petscdaensembleanalysis
#endif
PETSC_EXTERN void petscdaensembleanalysis_(PetscDA *da, Vec *observation, Mat *H, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleAnalysis(*da, *observation, *H);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblesetsize_ PETSCDAENSEMBLESETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblesetsize_ petscdaensemblesetsize
#endif
PETSC_EXTERN void petscdaensemblesetsize_(PetscDA *da, PetscInt *ensemble_size, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleSetSize(*da, *ensemble_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblegetsize_ PETSCDAENSEMBLEGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblegetsize_ petscdaensemblegetsize
#endif
PETSC_EXTERN void petscdaensemblegetsize_(PetscDA *da, PetscInt *ensemble_size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ensemble_size);
  *ierr = PetscDAEnsembleGetSize(*da, ensemble_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaensemblecomputenormalizedinnovationmatrix_ PETSCDAENSEMBLECOMPUTENORMALIZEDINNOVATIONMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaensemblecomputenormalizedinnovationmatrix_ petscdaensemblecomputenormalizedinnovationmatrix
#endif
PETSC_EXTERN void petscdaensemblecomputenormalizedinnovationmatrix_(Mat *Z, Vec *y_mean, Vec *r_inv_sqrt, PetscInt *m, PetscScalar *scale, Mat *S, PetscErrorCode *ierr)
{
  *ierr = PetscDAEnsembleComputeNormalizedInnovationMatrix(*Z, *y_mean, *r_inv_sqrt, *m, *scale, *S);
  if (*ierr) return;
}
