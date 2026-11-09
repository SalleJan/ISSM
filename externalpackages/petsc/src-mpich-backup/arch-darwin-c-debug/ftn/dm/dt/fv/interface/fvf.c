#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclimitersettype_ PETSCLIMITERSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclimitersettype_ petsclimitersettype
#endif
PETSC_EXTERN void petsclimitersettype_(PetscLimiter *lim, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLimiterSetType(*lim, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclimitergettype_ PETSCLIMITERGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclimitergettype_ petsclimitergettype
#endif
PETSC_EXTERN void petsclimitergettype_(PetscLimiter *lim, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscLimiterGetType(*lim, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclimiterviewfromoptions_ PETSCLIMITERVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclimiterviewfromoptions_ petsclimiterviewfromoptions
#endif
PETSC_EXTERN void petsclimiterviewfromoptions_(PetscLimiter *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLimiterViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclimiterview_ PETSCLIMITERVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclimiterview_ petsclimiterview
#endif
PETSC_EXTERN void petsclimiterview_(PetscLimiter *lim, PetscViewer *v, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscLimiterView(*lim, v_v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclimitersetfromoptions_ PETSCLIMITERSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclimitersetfromoptions_ petsclimitersetfromoptions
#endif
PETSC_EXTERN void petsclimitersetfromoptions_(PetscLimiter *lim, PetscErrorCode *ierr)
{
  *ierr = PetscLimiterSetFromOptions(*lim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclimitersetup_ PETSCLIMITERSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclimitersetup_ petsclimitersetup
#endif
PETSC_EXTERN void petsclimitersetup_(PetscLimiter *lim, PetscErrorCode *ierr)
{
  *ierr = PetscLimiterSetUp(*lim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclimiterdestroy_ PETSCLIMITERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclimiterdestroy_ petsclimiterdestroy
#endif
PETSC_EXTERN void petsclimiterdestroy_(PetscLimiter *lim, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(lim);
  PetscBool null_lim = !*(void**) lim ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(lim);
  *ierr = PetscLimiterDestroy(lim);
  if (*ierr) return;
  if (! null_lim && !*(void**) lim) *(void **) lim = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclimitercreate_ PETSCLIMITERCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclimitercreate_ petsclimitercreate
#endif
PETSC_EXTERN void petsclimitercreate_(MPI_Fint *comm, PetscLimiter *lim, PetscErrorCode *ierr)
{
  PetscBool null_lim = !*(void**) lim ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(lim);
  CHKFORTRANNULLOBJECT(lim);
  *ierr = PetscLimiterCreate(MPI_Comm_f2c(*(comm)), lim);
  if (*ierr) return;
  if (! null_lim && !*(void**) lim) *(void **) lim = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclimiterlimit_ PETSCLIMITERLIMIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclimiterlimit_ petsclimiterlimit
#endif
PETSC_EXTERN void petsclimiterlimit_(PetscLimiter *lim, PetscReal *flim, PetscReal *phi, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(phi);
  *ierr = PetscLimiterLimit(*lim, *flim, phi);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvsettype_ PETSCFVSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvsettype_ petscfvsettype
#endif
PETSC_EXTERN void petscfvsettype_(PetscFV *fvm, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscFVSetType(*fvm, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvgettype_ PETSCFVGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvgettype_ petscfvgettype
#endif
PETSC_EXTERN void petscfvgettype_(PetscFV *fvm, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscFVGetType(*fvm, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvviewfromoptions_ PETSCFVVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvviewfromoptions_ petscfvviewfromoptions
#endif
PETSC_EXTERN void petscfvviewfromoptions_(PetscFV *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscFVViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvview_ PETSCFVVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvview_ petscfvview
#endif
PETSC_EXTERN void petscfvview_(PetscFV *fvm, PetscViewer *v, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscFVView(*fvm, v_v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvsetfromoptions_ PETSCFVSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvsetfromoptions_ petscfvsetfromoptions
#endif
PETSC_EXTERN void petscfvsetfromoptions_(PetscFV *fvm, PetscErrorCode *ierr)
{
  *ierr = PetscFVSetFromOptions(*fvm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvsetup_ PETSCFVSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvsetup_ petscfvsetup
#endif
PETSC_EXTERN void petscfvsetup_(PetscFV *fvm, PetscErrorCode *ierr)
{
  *ierr = PetscFVSetUp(*fvm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvdestroy_ PETSCFVDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvdestroy_ petscfvdestroy
#endif
PETSC_EXTERN void petscfvdestroy_(PetscFV *fvm, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(fvm);
  PetscBool null_fvm = !*(void**) fvm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fvm);
  *ierr = PetscFVDestroy(fvm);
  if (*ierr) return;
  if (! null_fvm && !*(void**) fvm) *(void **) fvm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvcreate_ PETSCFVCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvcreate_ petscfvcreate
#endif
PETSC_EXTERN void petscfvcreate_(MPI_Fint *comm, PetscFV *fvm, PetscErrorCode *ierr)
{
  PetscBool null_fvm = !*(void**) fvm ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(fvm);
  CHKFORTRANNULLOBJECT(fvm);
  *ierr = PetscFVCreate(MPI_Comm_f2c(*(comm)), fvm);
  if (*ierr) return;
  if (! null_fvm && !*(void**) fvm) *(void **) fvm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvsetlimiter_ PETSCFVSETLIMITER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvsetlimiter_ petscfvsetlimiter
#endif
PETSC_EXTERN void petscfvsetlimiter_(PetscFV *fvm, PetscLimiter *lim, PetscErrorCode *ierr)
{
  *ierr = PetscFVSetLimiter(*fvm, *lim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvgetlimiter_ PETSCFVGETLIMITER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvgetlimiter_ petscfvgetlimiter
#endif
PETSC_EXTERN void petscfvgetlimiter_(PetscFV *fvm, PetscLimiter *lim, PetscErrorCode *ierr)
{
  PetscBool null_lim = !*(void**) lim ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(lim);
  *ierr = PetscFVGetLimiter(*fvm, lim);
  if (*ierr) return;
  if (! null_lim && !*(void**) lim) *(void **) lim = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvsetnumcomponents_ PETSCFVSETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvsetnumcomponents_ petscfvsetnumcomponents
#endif
PETSC_EXTERN void petscfvsetnumcomponents_(PetscFV *fvm, PetscInt *comp, PetscErrorCode *ierr)
{
  *ierr = PetscFVSetNumComponents(*fvm, *comp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvgetnumcomponents_ PETSCFVGETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvgetnumcomponents_ petscfvgetnumcomponents
#endif
PETSC_EXTERN void petscfvgetnumcomponents_(PetscFV *fvm, PetscInt *comp, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(comp);
  *ierr = PetscFVGetNumComponents(*fvm, comp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvsetcomponentname_ PETSCFVSETCOMPONENTNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvsetcomponentname_ petscfvsetcomponentname
#endif
PETSC_EXTERN void petscfvsetcomponentname_(PetscFV *fvm, PetscInt *comp, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscFVSetComponentName(*fvm, *comp, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvgetcomponentname_ PETSCFVGETCOMPONENTNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvgetcomponentname_ petscfvgetcomponentname
#endif
PETSC_EXTERN void petscfvgetcomponentname_(PetscFV *fvm, PetscInt *comp, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscFVGetComponentName(*fvm, *comp, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvsetspatialdimension_ PETSCFVSETSPATIALDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvsetspatialdimension_ petscfvsetspatialdimension
#endif
PETSC_EXTERN void petscfvsetspatialdimension_(PetscFV *fvm, PetscInt *dim, PetscErrorCode *ierr)
{
  *ierr = PetscFVSetSpatialDimension(*fvm, *dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvgetspatialdimension_ PETSCFVGETSPATIALDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvgetspatialdimension_ petscfvgetspatialdimension
#endif
PETSC_EXTERN void petscfvgetspatialdimension_(PetscFV *fvm, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = PetscFVGetSpatialDimension(*fvm, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvsetcomputegradients_ PETSCFVSETCOMPUTEGRADIENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvsetcomputegradients_ petscfvsetcomputegradients
#endif
PETSC_EXTERN void petscfvsetcomputegradients_(PetscFV *fvm, PetscBool *computeGradients, PetscErrorCode *ierr)
{
  *ierr = PetscFVSetComputeGradients(*fvm, *computeGradients ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvgetcomputegradients_ PETSCFVGETCOMPUTEGRADIENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvgetcomputegradients_ petscfvgetcomputegradients
#endif
PETSC_EXTERN void petscfvgetcomputegradients_(PetscFV *fvm, PetscBool *computeGradients, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(computeGradients);
  *ierr = PetscFVGetComputeGradients(*fvm, computeGradients);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvsetquadrature_ PETSCFVSETQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvsetquadrature_ petscfvsetquadrature
#endif
PETSC_EXTERN void petscfvsetquadrature_(PetscFV *fvm, PetscQuadrature *q, PetscErrorCode *ierr)
{
  *ierr = PetscFVSetQuadrature(*fvm, *q);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvgetquadrature_ PETSCFVGETQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvgetquadrature_ petscfvgetquadrature
#endif
PETSC_EXTERN void petscfvgetquadrature_(PetscFV *fvm, PetscQuadrature *q, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscFVGetQuadrature(*fvm, q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvcreatedualspace_ PETSCFVCREATEDUALSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvcreatedualspace_ petscfvcreatedualspace
#endif
PETSC_EXTERN void petscfvcreatedualspace_(PetscFV *fvm, DMPolytopeType *ct, PetscErrorCode *ierr)
{
  *ierr = PetscFVCreateDualSpace(*fvm, *ct);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvgetdualspace_ PETSCFVGETDUALSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvgetdualspace_ petscfvgetdualspace
#endif
PETSC_EXTERN void petscfvgetdualspace_(PetscFV *fvm, PetscDualSpace *sp, PetscErrorCode *ierr)
{
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sp);
  *ierr = PetscFVGetDualSpace(*fvm, sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvsetdualspace_ PETSCFVSETDUALSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvsetdualspace_ petscfvsetdualspace
#endif
PETSC_EXTERN void petscfvsetdualspace_(PetscFV *fvm, PetscDualSpace *sp, PetscErrorCode *ierr)
{
  *ierr = PetscFVSetDualSpace(*fvm, *sp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvgetcelltabulation_ PETSCFVGETCELLTABULATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvgetcelltabulation_ petscfvgetcelltabulation
#endif
PETSC_EXTERN void petscfvgetcelltabulation_(PetscFV *fvm, PetscTabulation *T, PetscErrorCode *ierr)
{
  PetscBool null_T = !*(void**) T ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(T);
  *ierr = PetscFVGetCellTabulation(*fvm, T);
  if (*ierr) return;
  if (! null_T && !*(void**) T) *(void **) T = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvcreatetabulation_ PETSCFVCREATETABULATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvcreatetabulation_ petscfvcreatetabulation
#endif
PETSC_EXTERN void petscfvcreatetabulation_(PetscFV *fvm, PetscInt *nrepl, PetscInt *npoints, const PetscReal points[], PetscInt *K, PetscTabulation *T, PetscErrorCode *ierr)
{
  PetscBool null_T = !*(void**) T ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(points);
  CHKFORTRANNULLOBJECT(T);
  *ierr = PetscFVCreateTabulation(*fvm, *nrepl, *npoints, points, *K, T);
  if (*ierr) return;
  if (! null_T && !*(void**) T) *(void **) T = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvcomputegradient_ PETSCFVCOMPUTEGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvcomputegradient_ petscfvcomputegradient
#endif
PETSC_EXTERN void petscfvcomputegradient_(PetscFV *fvm, PetscInt *numFaces, PetscScalar dx[], PetscScalar grad[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(dx);
  CHKFORTRANNULLSCALAR(grad);
  *ierr = PetscFVComputeGradient(*fvm, *numFaces, dx, grad);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvintegraterhsfunction_ PETSCFVINTEGRATERHSFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvintegraterhsfunction_ petscfvintegraterhsfunction
#endif
PETSC_EXTERN void petscfvintegraterhsfunction_(PetscFV *fvm, PetscDS *prob, PetscInt *field, PetscInt *Nf, PetscFVFaceGeom **fgeom, PetscReal *neighborVol, PetscScalar uL[], PetscScalar uR[], PetscScalar fluxL[], PetscScalar fluxR[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(neighborVol);
  CHKFORTRANNULLSCALAR(uL);
  CHKFORTRANNULLSCALAR(uR);
  CHKFORTRANNULLSCALAR(fluxL);
  CHKFORTRANNULLSCALAR(fluxR);
  *ierr = PetscFVIntegrateRHSFunction(*fvm, *prob, *field, *Nf, *fgeom, neighborVol, uL, uR, fluxL, fluxR);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvclone_ PETSCFVCLONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvclone_ petscfvclone
#endif
PETSC_EXTERN void petscfvclone_(PetscFV *fv, PetscFV *fvNew, PetscErrorCode *ierr)
{
  PetscBool null_fvNew = !*(void**) fvNew ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fvNew);
  *ierr = PetscFVClone(*fv, fvNew);
  if (*ierr) return;
  if (! null_fvNew && !*(void**) fvNew) *(void **) fvNew = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvrefine_ PETSCFVREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvrefine_ petscfvrefine
#endif
PETSC_EXTERN void petscfvrefine_(PetscFV *fv, PetscFV *fvRef, PetscErrorCode *ierr)
{
  PetscBool null_fvRef = !*(void**) fvRef ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fvRef);
  *ierr = PetscFVRefine(*fv, fvRef);
  if (*ierr) return;
  if (! null_fvRef && !*(void**) fvRef) *(void **) fvRef = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvleastsquaressetmaxfaces_ PETSCFVLEASTSQUARESSETMAXFACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvleastsquaressetmaxfaces_ petscfvleastsquaressetmaxfaces
#endif
PETSC_EXTERN void petscfvleastsquaressetmaxfaces_(PetscFV *fvm, PetscInt *maxFaces, PetscErrorCode *ierr)
{
  *ierr = PetscFVLeastSquaresSetMaxFaces(*fvm, *maxFaces);
  if (*ierr) return;
}
