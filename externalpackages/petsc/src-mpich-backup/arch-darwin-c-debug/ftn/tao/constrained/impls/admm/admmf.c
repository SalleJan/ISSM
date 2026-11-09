#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmsetmisfithessianchangestatus_ TAOADMMSETMISFITHESSIANCHANGESTATUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmsetmisfithessianchangestatus_ taoadmmsetmisfithessianchangestatus
#endif
PETSC_EXTERN void taoadmmsetmisfithessianchangestatus_(Tao *tao, PetscBool *b, PetscErrorCode *ierr)
{
  *ierr = TaoADMMSetMisfitHessianChangeStatus(*tao, *b ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmsetreghessianchangestatus_ TAOADMMSETREGHESSIANCHANGESTATUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmsetreghessianchangestatus_ taoadmmsetreghessianchangestatus
#endif
PETSC_EXTERN void taoadmmsetreghessianchangestatus_(Tao *tao, PetscBool *b, PetscErrorCode *ierr)
{
  *ierr = TaoADMMSetRegHessianChangeStatus(*tao, *b ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmsetspectralpenalty_ TAOADMMSETSPECTRALPENALTY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmsetspectralpenalty_ taoadmmsetspectralpenalty
#endif
PETSC_EXTERN void taoadmmsetspectralpenalty_(Tao *tao, PetscReal *mu, PetscErrorCode *ierr)
{
  *ierr = TaoADMMSetSpectralPenalty(*tao, *mu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmgetspectralpenalty_ TAOADMMGETSPECTRALPENALTY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmgetspectralpenalty_ taoadmmgetspectralpenalty
#endif
PETSC_EXTERN void taoadmmgetspectralpenalty_(Tao *tao, PetscReal *mu, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(mu);
  *ierr = TaoADMMGetSpectralPenalty(*tao, mu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmgetmisfitsubsolver_ TAOADMMGETMISFITSUBSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmgetmisfitsubsolver_ taoadmmgetmisfitsubsolver
#endif
PETSC_EXTERN void taoadmmgetmisfitsubsolver_(Tao *tao, Tao *misfit, PetscErrorCode *ierr)
{
  PetscBool null_misfit = !*(void**) misfit ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(misfit);
  *ierr = TaoADMMGetMisfitSubsolver(*tao, misfit);
  if (*ierr) return;
  if (! null_misfit && !*(void**) misfit) *(void **) misfit = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmgetregularizationsubsolver_ TAOADMMGETREGULARIZATIONSUBSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmgetregularizationsubsolver_ taoadmmgetregularizationsubsolver
#endif
PETSC_EXTERN void taoadmmgetregularizationsubsolver_(Tao *tao, Tao *reg, PetscErrorCode *ierr)
{
  PetscBool null_reg = !*(void**) reg ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(reg);
  *ierr = TaoADMMGetRegularizationSubsolver(*tao, reg);
  if (*ierr) return;
  if (! null_reg && !*(void**) reg) *(void **) reg = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmsetconstraintvectorrhs_ TAOADMMSETCONSTRAINTVECTORRHS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmsetconstraintvectorrhs_ taoadmmsetconstraintvectorrhs
#endif
PETSC_EXTERN void taoadmmsetconstraintvectorrhs_(Tao *tao, Vec *c, PetscErrorCode *ierr)
{
  *ierr = TaoADMMSetConstraintVectorRHS(*tao, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmsetminimumspectralpenalty_ TAOADMMSETMINIMUMSPECTRALPENALTY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmsetminimumspectralpenalty_ taoadmmsetminimumspectralpenalty
#endif
PETSC_EXTERN void taoadmmsetminimumspectralpenalty_(Tao *tao, PetscReal *mu, PetscErrorCode *ierr)
{
  *ierr = TaoADMMSetMinimumSpectralPenalty(*tao, *mu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmsetregularizercoefficient_ TAOADMMSETREGULARIZERCOEFFICIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmsetregularizercoefficient_ taoadmmsetregularizercoefficient
#endif
PETSC_EXTERN void taoadmmsetregularizercoefficient_(Tao *tao, PetscReal *lambda, PetscErrorCode *ierr)
{
  *ierr = TaoADMMSetRegularizerCoefficient(*tao, *lambda);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmgetregularizercoefficient_ TAOADMMGETREGULARIZERCOEFFICIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmgetregularizercoefficient_ taoadmmgetregularizercoefficient
#endif
PETSC_EXTERN void taoadmmgetregularizercoefficient_(Tao *tao, PetscReal *lambda, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(lambda);
  *ierr = TaoADMMGetRegularizerCoefficient(*tao, lambda);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetadmmparenttao_ TAOGETADMMPARENTTAO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetadmmparenttao_ taogetadmmparenttao
#endif
PETSC_EXTERN void taogetadmmparenttao_(Tao *tao, Tao *admm_tao, PetscErrorCode *ierr)
{
  PetscBool null_admm_tao = !*(void**) admm_tao ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(admm_tao);
  *ierr = TaoGetADMMParentTao(*tao, admm_tao);
  if (*ierr) return;
  if (! null_admm_tao && !*(void**) admm_tao) *(void **) admm_tao = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmgetdualvector_ TAOADMMGETDUALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmgetdualvector_ taoadmmgetdualvector
#endif
PETSC_EXTERN void taoadmmgetdualvector_(Tao *tao, Vec *Y, PetscErrorCode *ierr)
{
  PetscBool null_Y = !*(void**) Y ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Y);
  *ierr = TaoADMMGetDualVector(*tao, Y);
  if (*ierr) return;
  if (! null_Y && !*(void**) Y) *(void **) Y = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmsetregularizertype_ TAOADMMSETREGULARIZERTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmsetregularizertype_ taoadmmsetregularizertype
#endif
PETSC_EXTERN void taoadmmsetregularizertype_(Tao *tao, TaoADMMRegularizerType *type, PetscErrorCode *ierr)
{
  *ierr = TaoADMMSetRegularizerType(*tao, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmgetregularizertype_ TAOADMMGETREGULARIZERTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmgetregularizertype_ taoadmmgetregularizertype
#endif
PETSC_EXTERN void taoadmmgetregularizertype_(Tao *tao, TaoADMMRegularizerType *type, PetscErrorCode *ierr)
{
  *ierr = TaoADMMGetRegularizerType(*tao, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmsetupdatetype_ TAOADMMSETUPDATETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmsetupdatetype_ taoadmmsetupdatetype
#endif
PETSC_EXTERN void taoadmmsetupdatetype_(Tao *tao, TaoADMMUpdateType *type, PetscErrorCode *ierr)
{
  *ierr = TaoADMMSetUpdateType(*tao, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoadmmgetupdatetype_ TAOADMMGETUPDATETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoadmmgetupdatetype_ taoadmmgetupdatetype
#endif
PETSC_EXTERN void taoadmmgetupdatetype_(Tao *tao, TaoADMMUpdateType *type, PetscErrorCode *ierr)
{
  *ierr = TaoADMMGetUpdateType(*tao, type);
  if (*ierr) return;
}
