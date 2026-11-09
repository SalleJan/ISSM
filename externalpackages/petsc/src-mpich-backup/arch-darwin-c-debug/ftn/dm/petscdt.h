  type, extends(tPetscObject) ::  tPetscQuadrature
  end type tPetscQuadrature
  PetscQuadrature, parameter :: PETSC_NULL_QUADRATURE = tPetscQuadrature(0)
  PetscQuadrature, target :: PETSC_NULL_QUADRATURE_ARRAY(1) = [tPetscQuadrature(0)]
  PetscQuadrature, pointer :: PETSC_NULL_QUADRATURE_POINTER(:) => PETSC_NULL_QUADRATURE_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_QUADRATURE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_QUADRATURE_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_QUADRATURE_POINTER
#endif

  type ePetscGaussLobattoLegendreCreateType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscGaussLobattoLegendreCreateType

  PetscGaussLobattoLegendreCreateType, parameter :: PETSC_NULL_GAUSSLOBATTOLEGENDRECREATETYPE = ePetscGaussLobattoLegendreCreateType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_GAUSSLOBATTOLEGENDRECREATETYPE
#endif
    PetscGaussLobattoLegendreCreateType, parameter :: PETSCGAUSSLOBATTOLEGENDRE_VIA_LINEAR_ALGEBRA = ePetscGaussLobattoLegendreCreateType(0)
    PetscGaussLobattoLegendreCreateType, parameter :: PETSCGAUSSLOBATTOLEGENDRE_VIA_NEWTON = ePetscGaussLobattoLegendreCreateType(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSCGAUSSLOBATTOLEGENDRE_VIA_LINEAR_ALGEBRA
!DEC$ ATTRIBUTES DLLEXPORT::PETSCGAUSSLOBATTOLEGENDRE_VIA_NEWTON
#endif

  type ePetscDTNodeType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscDTNodeType

  PetscDTNodeType, parameter :: PETSC_NULL_DTNODETYPE = ePetscDTNodeType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DTNODETYPE
#endif
    PetscDTNodeType, parameter :: PETSCDTNODES_DEFAULT = ePetscDTNodeType(-1)
    PetscDTNodeType, parameter :: PETSCDTNODES_GAUSSJACOBI = ePetscDTNodeType(0)
    PetscDTNodeType, parameter :: PETSCDTNODES_EQUISPACED = ePetscDTNodeType(1)
    PetscDTNodeType, parameter :: PETSCDTNODES_TANHSINH = ePetscDTNodeType(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSCDTNODES_DEFAULT 
!DEC$ ATTRIBUTES DLLEXPORT::PETSCDTNODES_GAUSSJACOBI 
!DEC$ ATTRIBUTES DLLEXPORT::PETSCDTNODES_EQUISPACED 
!DEC$ ATTRIBUTES DLLEXPORT::PETSCDTNODES_TANHSINH 
#endif

  type ePetscDTSimplexQuadratureType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type ePetscDTSimplexQuadratureType

  PetscDTSimplexQuadratureType, parameter :: PETSC_NULL_DTSIMPLEXQUADRATURETYPE = ePetscDTSimplexQuadratureType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DTSIMPLEXQUADRATURETYPE
#endif
    PetscDTSimplexQuadratureType, parameter :: PETSCDTSIMPLEXQUAD_DEFAULT = ePetscDTSimplexQuadratureType(-1)
    PetscDTSimplexQuadratureType, parameter :: PETSCDTSIMPLEXQUAD_CONIC = ePetscDTSimplexQuadratureType(0)
    PetscDTSimplexQuadratureType, parameter :: PETSCDTSIMPLEXQUAD_MINSYM = ePetscDTSimplexQuadratureType(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSCDTSIMPLEXQUAD_DEFAULT 
!DEC$ ATTRIBUTES DLLEXPORT::PETSCDTSIMPLEXQUAD_CONIC 
!DEC$ ATTRIBUTES DLLEXPORT::PETSCDTSIMPLEXQUAD_MINSYM 
#endif

  type eDTProbDensityType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eDTProbDensityType

  DTProbDensityType, parameter :: PETSC_NULL_DTPROBDENSITYTYPE = eDTProbDensityType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DTPROBDENSITYTYPE
#endif
    DTProbDensityType, parameter :: DTPROB_DENSITY_CONSTANT = eDTProbDensityType(0)
    DTProbDensityType, parameter :: DTPROB_DENSITY_GAUSSIAN = eDTProbDensityType(1)
    DTProbDensityType, parameter :: DTPROB_DENSITY_MAXWELL_BOLTZMANN = eDTProbDensityType(2)
    DTProbDensityType, parameter :: DTPROB_NUM_DENSITY = eDTProbDensityType(3)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::DTPROB_DENSITY_CONSTANT
!DEC$ ATTRIBUTES DLLEXPORT::DTPROB_DENSITY_GAUSSIAN
!DEC$ ATTRIBUTES DLLEXPORT::DTPROB_DENSITY_MAXWELL_BOLTZMANN
!DEC$ ATTRIBUTES DLLEXPORT::DTPROB_NUM_DENSITY
#endif

