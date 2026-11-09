  type tPetscToken
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscToken
  PetscToken, parameter :: PETSC_NULL_TOKEN = tPetscToken(0)
  PetscToken, target :: PETSC_NULL_TOKEN_ARRAY(1) = [tPetscToken(0)]
  PetscToken, pointer :: PETSC_NULL_TOKEN_POINTER(:) => PETSC_NULL_TOKEN_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_TOKEN
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_TOKEN_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_TOKEN_POINTER
#endif

  type tPetscObject
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscObject
  PetscObject, parameter :: PETSC_NULL_OBJECT = tPetscObject(0)
  PetscObject, target :: PETSC_NULL_OBJECT_ARRAY(1) = [tPetscObject(0)]
  PetscObject, pointer :: PETSC_NULL_OBJECT_POINTER(:) => PETSC_NULL_OBJECT_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OBJECT
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OBJECT_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OBJECT_POINTER
#endif

  type tPetscFunctionList
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscFunctionList
  PetscFunctionList, parameter :: PETSC_NULL_FUNCTIONLIST = tPetscFunctionList(0)
  PetscFunctionList, target :: PETSC_NULL_FUNCTIONLIST_ARRAY(1) = [tPetscFunctionList(0)]
  PetscFunctionList, pointer :: PETSC_NULL_FUNCTIONLIST_POINTER(:) => PETSC_NULL_FUNCTIONLIST_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_FUNCTIONLIST
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_FUNCTIONLIST_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_FUNCTIONLIST_POINTER
#endif

  type tPetscObjectList
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscObjectList
  PetscObjectList, parameter :: PETSC_NULL_OBJECTLIST = tPetscObjectList(0)
  PetscObjectList, target :: PETSC_NULL_OBJECTLIST_ARRAY(1) = [tPetscObjectList(0)]
  PetscObjectList, pointer :: PETSC_NULL_OBJECTLIST_POINTER(:) => PETSC_NULL_OBJECTLIST_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OBJECTLIST
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OBJECTLIST_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OBJECTLIST_POINTER
#endif

  type tPetscDLLibrary
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscDLLibrary
  PetscDLLibrary, parameter :: PETSC_NULL_DLLIBRARY = tPetscDLLibrary(0)
  PetscDLLibrary, target :: PETSC_NULL_DLLIBRARY_ARRAY(1) = [tPetscDLLibrary(0)]
  PetscDLLibrary, pointer :: PETSC_NULL_DLLIBRARY_POINTER(:) => PETSC_NULL_DLLIBRARY_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DLLIBRARY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DLLIBRARY_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DLLIBRARY_POINTER
