  type eLandauDeviceType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eLandauDeviceType

  LandauDeviceType, parameter :: PETSC_NULL_LANDAUDEVICETYPE = eLandauDeviceType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LANDAUDEVICETYPE
#endif
    LandauDeviceType, parameter :: LANDAU_KOKKOS = eLandauDeviceType(0)
    LandauDeviceType, parameter :: LANDAU_CPU = eLandauDeviceType(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_KOKKOS
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_CPU
#endif

  type eLandauOMPTimers
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eLandauOMPTimers

  LandauOMPTimers, parameter :: PETSC_NULL_LANDAUOMPTIMERS = eLandauOMPTimers(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LANDAUOMPTIMERS
#endif
    LandauOMPTimers, parameter :: LANDAU_EX2_TSSOLVE = eLandauOMPTimers(0)
    LandauOMPTimers, parameter :: LANDAU_MATRIX_TOTAL = eLandauOMPTimers(1)
    LandauOMPTimers, parameter :: LANDAU_OPERATOR = eLandauOMPTimers(2)
    LandauOMPTimers, parameter :: LANDAU_JACOBIAN_COUNT = eLandauOMPTimers(3)
    LandauOMPTimers, parameter :: LANDAU_JACOBIAN = eLandauOMPTimers(4)
    LandauOMPTimers, parameter :: LANDAU_MASS = eLandauOMPTimers(5)
    LandauOMPTimers, parameter :: LANDAU_F_DF = eLandauOMPTimers(6)
    LandauOMPTimers, parameter :: LANDAU_KERNEL = eLandauOMPTimers(7)
    LandauOMPTimers, parameter :: KSP_FACTOR = eLandauOMPTimers(8)
    LandauOMPTimers, parameter :: KSP_SOLVE = eLandauOMPTimers(9)
    LandauOMPTimers, parameter :: LANDAU_NUM_TIMERS = eLandauOMPTimers(10)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_EX2_TSSOLVE
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_MATRIX_TOTAL
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_OPERATOR
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_JACOBIAN_COUNT
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_JACOBIAN
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_MASS
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_F_DF
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_KERNEL
!DEC$ ATTRIBUTES DLLEXPORT::KSP_FACTOR
!DEC$ ATTRIBUTES DLLEXPORT::KSP_SOLVE
!DEC$ ATTRIBUTES DLLEXPORT::LANDAU_NUM_TIMERS
#endif

  type spointInterpolationP
    PetscReal scale
    LandauIdx gid
  end type spointInterpolationP

