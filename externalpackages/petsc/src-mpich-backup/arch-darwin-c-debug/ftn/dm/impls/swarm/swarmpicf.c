#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcelldmdestroy_ DMSWARMCELLDMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcelldmdestroy_ dmswarmcelldmdestroy
#endif
PETSC_EXTERN void dmswarmcelldmdestroy_(DMSwarmCellDM *celldm, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(celldm);
  PetscBool null_celldm = !*(void**) celldm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(celldm);
  *ierr = DMSwarmCellDMDestroy(celldm);
  if (*ierr) return;
  if (! null_celldm && !*(void**) celldm) *(void **) celldm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcelldmview_ DMSWARMCELLDMVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcelldmview_ dmswarmcelldmview
#endif
PETSC_EXTERN void dmswarmcelldmview_(DMSwarmCellDM *celldm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMSwarmCellDMView(*celldm, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcelldmgetdm_ DMSWARMCELLDMGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcelldmgetdm_ dmswarmcelldmgetdm
#endif
PETSC_EXTERN void dmswarmcelldmgetdm_(DMSwarmCellDM *celldm, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMSwarmCellDMGetDM(*celldm, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcelldmgetcellid_ DMSWARMCELLDMGETCELLID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcelldmgetcellid_ dmswarmcelldmgetcellid
#endif
PETSC_EXTERN void dmswarmcelldmgetcellid_(DMSwarmCellDM *celldm, char cellid[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_cellid)
{
  char* c_cellid = PETSC_NULLPTR;
  *ierr = DMSwarmCellDMGetCellID(*celldm, (const char **)&c_cellid);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)cellid, c_cellid, l_cellid);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, cellid, l_cellid);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcelldmgetsort_ DMSWARMCELLDMGETSORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcelldmgetsort_ dmswarmcelldmgetsort
#endif
PETSC_EXTERN void dmswarmcelldmgetsort_(DMSwarmCellDM *celldm, DMSwarmSort *sort, PetscErrorCode *ierr)
{
  PetscBool null_sort = !*(void**) sort ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sort);
  *ierr = DMSwarmCellDMGetSort(*celldm, sort);
  if (*ierr) return;
  if (! null_sort && !*(void**) sort) *(void **) sort = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcelldmsetsort_ DMSWARMCELLDMSETSORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcelldmsetsort_ dmswarmcelldmsetsort
#endif
PETSC_EXTERN void dmswarmcelldmsetsort_(DMSwarmCellDM *celldm, DMSwarmSort *sort, PetscErrorCode *ierr)
{
  *ierr = DMSwarmCellDMSetSort(*celldm, *sort);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcelldmgetblocksize_ DMSWARMCELLDMGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcelldmgetblocksize_ dmswarmcelldmgetblocksize
#endif
PETSC_EXTERN void dmswarmcelldmgetblocksize_(DMSwarmCellDM *celldm, DM *sw, PetscInt *bs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bs);
  *ierr = DMSwarmCellDMGetBlockSize(*celldm, *sw, bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcelldmcreate_ DMSWARMCELLDMCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcelldmcreate_ dmswarmcelldmcreate
#endif
PETSC_EXTERN void dmswarmcelldmcreate_(DM *dm, PetscInt *Nf, char dmFields[], PetscInt *Nfc, char coordFields[], DMSwarmCellDM *celldm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dmFields, PETSC_FORTRAN_CHARLEN_T l_coordFields)
{
  PetscBool null_celldm = !*(void**) celldm ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(celldm);
  char* c_dmFields = PETSC_NULLPTR;
  char* c_coordFields = PETSC_NULLPTR;
  CHKFORTRANNULLOBJECT(celldm);
  *ierr = DMSwarmCellDMCreate(*dm, *Nf, (const char **)&c_dmFields, *Nfc, (const char **)&c_coordFields, celldm);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)dmFields, c_dmFields, l_dmFields);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, dmFields, l_dmFields);
  *ierr = PetscStrncpy((char *)coordFields, c_coordFields, l_coordFields);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, coordFields, l_coordFields);
  if (! null_celldm && !*(void**) celldm) *(void **) celldm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsetpointsuniformcoordinates_ DMSWARMSETPOINTSUNIFORMCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsetpointsuniformcoordinates_ dmswarmsetpointsuniformcoordinates
#endif
PETSC_EXTERN void dmswarmsetpointsuniformcoordinates_(DM *sw, PetscReal min[], PetscReal max[], PetscInt npoints[], InsertMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(min);
  CHKFORTRANNULLREAL(max);
  CHKFORTRANNULLINTEGER(npoints);
  *ierr = DMSwarmSetPointsUniformCoordinates(*sw, min, max, npoints, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsetpointcoordinates_ DMSWARMSETPOINTCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsetpointcoordinates_ dmswarmsetpointcoordinates
#endif
PETSC_EXTERN void dmswarmsetpointcoordinates_(DM *sw, PetscInt *npoints, PetscReal coor[], PetscBool *redundant, InsertMode *mode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(coor);
  *ierr = DMSwarmSetPointCoordinates(*sw, *npoints, coor, *redundant ? PETSC_TRUE : PETSC_FALSE, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarminsertpointsusingcelldm_ DMSWARMINSERTPOINTSUSINGCELLDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarminsertpointsusingcelldm_ dmswarminsertpointsusingcelldm
#endif
PETSC_EXTERN void dmswarminsertpointsusingcelldm_(DM *dm, DMSwarmPICLayoutType *layout_type, PetscInt *fill_param, PetscErrorCode *ierr)
{
  *ierr = DMSwarmInsertPointsUsingCellDM(*dm, *layout_type, *fill_param);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsetpointcoordinatescellwise_ DMSWARMSETPOINTCOORDINATESCELLWISE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsetpointcoordinatescellwise_ dmswarmsetpointcoordinatescellwise
#endif
PETSC_EXTERN void dmswarmsetpointcoordinatescellwise_(DM *dm, PetscInt *npoints, PetscReal xi[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(xi);
  *ierr = DMSwarmSetPointCoordinatesCellwise(*dm, *npoints, xi);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmgetnumspecies_ DMSWARMGETNUMSPECIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmgetnumspecies_ dmswarmgetnumspecies
#endif
PETSC_EXTERN void dmswarmgetnumspecies_(DM *sw, PetscInt *Ns, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Ns);
  *ierr = DMSwarmGetNumSpecies(*sw, Ns);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsetnumspecies_ DMSWARMSETNUMSPECIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsetnumspecies_ dmswarmsetnumspecies
#endif
PETSC_EXTERN void dmswarmsetnumspecies_(DM *sw, PetscInt *Ns, PetscErrorCode *ierr)
{
  *ierr = DMSwarmSetNumSpecies(*sw, *Ns);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcomputelocalsizefromoptions_ DMSWARMCOMPUTELOCALSIZEFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcomputelocalsizefromoptions_ dmswarmcomputelocalsizefromoptions
#endif
PETSC_EXTERN void dmswarmcomputelocalsizefromoptions_(DM *sw, PetscErrorCode *ierr)
{
  *ierr = DMSwarmComputeLocalSizeFromOptions(*sw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarminitializecoordinates_ DMSWARMINITIALIZECOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarminitializecoordinates_ dmswarminitializecoordinates
#endif
PETSC_EXTERN void dmswarminitializecoordinates_(DM *sw, PetscErrorCode *ierr)
{
  *ierr = DMSwarmInitializeCoordinates(*sw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarminitializevelocitiesfromoptions_ DMSWARMINITIALIZEVELOCITIESFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarminitializevelocitiesfromoptions_ dmswarminitializevelocitiesfromoptions
#endif
PETSC_EXTERN void dmswarminitializevelocitiesfromoptions_(DM *sw, const PetscReal v0[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(v0);
  *ierr = DMSwarmInitializeVelocitiesFromOptions(*sw, v0);
  if (*ierr) return;
}
