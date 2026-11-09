  type tPetscOptions
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscOptions
  PetscOptions, parameter :: PETSC_NULL_OPTIONS = tPetscOptions(0)
  PetscOptions, target :: PETSC_NULL_OPTIONS_ARRAY(1) = [tPetscOptions(0)]
  PetscOptions, pointer :: PETSC_NULL_OPTIONS_POINTER(:) => PETSC_NULL_OPTIONS_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONS
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONS_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONS_POINTER
#endif

  type tPetscOptionItem
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscOptionItem
  PetscOptionItem, parameter :: PETSC_NULL_OPTIONITEM = tPetscOptionItem(0)
  PetscOptionItem, target :: PETSC_NULL_OPTIONITEM_ARRAY(1) = [tPetscOptionItem(0)]
  PetscOptionItem, pointer :: PETSC_NULL_OPTIONITEM_POINTER(:) => PETSC_NULL_OPTIONITEM_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONITEM
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONITEM_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONITEM_POINTER
#endif

  type tPetscOptionItems
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscOptionItems
  PetscOptionItems, parameter :: PETSC_NULL_OPTIONITEMS = tPetscOptionItems(0)
  PetscOptionItems, target :: PETSC_NULL_OPTIONITEMS_ARRAY(1) = [tPetscOptionItems(0)]
  PetscOptionItems, pointer :: PETSC_NULL_OPTIONITEMS_POINTER(:) => PETSC_NULL_OPTIONITEMS_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONITEMS
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONITEMS_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONITEMS_POINTER
#endif

  type ePetscOptionSource
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscOptionSource

  PetscOptionSource, parameter :: PETSC_NULL_OPTIONSOURCE = ePetscOptionSource(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONSOURCE
#endif
    PetscOptionSource, parameter :: PETSC_OPT_CODE = ePetscOptionSource(0)
    PetscOptionSource, parameter :: PETSC_OPT_COMMAND_LINE = ePetscOptionSource(1)
    PetscOptionSource, parameter :: PETSC_OPT_FILE = ePetscOptionSource(2)
    PetscOptionSource, parameter :: PETSC_OPT_ENVIRONMENT = ePetscOptionSource(3)
    PetscOptionSource, parameter :: NUM_PETSC_OPT_SOURCE = ePetscOptionSource(4)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OPT_CODE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OPT_COMMAND_LINE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OPT_FILE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OPT_ENVIRONMENT
!DEC$ ATTRIBUTES DLLEXPORT::NUM_PETSC_OPT_SOURCE
#endif

  type ePetscOptionType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscOptionType

  PetscOptionType, parameter :: PETSC_NULL_OPTIONTYPE = ePetscOptionType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONTYPE
#endif
    PetscOptionType, parameter :: OPTION_INT = ePetscOptionType(0)
    PetscOptionType, parameter :: OPTION_BOOL = ePetscOptionType(1)
    PetscOptionType, parameter :: OPTION_REAL = ePetscOptionType(2)
    PetscOptionType, parameter :: OPTION_FLIST = ePetscOptionType(3)
    PetscOptionType, parameter :: OPTION_STRING = ePetscOptionType(4)
    PetscOptionType, parameter :: OPTION_REAL_ARRAY = ePetscOptionType(5)
    PetscOptionType, parameter :: OPTION_SCALAR_ARRAY = ePetscOptionType(6)
    PetscOptionType, parameter :: OPTION_HEAD = ePetscOptionType(7)
    PetscOptionType, parameter :: OPTION_INT_ARRAY = ePetscOptionType(8)
    PetscOptionType, parameter :: OPTION_ELIST = ePetscOptionType(9)
    PetscOptionType, parameter :: OPTION_BOOL_ARRAY = ePetscOptionType(10)
    PetscOptionType, parameter :: OPTION_STRING_ARRAY = ePetscOptionType(11)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_INT
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_BOOL
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_REAL
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_FLIST
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_STRING
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_REAL_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_SCALAR_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_HEAD
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_INT_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_ELIST
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_BOOL_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::OPTION_STRING_ARRAY
#endif

