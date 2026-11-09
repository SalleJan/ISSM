#if !defined(PETSCPETSCDMSHELLDEF_H)
#define PETSCPETSCDMSHELLDEF_H

#include "petsc/finclude/petscdm.h"




#endif
#define DMShellGetContext(dm, ctx, ierr) DMShellGetContextCptr(dm, petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, ctx)
