#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscheapcreate_ PETSCHEAPCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscheapcreate_ petscheapcreate
#endif
PETSC_EXTERN void petscheapcreate_(PetscInt *maxsize, PetscHeap *heap, PetscErrorCode *ierr)
{
  PetscBool null_heap = !*(void**) heap ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(heap);
  CHKFORTRANNULLOBJECT(heap);
  *ierr = PetscHeapCreate(*maxsize, heap);
  if (*ierr) return;
  if (! null_heap && !*(void**) heap) *(void **) heap = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscheapadd_ PETSCHEAPADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscheapadd_ petscheapadd
#endif
PETSC_EXTERN void petscheapadd_(PetscHeap *h, PetscInt *id, PetscInt *val, PetscErrorCode *ierr)
{
  *ierr = PetscHeapAdd(*h, *id, *val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscheappop_ PETSCHEAPPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscheappop_ petscheappop
#endif
PETSC_EXTERN void petscheappop_(PetscHeap *h, PetscInt *id, PetscInt *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(id);
  CHKFORTRANNULLINTEGER(val);
  *ierr = PetscHeapPop(*h, id, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscheappeek_ PETSCHEAPPEEK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscheappeek_ petscheappeek
#endif
PETSC_EXTERN void petscheappeek_(PetscHeap *h, PetscInt *id, PetscInt *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(id);
  CHKFORTRANNULLINTEGER(val);
  *ierr = PetscHeapPeek(*h, id, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscheapstash_ PETSCHEAPSTASH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscheapstash_ petscheapstash
#endif
PETSC_EXTERN void petscheapstash_(PetscHeap *h, PetscInt *id, PetscInt *val, PetscErrorCode *ierr)
{
  *ierr = PetscHeapStash(*h, *id, *val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscheapunstash_ PETSCHEAPUNSTASH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscheapunstash_ petscheapunstash
#endif
PETSC_EXTERN void petscheapunstash_(PetscHeap *h, PetscErrorCode *ierr)
{
  *ierr = PetscHeapUnstash(*h);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscheapdestroy_ PETSCHEAPDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscheapdestroy_ petscheapdestroy
#endif
PETSC_EXTERN void petscheapdestroy_(PetscHeap *heap, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(heap);
  PetscBool null_heap = !*(void**) heap ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(heap);
  *ierr = PetscHeapDestroy(heap);
  if (*ierr) return;
  if (! null_heap && !*(void**) heap) *(void **) heap = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscheapview_ PETSCHEAPVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscheapview_ petscheapview
#endif
PETSC_EXTERN void petscheapview_(PetscHeap *h, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscHeapView(*h, v_viewer);
  if (*ierr) return;
}
