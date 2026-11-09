#if !defined(PETSCPETSCDSDEF_H)
#define PETSCPETSCDSDEF_H

#include "petsc/finclude/petscfe.h"
#include "petsc/finclude/petscfv.h"

#define PetscWeakFormKind type(ePetscWeakFormKind)
#define PetscDiscType type(ePetscDiscType)
#define PetscFormKey type(sPetscFormKey)

#define PetscDSType CHARACTER(80)

#define PetscDS type(tPetscDS)
#define PetscWeakForm type(tPetscWeakForm)

#endif
#define PetscDSGetContext(ds, f, ctx, ierr) PetscDSGetContextCptr(ds, f, petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, ctx)
