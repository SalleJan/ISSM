#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkmonitorcreate_ DMNETWORKMONITORCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkmonitorcreate_ dmnetworkmonitorcreate
#endif
PETSC_EXTERN void dmnetworkmonitorcreate_(DM *network, DMNetworkMonitor *monitorptr, PetscErrorCode *ierr)
{
  PetscBool null_monitorptr = !*(void**) monitorptr ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(monitorptr);
  CHKFORTRANNULLOBJECT(monitorptr);
  *ierr = DMNetworkMonitorCreate(*network, monitorptr);
  if (*ierr) return;
  if (! null_monitorptr && !*(void**) monitorptr) *(void **) monitorptr = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkmonitordestroy_ DMNETWORKMONITORDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkmonitordestroy_ dmnetworkmonitordestroy
#endif
PETSC_EXTERN void dmnetworkmonitordestroy_(DMNetworkMonitor *monitor, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(monitor);
  PetscBool null_monitor = !*(void**) monitor ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(monitor);
  *ierr = DMNetworkMonitorDestroy(monitor);
  if (*ierr) return;
  if (! null_monitor && !*(void**) monitor) *(void **) monitor = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkmonitorpop_ DMNETWORKMONITORPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkmonitorpop_ dmnetworkmonitorpop
#endif
PETSC_EXTERN void dmnetworkmonitorpop_(DMNetworkMonitor *monitor, PetscErrorCode *ierr)
{
  *ierr = DMNetworkMonitorPop(*monitor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkmonitoradd_ DMNETWORKMONITORADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkmonitoradd_ dmnetworkmonitoradd
#endif
PETSC_EXTERN void dmnetworkmonitoradd_(DMNetworkMonitor *monitor, char name[], PetscInt *element, PetscInt *nodes, PetscInt *start, PetscInt *blocksize, PetscReal *xmin, PetscReal *xmax, PetscReal *ymin, PetscReal *ymax, PetscBool *hold, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMNetworkMonitorAdd(*monitor, c_name, *element, *nodes, *start, *blocksize, *xmin, *xmax, *ymin, *ymax, *hold ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkmonitorview_ DMNETWORKMONITORVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkmonitorview_ dmnetworkmonitorview
#endif
PETSC_EXTERN void dmnetworkmonitorview_(DMNetworkMonitor *monitor, Vec *x, PetscErrorCode *ierr)
{
  *ierr = DMNetworkMonitorView(*monitor, *x);
  if (*ierr) return;
}
