#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsglleadaptfinalizepackage_ TSGLLEADAPTFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsglleadaptfinalizepackage_ tsglleadaptfinalizepackage
#endif
PETSC_EXTERN void tsglleadaptfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSGLLEAdaptFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsglleadaptinitializepackage_ TSGLLEADAPTINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsglleadaptinitializepackage_ tsglleadaptinitializepackage
#endif
PETSC_EXTERN void tsglleadaptinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSGLLEAdaptInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsglleadaptsettype_ TSGLLEADAPTSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsglleadaptsettype_ tsglleadaptsettype
#endif
PETSC_EXTERN void tsglleadaptsettype_(TSGLLEAdapt *adapt, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = TSGLLEAdaptSetType(*adapt, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsglleadaptsetoptionsprefix_ TSGLLEADAPTSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsglleadaptsetoptionsprefix_ tsglleadaptsetoptionsprefix
#endif
PETSC_EXTERN void tsglleadaptsetoptionsprefix_(TSGLLEAdapt *adapt, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = TSGLLEAdaptSetOptionsPrefix(*adapt, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsglleadaptview_ TSGLLEADAPTVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsglleadaptview_ tsglleadaptview
#endif
PETSC_EXTERN void tsglleadaptview_(TSGLLEAdapt *adapt, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = TSGLLEAdaptView(*adapt, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsglleadaptdestroy_ TSGLLEADAPTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsglleadaptdestroy_ tsglleadaptdestroy
#endif
PETSC_EXTERN void tsglleadaptdestroy_(TSGLLEAdapt *adapt, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(adapt);
  PetscBool null_adapt = !*(void**) adapt ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(adapt);
  *ierr = TSGLLEAdaptDestroy(adapt);
  if (*ierr) return;
  if (! null_adapt && !*(void**) adapt) *(void **) adapt = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsglleadaptsetfromoptions_ TSGLLEADAPTSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsglleadaptsetfromoptions_ tsglleadaptsetfromoptions
#endif
PETSC_EXTERN void tsglleadaptsetfromoptions_(TSGLLEAdapt *adapt, PetscOptionItems *PetscOptionsObject, PetscErrorCode *ierr)
{
  *ierr = TSGLLEAdaptSetFromOptions(*adapt, *PetscOptionsObject);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsglleadaptchoose_ TSGLLEADAPTCHOOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsglleadaptchoose_ tsglleadaptchoose
#endif
PETSC_EXTERN void tsglleadaptchoose_(TSGLLEAdapt *adapt, PetscInt *n, const PetscInt orders[], const PetscReal errors[], const PetscReal cost[], PetscInt *cur, PetscReal *h, PetscReal *tleft, PetscInt *next_sc, PetscReal *next_h, PetscBool *finish, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(orders);
  CHKFORTRANNULLREAL(errors);
  CHKFORTRANNULLREAL(cost);
  CHKFORTRANNULLINTEGER(next_sc);
  CHKFORTRANNULLREAL(next_h);
  CHKFORTRANNULLBOOL(finish);
  *ierr = TSGLLEAdaptChoose(*adapt, *n, orders, errors, cost, *cur, *h, *tleft, next_sc, next_h, finish);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsglleadaptcreate_ TSGLLEADAPTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsglleadaptcreate_ tsglleadaptcreate
#endif
PETSC_EXTERN void tsglleadaptcreate_(MPI_Fint *comm, TSGLLEAdapt *inadapt, PetscErrorCode *ierr)
{
  PetscBool null_inadapt = !*(void**) inadapt ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(inadapt);
  CHKFORTRANNULLOBJECT(inadapt);
  *ierr = TSGLLEAdaptCreate(MPI_Comm_f2c(*(comm)), inadapt);
  if (*ierr) return;
  if (! null_inadapt && !*(void**) inadapt) *(void **) inadapt = (void *)-2;
}
