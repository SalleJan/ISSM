#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomdestroy_ PETSCRANDOMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomdestroy_ petscrandomdestroy
#endif
PETSC_EXTERN void petscrandomdestroy_(PetscRandom *r, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(r);
  PetscBool null_r = !*(void**) r ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(r);
  *ierr = PetscRandomDestroy(r);
  if (*ierr) return;
  if (! null_r && !*(void**) r) *(void **) r = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomgetseed_ PETSCRANDOMGETSEED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomgetseed_ petscrandomgetseed
#endif
PETSC_EXTERN void petscrandomgetseed_(PetscRandom *r, PetscInt64 *seed, PetscErrorCode *ierr)
{
  *ierr = PetscRandomGetSeed(*r, seed);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomsetseed_ PETSCRANDOMSETSEED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomsetseed_ petscrandomsetseed
#endif
PETSC_EXTERN void petscrandomsetseed_(PetscRandom *r, PetscInt64 *seed, PetscErrorCode *ierr)
{
  *ierr = PetscRandomSetSeed(*r, *seed);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomsetfromoptions_ PETSCRANDOMSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomsetfromoptions_ petscrandomsetfromoptions
#endif
PETSC_EXTERN void petscrandomsetfromoptions_(PetscRandom *rnd, PetscErrorCode *ierr)
{
  *ierr = PetscRandomSetFromOptions(*rnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomsetoptionsprefix_ PETSCRANDOMSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomsetoptionsprefix_ petscrandomsetoptionsprefix
#endif
PETSC_EXTERN void petscrandomsetoptionsprefix_(PetscRandom *r, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = PetscRandomSetOptionsPrefix(*r, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomviewfromoptions_ PETSCRANDOMVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomviewfromoptions_ petscrandomviewfromoptions
#endif
PETSC_EXTERN void petscrandomviewfromoptions_(PetscRandom *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscRandomViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomview_ PETSCRANDOMVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomview_ petscrandomview
#endif
PETSC_EXTERN void petscrandomview_(PetscRandom *rnd, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscRandomView(*rnd, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomcreate_ PETSCRANDOMCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomcreate_ petscrandomcreate
#endif
PETSC_EXTERN void petscrandomcreate_(MPI_Fint *comm, PetscRandom *r, PetscErrorCode *ierr)
{
  PetscBool null_r = !*(void**) r ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(r);
  CHKFORTRANNULLOBJECT(r);
  *ierr = PetscRandomCreate(MPI_Comm_f2c(*(comm)), r);
  if (*ierr) return;
  if (! null_r && !*(void**) r) *(void **) r = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomseed_ PETSCRANDOMSEED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomseed_ petscrandomseed
#endif
PETSC_EXTERN void petscrandomseed_(PetscRandom *r, PetscErrorCode *ierr)
{
  *ierr = PetscRandomSeed(*r);
  if (*ierr) return;
}
