#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesettype_ PETSCDUALSPACESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesettype_ petscdualspacesettype
#endif
PETSC_EXTERN void petscdualspacesettype_(PetscDualSpace *sp, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscDualSpaceSetType(*sp, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegettype_ PETSCDUALSPACEGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegettype_ petscdualspacegettype
#endif
PETSC_EXTERN void petscdualspacegettype_(PetscDualSpace *sp, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscDualSpaceGetType(*sp, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspaceviewfromoptions_ PETSCDUALSPACEVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspaceviewfromoptions_ petscdualspaceviewfromoptions
#endif
PETSC_EXTERN void petscdualspaceviewfromoptions_(PetscDualSpace *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscDualSpaceViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspaceview_ PETSCDUALSPACEVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspaceview_ petscdualspaceview
#endif
PETSC_EXTERN void petscdualspaceview_(PetscDualSpace *sp, PetscViewer *v, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscDualSpaceView(*sp, v_v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesetfromoptions_ PETSCDUALSPACESETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesetfromoptions_ petscdualspacesetfromoptions
#endif
PETSC_EXTERN void petscdualspacesetfromoptions_(PetscDualSpace *sp, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSetFromOptions(*sp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesetup_ PETSCDUALSPACESETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesetup_ petscdualspacesetup
#endif
PETSC_EXTERN void petscdualspacesetup_(PetscDualSpace *sp, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSetUp(*sp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacedestroy_ PETSCDUALSPACEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacedestroy_ petscdualspacedestroy
#endif
PETSC_EXTERN void petscdualspacedestroy_(PetscDualSpace *sp, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(sp);
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sp);
  *ierr = PetscDualSpaceDestroy(sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacecreate_ PETSCDUALSPACECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacecreate_ petscdualspacecreate
#endif
PETSC_EXTERN void petscdualspacecreate_(MPI_Fint *comm, PetscDualSpace *sp, PetscErrorCode *ierr)
{
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(sp);
  CHKFORTRANNULLOBJECT(sp);
  *ierr = PetscDualSpaceCreate(MPI_Comm_f2c(*(comm)), sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspaceduplicate_ PETSCDUALSPACEDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspaceduplicate_ petscdualspaceduplicate
#endif
PETSC_EXTERN void petscdualspaceduplicate_(PetscDualSpace *sp, PetscDualSpace *spNew, PetscErrorCode *ierr)
{
  PetscBool null_spNew = !*(void**) spNew ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(spNew);
  *ierr = PetscDualSpaceDuplicate(*sp, spNew);
  if (*ierr) return;
  if (! null_spNew && !*(void**) spNew) *(void **) spNew = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetdm_ PETSCDUALSPACEGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetdm_ petscdualspacegetdm
#endif
PETSC_EXTERN void petscdualspacegetdm_(PetscDualSpace *sp, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = PetscDualSpaceGetDM(*sp, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesetdm_ PETSCDUALSPACESETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesetdm_ petscdualspacesetdm
#endif
PETSC_EXTERN void petscdualspacesetdm_(PetscDualSpace *sp, DM *dm, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSetDM(*sp, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetorder_ PETSCDUALSPACEGETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetorder_ petscdualspacegetorder
#endif
PETSC_EXTERN void petscdualspacegetorder_(PetscDualSpace *sp, PetscInt *order, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(order);
  *ierr = PetscDualSpaceGetOrder(*sp, order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesetorder_ PETSCDUALSPACESETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesetorder_ petscdualspacesetorder
#endif
PETSC_EXTERN void petscdualspacesetorder_(PetscDualSpace *sp, PetscInt *order, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSetOrder(*sp, *order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetnumcomponents_ PETSCDUALSPACEGETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetnumcomponents_ petscdualspacegetnumcomponents
#endif
PETSC_EXTERN void petscdualspacegetnumcomponents_(PetscDualSpace *sp, PetscInt *Nc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Nc);
  *ierr = PetscDualSpaceGetNumComponents(*sp, Nc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesetnumcomponents_ PETSCDUALSPACESETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesetnumcomponents_ petscdualspacesetnumcomponents
#endif
PETSC_EXTERN void petscdualspacesetnumcomponents_(PetscDualSpace *sp, PetscInt *Nc, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSetNumComponents(*sp, *Nc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetfunctional_ PETSCDUALSPACEGETFUNCTIONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetfunctional_ petscdualspacegetfunctional
#endif
PETSC_EXTERN void petscdualspacegetfunctional_(PetscDualSpace *sp, PetscInt *i, PetscQuadrature *functional, PetscErrorCode *ierr)
{
  PetscBool null_functional = !*(void**) functional ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(functional);
  *ierr = PetscDualSpaceGetFunctional(*sp, *i, functional);
  if (*ierr) return;
  if (! null_functional && !*(void**) functional) *(void **) functional = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetdimension_ PETSCDUALSPACEGETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetdimension_ petscdualspacegetdimension
#endif
PETSC_EXTERN void petscdualspacegetdimension_(PetscDualSpace *sp, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = PetscDualSpaceGetDimension(*sp, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetinteriordimension_ PETSCDUALSPACEGETINTERIORDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetinteriordimension_ petscdualspacegetinteriordimension
#endif
PETSC_EXTERN void petscdualspacegetinteriordimension_(PetscDualSpace *sp, PetscInt *intdim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(intdim);
  *ierr = PetscDualSpaceGetInteriorDimension(*sp, intdim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetuniform_ PETSCDUALSPACEGETUNIFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetuniform_ petscdualspacegetuniform
#endif
PETSC_EXTERN void petscdualspacegetuniform_(PetscDualSpace *sp, PetscBool *uniform, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(uniform);
  *ierr = PetscDualSpaceGetUniform(*sp, uniform);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetsection_ PETSCDUALSPACEGETSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetsection_ petscdualspacegetsection
#endif
PETSC_EXTERN void petscdualspacegetsection_(PetscDualSpace *sp, PetscSection *section, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(section);
  *ierr = PetscDualSpaceGetSection(*sp, section);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetinteriorsection_ PETSCDUALSPACEGETINTERIORSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetinteriorsection_ petscdualspacegetinteriorsection
#endif
PETSC_EXTERN void petscdualspacegetinteriorsection_(PetscDualSpace *sp, PetscSection *section, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(section);
  *ierr = PetscDualSpaceGetInteriorSection(*sp, section);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspaceapplyall_ PETSCDUALSPACEAPPLYALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspaceapplyall_ petscdualspaceapplyall
#endif
PETSC_EXTERN void petscdualspaceapplyall_(PetscDualSpace *sp, const PetscScalar *pointEval, PetscScalar *spValue, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(pointEval);
  CHKFORTRANNULLSCALAR(spValue);
  *ierr = PetscDualSpaceApplyAll(*sp, pointEval, spValue);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspaceapplyinterior_ PETSCDUALSPACEAPPLYINTERIOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspaceapplyinterior_ petscdualspaceapplyinterior
#endif
PETSC_EXTERN void petscdualspaceapplyinterior_(PetscDualSpace *sp, const PetscScalar *pointEval, PetscScalar *spValue, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(pointEval);
  CHKFORTRANNULLSCALAR(spValue);
  *ierr = PetscDualSpaceApplyInterior(*sp, pointEval, spValue);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspaceapplyalldefault_ PETSCDUALSPACEAPPLYALLDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspaceapplyalldefault_ petscdualspaceapplyalldefault
#endif
PETSC_EXTERN void petscdualspaceapplyalldefault_(PetscDualSpace *sp, const PetscScalar *pointEval, PetscScalar *spValue, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(pointEval);
  CHKFORTRANNULLSCALAR(spValue);
  *ierr = PetscDualSpaceApplyAllDefault(*sp, pointEval, spValue);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspaceapplyinteriordefault_ PETSCDUALSPACEAPPLYINTERIORDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspaceapplyinteriordefault_ petscdualspaceapplyinteriordefault
#endif
PETSC_EXTERN void petscdualspaceapplyinteriordefault_(PetscDualSpace *sp, const PetscScalar *pointEval, PetscScalar *spValue, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(pointEval);
  CHKFORTRANNULLSCALAR(spValue);
  *ierr = PetscDualSpaceApplyInteriorDefault(*sp, pointEval, spValue);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetalldata_ PETSCDUALSPACEGETALLDATA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetalldata_ petscdualspacegetalldata
#endif
PETSC_EXTERN void petscdualspacegetalldata_(PetscDualSpace *sp, PetscQuadrature *allNodes, Mat *allMat, PetscErrorCode *ierr)
{
  PetscBool null_allNodes = !*(void**) allNodes ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_allMat = !*(void**) allMat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(allNodes);
  CHKFORTRANNULLOBJECT(allMat);
  *ierr = PetscDualSpaceGetAllData(*sp, allNodes, allMat);
  if (*ierr) return;
  if (! null_allNodes && !*(void**) allNodes) *(void **) allNodes = (void *)-2;
  if (! null_allMat && !*(void**) allMat) *(void **) allMat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacecreatealldatadefault_ PETSCDUALSPACECREATEALLDATADEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacecreatealldatadefault_ petscdualspacecreatealldatadefault
#endif
PETSC_EXTERN void petscdualspacecreatealldatadefault_(PetscDualSpace *sp, PetscQuadrature *allNodes, Mat *allMat, PetscErrorCode *ierr)
{
  PetscBool null_allNodes = !*(void**) allNodes ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_allMat = !*(void**) allMat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(allNodes);
  CHKFORTRANNULLOBJECT(allMat);
  *ierr = PetscDualSpaceCreateAllDataDefault(*sp, allNodes, allMat);
  if (*ierr) return;
  if (! null_allNodes && !*(void**) allNodes) *(void **) allNodes = (void *)-2;
  if (! null_allMat && !*(void**) allMat) *(void **) allMat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetinteriordata_ PETSCDUALSPACEGETINTERIORDATA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetinteriordata_ petscdualspacegetinteriordata
#endif
PETSC_EXTERN void petscdualspacegetinteriordata_(PetscDualSpace *sp, PetscQuadrature *intNodes, Mat *intMat, PetscErrorCode *ierr)
{
  PetscBool null_intNodes = !*(void**) intNodes ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_intMat = !*(void**) intMat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(intNodes);
  CHKFORTRANNULLOBJECT(intMat);
  *ierr = PetscDualSpaceGetInteriorData(*sp, intNodes, intMat);
  if (*ierr) return;
  if (! null_intNodes && !*(void**) intNodes) *(void **) intNodes = (void *)-2;
  if (! null_intMat && !*(void**) intMat) *(void **) intMat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacecreateinteriordatadefault_ PETSCDUALSPACECREATEINTERIORDATADEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacecreateinteriordatadefault_ petscdualspacecreateinteriordatadefault
#endif
PETSC_EXTERN void petscdualspacecreateinteriordatadefault_(PetscDualSpace *sp, PetscQuadrature *intNodes, Mat *intMat, PetscErrorCode *ierr)
{
  PetscBool null_intNodes = !*(void**) intNodes ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_intMat = !*(void**) intMat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(intNodes);
  CHKFORTRANNULLOBJECT(intMat);
  *ierr = PetscDualSpaceCreateInteriorDataDefault(*sp, intNodes, intMat);
  if (*ierr) return;
  if (! null_intNodes && !*(void**) intNodes) *(void **) intNodes = (void *)-2;
  if (! null_intMat && !*(void**) intMat) *(void **) intMat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspaceequal_ PETSCDUALSPACEEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspaceequal_ petscdualspaceequal
#endif
PETSC_EXTERN void petscdualspaceequal_(PetscDualSpace *A, PetscDualSpace *B, PetscBool *equal, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(equal);
  *ierr = PetscDualSpaceEqual(*A, *B, equal);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetheightsubspace_ PETSCDUALSPACEGETHEIGHTSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetheightsubspace_ petscdualspacegetheightsubspace
#endif
PETSC_EXTERN void petscdualspacegetheightsubspace_(PetscDualSpace *sp, PetscInt *height, PetscDualSpace *subsp, PetscErrorCode *ierr)
{
  PetscBool null_subsp = !*(void**) subsp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subsp);
  *ierr = PetscDualSpaceGetHeightSubspace(*sp, *height, subsp);
  if (*ierr) return;
  if (! null_subsp && !*(void**) subsp) *(void **) subsp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetpointsubspace_ PETSCDUALSPACEGETPOINTSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetpointsubspace_ petscdualspacegetpointsubspace
#endif
PETSC_EXTERN void petscdualspacegetpointsubspace_(PetscDualSpace *sp, PetscInt *point, PetscDualSpace *bdsp, PetscErrorCode *ierr)
{
  PetscBool null_bdsp = !*(void**) bdsp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(bdsp);
  *ierr = PetscDualSpaceGetPointSubspace(*sp, *point, bdsp);
  if (*ierr) return;
  if (! null_bdsp && !*(void**) bdsp) *(void **) bdsp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetformdegree_ PETSCDUALSPACEGETFORMDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetformdegree_ petscdualspacegetformdegree
#endif
PETSC_EXTERN void petscdualspacegetformdegree_(PetscDualSpace *dsp, PetscInt *k, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(k);
  *ierr = PetscDualSpaceGetFormDegree(*dsp, k);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacesetformdegree_ PETSCDUALSPACESETFORMDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacesetformdegree_ petscdualspacesetformdegree
#endif
PETSC_EXTERN void petscdualspacesetformdegree_(PetscDualSpace *dsp, PetscInt *k, PetscErrorCode *ierr)
{
  *ierr = PetscDualSpaceSetFormDegree(*dsp, *k);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacegetderahm_ PETSCDUALSPACEGETDERAHM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacegetderahm_ petscdualspacegetderahm
#endif
PETSC_EXTERN void petscdualspacegetderahm_(PetscDualSpace *dsp, PetscInt *k, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(k);
  *ierr = PetscDualSpaceGetDeRahm(*dsp, k);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacetransform_ PETSCDUALSPACETRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacetransform_ petscdualspacetransform
#endif
PETSC_EXTERN void petscdualspacetransform_(PetscDualSpace *dsp, PetscDualSpaceTransformType *trans, PetscBool *isInverse, PetscFEGeom **fegeom, PetscInt *Nv, PetscInt *Nc, PetscScalar vals[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(vals);
  *ierr = PetscDualSpaceTransform(*dsp, *trans, *isInverse ? PETSC_TRUE : PETSC_FALSE, *fegeom, *Nv, *Nc, vals);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacetransformgradient_ PETSCDUALSPACETRANSFORMGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacetransformgradient_ petscdualspacetransformgradient
#endif
PETSC_EXTERN void petscdualspacetransformgradient_(PetscDualSpace *dsp, PetscDualSpaceTransformType *trans, PetscBool *isInverse, PetscFEGeom **fegeom, PetscInt *Nv, PetscInt *Nc, PetscScalar vals[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(vals);
  *ierr = PetscDualSpaceTransformGradient(*dsp, *trans, *isInverse ? PETSC_TRUE : PETSC_FALSE, *fegeom, *Nv, *Nc, vals);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacetransformhessian_ PETSCDUALSPACETRANSFORMHESSIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacetransformhessian_ petscdualspacetransformhessian
#endif
PETSC_EXTERN void petscdualspacetransformhessian_(PetscDualSpace *dsp, PetscDualSpaceTransformType *trans, PetscBool *isInverse, PetscFEGeom **fegeom, PetscInt *Nv, PetscInt *Nc, PetscScalar vals[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(vals);
  *ierr = PetscDualSpaceTransformHessian(*dsp, *trans, *isInverse ? PETSC_TRUE : PETSC_FALSE, *fegeom, *Nv, *Nc, vals);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacepullback_ PETSCDUALSPACEPULLBACK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacepullback_ petscdualspacepullback
#endif
PETSC_EXTERN void petscdualspacepullback_(PetscDualSpace *dsp, PetscFEGeom **fegeom, PetscInt *Nq, PetscInt *Nc, PetscScalar pointEval[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(pointEval);
  *ierr = PetscDualSpacePullback(*dsp, *fegeom, *Nq, *Nc, pointEval);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacepushforward_ PETSCDUALSPACEPUSHFORWARD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacepushforward_ petscdualspacepushforward
#endif
PETSC_EXTERN void petscdualspacepushforward_(PetscDualSpace *dsp, PetscFEGeom **fegeom, PetscInt *Nq, PetscInt *Nc, PetscScalar pointEval[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(pointEval);
  *ierr = PetscDualSpacePushforward(*dsp, *fegeom, *Nq, *Nc, pointEval);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacepushforwardgradient_ PETSCDUALSPACEPUSHFORWARDGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacepushforwardgradient_ petscdualspacepushforwardgradient
#endif
PETSC_EXTERN void petscdualspacepushforwardgradient_(PetscDualSpace *dsp, PetscFEGeom **fegeom, PetscInt *Nq, PetscInt *Nc, PetscScalar pointEval[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(pointEval);
  *ierr = PetscDualSpacePushforwardGradient(*dsp, *fegeom, *Nq, *Nc, pointEval);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacepushforwardhessian_ PETSCDUALSPACEPUSHFORWARDHESSIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacepushforwardhessian_ petscdualspacepushforwardhessian
#endif
PETSC_EXTERN void petscdualspacepushforwardhessian_(PetscDualSpace *dsp, PetscFEGeom **fegeom, PetscInt *Nq, PetscInt *Nc, PetscScalar pointEval[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(pointEval);
  *ierr = PetscDualSpacePushforwardHessian(*dsp, *fegeom, *Nq, *Nc, pointEval);
  if (*ierr) return;
}