#endif

  type, extends(tPetscObject) ::  tPetscContainer
  end type tPetscContainer
  PetscContainer, parameter :: PETSC_NULL_CONTAINER = tPetscContainer(0)
  PetscContainer, target :: PETSC_NULL_CONTAINER_ARRAY(1) = [tPetscContainer(0)]
  PetscContainer, pointer :: PETSC_NULL_CONTAINER_POINTER(:) => PETSC_NULL_CONTAINER_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_CONTAINER
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_CONTAINER_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_CONTAINER_POINTER
#endif

  type, extends(tPetscObject) ::  tPetscRandom
  end type tPetscRandom
  PetscRandom, parameter :: PETSC_NULL_RANDOM = tPetscRandom(0)
  PetscRandom, target :: PETSC_NULL_RANDOM_ARRAY(1) = [tPetscRandom(0)]
  PetscRandom, pointer :: PETSC_NULL_RANDOM_POINTER(:) => PETSC_NULL_RANDOM_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_RANDOM
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_RANDOM_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_RANDOM_POINTER
#endif

  type tPetscSubcomm
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscSubcomm
  PetscSubcomm, parameter :: PETSC_NULL_SUBCOMM = tPetscSubcomm(0)
  PetscSubcomm, target :: PETSC_NULL_SUBCOMM_ARRAY(1) = [tPetscSubcomm(0)]
  PetscSubcomm, pointer :: PETSC_NULL_SUBCOMM_POINTER(:) => PETSC_NULL_SUBCOMM_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SUBCOMM
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SUBCOMM_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SUBCOMM_POINTER
#endif

  type tPetscHeap
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscHeap
  PetscHeap, parameter :: PETSC_NULL_HEAP = tPetscHeap(0)
  PetscHeap, target :: PETSC_NULL_HEAP_ARRAY(1) = [tPetscHeap(0)]
  PetscHeap, pointer :: PETSC_NULL_HEAP_POINTER(:) => PETSC_NULL_HEAP_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_HEAP
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_HEAP_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_HEAP_POINTER
#endif

  type tPetscShmComm
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscShmComm
  PetscShmComm, parameter :: PETSC_NULL_SHMCOMM = tPetscShmComm(0)
  PetscShmComm, target :: PETSC_NULL_SHMCOMM_ARRAY(1) = [tPetscShmComm(0)]
  PetscShmComm, pointer :: PETSC_NULL_SHMCOMM_POINTER(:) => PETSC_NULL_SHMCOMM_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SHMCOMM
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SHMCOMM_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SHMCOMM_POINTER
#endif

  type tPetscOmpCtrl
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscOmpCtrl
  PetscOmpCtrl, parameter :: PETSC_NULL_OMPCTRL = tPetscOmpCtrl(0)
  PetscOmpCtrl, target :: PETSC_NULL_OMPCTRL_ARRAY(1) = [tPetscOmpCtrl(0)]
  PetscOmpCtrl, pointer :: PETSC_NULL_OMPCTRL_POINTER(:) => PETSC_NULL_OMPCTRL_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OMPCTRL
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OMPCTRL_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OMPCTRL_POINTER
#endif

  type tPetscSegBuffer
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscSegBuffer
  PetscSegBuffer, parameter :: PETSC_NULL_SEGBUFFER = tPetscSegBuffer(0)
  PetscSegBuffer, target :: PETSC_NULL_SEGBUFFER_ARRAY(1) = [tPetscSegBuffer(0)]
  PetscSegBuffer, pointer :: PETSC_NULL_SEGBUFFER_POINTER(:) => PETSC_NULL_SEGBUFFER_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SEGBUFFER
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SEGBUFFER_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SEGBUFFER_POINTER
#endif

  type tPetscOptionsHelpPrinted
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscOptionsHelpPrinted
  PetscOptionsHelpPrinted, parameter :: PETSC_NULL_OPTIONSHELPPRINTED = tPetscOptionsHelpPrinted(0)
  PetscOptionsHelpPrinted, target :: PETSC_NULL_OPTIONSHELPPRINTED_ARRAY(1) = [tPetscOptionsHelpPrinted(0)]
  PetscOptionsHelpPrinted, pointer :: PETSC_NULL_OPTIONSHELPPRINTED_POINTER(:) => PETSC_NULL_OPTIONSHELPPRINTED_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONSHELPPRINTED
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONSHELPPRINTED_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OPTIONSHELPPRINTED_POINTER
#endif

  type tPetscNull
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscNull
  PetscNull, parameter :: PETSC_NULL = tPetscNull(0)
  PetscNull, target :: PETSC_NULL_ARRAY(1) = [tPetscNull(0)]
  PetscNull, pointer :: PETSC_NULL_POINTER(:) => PETSC_NULL_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_POINTER
