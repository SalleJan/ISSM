  type eMoabReadMode
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMoabReadMode

  MoabReadMode, parameter :: PETSC_NULL_MOABREADMODE = eMoabReadMode(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MOABREADMODE
#endif
    MoabReadMode, parameter :: READ_PART = eMoabReadMode(0)
    MoabReadMode, parameter :: READ_DELETE = eMoabReadMode(1)
    MoabReadMode, parameter :: BCAST_DELETE = eMoabReadMode(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::READ_PART
!DEC$ ATTRIBUTES DLLEXPORT::READ_DELETE
!DEC$ ATTRIBUTES DLLEXPORT::BCAST_DELETE
#endif

  type eMoabWriteMode
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMoabWriteMode

  MoabWriteMode, parameter :: PETSC_NULL_MOABWRITEMODE = eMoabWriteMode(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MOABWRITEMODE
#endif
    MoabWriteMode, parameter :: WRITE_PART = eMoabWriteMode(0)
    MoabWriteMode, parameter :: FORMAT = eMoabWriteMode(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::WRITE_PART
!DEC$ ATTRIBUTES DLLEXPORT::FORMAT
#endif

