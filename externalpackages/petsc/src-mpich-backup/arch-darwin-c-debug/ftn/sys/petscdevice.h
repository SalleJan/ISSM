  type tPetscDevice
    PetscFortranAddr:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type tPetscDevice
  PetscDevice, parameter :: PETSC_NULL_DEVICE = tPetscDevice(0)
  PetscDevice, target :: PETSC_NULL_DEVICE_ARRAY(1) = [tPetscDevice(0)]
  PetscDevice, pointer :: PETSC_NULL_DEVICE_POINTER(:) => PETSC_NULL_DEVICE_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICE_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICE_POINTER
#endif

  type, extends(tPetscObject) ::  tPetscDeviceContext
  end type tPetscDeviceContext
  PetscDeviceContext, parameter :: PETSC_NULL_DEVICECONTEXT = tPetscDeviceContext(0)
  PetscDeviceContext, target :: PETSC_NULL_DEVICECONTEXT_ARRAY(1) = [tPetscDeviceContext(0)]
  PetscDeviceContext, pointer :: PETSC_NULL_DEVICECONTEXT_POINTER(:) => PETSC_NULL_DEVICECONTEXT_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICECONTEXT
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICECONTEXT_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICECONTEXT_POINTER
#endif

  type ePetscMemType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscMemType

  PetscMemType, parameter :: PETSC_NULL_MEMTYPE = ePetscMemType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MEMTYPE
