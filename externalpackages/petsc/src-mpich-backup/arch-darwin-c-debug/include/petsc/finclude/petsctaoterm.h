#if !defined(PETSCPETSCTAOTERMDEF_H)
#define PETSCPETSCTAOTERMDEF_H

#include "petsc/finclude/petscmat.h"
#include "petsc/finclude/petsctao.h"

#define TaoTermParametersMode type(eTaoTermParametersMode)
#define TaoTermMask type(eTaoTermMask)
#define TaoTermDuplicateOption type(eTaoTermDuplicateOption)

#define TaoTermType CHARACTER(80)

#define TaoTerm type(tTaoTerm)

#endif
#define TaoTermShellGetContext(term, ctx, ierr) TaoTermShellGetContextCptr(term, petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, ctx)
