  type, extends(tPetscObject) ::  tPetscMatlabEngine
  end type tPetscMatlabEngine
  PetscMatlabEngine, parameter :: PETSC_NULL_MATLABENGINE = tPetscMatlabEngine(0)
  PetscMatlabEngine, target :: PETSC_NULL_MATLABENGINE_ARRAY(1) = [tPetscMatlabEngine(0)]
  PetscMatlabEngine, pointer :: PETSC_NULL_MATLABENGINE_POINTER(:) => PETSC_NULL_MATLABENGINE_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATLABENGINE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATLABENGINE_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATLABENGINE_POINTER
#endif