#endif
    PetscMemType, parameter :: PETSC_MEMTYPE_HOST = ePetscMemType(0)
    PetscMemType, parameter :: PETSC_MEMTYPE_DEVICE = ePetscMemType(1)
    PetscMemType, parameter :: PETSC_MEMTYPE_CUDA = ePetscMemType(1)
    PetscMemType, parameter :: PETSC_MEMTYPE_NVSHMEM = ePetscMemType(17)
    PetscMemType, parameter :: PETSC_MEMTYPE_HIP = ePetscMemType(3)
    PetscMemType, parameter :: PETSC_MEMTYPE_SYCL = ePetscMemType(5 )

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_MEMTYPE_HOST 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_MEMTYPE_DEVICE 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_MEMTYPE_CUDA 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_MEMTYPE_NVSHMEM 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_MEMTYPE_HIP 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_MEMTYPE_SYCL 
#endif

  type ePetscOffloadMask
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscOffloadMask

  PetscOffloadMask, parameter :: PETSC_NULL_OFFLOADMASK = ePetscOffloadMask(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_OFFLOADMASK
#endif
    PetscOffloadMask, parameter :: PETSC_OFFLOAD_UNALLOCATED = ePetscOffloadMask(0)
    PetscOffloadMask, parameter :: PETSC_OFFLOAD_CPU = ePetscOffloadMask(1)
    PetscOffloadMask, parameter :: PETSC_OFFLOAD_GPU = ePetscOffloadMask(2)
    PetscOffloadMask, parameter :: PETSC_OFFLOAD_BOTH = ePetscOffloadMask(3)
    PetscOffloadMask, parameter :: PETSC_OFFLOAD_VECKOKKOS_DEPRECATED = ePetscOffloadMask(256)
    PetscOffloadMask, parameter :: PETSC_OFFLOAD_KOKKOS = ePetscOffloadMask(256 )

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OFFLOAD_UNALLOCATED 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OFFLOAD_CPU 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OFFLOAD_GPU 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OFFLOAD_BOTH 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OFFLOAD_VECKOKKOS_DEPRECATED 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_OFFLOAD_KOKKOS 
#endif

  type ePetscDeviceInitType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscDeviceInitType

  PetscDeviceInitType, parameter :: PETSC_NULL_DEVICEINITTYPE = ePetscDeviceInitType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICEINITTYPE
#endif
    PetscDeviceInitType, parameter :: PETSC_DEVICE_INIT_NONE = ePetscDeviceInitType(0)
    PetscDeviceInitType, parameter :: PETSC_DEVICE_INIT_LAZY = ePetscDeviceInitType(1)
    PetscDeviceInitType, parameter :: PETSC_DEVICE_INIT_EAGER = ePetscDeviceInitType(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_INIT_NONE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_INIT_LAZY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_INIT_EAGER
#endif

  type ePetscDeviceType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscDeviceType

  PetscDeviceType, parameter :: PETSC_NULL_DEVICETYPE = ePetscDeviceType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICETYPE
#endif
    PetscDeviceType, parameter :: PETSC_DEVICE_HOST = ePetscDeviceType(0)
    PetscDeviceType, parameter :: PETSC_DEVICE_CUDA = ePetscDeviceType(1)
    PetscDeviceType, parameter :: PETSC_DEVICE_HIP = ePetscDeviceType(2)
    PetscDeviceType, parameter :: PETSC_DEVICE_SYCL = ePetscDeviceType(3)
    PetscDeviceType, parameter :: PETSC_DEVICE_MAX = ePetscDeviceType(4)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_HOST
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_CUDA
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_HIP
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_SYCL
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_MAX
#endif

  type ePetscDeviceAttribute
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscDeviceAttribute

  PetscDeviceAttribute, parameter :: PETSC_NULL_DEVICEATTRIBUTE = ePetscDeviceAttribute(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICEATTRIBUTE
#endif
    PetscDeviceAttribute, parameter :: PETSC_DEVICE_ATTR_SIZE_T_SHARED_MEM_PER_BLOCK = ePetscDeviceAttribute(0)
    PetscDeviceAttribute, parameter :: PETSC_DEVICE_ATTR_MAX = ePetscDeviceAttribute(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_ATTR_SIZE_T_SHARED_MEM_PER_BLOCK
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_ATTR_MAX
#endif

  type ePetscStreamType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscStreamType

  PetscStreamType, parameter :: PETSC_NULL_STREAMTYPE = ePetscStreamType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_STREAMTYPE
#endif
    PetscStreamType, parameter :: PETSC_STREAM_DEFAULT = ePetscStreamType(0)
    PetscStreamType, parameter :: PETSC_STREAM_NONBLOCKING = ePetscStreamType(1)
    PetscStreamType, parameter :: PETSC_STREAM_DEFAULT_WITH_BARRIER = ePetscStreamType(2)
    PetscStreamType, parameter :: PETSC_STREAM_NONBLOCKING_WITH_BARRIER = ePetscStreamType(3)
    PetscStreamType, parameter :: PETSC_STREAM_MAX = ePetscStreamType(4)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_STREAM_DEFAULT
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_STREAM_NONBLOCKING
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_STREAM_DEFAULT_WITH_BARRIER
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_STREAM_NONBLOCKING_WITH_BARRIER
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_STREAM_MAX
#endif

  type ePetscDeviceContextJoinMode
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscDeviceContextJoinMode

  PetscDeviceContextJoinMode, parameter :: PETSC_NULL_DEVICECONTEXTJOINMODE = ePetscDeviceContextJoinMode(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICECONTEXTJOINMODE
#endif
    PetscDeviceContextJoinMode, parameter :: PETSC_DEVICE_CONTEXT_JOIN_DESTROY = ePetscDeviceContextJoinMode(0)
    PetscDeviceContextJoinMode, parameter :: PETSC_DEVICE_CONTEXT_JOIN_SYNC = ePetscDeviceContextJoinMode(1)
    PetscDeviceContextJoinMode, parameter :: PETSC_DEVICE_CONTEXT_JOIN_NO_SYNC = ePetscDeviceContextJoinMode(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_CONTEXT_JOIN_DESTROY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_CONTEXT_JOIN_SYNC
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_CONTEXT_JOIN_NO_SYNC
#endif

  type ePetscDeviceCopyMode
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscDeviceCopyMode

  PetscDeviceCopyMode, parameter :: PETSC_NULL_DEVICECOPYMODE = ePetscDeviceCopyMode(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DEVICECOPYMODE
#endif
    PetscDeviceCopyMode, parameter :: PETSC_DEVICE_COPY_HTOH = ePetscDeviceCopyMode(0)
    PetscDeviceCopyMode, parameter :: PETSC_DEVICE_COPY_DTOH = ePetscDeviceCopyMode(1)
    PetscDeviceCopyMode, parameter :: PETSC_DEVICE_COPY_HTOD = ePetscDeviceCopyMode(2)
    PetscDeviceCopyMode, parameter :: PETSC_DEVICE_COPY_DTOD = ePetscDeviceCopyMode(3)
    PetscDeviceCopyMode, parameter :: PETSC_DEVICE_COPY_AUTO = ePetscDeviceCopyMode(4)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_COPY_HTOH
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_COPY_DTOH
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_COPY_HTOD
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_COPY_DTOD
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DEVICE_COPY_AUTO
#endif

  type ePetscMemoryAccessMode
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscMemoryAccessMode

  PetscMemoryAccessMode, parameter :: PETSC_NULL_MEMORYACCESSMODE = ePetscMemoryAccessMode(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MEMORYACCESSMODE
#endif
    PetscMemoryAccessMode, parameter :: PETSC_MEMORY_ACCESS_READ = ePetscMemoryAccessMode(1)
    PetscMemoryAccessMode, parameter :: PETSC_MEMORY_ACCESS_WRITE = ePetscMemoryAccessMode(2)
    PetscMemoryAccessMode, parameter :: PETSC_MEMORY_ACCESS_READ_WRITE = ePetscMemoryAccessMode(3 )

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_MEMORY_ACCESS_READ 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_MEMORY_ACCESS_WRITE 
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_MEMORY_ACCESS_READ_WRITE 
#endif

