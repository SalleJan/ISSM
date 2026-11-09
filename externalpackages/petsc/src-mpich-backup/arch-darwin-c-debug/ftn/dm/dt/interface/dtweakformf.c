#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformcopy_ PETSCWEAKFORMCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformcopy_ petscweakformcopy
#endif
PETSC_EXTERN void petscweakformcopy_(PetscWeakForm *wf, PetscWeakForm *wfNew, PetscErrorCode *ierr)
{
  *ierr = PetscWeakFormCopy(*wf, *wfNew);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformclear_ PETSCWEAKFORMCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformclear_ petscweakformclear
#endif
PETSC_EXTERN void petscweakformclear_(PetscWeakForm *wf, PetscErrorCode *ierr)
{
  *ierr = PetscWeakFormClear(*wf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformrewritekeys_ PETSCWEAKFORMREWRITEKEYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformrewritekeys_ petscweakformrewritekeys
#endif
PETSC_EXTERN void petscweakformrewritekeys_(PetscWeakForm *wf, DMLabel *label, PetscInt *Nv, const PetscInt values[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(values);
  *ierr = PetscWeakFormRewriteKeys(*wf, *label, *Nv, values);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformreplacelabel_ PETSCWEAKFORMREPLACELABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformreplacelabel_ petscweakformreplacelabel
#endif
PETSC_EXTERN void petscweakformreplacelabel_(PetscWeakForm *wf, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = PetscWeakFormReplaceLabel(*wf, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformclearindex_ PETSCWEAKFORMCLEARINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformclearindex_ petscweakformclearindex
#endif
PETSC_EXTERN void petscweakformclearindex_(PetscWeakForm *wf, DMLabel *label, PetscInt *val, PetscInt *f, PetscInt *part, PetscWeakFormKind *kind, PetscInt *ind, PetscErrorCode *ierr)
{
  *ierr = PetscWeakFormClearIndex(*wf, *label, *val, *f, *part, *kind, *ind);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformhasjacobian_ PETSCWEAKFORMHASJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformhasjacobian_ petscweakformhasjacobian
#endif
PETSC_EXTERN void petscweakformhasjacobian_(PetscWeakForm *wf, PetscBool *hasJac, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasJac);
  *ierr = PetscWeakFormHasJacobian(*wf, hasJac);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformhasjacobianpreconditioner_ PETSCWEAKFORMHASJACOBIANPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformhasjacobianpreconditioner_ petscweakformhasjacobianpreconditioner
#endif
PETSC_EXTERN void petscweakformhasjacobianpreconditioner_(PetscWeakForm *wf, PetscBool *hasJacPre, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasJacPre);
  *ierr = PetscWeakFormHasJacobianPreconditioner(*wf, hasJacPre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformhasbdjacobian_ PETSCWEAKFORMHASBDJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformhasbdjacobian_ petscweakformhasbdjacobian
#endif
PETSC_EXTERN void petscweakformhasbdjacobian_(PetscWeakForm *wf, PetscBool *hasJac, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasJac);
  *ierr = PetscWeakFormHasBdJacobian(*wf, hasJac);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformhasbdjacobianpreconditioner_ PETSCWEAKFORMHASBDJACOBIANPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformhasbdjacobianpreconditioner_ petscweakformhasbdjacobianpreconditioner
#endif
PETSC_EXTERN void petscweakformhasbdjacobianpreconditioner_(PetscWeakForm *wf, PetscBool *hasJacPre, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasJacPre);
  *ierr = PetscWeakFormHasBdJacobianPreconditioner(*wf, hasJacPre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformhasdynamicjacobian_ PETSCWEAKFORMHASDYNAMICJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformhasdynamicjacobian_ petscweakformhasdynamicjacobian
#endif
PETSC_EXTERN void petscweakformhasdynamicjacobian_(PetscWeakForm *wf, PetscBool *hasDynJac, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasDynJac);
  *ierr = PetscWeakFormHasDynamicJacobian(*wf, hasDynJac);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformgetnumfields_ PETSCWEAKFORMGETNUMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformgetnumfields_ petscweakformgetnumfields
#endif
PETSC_EXTERN void petscweakformgetnumfields_(PetscWeakForm *wf, PetscInt *Nf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Nf);
  *ierr = PetscWeakFormGetNumFields(*wf, Nf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformsetnumfields_ PETSCWEAKFORMSETNUMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformsetnumfields_ petscweakformsetnumfields
#endif
PETSC_EXTERN void petscweakformsetnumfields_(PetscWeakForm *wf, PetscInt *Nf, PetscErrorCode *ierr)
{
  *ierr = PetscWeakFormSetNumFields(*wf, *Nf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformdestroy_ PETSCWEAKFORMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformdestroy_ petscweakformdestroy
#endif
PETSC_EXTERN void petscweakformdestroy_(PetscWeakForm *wf, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(wf);
  PetscBool null_wf = !*(void**) wf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(wf);
  *ierr = PetscWeakFormDestroy(wf);
  if (*ierr) return;
  if (! null_wf && !*(void**) wf) *(void **) wf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformview_ PETSCWEAKFORMVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformview_ petscweakformview
#endif
PETSC_EXTERN void petscweakformview_(PetscWeakForm *wf, PetscViewer *v, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscWeakFormView(*wf, v_v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscweakformcreate_ PETSCWEAKFORMCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscweakformcreate_ petscweakformcreate
#endif
PETSC_EXTERN void petscweakformcreate_(MPI_Fint *comm, PetscWeakForm *wf, PetscErrorCode *ierr)
{
  PetscBool null_wf = !*(void**) wf ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(wf);
  CHKFORTRANNULLOBJECT(wf);
  *ierr = PetscWeakFormCreate(MPI_Comm_f2c(*(comm)), wf);
  if (*ierr) return;
  if (! null_wf && !*(void**) wf) *(void **) wf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscformkeysort_ PETSCFORMKEYSORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscformkeysort_ petscformkeysort
#endif
PETSC_EXTERN void petscformkeysort_(PetscInt *n, PetscFormKey arr[], PetscErrorCode *ierr)
{
  *ierr = PetscFormKeySort(*n, arr);
  if (*ierr) return;
}
