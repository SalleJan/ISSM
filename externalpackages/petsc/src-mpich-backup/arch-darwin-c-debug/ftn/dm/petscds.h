  type, extends(tPetscObject) ::  tPetscDS
  end type tPetscDS
  PetscDS, parameter :: PETSC_NULL_DS = tPetscDS(0)
  PetscDS, target :: PETSC_NULL_DS_ARRAY(1) = [tPetscDS(0)]
  PetscDS, pointer :: PETSC_NULL_DS_POINTER(:) => PETSC_NULL_DS_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DS
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DS_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DS_POINTER
#endif

  type, extends(tPetscObject) ::  tPetscWeakForm
  end type tPetscWeakForm
  PetscWeakForm, parameter :: PETSC_NULL_WEAKFORM = tPetscWeakForm(0)
  PetscWeakForm, target :: PETSC_NULL_WEAKFORM_ARRAY(1) = [tPetscWeakForm(0)]
  PetscWeakForm, pointer :: PETSC_NULL_WEAKFORM_POINTER(:) => PETSC_NULL_WEAKFORM_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_WEAKFORM
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_WEAKFORM_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_WEAKFORM_POINTER
#endif

  type ePetscWeakFormKind
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscWeakFormKind

  PetscWeakFormKind, parameter :: PETSC_NULL_WEAKFORMKIND = ePetscWeakFormKind(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_WEAKFORMKIND
#endif
    PetscWeakFormKind, parameter :: PETSC_WF_OBJECTIVE = ePetscWeakFormKind(0)
    PetscWeakFormKind, parameter :: PETSC_WF_F0 = ePetscWeakFormKind(1)
    PetscWeakFormKind, parameter :: PETSC_WF_F1 = ePetscWeakFormKind(2)
    PetscWeakFormKind, parameter :: PETSC_WF_G0 = ePetscWeakFormKind(3)
    PetscWeakFormKind, parameter :: PETSC_WF_G1 = ePetscWeakFormKind(4)
    PetscWeakFormKind, parameter :: PETSC_WF_G2 = ePetscWeakFormKind(5)
    PetscWeakFormKind, parameter :: PETSC_WF_G3 = ePetscWeakFormKind(6)
    PetscWeakFormKind, parameter :: PETSC_WF_GP0 = ePetscWeakFormKind(7)
    PetscWeakFormKind, parameter :: PETSC_WF_GP1 = ePetscWeakFormKind(8)
    PetscWeakFormKind, parameter :: PETSC_WF_GP2 = ePetscWeakFormKind(9)
    PetscWeakFormKind, parameter :: PETSC_WF_GP3 = ePetscWeakFormKind(10)
    PetscWeakFormKind, parameter :: PETSC_WF_GT0 = ePetscWeakFormKind(11)
    PetscWeakFormKind, parameter :: PETSC_WF_GT1 = ePetscWeakFormKind(12)
    PetscWeakFormKind, parameter :: PETSC_WF_GT2 = ePetscWeakFormKind(13)
    PetscWeakFormKind, parameter :: PETSC_WF_GT3 = ePetscWeakFormKind(14)
    PetscWeakFormKind, parameter :: PETSC_WF_BDF0 = ePetscWeakFormKind(15)
    PetscWeakFormKind, parameter :: PETSC_WF_BDF1 = ePetscWeakFormKind(16)
    PetscWeakFormKind, parameter :: PETSC_WF_BDG0 = ePetscWeakFormKind(17)
    PetscWeakFormKind, parameter :: PETSC_WF_BDG1 = ePetscWeakFormKind(18)
    PetscWeakFormKind, parameter :: PETSC_WF_BDG2 = ePetscWeakFormKind(19)
    PetscWeakFormKind, parameter :: PETSC_WF_BDG3 = ePetscWeakFormKind(20)
    PetscWeakFormKind, parameter :: PETSC_WF_BDGP0 = ePetscWeakFormKind(21)
    PetscWeakFormKind, parameter :: PETSC_WF_BDGP1 = ePetscWeakFormKind(22)
    PetscWeakFormKind, parameter :: PETSC_WF_BDGP2 = ePetscWeakFormKind(23)
    PetscWeakFormKind, parameter :: PETSC_WF_BDGP3 = ePetscWeakFormKind(24)
    PetscWeakFormKind, parameter :: PETSC_WF_R = ePetscWeakFormKind(25)
    PetscWeakFormKind, parameter :: PETSC_WF_CEED = ePetscWeakFormKind(26)
    PetscWeakFormKind, parameter :: PETSC_NUM_WF = ePetscWeakFormKind(27)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_OBJECTIVE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_F0
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_F1
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_G0
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_G1
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_G2
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_G3
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_GP0
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_GP1
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_GP2
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_GP3
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_GT0
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_GT1
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_GT2
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_GT3
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_BDF0
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_BDF1
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_BDG0
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_BDG1
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_BDG2
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_BDG3
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_BDGP0
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_BDGP1
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_BDGP2
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_BDGP3
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_R
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_WF_CEED
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NUM_WF
#endif

  type ePetscDiscType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscDiscType

  PetscDiscType, parameter :: PETSC_NULL_DISCTYPE = ePetscDiscType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DISCTYPE
#endif
    PetscDiscType, parameter :: PETSC_DISC_NONE = ePetscDiscType(0)
    PetscDiscType, parameter :: PETSC_DISC_FE = ePetscDiscType(1)
    PetscDiscType, parameter :: PETSC_DISC_FV = ePetscDiscType(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DISC_NONE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DISC_FE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_DISC_FV
#endif

  CHARACTER(LEN=*), PARAMETER :: PETSCDSBASIC = 'basic'

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSCDSBASIC
#endif

  type sPetscFormKey
    DMLabel label
    PetscInt value
    PetscInt field
    PetscInt part
  end type sPetscFormKey

