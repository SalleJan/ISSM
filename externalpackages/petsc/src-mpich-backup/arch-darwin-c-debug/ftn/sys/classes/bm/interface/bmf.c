#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchinitializepackage_ PETSCBENCHINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchinitializepackage_ petscbenchinitializepackage
#endif
PETSC_EXTERN void petscbenchinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscBenchInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchreset_ PETSCBENCHRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchreset_ petscbenchreset
#endif
PETSC_EXTERN void petscbenchreset_(PetscBench *bm, PetscErrorCode *ierr)
{
  *ierr = PetscBenchReset(*bm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchdestroy_ PETSCBENCHDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchdestroy_ petscbenchdestroy
#endif
PETSC_EXTERN void petscbenchdestroy_(PetscBench *bm, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(bm);
  PetscBool null_bm = !*(void**) bm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(bm);
  *ierr = PetscBenchDestroy(bm);
  if (*ierr) return;
  if (! null_bm && !*(void**) bm) *(void **) bm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchsetup_ PETSCBENCHSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchsetup_ petscbenchsetup
#endif
PETSC_EXTERN void petscbenchsetup_(PetscBench *bm, PetscErrorCode *ierr)
{
  *ierr = PetscBenchSetUp(*bm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchrun_ PETSCBENCHRUN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchrun_ petscbenchrun
#endif
PETSC_EXTERN void petscbenchrun_(PetscBench *bm, PetscErrorCode *ierr)
{
  *ierr = PetscBenchRun(*bm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchsetfromoptions_ PETSCBENCHSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchsetfromoptions_ petscbenchsetfromoptions
#endif
PETSC_EXTERN void petscbenchsetfromoptions_(PetscBench *bm, PetscErrorCode *ierr)
{
  *ierr = PetscBenchSetFromOptions(*bm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchview_ PETSCBENCHVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchview_ petscbenchview
#endif
PETSC_EXTERN void petscbenchview_(PetscBench *bm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscBenchView(*bm, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchviewfromoptions_ PETSCBENCHVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchviewfromoptions_ petscbenchviewfromoptions
#endif
PETSC_EXTERN void petscbenchviewfromoptions_(PetscBench *bm, PetscObject *bobj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscBenchViewFromOptions(*bm, *bobj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchcreate_ PETSCBENCHCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchcreate_ petscbenchcreate
#endif
PETSC_EXTERN void petscbenchcreate_(MPI_Fint *comm, PetscBench *bm, PetscErrorCode *ierr)
{
  PetscBool null_bm = !*(void**) bm ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(bm);
  CHKFORTRANNULLOBJECT(bm);
  *ierr = PetscBenchCreate(MPI_Comm_f2c(*(comm)), bm);
  if (*ierr) return;
  if (! null_bm && !*(void**) bm) *(void **) bm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchsetoptionsprefix_ PETSCBENCHSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchsetoptionsprefix_ petscbenchsetoptionsprefix
#endif
PETSC_EXTERN void petscbenchsetoptionsprefix_(PetscBench *bm, char pre[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  *ierr = PetscBenchSetOptionsPrefix(*bm, c_pre);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchsetsize_ PETSCBENCHSETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchsetsize_ petscbenchsetsize
#endif
PETSC_EXTERN void petscbenchsetsize_(PetscBench *bm, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PetscBenchSetSize(*bm, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchgetsize_ PETSCBENCHGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchgetsize_ petscbenchgetsize
#endif
PETSC_EXTERN void petscbenchgetsize_(PetscBench *bm, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  *ierr = PetscBenchGetSize(*bm, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchsettype_ PETSCBENCHSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchsettype_ petscbenchsettype
#endif
PETSC_EXTERN void petscbenchsettype_(PetscBench *bm, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PetscBenchSetType(*bm, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbenchgettype_ PETSCBENCHGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbenchgettype_ petscbenchgettype
#endif
PETSC_EXTERN void petscbenchgettype_(PetscBench *bm, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = PetscBenchGetType(*bm, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
