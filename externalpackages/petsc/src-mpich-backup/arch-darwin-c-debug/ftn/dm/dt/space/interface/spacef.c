#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesettype_ PETSCSPACESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesettype_ petscspacesettype
#endif
PETSC_EXTERN void petscspacesettype_(PetscSpace *sp, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscSpaceSetType(*sp, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacegettype_ PETSCSPACEGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacegettype_ petscspacegettype
#endif
PETSC_EXTERN void petscspacegettype_(PetscSpace *sp, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscSpaceGetType(*sp, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspaceviewfromoptions_ PETSCSPACEVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspaceviewfromoptions_ petscspaceviewfromoptions
#endif
PETSC_EXTERN void petscspaceviewfromoptions_(PetscSpace *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscSpaceViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspaceview_ PETSCSPACEVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspaceview_ petscspaceview
#endif
PETSC_EXTERN void petscspaceview_(PetscSpace *sp, PetscViewer *v, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscSpaceView(*sp, v_v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesetfromoptions_ PETSCSPACESETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesetfromoptions_ petscspacesetfromoptions
#endif
PETSC_EXTERN void petscspacesetfromoptions_(PetscSpace *sp, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceSetFromOptions(*sp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesetup_ PETSCSPACESETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesetup_ petscspacesetup
#endif
PETSC_EXTERN void petscspacesetup_(PetscSpace *sp, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceSetUp(*sp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacedestroy_ PETSCSPACEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacedestroy_ petscspacedestroy
#endif
PETSC_EXTERN void petscspacedestroy_(PetscSpace *sp, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(sp);
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sp);
  *ierr = PetscSpaceDestroy(sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacecreate_ PETSCSPACECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacecreate_ petscspacecreate
#endif
PETSC_EXTERN void petscspacecreate_(MPI_Fint *comm, PetscSpace *sp, PetscErrorCode *ierr)
{
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(sp);
  CHKFORTRANNULLOBJECT(sp);
  *ierr = PetscSpaceCreate(MPI_Comm_f2c(*(comm)), sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacegetdimension_ PETSCSPACEGETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacegetdimension_ petscspacegetdimension
#endif
PETSC_EXTERN void petscspacegetdimension_(PetscSpace *sp, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = PetscSpaceGetDimension(*sp, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacegetdegree_ PETSCSPACEGETDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacegetdegree_ petscspacegetdegree
#endif
PETSC_EXTERN void petscspacegetdegree_(PetscSpace *sp, PetscInt *minDegree, PetscInt *maxDegree, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(minDegree);
  CHKFORTRANNULLINTEGER(maxDegree);
  *ierr = PetscSpaceGetDegree(*sp, minDegree, maxDegree);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesetdegree_ PETSCSPACESETDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesetdegree_ petscspacesetdegree
#endif
PETSC_EXTERN void petscspacesetdegree_(PetscSpace *sp, PetscInt *degree, PetscInt *maxDegree, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceSetDegree(*sp, *degree, *maxDegree);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacegetnumcomponents_ PETSCSPACEGETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacegetnumcomponents_ petscspacegetnumcomponents
#endif
PETSC_EXTERN void petscspacegetnumcomponents_(PetscSpace *sp, PetscInt *Nc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Nc);
  *ierr = PetscSpaceGetNumComponents(*sp, Nc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesetnumcomponents_ PETSCSPACESETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesetnumcomponents_ petscspacesetnumcomponents
#endif
PETSC_EXTERN void petscspacesetnumcomponents_(PetscSpace *sp, PetscInt *Nc, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceSetNumComponents(*sp, *Nc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacesetnumvariables_ PETSCSPACESETNUMVARIABLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacesetnumvariables_ petscspacesetnumvariables
#endif
PETSC_EXTERN void petscspacesetnumvariables_(PetscSpace *sp, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceSetNumVariables(*sp, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacegetnumvariables_ PETSCSPACEGETNUMVARIABLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacegetnumvariables_ petscspacegetnumvariables
#endif
PETSC_EXTERN void petscspacegetnumvariables_(PetscSpace *sp, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  *ierr = PetscSpaceGetNumVariables(*sp, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspaceevaluate_ PETSCSPACEEVALUATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspaceevaluate_ petscspaceevaluate
#endif
PETSC_EXTERN void petscspaceevaluate_(PetscSpace *sp, PetscInt *npoints, const PetscReal points[], PetscReal B[], PetscReal D[], PetscReal H[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(points);
  CHKFORTRANNULLREAL(B);
  CHKFORTRANNULLREAL(D);
  CHKFORTRANNULLREAL(H);
  *ierr = PetscSpaceEvaluate(*sp, *npoints, points, B, D, H);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacegetheightsubspace_ PETSCSPACEGETHEIGHTSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacegetheightsubspace_ petscspacegetheightsubspace
#endif
PETSC_EXTERN void petscspacegetheightsubspace_(PetscSpace *sp, PetscInt *height, PetscSpace *subsp, PetscErrorCode *ierr)
{
  PetscBool null_subsp = !*(void**) subsp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subsp);
  *ierr = PetscSpaceGetHeightSubspace(*sp, *height, subsp);
  if (*ierr) return;
  if (! null_subsp && !*(void**) subsp) *(void **) subsp = (void *)-2;
}
