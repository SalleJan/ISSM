#if !defined(PETSCPETSCDMFIELDDEF_H)
#define PETSCPETSCDMFIELDDEF_H

#include "petsc/finclude/petscdm.h"
#include "petsc/finclude/petscdt.h"
#include "petsc/finclude/petscfe.h"

#define DMFieldContinuity type(eDMFieldContinuity)

#define DMFieldType CHARACTER(80)


#endif
#define DMFieldShellGetContext(field, ctx, ierr) DMFieldShellGetContextCptr(field, petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, ctx)
