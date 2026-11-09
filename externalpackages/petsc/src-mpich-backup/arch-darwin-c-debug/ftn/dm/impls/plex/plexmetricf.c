#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetfromoptions_ DMPLEXMETRICSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetfromoptions_ dmplexmetricsetfromoptions
#endif
PETSC_EXTERN void dmplexmetricsetfromoptions_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetFromOptions(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetisotropic_ DMPLEXMETRICSETISOTROPIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetisotropic_ dmplexmetricsetisotropic
#endif
PETSC_EXTERN void dmplexmetricsetisotropic_(DM *dm, PetscBool *isotropic, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetIsotropic(*dm, *isotropic ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricisisotropic_ DMPLEXMETRICISISOTROPIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricisisotropic_ dmplexmetricisisotropic
#endif
PETSC_EXTERN void dmplexmetricisisotropic_(DM *dm, PetscBool *isotropic, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isotropic);
  *ierr = DMPlexMetricIsIsotropic(*dm, isotropic);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetuniform_ DMPLEXMETRICSETUNIFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetuniform_ dmplexmetricsetuniform
#endif
PETSC_EXTERN void dmplexmetricsetuniform_(DM *dm, PetscBool *uniform, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetUniform(*dm, *uniform ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricisuniform_ DMPLEXMETRICISUNIFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricisuniform_ dmplexmetricisuniform
#endif
PETSC_EXTERN void dmplexmetricisuniform_(DM *dm, PetscBool *uniform, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(uniform);
  *ierr = DMPlexMetricIsUniform(*dm, uniform);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetrestrictanisotropyfirst_ DMPLEXMETRICSETRESTRICTANISOTROPYFIRST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetrestrictanisotropyfirst_ dmplexmetricsetrestrictanisotropyfirst
#endif
PETSC_EXTERN void dmplexmetricsetrestrictanisotropyfirst_(DM *dm, PetscBool *restrictAnisotropyFirst, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetRestrictAnisotropyFirst(*dm, *restrictAnisotropyFirst ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricrestrictanisotropyfirst_ DMPLEXMETRICRESTRICTANISOTROPYFIRST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricrestrictanisotropyfirst_ dmplexmetricrestrictanisotropyfirst
#endif
PETSC_EXTERN void dmplexmetricrestrictanisotropyfirst_(DM *dm, PetscBool *restrictAnisotropyFirst, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(restrictAnisotropyFirst);
  *ierr = DMPlexMetricRestrictAnisotropyFirst(*dm, restrictAnisotropyFirst);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetnoinsertion_ DMPLEXMETRICSETNOINSERTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetnoinsertion_ dmplexmetricsetnoinsertion
#endif
PETSC_EXTERN void dmplexmetricsetnoinsertion_(DM *dm, PetscBool *noInsert, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetNoInsertion(*dm, *noInsert ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricnoinsertion_ DMPLEXMETRICNOINSERTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricnoinsertion_ dmplexmetricnoinsertion
#endif
PETSC_EXTERN void dmplexmetricnoinsertion_(DM *dm, PetscBool *noInsert, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(noInsert);
  *ierr = DMPlexMetricNoInsertion(*dm, noInsert);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetnoswapping_ DMPLEXMETRICSETNOSWAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetnoswapping_ dmplexmetricsetnoswapping
#endif
PETSC_EXTERN void dmplexmetricsetnoswapping_(DM *dm, PetscBool *noSwap, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetNoSwapping(*dm, *noSwap ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricnoswapping_ DMPLEXMETRICNOSWAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricnoswapping_ dmplexmetricnoswapping
#endif
PETSC_EXTERN void dmplexmetricnoswapping_(DM *dm, PetscBool *noSwap, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(noSwap);
  *ierr = DMPlexMetricNoSwapping(*dm, noSwap);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetnomovement_ DMPLEXMETRICSETNOMOVEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetnomovement_ dmplexmetricsetnomovement
#endif
PETSC_EXTERN void dmplexmetricsetnomovement_(DM *dm, PetscBool *noMove, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetNoMovement(*dm, *noMove ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricnomovement_ DMPLEXMETRICNOMOVEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricnomovement_ dmplexmetricnomovement
#endif
PETSC_EXTERN void dmplexmetricnomovement_(DM *dm, PetscBool *noMove, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(noMove);
  *ierr = DMPlexMetricNoMovement(*dm, noMove);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetnosurf_ DMPLEXMETRICSETNOSURF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetnosurf_ dmplexmetricsetnosurf
#endif
PETSC_EXTERN void dmplexmetricsetnosurf_(DM *dm, PetscBool *noSurf, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetNoSurf(*dm, *noSurf ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricnosurf_ DMPLEXMETRICNOSURF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricnosurf_ dmplexmetricnosurf
#endif
PETSC_EXTERN void dmplexmetricnosurf_(DM *dm, PetscBool *noSurf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(noSurf);
  *ierr = DMPlexMetricNoSurf(*dm, noSurf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetminimummagnitude_ DMPLEXMETRICSETMINIMUMMAGNITUDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetminimummagnitude_ dmplexmetricsetminimummagnitude
#endif
PETSC_EXTERN void dmplexmetricsetminimummagnitude_(DM *dm, PetscReal *h_min, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetMinimumMagnitude(*dm, *h_min);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricgetminimummagnitude_ DMPLEXMETRICGETMINIMUMMAGNITUDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricgetminimummagnitude_ dmplexmetricgetminimummagnitude
#endif
PETSC_EXTERN void dmplexmetricgetminimummagnitude_(DM *dm, PetscReal *h_min, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(h_min);
  *ierr = DMPlexMetricGetMinimumMagnitude(*dm, h_min);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetmaximummagnitude_ DMPLEXMETRICSETMAXIMUMMAGNITUDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetmaximummagnitude_ dmplexmetricsetmaximummagnitude
#endif
PETSC_EXTERN void dmplexmetricsetmaximummagnitude_(DM *dm, PetscReal *h_max, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetMaximumMagnitude(*dm, *h_max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricgetmaximummagnitude_ DMPLEXMETRICGETMAXIMUMMAGNITUDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricgetmaximummagnitude_ dmplexmetricgetmaximummagnitude
#endif
PETSC_EXTERN void dmplexmetricgetmaximummagnitude_(DM *dm, PetscReal *h_max, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(h_max);
  *ierr = DMPlexMetricGetMaximumMagnitude(*dm, h_max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetmaximumanisotropy_ DMPLEXMETRICSETMAXIMUMANISOTROPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetmaximumanisotropy_ dmplexmetricsetmaximumanisotropy
#endif
PETSC_EXTERN void dmplexmetricsetmaximumanisotropy_(DM *dm, PetscReal *a_max, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetMaximumAnisotropy(*dm, *a_max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricgetmaximumanisotropy_ DMPLEXMETRICGETMAXIMUMANISOTROPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricgetmaximumanisotropy_ dmplexmetricgetmaximumanisotropy
#endif
PETSC_EXTERN void dmplexmetricgetmaximumanisotropy_(DM *dm, PetscReal *a_max, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(a_max);
  *ierr = DMPlexMetricGetMaximumAnisotropy(*dm, a_max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsettargetcomplexity_ DMPLEXMETRICSETTARGETCOMPLEXITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsettargetcomplexity_ dmplexmetricsettargetcomplexity
#endif
PETSC_EXTERN void dmplexmetricsettargetcomplexity_(DM *dm, PetscReal *targetComplexity, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetTargetComplexity(*dm, *targetComplexity);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricgettargetcomplexity_ DMPLEXMETRICGETTARGETCOMPLEXITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricgettargetcomplexity_ dmplexmetricgettargetcomplexity
#endif
PETSC_EXTERN void dmplexmetricgettargetcomplexity_(DM *dm, PetscReal *targetComplexity, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(targetComplexity);
  *ierr = DMPlexMetricGetTargetComplexity(*dm, targetComplexity);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetnormalizationorder_ DMPLEXMETRICSETNORMALIZATIONORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetnormalizationorder_ dmplexmetricsetnormalizationorder
#endif
PETSC_EXTERN void dmplexmetricsetnormalizationorder_(DM *dm, PetscReal *p, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetNormalizationOrder(*dm, *p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricgetnormalizationorder_ DMPLEXMETRICGETNORMALIZATIONORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricgetnormalizationorder_ dmplexmetricgetnormalizationorder
#endif
PETSC_EXTERN void dmplexmetricgetnormalizationorder_(DM *dm, PetscReal *p, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(p);
  *ierr = DMPlexMetricGetNormalizationOrder(*dm, p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetgradationfactor_ DMPLEXMETRICSETGRADATIONFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetgradationfactor_ dmplexmetricsetgradationfactor
#endif
PETSC_EXTERN void dmplexmetricsetgradationfactor_(DM *dm, PetscReal *beta, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetGradationFactor(*dm, *beta);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricgetgradationfactor_ DMPLEXMETRICGETGRADATIONFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricgetgradationfactor_ dmplexmetricgetgradationfactor
#endif
PETSC_EXTERN void dmplexmetricgetgradationfactor_(DM *dm, PetscReal *beta, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(beta);
  *ierr = DMPlexMetricGetGradationFactor(*dm, beta);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsethausdorffnumber_ DMPLEXMETRICSETHAUSDORFFNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsethausdorffnumber_ dmplexmetricsethausdorffnumber
#endif
PETSC_EXTERN void dmplexmetricsethausdorffnumber_(DM *dm, PetscReal *hausd, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetHausdorffNumber(*dm, *hausd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricgethausdorffnumber_ DMPLEXMETRICGETHAUSDORFFNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricgethausdorffnumber_ dmplexmetricgethausdorffnumber
#endif
PETSC_EXTERN void dmplexmetricgethausdorffnumber_(DM *dm, PetscReal *hausd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(hausd);
  *ierr = DMPlexMetricGetHausdorffNumber(*dm, hausd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetverbosity_ DMPLEXMETRICSETVERBOSITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetverbosity_ dmplexmetricsetverbosity
#endif
PETSC_EXTERN void dmplexmetricsetverbosity_(DM *dm, PetscInt *verbosity, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetVerbosity(*dm, *verbosity);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricgetverbosity_ DMPLEXMETRICGETVERBOSITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricgetverbosity_ dmplexmetricgetverbosity
#endif
PETSC_EXTERN void dmplexmetricgetverbosity_(DM *dm, PetscInt *verbosity, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(verbosity);
  *ierr = DMPlexMetricGetVerbosity(*dm, verbosity);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricsetnumiterations_ DMPLEXMETRICSETNUMITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricsetnumiterations_ dmplexmetricsetnumiterations
#endif
PETSC_EXTERN void dmplexmetricsetnumiterations_(DM *dm, PetscInt *numIter, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricSetNumIterations(*dm, *numIter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricgetnumiterations_ DMPLEXMETRICGETNUMITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricgetnumiterations_ dmplexmetricgetnumiterations
#endif
PETSC_EXTERN void dmplexmetricgetnumiterations_(DM *dm, PetscInt *numIter, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numIter);
  *ierr = DMPlexMetricGetNumIterations(*dm, numIter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetriccreate_ DMPLEXMETRICCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetriccreate_ dmplexmetriccreate
#endif
PETSC_EXTERN void dmplexmetriccreate_(DM *dm, PetscInt *f, Vec *metric, PetscErrorCode *ierr)
{
  PetscBool null_metric = !*(void**) metric ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(metric);
  CHKFORTRANNULLOBJECT(metric);
  *ierr = DMPlexMetricCreate(*dm, *f, metric);
  if (*ierr) return;
  if (! null_metric && !*(void**) metric) *(void **) metric = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetriccreateuniform_ DMPLEXMETRICCREATEUNIFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetriccreateuniform_ dmplexmetriccreateuniform
#endif
PETSC_EXTERN void dmplexmetriccreateuniform_(DM *dm, PetscInt *f, PetscReal *alpha, Vec *metric, PetscErrorCode *ierr)
{
  PetscBool null_metric = !*(void**) metric ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(metric);
  *ierr = DMPlexMetricCreateUniform(*dm, *f, *alpha, metric);
  if (*ierr) return;
  if (! null_metric && !*(void**) metric) *(void **) metric = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetriccreateisotropic_ DMPLEXMETRICCREATEISOTROPIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetriccreateisotropic_ dmplexmetriccreateisotropic
#endif
PETSC_EXTERN void dmplexmetriccreateisotropic_(DM *dm, PetscInt *f, Vec *indicator, Vec *metric, PetscErrorCode *ierr)
{
  PetscBool null_metric = !*(void**) metric ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(metric);
  *ierr = DMPlexMetricCreateIsotropic(*dm, *f, *indicator, metric);
  if (*ierr) return;
  if (! null_metric && !*(void**) metric) *(void **) metric = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricdeterminantcreate_ DMPLEXMETRICDETERMINANTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricdeterminantcreate_ dmplexmetricdeterminantcreate
#endif
PETSC_EXTERN void dmplexmetricdeterminantcreate_(DM *dm, PetscInt *f, Vec *determinant, DM *dmDet, PetscErrorCode *ierr)
{
  PetscBool null_determinant = !*(void**) determinant ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_dmDet = !*(void**) dmDet ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(dmDet);
  CHKFORTRANNULLOBJECT(determinant);
  CHKFORTRANNULLOBJECT(dmDet);
  *ierr = DMPlexMetricDeterminantCreate(*dm, *f, determinant, dmDet);
  if (*ierr) return;
  if (! null_determinant && !*(void**) determinant) *(void **) determinant = (void *)-2;
  if (! null_dmDet && !*(void**) dmDet) *(void **) dmDet = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricenforcespd_ DMPLEXMETRICENFORCESPD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricenforcespd_ dmplexmetricenforcespd
#endif
PETSC_EXTERN void dmplexmetricenforcespd_(DM *dm, Vec *metricIn, PetscBool *restrictSizes, PetscBool *restrictAnisotropy, Vec *metricOut, Vec *determinant, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricEnforceSPD(*dm, *metricIn, *restrictSizes ? PETSC_TRUE : PETSC_FALSE, *restrictAnisotropy ? PETSC_TRUE : PETSC_FALSE, *metricOut, *determinant);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricnormalize_ DMPLEXMETRICNORMALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricnormalize_ dmplexmetricnormalize
#endif
PETSC_EXTERN void dmplexmetricnormalize_(DM *dm, Vec *metricIn, PetscBool *restrictSizes, PetscBool *restrictAnisotropy, Vec *metricOut, Vec *determinant, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricNormalize(*dm, *metricIn, *restrictSizes ? PETSC_TRUE : PETSC_FALSE, *restrictAnisotropy ? PETSC_TRUE : PETSC_FALSE, *metricOut, *determinant);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricaverage_ DMPLEXMETRICAVERAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricaverage_ dmplexmetricaverage
#endif
PETSC_EXTERN void dmplexmetricaverage_(DM *dm, PetscInt *numMetrics, PetscReal weights[], Vec metrics[], Vec *metricAvg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(weights);
  CHKFORTRANNULLOBJECT(metrics);
  *ierr = DMPlexMetricAverage(*dm, *numMetrics, weights, metrics, *metricAvg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricaverage2_ DMPLEXMETRICAVERAGE2
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricaverage2_ dmplexmetricaverage2
#endif
PETSC_EXTERN void dmplexmetricaverage2_(DM *dm, Vec *metric1, Vec *metric2, Vec *metricAvg, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricAverage2(*dm, *metric1, *metric2, *metricAvg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricaverage3_ DMPLEXMETRICAVERAGE3
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricaverage3_ dmplexmetricaverage3
#endif
PETSC_EXTERN void dmplexmetricaverage3_(DM *dm, Vec *metric1, Vec *metric2, Vec *metric3, Vec *metricAvg, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricAverage3(*dm, *metric1, *metric2, *metric3, *metricAvg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricintersection_ DMPLEXMETRICINTERSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricintersection_ dmplexmetricintersection
#endif
PETSC_EXTERN void dmplexmetricintersection_(DM *dm, PetscInt *numMetrics, Vec metrics[], Vec *metricInt, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(metrics);
  *ierr = DMPlexMetricIntersection(*dm, *numMetrics, metrics, *metricInt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricintersection2_ DMPLEXMETRICINTERSECTION2
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricintersection2_ dmplexmetricintersection2
#endif
PETSC_EXTERN void dmplexmetricintersection2_(DM *dm, Vec *metric1, Vec *metric2, Vec *metricInt, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricIntersection2(*dm, *metric1, *metric2, *metricInt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexmetricintersection3_ DMPLEXMETRICINTERSECTION3
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexmetricintersection3_ dmplexmetricintersection3
#endif
PETSC_EXTERN void dmplexmetricintersection3_(DM *dm, Vec *metric1, Vec *metric2, Vec *metric3, Vec *metricInt, PetscErrorCode *ierr)
{
  *ierr = DMPlexMetricIntersection3(*dm, *metric1, *metric2, *metric3, *metricInt);
  if (*ierr) return;
}
