#if !defined(PETSCPETSCBAGDEF_H)
#define PETSCPETSCBAGDEF_H

#include "petsc/finclude/petscsys.h"



#define PetscBag type(tPetscBag)
#define PetscBagItem type(tPetscBagItem)

#endif
#define PetscBagGetData(bag, data, ierr) PetscBagGetDataCptr(bag, petscFtnCtx, ierr); call c_f_pointer(petscFtnCtx, data)
