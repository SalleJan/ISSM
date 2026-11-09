  type eDMStagStencilLocation
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eDMStagStencilLocation

  DMStagStencilLocation, parameter :: PETSC_NULL_DMSTAGSTENCILLOCATION = eDMStagStencilLocation(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DMSTAGSTENCILLOCATION
#endif
    DMStagStencilLocation, parameter :: DMSTAG_NULL_LOCATION = eDMStagStencilLocation(0)
    DMStagStencilLocation, parameter :: DMSTAG_BACK_DOWN_LEFT = eDMStagStencilLocation(1)
    DMStagStencilLocation, parameter :: DMSTAG_BACK_DOWN = eDMStagStencilLocation(2)
    DMStagStencilLocation, parameter :: DMSTAG_BACK_DOWN_RIGHT = eDMStagStencilLocation(3)
    DMStagStencilLocation, parameter :: DMSTAG_BACK_LEFT = eDMStagStencilLocation(4)
    DMStagStencilLocation, parameter :: DMSTAG_BACK = eDMStagStencilLocation(5)
    DMStagStencilLocation, parameter :: DMSTAG_BACK_RIGHT = eDMStagStencilLocation(6)
    DMStagStencilLocation, parameter :: DMSTAG_BACK_UP_LEFT = eDMStagStencilLocation(7)
    DMStagStencilLocation, parameter :: DMSTAG_BACK_UP = eDMStagStencilLocation(8)
    DMStagStencilLocation, parameter :: DMSTAG_BACK_UP_RIGHT = eDMStagStencilLocation(9)
    DMStagStencilLocation, parameter :: DMSTAG_DOWN_LEFT = eDMStagStencilLocation(10)
    DMStagStencilLocation, parameter :: DMSTAG_DOWN = eDMStagStencilLocation(11)
    DMStagStencilLocation, parameter :: DMSTAG_DOWN_RIGHT = eDMStagStencilLocation(12)
    DMStagStencilLocation, parameter :: DMSTAG_LEFT = eDMStagStencilLocation(13)
    DMStagStencilLocation, parameter :: DMSTAG_ELEMENT = eDMStagStencilLocation(14)
    DMStagStencilLocation, parameter :: DMSTAG_RIGHT = eDMStagStencilLocation(15)
    DMStagStencilLocation, parameter :: DMSTAG_UP_LEFT = eDMStagStencilLocation(16)
    DMStagStencilLocation, parameter :: DMSTAG_UP = eDMStagStencilLocation(17)
    DMStagStencilLocation, parameter :: DMSTAG_UP_RIGHT = eDMStagStencilLocation(18)
    DMStagStencilLocation, parameter :: DMSTAG_FRONT_DOWN_LEFT = eDMStagStencilLocation(19)
    DMStagStencilLocation, parameter :: DMSTAG_FRONT_DOWN = eDMStagStencilLocation(20)
    DMStagStencilLocation, parameter :: DMSTAG_FRONT_DOWN_RIGHT = eDMStagStencilLocation(21)
    DMStagStencilLocation, parameter :: DMSTAG_FRONT_LEFT = eDMStagStencilLocation(22)
    DMStagStencilLocation, parameter :: DMSTAG_FRONT = eDMStagStencilLocation(23)
    DMStagStencilLocation, parameter :: DMSTAG_FRONT_RIGHT = eDMStagStencilLocation(24)
    DMStagStencilLocation, parameter :: DMSTAG_FRONT_UP_LEFT = eDMStagStencilLocation(25)
    DMStagStencilLocation, parameter :: DMSTAG_FRONT_UP = eDMStagStencilLocation(26)
    DMStagStencilLocation, parameter :: DMSTAG_FRONT_UP_RIGHT = eDMStagStencilLocation(27)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_NULL_LOCATION
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_BACK_DOWN_LEFT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_BACK_DOWN
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_BACK_DOWN_RIGHT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_BACK_LEFT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_BACK
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_BACK_RIGHT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_BACK_UP_LEFT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_BACK_UP
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_BACK_UP_RIGHT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_DOWN_LEFT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_DOWN
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_DOWN_RIGHT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_LEFT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_ELEMENT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_RIGHT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_UP_LEFT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_UP
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_UP_RIGHT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_FRONT_DOWN_LEFT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_FRONT_DOWN
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_FRONT_DOWN_RIGHT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_FRONT_LEFT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_FRONT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_FRONT_RIGHT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_FRONT_UP_LEFT
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_FRONT_UP
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_FRONT_UP_RIGHT
#endif

  type eDMStagStencilType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eDMStagStencilType

  DMStagStencilType, parameter :: PETSC_NULL_DMSTAGSTENCILTYPE = eDMStagStencilType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DMSTAGSTENCILTYPE
#endif
    DMStagStencilType, parameter :: DMSTAG_STENCIL_NONE = eDMStagStencilType(0)
    DMStagStencilType, parameter :: DMSTAG_STENCIL_STAR = eDMStagStencilType(1)
    DMStagStencilType, parameter :: DMSTAG_STENCIL_BOX = eDMStagStencilType(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_STENCIL_NONE
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_STENCIL_STAR
!DEC$ ATTRIBUTES DLLEXPORT::DMSTAG_STENCIL_BOX
#endif

  type sDMStagStencil
    DMStagStencilLocation loc
    PetscInt i, j, k, c
  end type sDMStagStencil