#endif

  type ePetscBool3
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscBool3

  PetscBool3, parameter :: PETSC_NULL_BOOL3 = ePetscBool3(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_BOOL3
#endif
    PetscBool3, parameter :: PETSC_BOOL3_FALSE = ePetscBool3(0)
    PetscBool3, parameter :: PETSC_BOOL3_TRUE = ePetscBool3(1)
    PetscBool3, parameter :: PETSC_BOOL3_UNKNOWN = ePetscBool3(-1 )

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BOOL3_FALSE 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BOOL3_TRUE 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BOOL3_UNKNOWN 
#endif

  type ePetscCopyMode
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscCopyMode

  PetscCopyMode, parameter :: PETSC_NULL_COPYMODE = ePetscCopyMode(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_COPYMODE
#endif
    PetscCopyMode, parameter :: PETSC_COPY_VALUES = ePetscCopyMode(0)
    PetscCopyMode, parameter :: PETSC_OWN_POINTER = ePetscCopyMode(1)
    PetscCopyMode, parameter :: PETSC_USE_POINTER = ePetscCopyMode(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_COPY_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OWN_POINTER
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_USE_POINTER
#endif

  type ePetscDataType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscDataType

  PetscDataType, parameter :: PETSC_NULL_DATATYPE = ePetscDataType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DATATYPE
#endif
    PetscDataType, parameter :: PETSC_DATATYPE_UNKNOWN = ePetscDataType(0)
    PetscDataType, parameter :: PETSC_DOUBLE = ePetscDataType(1)
    PetscDataType, parameter :: PETSC_COMPLEX = ePetscDataType(2)
    PetscDataType, parameter :: PETSC_LONG = ePetscDataType(3)
    PetscDataType, parameter :: PETSC_SHORT = ePetscDataType(4)
    PetscDataType, parameter :: PETSC_FLOAT = ePetscDataType(5)
    PetscDataType, parameter :: PETSC_CHAR = ePetscDataType(6)
    PetscDataType, parameter :: PETSC_BIT_LOGICAL = ePetscDataType(7)
    PetscDataType, parameter :: PETSC_ENUM = ePetscDataType(8)
    PetscDataType, parameter :: PETSC_BOOL = ePetscDataType(9)
    PetscDataType, parameter :: PETSC___FLOAT128 = ePetscDataType(10)
    PetscDataType, parameter :: PETSC_OBJECT = ePetscDataType(11)
    PetscDataType, parameter :: PETSC_FUNCTION = ePetscDataType(12)
    PetscDataType, parameter :: PETSC_STRING = ePetscDataType(13)
    PetscDataType, parameter :: PETSC___FP16 = ePetscDataType(14)
    PetscDataType, parameter :: PETSC_STRUCT = ePetscDataType(15)
    PetscDataType, parameter :: PETSC_INT = ePetscDataType(16)
    PetscDataType, parameter :: PETSC_INT64 = ePetscDataType(17)
    PetscDataType, parameter :: PETSC_COUNT = ePetscDataType(18)
    PetscDataType, parameter :: PETSC_INT32 = ePetscDataType(19)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DATATYPE_UNKNOWN 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DOUBLE 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_COMPLEX 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_LONG 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_SHORT 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_FLOAT 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_CHAR 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BIT_LOGICAL 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_ENUM 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BOOL 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC___FLOAT128 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OBJECT 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_FUNCTION 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_STRING 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC___FP16 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_STRUCT 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_INT 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_INT64 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_COUNT 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_INT32 
#endif

  type ePetscFileMode
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscFileMode

  PetscFileMode, parameter :: PETSC_NULL_FILEMODE = ePetscFileMode(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_FILEMODE
#endif
    PetscFileMode, parameter :: FILE_MODE_UNDEFINED = ePetscFileMode(-1)
    PetscFileMode, parameter :: FILE_MODE_READ = ePetscFileMode(0)
    PetscFileMode, parameter :: FILE_MODE_WRITE = ePetscFileMode(1)
    PetscFileMode, parameter :: FILE_MODE_APPEND = ePetscFileMode(2)
    PetscFileMode, parameter :: FILE_MODE_UPDATE = ePetscFileMode(3)
    PetscFileMode, parameter :: FILE_MODE_APPEND_UPDATE = ePetscFileMode(4)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::FILE_MODE_UNDEFINED 
!DEC$ ATTRIBUTES DLLEXPORT::FILE_MODE_READ 
!DEC$ ATTRIBUTES DLLEXPORT::FILE_MODE_WRITE 
!DEC$ ATTRIBUTES DLLEXPORT::FILE_MODE_APPEND 
!DEC$ ATTRIBUTES DLLEXPORT::FILE_MODE_UPDATE 
!DEC$ ATTRIBUTES DLLEXPORT::FILE_MODE_APPEND_UPDATE 
#endif

  type ePetscDLMode
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscDLMode

  PetscDLMode, parameter :: PETSC_NULL_DLMODE = ePetscDLMode(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DLMODE
#endif
    PetscDLMode, parameter :: PETSC_DL_DECIDE = ePetscDLMode(0)
    PetscDLMode, parameter :: PETSC_DL_NOW = ePetscDLMode(1)
    PetscDLMode, parameter :: PETSC_DL_LOCAL = ePetscDLMode(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DL_DECIDE 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DL_NOW 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DL_LOCAL 
#endif

  type ePetscBinarySeekType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscBinarySeekType

  PetscBinarySeekType, parameter :: PETSC_NULL_BINARYSEEKTYPE = ePetscBinarySeekType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_BINARYSEEKTYPE
#endif
    PetscBinarySeekType, parameter :: PETSC_BINARY_SEEK_SET = ePetscBinarySeekType(0)
    PetscBinarySeekType, parameter :: PETSC_BINARY_SEEK_CUR = ePetscBinarySeekType(1)
    PetscBinarySeekType, parameter :: PETSC_BINARY_SEEK_END = ePetscBinarySeekType(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BINARY_SEEK_SET 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BINARY_SEEK_CUR 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BINARY_SEEK_END 
#endif

  type ePetscBuildTwoSidedType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscBuildTwoSidedType

  PetscBuildTwoSidedType, parameter :: PETSC_NULL_BUILDTWOSIDEDTYPE = ePetscBuildTwoSidedType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_BUILDTWOSIDEDTYPE
#endif
    PetscBuildTwoSidedType, parameter :: PETSC_BUILDTWOSIDED_NOTSET = ePetscBuildTwoSidedType(-1)
    PetscBuildTwoSidedType, parameter :: PETSC_BUILDTWOSIDED_ALLREDUCE = ePetscBuildTwoSidedType(0)
    PetscBuildTwoSidedType, parameter :: PETSC_BUILDTWOSIDED_IBARRIER = ePetscBuildTwoSidedType(1)
    PetscBuildTwoSidedType, parameter :: PETSC_BUILDTWOSIDED_REDSCATTER = ePetscBuildTwoSidedType(2 )

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BUILDTWOSIDED_NOTSET 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BUILDTWOSIDED_ALLREDUCE 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BUILDTWOSIDED_IBARRIER 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_BUILDTWOSIDED_REDSCATTER 
#endif

  type eInsertMode
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eInsertMode

  InsertMode, parameter :: PETSC_NULL_INSERTMODE = eInsertMode(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_INSERTMODE
#endif
    InsertMode, parameter :: NOT_SET_VALUES = eInsertMode(0)
    InsertMode, parameter :: INSERT_VALUES = eInsertMode(1)
    InsertMode, parameter :: ADD_VALUES = eInsertMode(2)
    InsertMode, parameter :: MAX_VALUES = eInsertMode(3)
    InsertMode, parameter :: MIN_VALUES = eInsertMode(4)
    InsertMode, parameter :: INSERT_ALL_VALUES = eInsertMode(5)
    InsertMode, parameter :: ADD_ALL_VALUES = eInsertMode(6)
    InsertMode, parameter :: INSERT_BC_VALUES = eInsertMode(7)
    InsertMode, parameter :: ADD_BC_VALUES = eInsertMode(8)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::NOT_SET_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::INSERT_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::ADD_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::MAX_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::MIN_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::INSERT_ALL_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::ADD_ALL_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::INSERT_BC_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::ADD_BC_VALUES
#endif

  type ePetscSubcommType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscSubcommType

  PetscSubcommType, parameter :: PETSC_NULL_SUBCOMMTYPE = ePetscSubcommType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SUBCOMMTYPE
#endif
    PetscSubcommType, parameter :: PETSC_SUBCOMM_GENERAL = ePetscSubcommType(0)
    PetscSubcommType, parameter :: PETSC_SUBCOMM_CONTIGUOUS = ePetscSubcommType(1)
    PetscSubcommType, parameter :: PETSC_SUBCOMM_INTERLACED = ePetscSubcommType(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_SUBCOMM_GENERAL 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_SUBCOMM_CONTIGUOUS 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_SUBCOMM_INTERLACED 
#endif

  CHARACTER(LEN=*), PARAMETER :: PETSCRAND = 'rand'
  CHARACTER(LEN=*), PARAMETER :: PETSCRAND48 = 'rand48'
  CHARACTER(LEN=*), PARAMETER :: PETSCSPRNG = 'sprng'
  CHARACTER(LEN=*), PARAMETER :: PETSCRANDER48 = 'rander48'
  CHARACTER(LEN=*), PARAMETER :: PETSCRANDOM123 = 'random123'
  CHARACTER(LEN=*), PARAMETER :: PETSCCURAND = 'curand'

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSCRAND
!DEC$ ATTRIBUTES DLLEXPORT::PETSCRAND48
!DEC$ ATTRIBUTES DLLEXPORT::PETSCSPRNG
!DEC$ ATTRIBUTES DLLEXPORT::PETSCRANDER48
!DEC$ ATTRIBUTES DLLEXPORT::PETSCRANDOM123
!DEC$ ATTRIBUTES DLLEXPORT::PETSCCURAND
#endif

