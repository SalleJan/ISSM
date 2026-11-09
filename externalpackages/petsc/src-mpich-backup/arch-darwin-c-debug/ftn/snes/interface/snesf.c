#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesseterrorifnotconverged_ SNESSETERRORIFNOTCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesseterrorifnotconverged_ snesseterrorifnotconverged
#endif
PETSC_EXTERN void snesseterrorifnotconverged_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESSetErrorIfNotConverged(*snes, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgeterrorifnotconverged_ SNESGETERRORIFNOTCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgeterrorifnotconverged_ snesgeterrorifnotconverged
#endif
PETSC_EXTERN void snesgeterrorifnotconverged_(SNES *snes, PetscBool *flag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flag);
  *ierr = SNESGetErrorIfNotConverged(*snes, flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetalwayscomputesfinalresidual_ SNESSETALWAYSCOMPUTESFINALRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetalwayscomputesfinalresidual_ snessetalwayscomputesfinalresidual
#endif
PETSC_EXTERN void snessetalwayscomputesfinalresidual_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESSetAlwaysComputesFinalResidual(*snes, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetalwayscomputesfinalresidual_ SNESGETALWAYSCOMPUTESFINALRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetalwayscomputesfinalresidual_ snesgetalwayscomputesfinalresidual
#endif
PETSC_EXTERN void snesgetalwayscomputesfinalresidual_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = SNESGetAlwaysComputesFinalResidual(*snes, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetfunctiondomainerror_ SNESSETFUNCTIONDOMAINERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetfunctiondomainerror_ snessetfunctiondomainerror
#endif
PETSC_EXTERN void snessetfunctiondomainerror_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESSetFunctionDomainError(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetobjectivedomainerror_ SNESSETOBJECTIVEDOMAINERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetobjectivedomainerror_ snessetobjectivedomainerror
#endif
PETSC_EXTERN void snessetobjectivedomainerror_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESSetObjectiveDomainError(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetjacobiandomainerror_ SNESSETJACOBIANDOMAINERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetjacobiandomainerror_ snessetjacobiandomainerror
#endif
PETSC_EXTERN void snessetjacobiandomainerror_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESSetJacobianDomainError(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetcheckjacobiandomainerror_ SNESSETCHECKJACOBIANDOMAINERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetcheckjacobiandomainerror_ snessetcheckjacobiandomainerror
#endif
PETSC_EXTERN void snessetcheckjacobiandomainerror_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESSetCheckJacobianDomainError(*snes, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetcheckjacobiandomainerror_ SNESGETCHECKJACOBIANDOMAINERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetcheckjacobiandomainerror_ snesgetcheckjacobiandomainerror
#endif
PETSC_EXTERN void snesgetcheckjacobiandomainerror_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = SNESGetCheckJacobianDomainError(*snes, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesload_ SNESLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesload_ snesload
#endif
PETSC_EXTERN void snesload_(SNES *snes, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = SNESLoad(*snes, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesviewfromoptions_ SNESVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesviewfromoptions_ snesviewfromoptions
#endif
PETSC_EXTERN void snesviewfromoptions_(SNES *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = SNESViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesview_ SNESVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesview_ snesview
#endif
PETSC_EXTERN void snesview_(SNES *snes, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = SNESView(*snes, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetupmatrices_ SNESSETUPMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetupmatrices_ snessetupmatrices
#endif
PETSC_EXTERN void snessetupmatrices_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESSetUpMatrices(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetfromoptions_ SNESSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetfromoptions_ snessetfromoptions
#endif
PETSC_EXTERN void snessetfromoptions_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESSetFromOptions(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesresetfromoptions_ SNESRESETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesresetfromoptions_ snesresetfromoptions
#endif
PETSC_EXTERN void snesresetfromoptions_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESResetFromOptions(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetapplicationcontext_ SNESSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetapplicationcontext_ snessetapplicationcontext
#endif
PETSC_EXTERN void snessetapplicationcontext_(SNES *snes, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESSetApplicationContext(*snes, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetapplicationcontextcptr_ SNESGETAPPLICATIONCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetapplicationcontextcptr_ snesgetapplicationcontextcptr
#endif
PETSC_EXTERN void snesgetapplicationcontextcptr_(SNES *snes, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = SNESGetApplicationContext(*snes, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetusematrixfree_ SNESSETUSEMATRIXFREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetusematrixfree_ snessetusematrixfree
#endif
PETSC_EXTERN void snessetusematrixfree_(SNES *snes, PetscBool *mf_operator, PetscBool *mf, PetscErrorCode *ierr)
{
  *ierr = SNESSetUseMatrixFree(*snes, *mf_operator ? PETSC_TRUE : PETSC_FALSE, *mf ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetusematrixfree_ SNESGETUSEMATRIXFREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetusematrixfree_ snesgetusematrixfree
#endif
PETSC_EXTERN void snesgetusematrixfree_(SNES *snes, PetscBool *mf_operator, PetscBool *mf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(mf_operator);
  CHKFORTRANNULLBOOL(mf);
  *ierr = SNESGetUseMatrixFree(*snes, mf_operator, mf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetiterationnumber_ SNESGETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetiterationnumber_ snesgetiterationnumber
#endif
PETSC_EXTERN void snesgetiterationnumber_(SNES *snes, PetscInt *iter, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(iter);
  *ierr = SNESGetIterationNumber(*snes, iter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetiterationnumber_ SNESSETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetiterationnumber_ snessetiterationnumber
#endif
PETSC_EXTERN void snessetiterationnumber_(SNES *snes, PetscInt *iter, PetscErrorCode *ierr)
{
  *ierr = SNESSetIterationNumber(*snes, *iter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetnonlinearstepfailures_ SNESGETNONLINEARSTEPFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetnonlinearstepfailures_ snesgetnonlinearstepfailures
#endif
PETSC_EXTERN void snesgetnonlinearstepfailures_(SNES *snes, PetscInt *nfails, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nfails);
  *ierr = SNESGetNonlinearStepFailures(*snes, nfails);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetmaxnonlinearstepfailures_ SNESSETMAXNONLINEARSTEPFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetmaxnonlinearstepfailures_ snessetmaxnonlinearstepfailures
#endif
PETSC_EXTERN void snessetmaxnonlinearstepfailures_(SNES *snes, PetscInt *maxFails, PetscErrorCode *ierr)
{
  *ierr = SNESSetMaxNonlinearStepFailures(*snes, *maxFails);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetmaxnonlinearstepfailures_ SNESGETMAXNONLINEARSTEPFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetmaxnonlinearstepfailures_ snesgetmaxnonlinearstepfailures
#endif
PETSC_EXTERN void snesgetmaxnonlinearstepfailures_(SNES *snes, PetscInt *maxFails, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(maxFails);
  *ierr = SNESGetMaxNonlinearStepFailures(*snes, maxFails);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetnumberfunctionevals_ SNESGETNUMBERFUNCTIONEVALS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetnumberfunctionevals_ snesgetnumberfunctionevals
#endif
PETSC_EXTERN void snesgetnumberfunctionevals_(SNES *snes, PetscInt *nfuncs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nfuncs);
  *ierr = SNESGetNumberFunctionEvals(*snes, nfuncs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetlinearsolvefailures_ SNESGETLINEARSOLVEFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetlinearsolvefailures_ snesgetlinearsolvefailures
#endif
PETSC_EXTERN void snesgetlinearsolvefailures_(SNES *snes, PetscInt *nfails, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nfails);
  *ierr = SNESGetLinearSolveFailures(*snes, nfails);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetmaxlinearsolvefailures_ SNESSETMAXLINEARSOLVEFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetmaxlinearsolvefailures_ snessetmaxlinearsolvefailures
#endif
PETSC_EXTERN void snessetmaxlinearsolvefailures_(SNES *snes, PetscInt *maxFails, PetscErrorCode *ierr)
{
  *ierr = SNESSetMaxLinearSolveFailures(*snes, *maxFails);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetmaxlinearsolvefailures_ SNESGETMAXLINEARSOLVEFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetmaxlinearsolvefailures_ snesgetmaxlinearsolvefailures
#endif
PETSC_EXTERN void snesgetmaxlinearsolvefailures_(SNES *snes, PetscInt *maxFails, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(maxFails);
  *ierr = SNESGetMaxLinearSolveFailures(*snes, maxFails);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetlinearsolveiterations_ SNESGETLINEARSOLVEITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetlinearsolveiterations_ snesgetlinearsolveiterations
#endif
PETSC_EXTERN void snesgetlinearsolveiterations_(SNES *snes, PetscInt *lits, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lits);
  *ierr = SNESGetLinearSolveIterations(*snes, lits);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetcountersreset_ SNESSETCOUNTERSRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetcountersreset_ snessetcountersreset
#endif
PETSC_EXTERN void snessetcountersreset_(SNES *snes, PetscBool *reset, PetscErrorCode *ierr)
{
  *ierr = SNESSetCountersReset(*snes, *reset ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesresetcounters_ SNESRESETCOUNTERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesresetcounters_ snesresetcounters
#endif
PETSC_EXTERN void snesresetcounters_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESResetCounters(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetksp_ SNESSETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetksp_ snessetksp
#endif
PETSC_EXTERN void snessetksp_(SNES *snes, KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = SNESSetKSP(*snes, *ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesparametersinitialize_ SNESPARAMETERSINITIALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesparametersinitialize_ snesparametersinitialize
#endif
PETSC_EXTERN void snesparametersinitialize_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESParametersInitialize(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescreate_ SNESCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescreate_ snescreate
#endif
PETSC_EXTERN void snescreate_(MPI_Fint *comm, SNES *outsnes, PetscErrorCode *ierr)
{
  PetscBool null_outsnes = !*(void**) outsnes ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(outsnes);
  CHKFORTRANNULLOBJECT(outsnes);
  *ierr = SNESCreate(MPI_Comm_f2c(*(comm)), outsnes);
  if (*ierr) return;
  if (! null_outsnes && !*(void**) outsnes) *(void **) outsnes = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetinitialfunction_ SNESSETINITIALFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetinitialfunction_ snessetinitialfunction
#endif
PETSC_EXTERN void snessetinitialfunction_(SNES *snes, Vec *f, PetscErrorCode *ierr)
{
  *ierr = SNESSetInitialFunction(*snes, *f);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetnormschedule_ SNESSETNORMSCHEDULE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetnormschedule_ snessetnormschedule
#endif
PETSC_EXTERN void snessetnormschedule_(SNES *snes, SNESNormSchedule *normschedule, PetscErrorCode *ierr)
{
  *ierr = SNESSetNormSchedule(*snes, *normschedule);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetnormschedule_ SNESGETNORMSCHEDULE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetnormschedule_ snesgetnormschedule
#endif
PETSC_EXTERN void snesgetnormschedule_(SNES *snes, SNESNormSchedule *normschedule, PetscErrorCode *ierr)
{
  *ierr = SNESGetNormSchedule(*snes, normschedule);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetfunctionnorm_ SNESSETFUNCTIONNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetfunctionnorm_ snessetfunctionnorm
#endif
PETSC_EXTERN void snessetfunctionnorm_(SNES *snes, PetscReal *norm, PetscErrorCode *ierr)
{
  *ierr = SNESSetFunctionNorm(*snes, *norm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetfunctionnorm_ SNESGETFUNCTIONNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetfunctionnorm_ snesgetfunctionnorm
#endif
PETSC_EXTERN void snesgetfunctionnorm_(SNES *snes, PetscReal *norm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(norm);
  *ierr = SNESGetFunctionNorm(*snes, norm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetupdatenorm_ SNESGETUPDATENORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetupdatenorm_ snesgetupdatenorm
#endif
PETSC_EXTERN void snesgetupdatenorm_(SNES *snes, PetscReal *ynorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(ynorm);
  *ierr = SNESGetUpdateNorm(*snes, ynorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetsolutionnorm_ SNESGETSOLUTIONNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetsolutionnorm_ snesgetsolutionnorm
#endif
PETSC_EXTERN void snesgetsolutionnorm_(SNES *snes, PetscReal *xnorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(xnorm);
  *ierr = SNESGetSolutionNorm(*snes, xnorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetfunctiontype_ SNESSETFUNCTIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetfunctiontype_ snessetfunctiontype
#endif
PETSC_EXTERN void snessetfunctiontype_(SNES *snes, SNESFunctionType *type, PetscErrorCode *ierr)
{
  *ierr = SNESSetFunctionType(*snes, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetfunctiontype_ SNESGETFUNCTIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetfunctiontype_ snesgetfunctiontype
#endif
PETSC_EXTERN void snesgetfunctiontype_(SNES *snes, SNESFunctionType *type, PetscErrorCode *ierr)
{
  *ierr = SNESGetFunctionType(*snes, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snespicardcomputemffunction_ SNESPICARDCOMPUTEMFFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snespicardcomputemffunction_ snespicardcomputemffunction
#endif
PETSC_EXTERN void snespicardcomputemffunction_(SNES *snes, Vec *x, Vec *f, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESPicardComputeMFFunction(*snes, *x, *f, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snespicardcomputefunction_ SNESPICARDCOMPUTEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snespicardcomputefunction_ snespicardcomputefunction
#endif
PETSC_EXTERN void snespicardcomputefunction_(SNES *snes, Vec *x, Vec *f, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESPicardComputeFunction(*snes, *x, *f, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snespicardcomputejacobian_ SNESPICARDCOMPUTEJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snespicardcomputejacobian_ snespicardcomputejacobian
#endif
PETSC_EXTERN void snespicardcomputejacobian_(SNES *snes, Vec *x1, Mat *J, Mat *B, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESPicardComputeJacobian(*snes, *x1, *J, *B, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetrhs_ SNESGETRHS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetrhs_ snesgetrhs
#endif
PETSC_EXTERN void snesgetrhs_(SNES *snes, Vec *rhs, PetscErrorCode *ierr)
{
  PetscBool null_rhs = !*(void**) rhs ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rhs);
  *ierr = SNESGetRhs(*snes, rhs);
  if (*ierr) return;
  if (! null_rhs && !*(void**) rhs) *(void **) rhs = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescomputefunction_ SNESCOMPUTEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescomputefunction_ snescomputefunction
#endif
PETSC_EXTERN void snescomputefunction_(SNES *snes, Vec *x, Vec *f, PetscErrorCode *ierr)
{
  *ierr = SNESComputeFunction(*snes, *x, *f);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescomputemffunction_ SNESCOMPUTEMFFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescomputemffunction_ snescomputemffunction
#endif
PETSC_EXTERN void snescomputemffunction_(SNES *snes, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = SNESComputeMFFunction(*snes, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescomputengs_ SNESCOMPUTENGS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescomputengs_ snescomputengs
#endif
PETSC_EXTERN void snescomputengs_(SNES *snes, Vec *b, Vec *x, PetscErrorCode *ierr)
{
  *ierr = SNESComputeNGS(*snes, *b, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snestestfunction_ SNESTESTFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snestestfunction_ snestestfunction
#endif
PETSC_EXTERN void snestestfunction_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESTestFunction(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snestestjacobian_ SNESTESTJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snestestjacobian_ snestestjacobian
#endif
PETSC_EXTERN void snestestjacobian_(SNES *snes, PetscReal *Jnorm, PetscReal *diffNorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(Jnorm);
  CHKFORTRANNULLREAL(diffNorm);
  *ierr = SNESTestJacobian(*snes, Jnorm, diffNorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescomputejacobian_ SNESCOMPUTEJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescomputejacobian_ snescomputejacobian
#endif
PETSC_EXTERN void snescomputejacobian_(SNES *snes, Vec *X, Mat *A, Mat *B, PetscErrorCode *ierr)
{
  *ierr = SNESComputeJacobian(*snes, *X, *A, *B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetup_ SNESSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetup_ snessetup
#endif
PETSC_EXTERN void snessetup_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESSetUp(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesreset_ SNESRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesreset_ snesreset
#endif
PETSC_EXTERN void snesreset_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESReset(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesconvergedreasonviewcancel_ SNESCONVERGEDREASONVIEWCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesconvergedreasonviewcancel_ snesconvergedreasonviewcancel
#endif
PETSC_EXTERN void snesconvergedreasonviewcancel_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESConvergedReasonViewCancel(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesdestroy_ SNESDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesdestroy_ snesdestroy
#endif
PETSC_EXTERN void snesdestroy_(SNES *snes, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(snes);
  PetscBool null_snes = !*(void**) snes ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(snes);
  *ierr = SNESDestroy(snes);
  if (*ierr) return;
  if (! null_snes && !*(void**) snes) *(void **) snes = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetlagpreconditioner_ SNESSETLAGPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetlagpreconditioner_ snessetlagpreconditioner
#endif
PETSC_EXTERN void snessetlagpreconditioner_(SNES *snes, PetscInt *lag, PetscErrorCode *ierr)
{
  *ierr = SNESSetLagPreconditioner(*snes, *lag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetgridsequence_ SNESSETGRIDSEQUENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetgridsequence_ snessetgridsequence
#endif
PETSC_EXTERN void snessetgridsequence_(SNES *snes, PetscInt *steps, PetscErrorCode *ierr)
{
  *ierr = SNESSetGridSequence(*snes, *steps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetgridsequence_ SNESGETGRIDSEQUENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetgridsequence_ snesgetgridsequence
#endif
PETSC_EXTERN void snesgetgridsequence_(SNES *snes, PetscInt *steps, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(steps);
  *ierr = SNESGetGridSequence(*snes, steps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetlagpreconditioner_ SNESGETLAGPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetlagpreconditioner_ snesgetlagpreconditioner
#endif
PETSC_EXTERN void snesgetlagpreconditioner_(SNES *snes, PetscInt *lag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lag);
  *ierr = SNESGetLagPreconditioner(*snes, lag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetlagjacobian_ SNESSETLAGJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetlagjacobian_ snessetlagjacobian
#endif
PETSC_EXTERN void snessetlagjacobian_(SNES *snes, PetscInt *lag, PetscErrorCode *ierr)
{
  *ierr = SNESSetLagJacobian(*snes, *lag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetlagjacobian_ SNESGETLAGJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetlagjacobian_ snesgetlagjacobian
#endif
PETSC_EXTERN void snesgetlagjacobian_(SNES *snes, PetscInt *lag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lag);
  *ierr = SNESGetLagJacobian(*snes, lag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetlagjacobianpersists_ SNESSETLAGJACOBIANPERSISTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetlagjacobianpersists_ snessetlagjacobianpersists
#endif
PETSC_EXTERN void snessetlagjacobianpersists_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESSetLagJacobianPersists(*snes, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetlagpreconditionerpersists_ SNESSETLAGPRECONDITIONERPERSISTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetlagpreconditionerpersists_ snessetlagpreconditionerpersists
#endif
PETSC_EXTERN void snessetlagpreconditionerpersists_(SNES *snes, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESSetLagPreconditionerPersists(*snes, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetforceiteration_ SNESSETFORCEITERATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetforceiteration_ snessetforceiteration
#endif
PETSC_EXTERN void snessetforceiteration_(SNES *snes, PetscBool *force, PetscErrorCode *ierr)
{
  *ierr = SNESSetForceIteration(*snes, *force ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetforceiteration_ SNESGETFORCEITERATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetforceiteration_ snesgetforceiteration
#endif
PETSC_EXTERN void snesgetforceiteration_(SNES *snes, PetscBool *force, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(force);
  *ierr = SNESGetForceIteration(*snes, force);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessettolerances_ SNESSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessettolerances_ snessettolerances
#endif
PETSC_EXTERN void snessettolerances_(SNES *snes, PetscReal *abstol, PetscReal *rtol, PetscReal *stol, PetscInt *maxit, PetscInt *maxf, PetscErrorCode *ierr)
{
  *ierr = SNESSetTolerances(*snes, *abstol, *rtol, *stol, *maxit, *maxf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetdivergencetolerance_ SNESSETDIVERGENCETOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetdivergencetolerance_ snessetdivergencetolerance
#endif
PETSC_EXTERN void snessetdivergencetolerance_(SNES *snes, PetscReal *divtol, PetscErrorCode *ierr)
{
  *ierr = SNESSetDivergenceTolerance(*snes, *divtol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgettolerances_ SNESGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgettolerances_ snesgettolerances
#endif
PETSC_EXTERN void snesgettolerances_(SNES *snes, PetscReal *atol, PetscReal *rtol, PetscReal *stol, PetscInt *maxit, PetscInt *maxf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(atol);
  CHKFORTRANNULLREAL(rtol);
  CHKFORTRANNULLREAL(stol);
  CHKFORTRANNULLINTEGER(maxit);
  CHKFORTRANNULLINTEGER(maxf);
  *ierr = SNESGetTolerances(*snes, atol, rtol, stol, maxit, maxf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetdivergencetolerance_ SNESGETDIVERGENCETOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetdivergencetolerance_ snesgetdivergencetolerance
#endif
PETSC_EXTERN void snesgetdivergencetolerance_(SNES *snes, PetscReal *divtol, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(divtol);
  *ierr = SNESGetDivergenceTolerance(*snes, divtol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorlgrange_ SNESMONITORLGRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorlgrange_ snesmonitorlgrange
#endif
PETSC_EXTERN void snesmonitorlgrange_(SNES *snes, PetscInt *n, PetscReal *rnorm, PetscCtx monctx, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorLGRange(*snes, *n, *rnorm, monctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesconverged_ SNESCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesconverged_ snesconverged
#endif
PETSC_EXTERN void snesconverged_(SNES *snes, PetscInt *it, PetscReal *xnorm, PetscReal *snorm, PetscReal *fnorm, PetscErrorCode *ierr)
{
  *ierr = SNESConverged(*snes, *it, *xnorm, *snorm, *fnorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitor_ SNESMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitor_ snesmonitor
#endif
PETSC_EXTERN void snesmonitor_(SNES *snes, PetscInt *iter, PetscReal *rnorm, PetscErrorCode *ierr)
{
  *ierr = SNESMonitor(*snes, *iter, *rnorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorcancel_ SNESMONITORCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorcancel_ snesmonitorcancel
#endif
PETSC_EXTERN void snesmonitorcancel_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorCancel(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetconvergedreason_ SNESGETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetconvergedreason_ snesgetconvergedreason
#endif
PETSC_EXTERN void snesgetconvergedreason_(SNES *snes, SNESConvergedReason *reason, PetscErrorCode *ierr)
{
  *ierr = SNESGetConvergedReason(*snes, reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetconvergedreason_ SNESSETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetconvergedreason_ snessetconvergedreason
#endif
PETSC_EXTERN void snessetconvergedreason_(SNES *snes, SNESConvergedReason *reason, PetscErrorCode *ierr)
{
  *ierr = SNESSetConvergedReason(*snes, *reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetconvergencehistory_ SNESSETCONVERGENCEHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetconvergencehistory_ snessetconvergencehistory
#endif
PETSC_EXTERN void snessetconvergencehistory_(SNES *snes, PetscReal a[], PetscInt its[], PetscInt *na, PetscBool *reset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(a);
  CHKFORTRANNULLINTEGER(its);
  *ierr = SNESSetConvergenceHistory(*snes, a, its, *na, *reset ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesconvergedreasonview_ SNESCONVERGEDREASONVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesconvergedreasonview_ snesconvergedreasonview
#endif
PETSC_EXTERN void snesconvergedreasonview_(SNES *snes, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = SNESConvergedReasonView(*snes, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesconvergedreasonviewfromoptions_ SNESCONVERGEDREASONVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesconvergedreasonviewfromoptions_ snesconvergedreasonviewfromoptions
#endif
PETSC_EXTERN void snesconvergedreasonviewfromoptions_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESConvergedReasonViewFromOptions(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessolve_ SNESSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessolve_ snessolve
#endif
PETSC_EXTERN void snessolve_(SNES *snes, Vec *b, Vec *x, PetscErrorCode *ierr)
{
  *ierr = SNESSolve(*snes, *b, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessettype_ SNESSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessettype_ snessettype
#endif
PETSC_EXTERN void snessettype_(SNES *snes, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = SNESSetType(*snes, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgettype_ SNESGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgettype_ snesgettype
#endif
PETSC_EXTERN void snesgettype_(SNES *snes, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = SNESGetType(*snes, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetsolution_ SNESSETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetsolution_ snessetsolution
#endif
PETSC_EXTERN void snessetsolution_(SNES *snes, Vec *u, PetscErrorCode *ierr)
{
  *ierr = SNESSetSolution(*snes, *u);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetsolution_ SNESGETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetsolution_ snesgetsolution
#endif
PETSC_EXTERN void snesgetsolution_(SNES *snes, Vec *x, PetscErrorCode *ierr)
{
  PetscBool null_x = !*(void**) x ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(x);
  *ierr = SNESGetSolution(*snes, x);
  if (*ierr) return;
  if (! null_x && !*(void**) x) *(void **) x = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetsolutionupdate_ SNESGETSOLUTIONUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetsolutionupdate_ snesgetsolutionupdate
#endif
PETSC_EXTERN void snesgetsolutionupdate_(SNES *snes, Vec *x, PetscErrorCode *ierr)
{
  PetscBool null_x = !*(void**) x ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(x);
  *ierr = SNESGetSolutionUpdate(*snes, x);
  if (*ierr) return;
  if (! null_x && !*(void**) x) *(void **) x = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetoptionsprefix_ SNESSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetoptionsprefix_ snessetoptionsprefix
#endif
PETSC_EXTERN void snessetoptionsprefix_(SNES *snes, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = SNESSetOptionsPrefix(*snes, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesappendoptionsprefix_ SNESAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesappendoptionsprefix_ snesappendoptionsprefix
#endif
PETSC_EXTERN void snesappendoptionsprefix_(SNES *snes, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = SNESAppendOptionsPrefix(*snes, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetoptionsprefix_ SNESGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetoptionsprefix_ snesgetoptionsprefix
#endif
PETSC_EXTERN void snesgetoptionsprefix_(SNES *snes, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix = PETSC_NULLPTR;
  *ierr = SNESGetOptionsPrefix(*snes, (const char **)&c_prefix);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)prefix, c_prefix, l_prefix);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, prefix, l_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snestestlocalmin_ SNESTESTLOCALMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snestestlocalmin_ snestestlocalmin
#endif
PETSC_EXTERN void snestestlocalmin_(SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESTestLocalMin(*snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetlinesearch_ SNESGETLINESEARCH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetlinesearch_ snesgetlinesearch
#endif
PETSC_EXTERN void snesgetlinesearch_(SNES *snes, SNESLineSearch *linesearch, PetscErrorCode *ierr)
{
  PetscBool null_linesearch = !*(void**) linesearch ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(linesearch);
  *ierr = SNESGetLineSearch(*snes, linesearch);
  if (*ierr) return;
  if (! null_linesearch && !*(void**) linesearch) *(void **) linesearch = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneskspsetuseew_ SNESKSPSETUSEEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneskspsetuseew_ sneskspsetuseew
#endif
PETSC_EXTERN void sneskspsetuseew_(SNES *snes, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = SNESKSPSetUseEW(*snes, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneskspgetuseew_ SNESKSPGETUSEEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneskspgetuseew_ sneskspgetuseew
#endif
PETSC_EXTERN void sneskspgetuseew_(SNES *snes, PetscBool *flag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flag);
  *ierr = SNESKSPGetUseEW(*snes, flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneskspsetparametersew_ SNESKSPSETPARAMETERSEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneskspsetparametersew_ sneskspsetparametersew
#endif
PETSC_EXTERN void sneskspsetparametersew_(SNES *snes, PetscInt *version, PetscReal *rtol_0, PetscReal *rtol_max, PetscReal *gamma, PetscReal *alpha, PetscReal *alpha2, PetscReal *threshold, PetscErrorCode *ierr)
{
  *ierr = SNESKSPSetParametersEW(*snes, *version, *rtol_0, *rtol_max, *gamma, *alpha, *alpha2, *threshold);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneskspgetparametersew_ SNESKSPGETPARAMETERSEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneskspgetparametersew_ sneskspgetparametersew
#endif
PETSC_EXTERN void sneskspgetparametersew_(SNES *snes, PetscInt *version, PetscReal *rtol_0, PetscReal *rtol_max, PetscReal *gamma, PetscReal *alpha, PetscReal *alpha2, PetscReal *threshold, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(version);
  CHKFORTRANNULLREAL(rtol_0);
  CHKFORTRANNULLREAL(rtol_max);
  CHKFORTRANNULLREAL(gamma);
  CHKFORTRANNULLREAL(alpha);
  CHKFORTRANNULLREAL(alpha2);
  CHKFORTRANNULLREAL(threshold);
  *ierr = SNESKSPGetParametersEW(*snes, version, rtol_0, rtol_max, gamma, alpha, alpha2, threshold);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetksp_ SNESGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetksp_ snesgetksp
#endif
PETSC_EXTERN void snesgetksp_(SNES *snes, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = SNESGetKSP(*snes, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetdm_ SNESSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetdm_ snessetdm
#endif
PETSC_EXTERN void snessetdm_(SNES *snes, DM *dm, PetscErrorCode *ierr)
{
  *ierr = SNESSetDM(*snes, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetdm_ SNESGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetdm_ snesgetdm
#endif
PETSC_EXTERN void snesgetdm_(SNES *snes, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = SNESGetDM(*snes, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetnpc_ SNESSETNPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetnpc_ snessetnpc
#endif
PETSC_EXTERN void snessetnpc_(SNES *snes, SNES *npc, PetscErrorCode *ierr)
{
  *ierr = SNESSetNPC(*snes, *npc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetnpc_ SNESGETNPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetnpc_ snesgetnpc
#endif
PETSC_EXTERN void snesgetnpc_(SNES *snes, SNES *pc, PetscErrorCode *ierr)
{
  PetscBool null_pc = !*(void**) pc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pc);
  *ierr = SNESGetNPC(*snes, pc);
  if (*ierr) return;
  if (! null_pc && !*(void**) pc) *(void **) pc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneshasnpc_ SNESHASNPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneshasnpc_ sneshasnpc
#endif
PETSC_EXTERN void sneshasnpc_(SNES *snes, PetscBool *has_npc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(has_npc);
  *ierr = SNESHasNPC(*snes, has_npc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetnpcside_ SNESSETNPCSIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetnpcside_ snessetnpcside
#endif
PETSC_EXTERN void snessetnpcside_(SNES *snes, PCSide *side, PetscErrorCode *ierr)
{
  *ierr = SNESSetNPCSide(*snes, *side);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesgetnpcside_ SNESGETNPCSIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesgetnpcside_ snesgetnpcside
#endif
PETSC_EXTERN void snesgetnpcside_(SNES *snes, PCSide *side, PetscErrorCode *ierr)
{
  *ierr = SNESGetNPCSide(*snes, side);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetlinesearch_ SNESSETLINESEARCH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetlinesearch_ snessetlinesearch
#endif
PETSC_EXTERN void snessetlinesearch_(SNES *snes, SNESLineSearch *linesearch, PetscErrorCode *ierr)
{
  *ierr = SNESSetLineSearch(*snes, *linesearch);
  if (*ierr) return;
}
