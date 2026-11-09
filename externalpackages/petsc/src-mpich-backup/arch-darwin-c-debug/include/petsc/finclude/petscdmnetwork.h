#if !defined(PETSCPETSCDMNETWORKDEF_H)
#define PETSCPETSCDMNETWORKDEF_H

#include "petsc/finclude/petscdmplex.h"
#include "petsc/finclude/petscviewer.h"

#define DMNetworkComponentGenericDataType PetscInt


#define DMNetworkMonitorList type(tDMNetworkMonitorList)
#define DMNetworkMonitor type(tDMNetworkMonitor)

#endif
#define DMNetworkGetComponent(dm, p, compnum, compkey, component, nvar, ierr) DMNetworkGetComponentCptr(dm, p, compnum, compkey, petscFtnCtx, nvar, ierr); call c_f_pointer(petscFtnCtx, component)
