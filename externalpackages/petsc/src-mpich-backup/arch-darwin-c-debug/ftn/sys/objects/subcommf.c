#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsubcommsetfromoptions_ PETSCSUBCOMMSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsubcommsetfromoptions_ petscsubcommsetfromoptions
#endif
PETSC_EXTERN void petscsubcommsetfromoptions_(PetscSubcomm *psubcomm, PetscErrorCode *ierr)
{
  *ierr = PetscSubcommSetFromOptions(*psubcomm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsubcommsetoptionsprefix_ PETSCSUBCOMMSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsubcommsetoptionsprefix_ petscsubcommsetoptionsprefix
#endif
PETSC_EXTERN void petscsubcommsetoptionsprefix_(PetscSubcomm *psubcomm, char pre[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  *ierr = PetscSubcommSetOptionsPrefix(*psubcomm, c_pre);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsubcommview_ PETSCSUBCOMMVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsubcommview_ petscsubcommview
#endif
PETSC_EXTERN void petscsubcommview_(PetscSubcomm *psubcomm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscSubcommView(*psubcomm, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsubcommsetnumber_ PETSCSUBCOMMSETNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsubcommsetnumber_ petscsubcommsetnumber
#endif
PETSC_EXTERN void petscsubcommsetnumber_(PetscSubcomm *psubcomm, PetscInt *nsubcomm, PetscErrorCode *ierr)
{
  *ierr = PetscSubcommSetNumber(*psubcomm, *nsubcomm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsubcommsettype_ PETSCSUBCOMMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsubcommsettype_ petscsubcommsettype
#endif
PETSC_EXTERN void petscsubcommsettype_(PetscSubcomm *psubcomm, PetscSubcommType *subcommtype, PetscErrorCode *ierr)
{
  *ierr = PetscSubcommSetType(*psubcomm, *subcommtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsubcommsettypegeneral_ PETSCSUBCOMMSETTYPEGENERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsubcommsettypegeneral_ petscsubcommsettypegeneral
#endif
PETSC_EXTERN void petscsubcommsettypegeneral_(PetscSubcomm *psubcomm, PetscMPIInt *color, PetscMPIInt *subrank, PetscErrorCode *ierr)
{
  *ierr = PetscSubcommSetTypeGeneral(*psubcomm, *color, *subrank);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsubcommdestroy_ PETSCSUBCOMMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsubcommdestroy_ petscsubcommdestroy
#endif
PETSC_EXTERN void petscsubcommdestroy_(PetscSubcomm *psubcomm, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(psubcomm);
  PetscBool null_psubcomm = !*(void**) psubcomm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(psubcomm);
  *ierr = PetscSubcommDestroy(psubcomm);
  if (*ierr) return;
  if (! null_psubcomm && !*(void**) psubcomm) *(void **) psubcomm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsubcommcreate_ PETSCSUBCOMMCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsubcommcreate_ petscsubcommcreate
#endif
PETSC_EXTERN void petscsubcommcreate_(MPI_Fint *comm, PetscSubcomm *psubcomm, PetscErrorCode *ierr)
{
  PetscBool null_psubcomm = !*(void**) psubcomm ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(psubcomm);
  CHKFORTRANNULLOBJECT(psubcomm);
  *ierr = PetscSubcommCreate(MPI_Comm_f2c(*(comm)), psubcomm);
  if (*ierr) return;
  if (! null_psubcomm && !*(void**) psubcomm) *(void **) psubcomm = (void *)-2;
}
