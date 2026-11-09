#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerfinalizepackage_ PETSCVIEWERFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerfinalizepackage_ petscviewerfinalizepackage
#endif
PETSC_EXTERN void petscviewerfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscViewerFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerinitializepackage_ PETSCVIEWERINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerinitializepackage_ petscviewerinitializepackage
#endif
PETSC_EXTERN void petscviewerinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscViewerInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdestroy_ PETSCVIEWERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdestroy_ petscviewerdestroy
#endif
PETSC_EXTERN void petscviewerdestroy_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(viewer);
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(viewer);
  *ierr = PetscViewerDestroy(viewer);
  if (*ierr) return;
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewergettype_ PETSCVIEWERGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewergettype_ petscviewergettype
#endif
PETSC_EXTERN void petscviewergettype_(PetscViewer *viewer, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerGetType(v_viewer, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerappendoptionsprefix_ PETSCVIEWERAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerappendoptionsprefix_ petscviewerappendoptionsprefix
#endif
PETSC_EXTERN void petscviewerappendoptionsprefix_(PetscViewer *viewer, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerAppendOptionsPrefix(v_viewer, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewergetoptionsprefix_ PETSCVIEWERGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewergetoptionsprefix_ petscviewergetoptionsprefix
#endif
PETSC_EXTERN void petscviewergetoptionsprefix_(PetscViewer *viewer, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix = PETSC_NULLPTR;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerGetOptionsPrefix(v_viewer, (const char **)&c_prefix);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)prefix, c_prefix, l_prefix);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, prefix, l_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerviewfromoptions_ PETSCVIEWERVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerviewfromoptions_ petscviewerviewfromoptions
#endif
PETSC_EXTERN void petscviewerviewfromoptions_(PetscViewer *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_A = PetscPatchDefaultViewers(A);
  *ierr = PetscViewerViewFromOptions(v_A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerview_ PETSCVIEWERVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerview_ petscviewerview
#endif
PETSC_EXTERN void petscviewerview_(PetscViewer *v, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerView(v_v, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerread_ PETSCVIEWERREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerread_ petscviewerread
#endif
PETSC_EXTERN void petscviewerread_(PetscViewer *viewer, void *data, PetscInt *num, PetscInt *count, PetscDataType *dtype, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(count);
  *ierr = PetscViewerRead(v_viewer, data, *num, count, *dtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerreadable_ PETSCVIEWERREADABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerreadable_ petscviewerreadable
#endif
PETSC_EXTERN void petscviewerreadable_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscViewerReadable(v_viewer, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerwritable_ PETSCVIEWERWRITABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerwritable_ petscviewerwritable
#endif
PETSC_EXTERN void petscviewerwritable_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscViewerWritable(v_viewer, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewercheckreadable_ PETSCVIEWERCHECKREADABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewercheckreadable_ petscviewercheckreadable
#endif
PETSC_EXTERN void petscviewercheckreadable_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerCheckReadable(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewercheckwritable_ PETSCVIEWERCHECKWRITABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewercheckwritable_ petscviewercheckwritable
#endif
PETSC_EXTERN void petscviewercheckwritable_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerCheckWritable(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewersetoptionsprefix_ PETSCVIEWERSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewersetoptionsprefix_ petscviewersetoptionsprefix
#endif
PETSC_EXTERN void petscviewersetoptionsprefix_(PetscViewer *viewer, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerSetOptionsPrefix(v_viewer, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewersetup_ PETSCVIEWERSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewersetup_ petscviewersetup
#endif
PETSC_EXTERN void petscviewersetup_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerSetUp(v_viewer);
  if (*ierr) return;
}
