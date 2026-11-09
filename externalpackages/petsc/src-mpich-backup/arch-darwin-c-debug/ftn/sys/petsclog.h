  type, extends(tPetscObject) ::  tPetscLogHandler
  end type tPetscLogHandler
  PetscLogHandler, parameter :: PETSC_NULL_LOGHANDLER = tPetscLogHandler(0)
  PetscLogHandler, target :: PETSC_NULL_LOGHANDLER_ARRAY(1) = [tPetscLogHandler(0)]
  PetscLogHandler, pointer :: PETSC_NULL_LOGHANDLER_POINTER(:) => PETSC_NULL_LOGHANDLER_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LOGHANDLER
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LOGHANDLER_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LOGHANDLER_POINTER
#endif

  type tPetscLogRegistry
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscLogRegistry
  PetscLogRegistry, parameter :: PETSC_NULL_LOGREGISTRY = tPetscLogRegistry(0)
  PetscLogRegistry, target :: PETSC_NULL_LOGREGISTRY_ARRAY(1) = [tPetscLogRegistry(0)]
  PetscLogRegistry, pointer :: PETSC_NULL_LOGREGISTRY_POINTER(:) => PETSC_NULL_LOGREGISTRY_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LOGREGISTRY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LOGREGISTRY_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LOGREGISTRY_POINTER
#endif

  type tPetscLogState
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscLogState
  PetscLogState, parameter :: PETSC_NULL_LOGSTATE = tPetscLogState(0)
  PetscLogState, target :: PETSC_NULL_LOGSTATE_ARRAY(1) = [tPetscLogState(0)]
  PetscLogState, pointer :: PETSC_NULL_LOGSTATE_POINTER(:) => PETSC_NULL_LOGSTATE_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LOGSTATE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LOGSTATE_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_LOGSTATE_POINTER
#endif

  type ePetscInfoCommFlag
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscInfoCommFlag

  PetscInfoCommFlag, parameter :: PETSC_NULL_INFOCOMMFLAG = ePetscInfoCommFlag(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_INFOCOMMFLAG
#endif
    PetscInfoCommFlag, parameter :: PETSC_INFO_COMM_ALL = ePetscInfoCommFlag(-1)
    PetscInfoCommFlag, parameter :: PETSC_INFO_COMM_NO_SELF = ePetscInfoCommFlag(0)
    PetscInfoCommFlag, parameter :: PETSC_INFO_COMM_ONLY_SELF = ePetscInfoCommFlag(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_INFO_COMM_ALL 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_INFO_COMM_NO_SELF 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_INFO_COMM_ONLY_SELF 
#endif


#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
#endif

