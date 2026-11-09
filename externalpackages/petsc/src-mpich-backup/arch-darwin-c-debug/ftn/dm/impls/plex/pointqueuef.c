#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointqueuecreate_ DMPLEXPOINTQUEUECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointqueuecreate_ dmplexpointqueuecreate
#endif
PETSC_EXTERN void dmplexpointqueuecreate_(PetscInt *size, DMPlexPointQueue *queue, PetscErrorCode *ierr)
{
  PetscBool null_queue = !*(void**) queue ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(queue);
  CHKFORTRANNULLOBJECT(queue);
  *ierr = DMPlexPointQueueCreate(*size, queue);
  if (*ierr) return;
  if (! null_queue && !*(void**) queue) *(void **) queue = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointqueuedestroy_ DMPLEXPOINTQUEUEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointqueuedestroy_ dmplexpointqueuedestroy
#endif
PETSC_EXTERN void dmplexpointqueuedestroy_(DMPlexPointQueue *queue, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(queue);
  PetscBool null_queue = !*(void**) queue ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(queue);
  *ierr = DMPlexPointQueueDestroy(queue);
  if (*ierr) return;
  if (! null_queue && !*(void**) queue) *(void **) queue = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointqueueensuresize_ DMPLEXPOINTQUEUEENSURESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointqueueensuresize_ dmplexpointqueueensuresize
#endif
PETSC_EXTERN void dmplexpointqueueensuresize_(DMPlexPointQueue *queue, PetscErrorCode *ierr)
{
  *ierr = DMPlexPointQueueEnsureSize(*queue);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointqueueenqueue_ DMPLEXPOINTQUEUEENQUEUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointqueueenqueue_ dmplexpointqueueenqueue
#endif
PETSC_EXTERN void dmplexpointqueueenqueue_(DMPlexPointQueue *queue, PetscInt *p, PetscErrorCode *ierr)
{
  *ierr = DMPlexPointQueueEnqueue(*queue, *p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointqueuedequeue_ DMPLEXPOINTQUEUEDEQUEUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointqueuedequeue_ dmplexpointqueuedequeue
#endif
PETSC_EXTERN void dmplexpointqueuedequeue_(DMPlexPointQueue *queue, PetscInt *p, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(p);
  *ierr = DMPlexPointQueueDequeue(*queue, p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointqueuefront_ DMPLEXPOINTQUEUEFRONT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointqueuefront_ dmplexpointqueuefront
#endif
PETSC_EXTERN void dmplexpointqueuefront_(DMPlexPointQueue *queue, PetscInt *p, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(p);
  *ierr = DMPlexPointQueueFront(*queue, p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointqueueback_ DMPLEXPOINTQUEUEBACK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointqueueback_ dmplexpointqueueback
#endif
PETSC_EXTERN void dmplexpointqueueback_(DMPlexPointQueue *queue, PetscInt *p, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(p);
  *ierr = DMPlexPointQueueBack(*queue, p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexpointqueueemptycollective_ DMPLEXPOINTQUEUEEMPTYCOLLECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexpointqueueemptycollective_ dmplexpointqueueemptycollective
#endif
PETSC_EXTERN void dmplexpointqueueemptycollective_(PetscObject *obj, DMPlexPointQueue *queue, PetscBool *empty, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(empty);
  *ierr = DMPlexPointQueueEmptyCollective(*obj, *queue, empty);
  if (*ierr) return;
}
