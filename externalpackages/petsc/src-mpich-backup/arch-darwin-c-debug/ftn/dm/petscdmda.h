  type eDMDAStencilType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eDMDAStencilType

  DMDAStencilType, parameter :: PETSC_NULL_DMDASTENCILTYPE = eDMDAStencilType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DMDASTENCILTYPE
#endif
    DMDAStencilType, parameter :: DMDA_STENCIL_STAR = eDMDAStencilType(0)
    DMDAStencilType, parameter :: DMDA_STENCIL_BOX = eDMDAStencilType(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::DMDA_STENCIL_STAR
!DEC$ ATTRIBUTES DLLEXPORT::DMDA_STENCIL_BOX
#endif

  type eDMDAInterpolationType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eDMDAInterpolationType

  DMDAInterpolationType, parameter :: PETSC_NULL_DMDAINTERPOLATIONTYPE = eDMDAInterpolationType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DMDAINTERPOLATIONTYPE
#endif
    DMDAInterpolationType, parameter :: DMDA_Q0 = eDMDAInterpolationType(0)
    DMDAInterpolationType, parameter :: DMDA_Q1 = eDMDAInterpolationType(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::DMDA_Q0
!DEC$ ATTRIBUTES DLLEXPORT::DMDA_Q1
#endif

  type eDMDAElementType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eDMDAElementType

  DMDAElementType, parameter :: PETSC_NULL_DMDAELEMENTTYPE = eDMDAElementType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_DMDAELEMENTTYPE
#endif
    DMDAElementType, parameter :: DMDA_ELEMENT_P1 = eDMDAElementType(0)
    DMDAElementType, parameter :: DMDA_ELEMENT_Q1 = eDMDAElementType(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::DMDA_ELEMENT_P1
!DEC$ ATTRIBUTES DLLEXPORT::DMDA_ELEMENT_Q1
#endif

  type sDMDALocalInfo
    DM da
    PetscInt dim, dof, sw
    PetscInt mx, my, mz
    PetscInt xs, ys, zs
    PetscInt xm, ym, zm
    PetscInt gxs, gys, gzs
    PetscInt gxm, gym, gzm
    DMBoundaryType bx, by, bz
    DMDAStencilType st
  end type sDMDALocalInfo

  type sDMDACoor
    PetscScalar x, y, z
  end type sDMDACoor

