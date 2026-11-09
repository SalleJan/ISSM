  type ePetscScalarPrecision
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscScalarPrecision

  PetscScalarPrecision, parameter :: PETSC_NULL_SCALARPRECISION = ePetscScalarPrecision(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SCALARPRECISION
#endif
    PetscScalarPrecision, parameter :: PETSC_SCALAR_DOUBLE = ePetscScalarPrecision(0)
    PetscScalarPrecision, parameter :: PETSC_SCALAR_SINGLE = ePetscScalarPrecision(1)
    PetscScalarPrecision, parameter :: PETSC_SCALAR_LONG_DOUBLE = ePetscScalarPrecision(2)
    PetscScalarPrecision, parameter :: PETSC_SCALAR_HALF = ePetscScalarPrecision(3)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_SCALAR_DOUBLE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_SCALAR_SINGLE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_SCALAR_LONG_DOUBLE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_SCALAR_HALF
#endif

