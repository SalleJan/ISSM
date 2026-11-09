#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermdestroy_ TAOTERMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermdestroy_ taotermdestroy
#endif
PETSC_EXTERN void taotermdestroy_(TaoTerm *term, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(term);
  PetscBool null_term = !*(void**) term ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(term);
  *ierr = TaoTermDestroy(term);
  if (*ierr) return;
  if (! null_term && !*(void**) term) *(void **) term = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermview_ TAOTERMVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermview_ taotermview
#endif
PETSC_EXTERN void taotermview_(TaoTerm *term, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = TaoTermView(*term, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetup_ TAOTERMSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetup_ taotermsetup
#endif
PETSC_EXTERN void taotermsetup_(TaoTerm *term, PetscErrorCode *ierr)
{
  *ierr = TaoTermSetUp(*term);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetfromoptions_ TAOTERMSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetfromoptions_ taotermsetfromoptions
#endif
PETSC_EXTERN void taotermsetfromoptions_(TaoTerm *term, PetscErrorCode *ierr)
{
  *ierr = TaoTermSetFromOptions(*term);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsettype_ TAOTERMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsettype_ taotermsettype
#endif
PETSC_EXTERN void taotermsettype_(TaoTerm *term, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = TaoTermSetType(*term, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermgettype_ TAOTERMGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermgettype_ taotermgettype
#endif
PETSC_EXTERN void taotermgettype_(TaoTerm *term, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = TaoTermGetType(*term, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcreate_ TAOTERMCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcreate_ taotermcreate
#endif
PETSC_EXTERN void taotermcreate_(MPI_Fint *comm, TaoTerm *term, PetscErrorCode *ierr)
{
  PetscBool null_term = !*(void**) term ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(term);
  CHKFORTRANNULLOBJECT(term);
  *ierr = TaoTermCreate(MPI_Comm_f2c(*(comm)), term);
  if (*ierr) return;
  if (! null_term && !*(void**) term) *(void **) term = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputeobjective_ TAOTERMCOMPUTEOBJECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputeobjective_ taotermcomputeobjective
#endif
PETSC_EXTERN void taotermcomputeobjective_(TaoTerm *term, Vec *x, Vec *params, PetscReal *value, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(value);
  *ierr = TaoTermComputeObjective(*term, *x, *params, value);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputegradient_ TAOTERMCOMPUTEGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputegradient_ taotermcomputegradient
#endif
PETSC_EXTERN void taotermcomputegradient_(TaoTerm *term, Vec *x, Vec *params, Vec *g, PetscErrorCode *ierr)
{
  *ierr = TaoTermComputeGradient(*term, *x, *params, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputeobjectiveandgradient_ TAOTERMCOMPUTEOBJECTIVEANDGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputeobjectiveandgradient_ taotermcomputeobjectiveandgradient
#endif
PETSC_EXTERN void taotermcomputeobjectiveandgradient_(TaoTerm *term, Vec *x, Vec *params, PetscReal *value, Vec *g, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(value);
  *ierr = TaoTermComputeObjectiveAndGradient(*term, *x, *params, value, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputehessian_ TAOTERMCOMPUTEHESSIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputehessian_ taotermcomputehessian
#endif
PETSC_EXTERN void taotermcomputehessian_(TaoTerm *term, Vec *x, Vec *params, Mat *H, Mat *Hpre, PetscErrorCode *ierr)
{
  *ierr = TaoTermComputeHessian(*term, *x, *params, *H, *Hpre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermiscomputehessianfdpossible_ TAOTERMISCOMPUTEHESSIANFDPOSSIBLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermiscomputehessianfdpossible_ taotermiscomputehessianfdpossible
#endif
PETSC_EXTERN void taotermiscomputehessianfdpossible_(TaoTerm *term, PetscBool3 *is_fdpossible, PetscErrorCode *ierr)
{
  *ierr = TaoTermIsComputeHessianFDPossible(*term, is_fdpossible);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermisobjectivedefined_ TAOTERMISOBJECTIVEDEFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermisobjectivedefined_ taotermisobjectivedefined
#endif
PETSC_EXTERN void taotermisobjectivedefined_(TaoTerm *term, PetscBool *is_defined, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(is_defined);
  *ierr = TaoTermIsObjectiveDefined(*term, is_defined);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermisgradientdefined_ TAOTERMISGRADIENTDEFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermisgradientdefined_ taotermisgradientdefined
#endif
PETSC_EXTERN void taotermisgradientdefined_(TaoTerm *term, PetscBool *is_defined, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(is_defined);
  *ierr = TaoTermIsGradientDefined(*term, is_defined);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermisobjectiveandgradientdefined_ TAOTERMISOBJECTIVEANDGRADIENTDEFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermisobjectiveandgradientdefined_ taotermisobjectiveandgradientdefined
#endif
PETSC_EXTERN void taotermisobjectiveandgradientdefined_(TaoTerm *term, PetscBool *is_defined, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(is_defined);
  *ierr = TaoTermIsObjectiveAndGradientDefined(*term, is_defined);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermishessiandefined_ TAOTERMISHESSIANDEFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermishessiandefined_ taotermishessiandefined
#endif
PETSC_EXTERN void taotermishessiandefined_(TaoTerm *term, PetscBool *is_defined, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(is_defined);
  *ierr = TaoTermIsHessianDefined(*term, is_defined);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermiscreatehessianmatricesdefined_ TAOTERMISCREATEHESSIANMATRICESDEFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermiscreatehessianmatricesdefined_ taotermiscreatehessianmatricesdefined
#endif
PETSC_EXTERN void taotermiscreatehessianmatricesdefined_(TaoTerm *term, PetscBool *is_defined, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(is_defined);
  *ierr = TaoTermIsCreateHessianMatricesDefined(*term, is_defined);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetsolutionsizes_ TAOTERMSETSOLUTIONSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetsolutionsizes_ taotermsetsolutionsizes
#endif
PETSC_EXTERN void taotermsetsolutionsizes_(TaoTerm *term, PetscInt *n, PetscInt *M_N, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = TaoTermSetSolutionSizes(*term, *n, *M_N, *bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermgetsolutionsizes_ TAOTERMGETSOLUTIONSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermgetsolutionsizes_ taotermgetsolutionsizes
#endif
PETSC_EXTERN void taotermgetsolutionsizes_(TaoTerm *term, PetscInt *n, PetscInt *M_N, PetscInt *bs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(M_N);
  CHKFORTRANNULLINTEGER(bs);
  *ierr = TaoTermGetSolutionSizes(*term, n, M_N, bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetparameterssizes_ TAOTERMSETPARAMETERSSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetparameterssizes_ taotermsetparameterssizes
#endif
PETSC_EXTERN void taotermsetparameterssizes_(TaoTerm *term, PetscInt *k, PetscInt *M_K, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = TaoTermSetParametersSizes(*term, *k, *M_K, *bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermgetparameterssizes_ TAOTERMGETPARAMETERSSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermgetparameterssizes_ taotermgetparameterssizes
#endif
PETSC_EXTERN void taotermgetparameterssizes_(TaoTerm *term, PetscInt *k, PetscInt *M_K, PetscInt *bs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(k);
  CHKFORTRANNULLINTEGER(M_K);
  CHKFORTRANNULLINTEGER(bs);
  *ierr = TaoTermGetParametersSizes(*term, k, M_K, bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetparameterslayout_ TAOTERMSETPARAMETERSLAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetparameterslayout_ taotermsetparameterslayout
#endif
PETSC_EXTERN void taotermsetparameterslayout_(TaoTerm *term, PetscLayout *parameters_layout, PetscErrorCode *ierr)
{
  *ierr = TaoTermSetParametersLayout(*term, *parameters_layout);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermgetparameterslayout_ TAOTERMGETPARAMETERSLAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermgetparameterslayout_ taotermgetparameterslayout
#endif
PETSC_EXTERN void taotermgetparameterslayout_(TaoTerm *term, PetscLayout *parameters_layout, PetscErrorCode *ierr)
{
  PetscBool null_parameters_layout = !*(void**) parameters_layout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(parameters_layout);
  *ierr = TaoTermGetParametersLayout(*term, parameters_layout);
  if (*ierr) return;
  if (! null_parameters_layout && !*(void**) parameters_layout) *(void **) parameters_layout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetsolutionlayout_ TAOTERMSETSOLUTIONLAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetsolutionlayout_ taotermsetsolutionlayout
#endif
PETSC_EXTERN void taotermsetsolutionlayout_(TaoTerm *term, PetscLayout *solution_layout, PetscErrorCode *ierr)
{
  *ierr = TaoTermSetSolutionLayout(*term, *solution_layout);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermgetsolutionlayout_ TAOTERMGETSOLUTIONLAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermgetsolutionlayout_ taotermgetsolutionlayout
#endif
PETSC_EXTERN void taotermgetsolutionlayout_(TaoTerm *term, PetscLayout *solution_layout, PetscErrorCode *ierr)
{
  PetscBool null_solution_layout = !*(void**) solution_layout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(solution_layout);
  *ierr = TaoTermGetSolutionLayout(*term, solution_layout);
  if (*ierr) return;
  if (! null_solution_layout && !*(void**) solution_layout) *(void **) solution_layout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetsolutiontemplate_ TAOTERMSETSOLUTIONTEMPLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetsolutiontemplate_ taotermsetsolutiontemplate
#endif
PETSC_EXTERN void taotermsetsolutiontemplate_(TaoTerm *term, Vec *sol_template, PetscErrorCode *ierr)
{
  *ierr = TaoTermSetSolutionTemplate(*term, *sol_template);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetparameterstemplate_ TAOTERMSETPARAMETERSTEMPLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetparameterstemplate_ taotermsetparameterstemplate
#endif
PETSC_EXTERN void taotermsetparameterstemplate_(TaoTerm *term, Vec *params_template, PetscErrorCode *ierr)
{
  *ierr = TaoTermSetParametersTemplate(*term, *params_template);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetsolutionvectype_ TAOTERMSETSOLUTIONVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetsolutionvectype_ taotermsetsolutionvectype
#endif
PETSC_EXTERN void taotermsetsolutionvectype_(TaoTerm *term, char *solution_type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_solution_type)
{
  char* c_solution_type;
  FIXCHAR(solution_type, l_solution_type, c_solution_type);
  *ierr = TaoTermSetSolutionVecType(*term, c_solution_type);
  if (*ierr) return;
  FREECHAR(solution_type, c_solution_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetparametersvectype_ TAOTERMSETPARAMETERSVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetparametersvectype_ taotermsetparametersvectype
#endif
PETSC_EXTERN void taotermsetparametersvectype_(TaoTerm *term, char *parameters_type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_parameters_type)
{
  char* c_parameters_type;
  FIXCHAR(parameters_type, l_parameters_type, c_parameters_type);
  *ierr = TaoTermSetParametersVecType(*term, c_parameters_type);
  if (*ierr) return;
  FREECHAR(parameters_type, c_parameters_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermgetsolutionvectype_ TAOTERMGETSOLUTIONVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermgetsolutionvectype_ taotermgetsolutionvectype
#endif
PETSC_EXTERN void taotermgetsolutionvectype_(TaoTerm *term, char *solution_type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_solution_type)
{
  char* c_solution_type = PETSC_NULLPTR;
  *ierr = TaoTermGetSolutionVecType(*term, (const char **)&c_solution_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)solution_type, c_solution_type, l_solution_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, solution_type, l_solution_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermgetparametersvectype_ TAOTERMGETPARAMETERSVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermgetparametersvectype_ taotermgetparametersvectype
#endif
PETSC_EXTERN void taotermgetparametersvectype_(TaoTerm *term, char *parameters_type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_parameters_type)
{
  char* c_parameters_type = PETSC_NULLPTR;
  *ierr = TaoTermGetParametersVecType(*term, (const char **)&c_parameters_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)parameters_type, c_parameters_type, l_parameters_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, parameters_type, l_parameters_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcreatesolutionvec_ TAOTERMCREATESOLUTIONVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcreatesolutionvec_ taotermcreatesolutionvec
#endif
PETSC_EXTERN void taotermcreatesolutionvec_(TaoTerm *term, Vec *solution, PetscErrorCode *ierr)
{
  PetscBool null_solution = !*(void**) solution ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(solution);
  *ierr = TaoTermCreateSolutionVec(*term, solution);
  if (*ierr) return;
  if (! null_solution && !*(void**) solution) *(void **) solution = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcreateparametersvec_ TAOTERMCREATEPARAMETERSVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcreateparametersvec_ taotermcreateparametersvec
#endif
PETSC_EXTERN void taotermcreateparametersvec_(TaoTerm *term, Vec *parameters, PetscErrorCode *ierr)
{
  PetscBool null_parameters = !*(void**) parameters ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(parameters);
  *ierr = TaoTermCreateParametersVec(*term, parameters);
  if (*ierr) return;
  if (! null_parameters && !*(void**) parameters) *(void **) parameters = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcreatehessianmatrices_ TAOTERMCREATEHESSIANMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcreatehessianmatrices_ taotermcreatehessianmatrices
#endif
PETSC_EXTERN void taotermcreatehessianmatrices_(TaoTerm *term, Mat *H, Mat *Hpre, PetscErrorCode *ierr)
{
  PetscBool null_H = !*(void**) H ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_Hpre = !*(void**) Hpre ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(H);
  CHKFORTRANNULLOBJECT(Hpre);
  *ierr = TaoTermCreateHessianMatrices(*term, H, Hpre);
  if (*ierr) return;
  if (! null_H && !*(void**) H) *(void **) H = (void *)-2;
  if (! null_Hpre && !*(void**) Hpre) *(void **) Hpre = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcreatehessianmatricesdefault_ TAOTERMCREATEHESSIANMATRICESDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcreatehessianmatricesdefault_ taotermcreatehessianmatricesdefault
#endif
PETSC_EXTERN void taotermcreatehessianmatricesdefault_(TaoTerm *term, Mat *H, Mat *Hpre, PetscErrorCode *ierr)
{
  PetscBool null_H = !*(void**) H ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_Hpre = !*(void**) Hpre ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(H);
  CHKFORTRANNULLOBJECT(Hpre);
  *ierr = TaoTermCreateHessianMatricesDefault(*term, H, Hpre);
  if (*ierr) return;
  if (! null_H && !*(void**) H) *(void **) H = (void *)-2;
  if (! null_Hpre && !*(void**) Hpre) *(void **) Hpre = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetcreatehessianmode_ TAOTERMSETCREATEHESSIANMODE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetcreatehessianmode_ taotermsetcreatehessianmode
#endif
PETSC_EXTERN void taotermsetcreatehessianmode_(TaoTerm *term, PetscBool *Hpre_is_H, char *H_mattype, char *Hpre_mattype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_H_mattype, PETSC_FORTRAN_CHARLEN_T l_Hpre_mattype)
{
  char* c_H_mattype;
  FIXCHAR(H_mattype, l_H_mattype, c_H_mattype);
  char* c_Hpre_mattype;
  FIXCHAR(Hpre_mattype, l_Hpre_mattype, c_Hpre_mattype);
  *ierr = TaoTermSetCreateHessianMode(*term, *Hpre_is_H ? PETSC_TRUE : PETSC_FALSE, c_H_mattype, c_Hpre_mattype);
  if (*ierr) return;
  FREECHAR(H_mattype, c_H_mattype);
  FREECHAR(Hpre_mattype, c_Hpre_mattype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermgetcreatehessianmode_ TAOTERMGETCREATEHESSIANMODE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermgetcreatehessianmode_ taotermgetcreatehessianmode
#endif
PETSC_EXTERN void taotermgetcreatehessianmode_(TaoTerm *term, PetscBool *Hpre_is_H, char *H_mattype, char *Hpre_mattype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_H_mattype, PETSC_FORTRAN_CHARLEN_T l_Hpre_mattype)
{
  char* c_H_mattype = PETSC_NULLPTR;
  char* c_Hpre_mattype = PETSC_NULLPTR;
  CHKFORTRANNULLBOOL(Hpre_is_H);
  *ierr = TaoTermGetCreateHessianMode(*term, Hpre_is_H, (const char **)&c_H_mattype, (const char **)&c_Hpre_mattype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)H_mattype, c_H_mattype, l_H_mattype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, H_mattype, l_H_mattype);
  *ierr = PetscStrncpy((char *)Hpre_mattype, c_Hpre_mattype, l_Hpre_mattype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, Hpre_mattype, l_Hpre_mattype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermduplicate_ TAOTERMDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermduplicate_ taotermduplicate
#endif
PETSC_EXTERN void taotermduplicate_(TaoTerm *term, TaoTermDuplicateOption *opt, TaoTerm *newterm, PetscErrorCode *ierr)
{
  PetscBool null_newterm = !*(void**) newterm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newterm);
  *ierr = TaoTermDuplicate(*term, *opt, newterm);
  if (*ierr) return;
  if (! null_newterm && !*(void**) newterm) *(void **) newterm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetparametersmode_ TAOTERMSETPARAMETERSMODE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetparametersmode_ taotermsetparametersmode
#endif
PETSC_EXTERN void taotermsetparametersmode_(TaoTerm *term, TaoTermParametersMode *parameters_mode, PetscErrorCode *ierr)
{
  *ierr = TaoTermSetParametersMode(*term, *parameters_mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermgetparametersmode_ TAOTERMGETPARAMETERSMODE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermgetparametersmode_ taotermgetparametersmode
#endif
PETSC_EXTERN void taotermgetparametersmode_(TaoTerm *term, TaoTermParametersMode *parameters_mode, PetscErrorCode *ierr)
{
  *ierr = TaoTermGetParametersMode(*term, parameters_mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermgetfddelta_ TAOTERMGETFDDELTA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermgetfddelta_ taotermgetfddelta
#endif
PETSC_EXTERN void taotermgetfddelta_(TaoTerm *term, PetscReal *delta, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(delta);
  *ierr = TaoTermGetFDDelta(*term, delta);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermsetfddelta_ TAOTERMSETFDDELTA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermsetfddelta_ taotermsetfddelta
#endif
PETSC_EXTERN void taotermsetfddelta_(TaoTerm *term, PetscReal *delta, PetscErrorCode *ierr)
{
  *ierr = TaoTermSetFDDelta(*term, *delta);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputegradientsetusefd_ TAOTERMCOMPUTEGRADIENTSETUSEFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputegradientsetusefd_ taotermcomputegradientsetusefd
#endif
PETSC_EXTERN void taotermcomputegradientsetusefd_(TaoTerm *term, PetscBool *use_fd, PetscErrorCode *ierr)
{
  *ierr = TaoTermComputeGradientSetUseFD(*term, *use_fd ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputegradientgetusefd_ TAOTERMCOMPUTEGRADIENTGETUSEFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputegradientgetusefd_ taotermcomputegradientgetusefd
#endif
PETSC_EXTERN void taotermcomputegradientgetusefd_(TaoTerm *term, PetscBool *use_fd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(use_fd);
  *ierr = TaoTermComputeGradientGetUseFD(*term, use_fd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputehessiansetusefd_ TAOTERMCOMPUTEHESSIANSETUSEFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputehessiansetusefd_ taotermcomputehessiansetusefd
#endif
PETSC_EXTERN void taotermcomputehessiansetusefd_(TaoTerm *term, PetscBool *use_fd, PetscErrorCode *ierr)
{
  *ierr = TaoTermComputeHessianSetUseFD(*term, *use_fd ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaoterm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotermcomputehessiangetusefd_ TAOTERMCOMPUTEHESSIANGETUSEFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotermcomputehessiangetusefd_ taotermcomputehessiangetusefd
#endif
PETSC_EXTERN void taotermcomputehessiangetusefd_(TaoTerm *term, PetscBool *use_fd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(use_fd);
  *ierr = TaoTermComputeHessianGetUseFD(*term, use_fd);
  if (*ierr) return;
}
