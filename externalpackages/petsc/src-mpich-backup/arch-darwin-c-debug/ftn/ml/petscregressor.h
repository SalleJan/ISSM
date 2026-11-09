  type, extends(tPetscObject) ::  tPetscRegressor
  end type tPetscRegressor
  PetscRegressor, parameter :: PETSC_NULL_REGRESSOR = tPetscRegressor(0)
  PetscRegressor, target :: PETSC_NULL_REGRESSOR_ARRAY(1) = [tPetscRegressor(0)]
  PetscRegressor, pointer :: PETSC_NULL_REGRESSOR_POINTER(:) => PETSC_NULL_REGRESSOR_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_REGRESSOR
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_REGRESSOR_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_REGRESSOR_POINTER
#endif

  type ePetscRegressorLinearType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscRegressorLinearType

  PetscRegressorLinearType, parameter :: PETSC_NULL_REGRESSORLINEARTYPE = ePetscRegressorLinearType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_REGRESSORLINEARTYPE
#endif
    PetscRegressorLinearType, parameter :: REGRESSOR_LINEAR_OLS = ePetscRegressorLinearType(0)
    PetscRegressorLinearType, parameter :: REGRESSOR_LINEAR_LASSO = ePetscRegressorLinearType(1)
    PetscRegressorLinearType, parameter :: REGRESSOR_LINEAR_RIDGE = ePetscRegressorLinearType(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::REGRESSOR_LINEAR_OLS
!DEC$ ATTRIBUTES DLLEXPORT::REGRESSOR_LINEAR_LASSO
!DEC$ ATTRIBUTES DLLEXPORT::REGRESSOR_LINEAR_RIDGE
#endif

  CHARACTER(LEN=*), PARAMETER :: PETSCREGRESSORLINEAR = 'linear'

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSCREGRESSORLINEAR
#endif

