  type, extends(tPetscObject) ::  tPetscConvEst
  end type tPetscConvEst
  PetscConvEst, parameter :: PETSC_NULL_CONVEST = tPetscConvEst(0)
  PetscConvEst, target :: PETSC_NULL_CONVEST_ARRAY(1) = [tPetscConvEst(0)]
  PetscConvEst, pointer :: PETSC_NULL_CONVEST_POINTER(:) => PETSC_NULL_CONVEST_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_CONVEST
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_CONVEST_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_CONVEST_POINTER
#endif

