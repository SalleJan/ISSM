  type, extends(tPetscObject) ::  tMat
  end type tMat
  Mat, parameter :: PETSC_NULL_MAT = tMat(0)
  Mat, target :: PETSC_NULL_MAT_ARRAY(1) = [tMat(0)]
  Mat, pointer :: PETSC_NULL_MAT_POINTER(:) => PETSC_NULL_MAT_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MAT
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MAT_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MAT_POINTER
#endif

  type, extends(tPetscObject) ::  tMatColoring
  end type tMatColoring
  MatColoring, parameter :: PETSC_NULL_MATCOLORING = tMatColoring(0)
  MatColoring, target :: PETSC_NULL_MATCOLORING_ARRAY(1) = [tMatColoring(0)]
  MatColoring, pointer :: PETSC_NULL_MATCOLORING_POINTER(:) => PETSC_NULL_MATCOLORING_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATCOLORING
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATCOLORING_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATCOLORING_POINTER
#endif

  type, extends(tPetscObject) ::  tMatFDColoring
  end type tMatFDColoring
  MatFDColoring, parameter :: PETSC_NULL_MATFDCOLORING = tMatFDColoring(0)
  MatFDColoring, target :: PETSC_NULL_MATFDCOLORING_ARRAY(1) = [tMatFDColoring(0)]
  MatFDColoring, pointer :: PETSC_NULL_MATFDCOLORING_POINTER(:) => PETSC_NULL_MATFDCOLORING_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATFDCOLORING
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATFDCOLORING_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATFDCOLORING_POINTER
#endif

  type, extends(tPetscObject) ::  tMatTransposeColoring
  end type tMatTransposeColoring
  MatTransposeColoring, parameter :: PETSC_NULL_MATTRANSPOSECOLORING = tMatTransposeColoring(0)
  MatTransposeColoring, target :: PETSC_NULL_MATTRANSPOSECOLORING_ARRAY(1) = [tMatTransposeColoring(0)]
  MatTransposeColoring, pointer :: PETSC_NULL_MATTRANSPOSECOLORING_POINTER(:) => PETSC_NULL_MATTRANSPOSECOLORING_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATTRANSPOSECOLORING
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATTRANSPOSECOLORING_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATTRANSPOSECOLORING_POINTER
#endif

  type, extends(tPetscObject) ::  tMatPartitioning
  end type tMatPartitioning
  MatPartitioning, parameter :: PETSC_NULL_MATPARTITIONING = tMatPartitioning(0)
  MatPartitioning, target :: PETSC_NULL_MATPARTITIONING_ARRAY(1) = [tMatPartitioning(0)]
  MatPartitioning, pointer :: PETSC_NULL_MATPARTITIONING_POINTER(:) => PETSC_NULL_MATPARTITIONING_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATPARTITIONING
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATPARTITIONING_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATPARTITIONING_POINTER
#endif

  type, extends(tPetscObject) ::  tMatNullSpace
  end type tMatNullSpace
  MatNullSpace, parameter :: PETSC_NULL_MATNULLSPACE = tMatNullSpace(0)
  MatNullSpace, target :: PETSC_NULL_MATNULLSPACE_ARRAY(1) = [tMatNullSpace(0)]
  MatNullSpace, pointer :: PETSC_NULL_MATNULLSPACE_POINTER(:) => PETSC_NULL_MATNULLSPACE_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATNULLSPACE
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATNULLSPACE_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATNULLSPACE_POINTER
#endif

  type, extends(tPetscObject) ::  tMatMFFD
  end type tMatMFFD
  MatMFFD, parameter :: PETSC_NULL_MATMFFD = tMatMFFD(0)
  MatMFFD, target :: PETSC_NULL_MATMFFD_ARRAY(1) = [tMatMFFD(0)]
  MatMFFD, pointer :: PETSC_NULL_MATMFFD_POINTER(:) => PETSC_NULL_MATMFFD_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATMFFD
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATMFFD_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATMFFD_POINTER
#endif

  type eMatFactorType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatFactorType

  MatFactorType, parameter :: PETSC_NULL_MATFACTORTYPE = eMatFactorType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATFACTORTYPE
#endif
    MatFactorType, parameter :: MAT_FACTOR_NONE = eMatFactorType(0)
    MatFactorType, parameter :: MAT_FACTOR_LU = eMatFactorType(1)
    MatFactorType, parameter :: MAT_FACTOR_CHOLESKY = eMatFactorType(2)
    MatFactorType, parameter :: MAT_FACTOR_ILU = eMatFactorType(3)
    MatFactorType, parameter :: MAT_FACTOR_ICC = eMatFactorType(4)
    MatFactorType, parameter :: MAT_FACTOR_ILUDT = eMatFactorType(5)
    MatFactorType, parameter :: MAT_FACTOR_QR = eMatFactorType(6)
    MatFactorType, parameter :: MAT_FACTOR_NUM_TYPES = eMatFactorType(7)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_NONE
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_LU
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_CHOLESKY
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_ILU
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_ICC
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_ILUDT
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_QR
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_NUM_TYPES
#endif

  type eMatProductType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatProductType

  MatProductType, parameter :: PETSC_NULL_MATPRODUCTTYPE = eMatProductType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATPRODUCTTYPE
#endif
    MatProductType, parameter :: MATPRODUCT_UNSPECIFIED = eMatProductType(0)
    MatProductType, parameter :: MATPRODUCT_AB = eMatProductType(1)
    MatProductType, parameter :: MATPRODUCT_AtB = eMatProductType(2)
    MatProductType, parameter :: MATPRODUCT_ABt = eMatProductType(3)
    MatProductType, parameter :: MATPRODUCT_PtAP = eMatProductType(4)
    MatProductType, parameter :: MATPRODUCT_RARt = eMatProductType(5)
    MatProductType, parameter :: MATPRODUCT_ABC = eMatProductType(6)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCT_UNSPECIFIED
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCT_AB
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCT_AtB
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCT_ABt
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCT_PtAP
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCT_RARt
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCT_ABC
#endif

  type eMatReuse
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatReuse

  MatReuse, parameter :: PETSC_NULL_MATREUSE = eMatReuse(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATREUSE
#endif
    MatReuse, parameter :: MAT_INITIAL_MATRIX = eMatReuse(0)
    MatReuse, parameter :: MAT_REUSE_MATRIX = eMatReuse(1)
    MatReuse, parameter :: MAT_IGNORE_MATRIX = eMatReuse(2)
    MatReuse, parameter :: MAT_INPLACE_MATRIX = eMatReuse(3)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_INITIAL_MATRIX
!DEC$ ATTRIBUTES DLLEXPORT::MAT_REUSE_MATRIX
!DEC$ ATTRIBUTES DLLEXPORT::MAT_IGNORE_MATRIX
!DEC$ ATTRIBUTES DLLEXPORT::MAT_INPLACE_MATRIX
#endif

  type eMatCreateSubMatrixOption
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatCreateSubMatrixOption

  MatCreateSubMatrixOption, parameter :: PETSC_NULL_MATCREATESUBMATRIXOPTION = eMatCreateSubMatrixOption(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATCREATESUBMATRIXOPTION
#endif
    MatCreateSubMatrixOption, parameter :: MAT_DO_NOT_GET_VALUES = eMatCreateSubMatrixOption(0)
    MatCreateSubMatrixOption, parameter :: MAT_GET_VALUES = eMatCreateSubMatrixOption(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_DO_NOT_GET_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::MAT_GET_VALUES
#endif

  type eMatStructure
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatStructure

  MatStructure, parameter :: PETSC_NULL_MATSTRUCTURE = eMatStructure(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATSTRUCTURE
#endif
    MatStructure, parameter :: DIFFERENT_NONZERO_PATTERN = eMatStructure(0)
    MatStructure, parameter :: SUBSET_NONZERO_PATTERN = eMatStructure(1)
    MatStructure, parameter :: SAME_NONZERO_PATTERN = eMatStructure(2)
    MatStructure, parameter :: UNKNOWN_NONZERO_PATTERN = eMatStructure(3)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::DIFFERENT_NONZERO_PATTERN
!DEC$ ATTRIBUTES DLLEXPORT::SUBSET_NONZERO_PATTERN
!DEC$ ATTRIBUTES DLLEXPORT::SAME_NONZERO_PATTERN
!DEC$ ATTRIBUTES DLLEXPORT::UNKNOWN_NONZERO_PATTERN
#endif

  type eMatCompositeMergeType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatCompositeMergeType

  MatCompositeMergeType, parameter :: PETSC_NULL_MATCOMPOSITEMERGETYPE = eMatCompositeMergeType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATCOMPOSITEMERGETYPE
#endif
    MatCompositeMergeType, parameter :: MAT_COMPOSITE_MERGE_RIGHT = eMatCompositeMergeType(0)
    MatCompositeMergeType, parameter :: MAT_COMPOSITE_MERGE_LEFT = eMatCompositeMergeType(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_COMPOSITE_MERGE_RIGHT
!DEC$ ATTRIBUTES DLLEXPORT::MAT_COMPOSITE_MERGE_LEFT
#endif

  type eMatCompositeType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatCompositeType

  MatCompositeType, parameter :: PETSC_NULL_MATCOMPOSITETYPE = eMatCompositeType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATCOMPOSITETYPE
#endif
    MatCompositeType, parameter :: MAT_COMPOSITE_ADDITIVE = eMatCompositeType(0)
    MatCompositeType, parameter :: MAT_COMPOSITE_MULTIPLICATIVE = eMatCompositeType(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_COMPOSITE_ADDITIVE
!DEC$ ATTRIBUTES DLLEXPORT::MAT_COMPOSITE_MULTIPLICATIVE
#endif

  type eMatAssemblyType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatAssemblyType

  MatAssemblyType, parameter :: PETSC_NULL_MATASSEMBLYTYPE = eMatAssemblyType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATASSEMBLYTYPE
#endif
    MatAssemblyType, parameter :: MAT_FLUSH_ASSEMBLY = eMatAssemblyType(1)
    MatAssemblyType, parameter :: MAT_FINAL_ASSEMBLY = eMatAssemblyType(0)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FLUSH_ASSEMBLY 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FINAL_ASSEMBLY 
#endif

  type eMatOption
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatOption

  MatOption, parameter :: PETSC_NULL_MATOPTION = eMatOption(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATOPTION
#endif
    MatOption, parameter :: MAT_OPTION_MIN = eMatOption(-3)
    MatOption, parameter :: MAT_UNUSED_NONZERO_LOCATION_ERR = eMatOption(-2)
    MatOption, parameter :: MAT_ROW_ORIENTED = eMatOption(-1)
    MatOption, parameter :: MAT_SYMMETRIC = eMatOption(1)
    MatOption, parameter :: MAT_STRUCTURALLY_SYMMETRIC = eMatOption(2)
    MatOption, parameter :: MAT_FORCE_DIAGONAL_ENTRIES = eMatOption(3)
    MatOption, parameter :: MAT_IGNORE_OFF_PROC_ENTRIES = eMatOption(4)
    MatOption, parameter :: MAT_USE_HASH_TABLE = eMatOption(5)
    MatOption, parameter :: MAT_KEEP_NONZERO_PATTERN = eMatOption(6)
    MatOption, parameter :: MAT_IGNORE_ZERO_ENTRIES = eMatOption(7)
    MatOption, parameter :: MAT_USE_INODES = eMatOption(8)
    MatOption, parameter :: MAT_HERMITIAN = eMatOption(9)
    MatOption, parameter :: MAT_SYMMETRY_ETERNAL = eMatOption(10)
    MatOption, parameter :: MAT_NEW_NONZERO_LOCATION_ERR = eMatOption(11)
    MatOption, parameter :: MAT_IGNORE_LOWER_TRIANGULAR = eMatOption(12)
    MatOption, parameter :: MAT_ERROR_LOWER_TRIANGULAR = eMatOption(13)
    MatOption, parameter :: MAT_GETROW_UPPERTRIANGULAR = eMatOption(14)
    MatOption, parameter :: MAT_SPD = eMatOption(15)
    MatOption, parameter :: MAT_NO_OFF_PROC_ZERO_ROWS = eMatOption(16)
    MatOption, parameter :: MAT_NO_OFF_PROC_ENTRIES = eMatOption(17)
    MatOption, parameter :: MAT_NEW_NONZERO_LOCATIONS = eMatOption(18)
    MatOption, parameter :: MAT_NEW_NONZERO_ALLOCATION_ERR = eMatOption(19)
    MatOption, parameter :: MAT_SUBSET_OFF_PROC_ENTRIES = eMatOption(20)
    MatOption, parameter :: MAT_SUBMAT_SINGLEIS = eMatOption(21)
    MatOption, parameter :: MAT_STRUCTURE_ONLY = eMatOption(22)
    MatOption, parameter :: MAT_SORTED_FULL = eMatOption(23)
    MatOption, parameter :: MAT_FORM_EXPLICIT_TRANSPOSE = eMatOption(24)
    MatOption, parameter :: MAT_STRUCTURAL_SYMMETRY_ETERNAL = eMatOption(25)
    MatOption, parameter :: MAT_SPD_ETERNAL = eMatOption(26)
    MatOption, parameter :: MAT_OPTION_MAX = eMatOption(27)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_OPTION_MIN 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_UNUSED_NONZERO_LOCATION_ERR 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_ROW_ORIENTED 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SYMMETRIC 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUCTURALLY_SYMMETRIC 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FORCE_DIAGONAL_ENTRIES 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_IGNORE_OFF_PROC_ENTRIES 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_USE_HASH_TABLE 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_KEEP_NONZERO_PATTERN 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_IGNORE_ZERO_ENTRIES 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_USE_INODES 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HERMITIAN 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SYMMETRY_ETERNAL 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_NEW_NONZERO_LOCATION_ERR 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_IGNORE_LOWER_TRIANGULAR 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_ERROR_LOWER_TRIANGULAR 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_GETROW_UPPERTRIANGULAR 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SPD 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_NO_OFF_PROC_ZERO_ROWS 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_NO_OFF_PROC_ENTRIES 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_NEW_NONZERO_LOCATIONS 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_NEW_NONZERO_ALLOCATION_ERR 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SUBSET_OFF_PROC_ENTRIES 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SUBMAT_SINGLEIS 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUCTURE_ONLY 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SORTED_FULL 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FORM_EXPLICIT_TRANSPOSE 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUCTURAL_SYMMETRY_ETERNAL 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SPD_ETERNAL 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_OPTION_MAX 
#endif

  type eMatDuplicateOption
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatDuplicateOption

  MatDuplicateOption, parameter :: PETSC_NULL_MATDUPLICATEOPTION = eMatDuplicateOption(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATDUPLICATEOPTION
#endif
    MatDuplicateOption, parameter :: MAT_DO_NOT_COPY_VALUES = eMatDuplicateOption(0)
    MatDuplicateOption, parameter :: MAT_COPY_VALUES = eMatDuplicateOption(1)
    MatDuplicateOption, parameter :: MAT_SHARE_NONZERO_PATTERN = eMatDuplicateOption(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_DO_NOT_COPY_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::MAT_COPY_VALUES
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SHARE_NONZERO_PATTERN
#endif

  type eMatInfoType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatInfoType

  MatInfoType, parameter :: PETSC_NULL_MATINFOTYPE = eMatInfoType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATINFOTYPE
#endif
    MatInfoType, parameter :: MAT_LOCAL = eMatInfoType(1)
    MatInfoType, parameter :: MAT_GLOBAL_MAX = eMatInfoType(2)
    MatInfoType, parameter :: MAT_GLOBAL_SUM = eMatInfoType(3)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_LOCAL 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_GLOBAL_MAX 
!DEC$ ATTRIBUTES DLLEXPORT::MAT_GLOBAL_SUM 
#endif

  type eMatFactorShiftType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatFactorShiftType

  MatFactorShiftType, parameter :: PETSC_NULL_MATFACTORSHIFTTYPE = eMatFactorShiftType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATFACTORSHIFTTYPE
#endif
    MatFactorShiftType, parameter :: MAT_SHIFT_NONE = eMatFactorShiftType(0)
    MatFactorShiftType, parameter :: MAT_SHIFT_NONZERO = eMatFactorShiftType(1)
    MatFactorShiftType, parameter :: MAT_SHIFT_POSITIVE_DEFINITE = eMatFactorShiftType(2)
    MatFactorShiftType, parameter :: MAT_SHIFT_INBLOCKS = eMatFactorShiftType(3)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SHIFT_NONE
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SHIFT_NONZERO
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SHIFT_POSITIVE_DEFINITE
!DEC$ ATTRIBUTES DLLEXPORT::MAT_SHIFT_INBLOCKS
#endif

  type eMatFactorError
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatFactorError

  MatFactorError, parameter :: PETSC_NULL_MATFACTORERROR = eMatFactorError(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATFACTORERROR
#endif
    MatFactorError, parameter :: MAT_FACTOR_NOERROR = eMatFactorError(0)
    MatFactorError, parameter :: MAT_FACTOR_STRUCT_ZEROPIVOT = eMatFactorError(1)
    MatFactorError, parameter :: MAT_FACTOR_NUMERIC_ZEROPIVOT = eMatFactorError(2)
    MatFactorError, parameter :: MAT_FACTOR_OUTMEMORY = eMatFactorError(3)
    MatFactorError, parameter :: MAT_FACTOR_OTHER = eMatFactorError(4)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_NOERROR
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_STRUCT_ZEROPIVOT
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_NUMERIC_ZEROPIVOT
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_OUTMEMORY
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_OTHER
#endif

  type eMatFactorSchurStatus
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatFactorSchurStatus

  MatFactorSchurStatus, parameter :: PETSC_NULL_MATFACTORSCHURSTATUS = eMatFactorSchurStatus(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATFACTORSCHURSTATUS
#endif
    MatFactorSchurStatus, parameter :: MAT_FACTOR_SCHUR_UNFACTORED = eMatFactorSchurStatus(0)
    MatFactorSchurStatus, parameter :: MAT_FACTOR_SCHUR_FACTORED = eMatFactorSchurStatus(1)
    MatFactorSchurStatus, parameter :: MAT_FACTOR_SCHUR_INVERTED = eMatFactorSchurStatus(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_SCHUR_UNFACTORED
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_SCHUR_FACTORED
!DEC$ ATTRIBUTES DLLEXPORT::MAT_FACTOR_SCHUR_INVERTED
#endif

  type eMatSORType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatSORType

  MatSORType, parameter :: PETSC_NULL_MATSORTYPE = eMatSORType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATSORTYPE
#endif
    MatSORType, parameter :: SOR_FORWARD_SWEEP = eMatSORType(1)
    MatSORType, parameter :: SOR_BACKWARD_SWEEP = eMatSORType(2)
    MatSORType, parameter :: SOR_SYMMETRIC_SWEEP = eMatSORType(3)
    MatSORType, parameter :: SOR_LOCAL_FORWARD_SWEEP = eMatSORType(4)
    MatSORType, parameter :: SOR_LOCAL_BACKWARD_SWEEP = eMatSORType(8)
    MatSORType, parameter :: SOR_LOCAL_SYMMETRIC_SWEEP = eMatSORType(12)
    MatSORType, parameter :: SOR_ZERO_INITIAL_GUESS = eMatSORType(16)
    MatSORType, parameter :: SOR_EISENSTAT = eMatSORType(32)
    MatSORType, parameter :: SOR_APPLY_UPPER = eMatSORType(64)
    MatSORType, parameter :: SOR_APPLY_LOWER = eMatSORType(128)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::SOR_FORWARD_SWEEP 
!DEC$ ATTRIBUTES DLLEXPORT::SOR_BACKWARD_SWEEP 
!DEC$ ATTRIBUTES DLLEXPORT::SOR_SYMMETRIC_SWEEP 
!DEC$ ATTRIBUTES DLLEXPORT::SOR_LOCAL_FORWARD_SWEEP 
!DEC$ ATTRIBUTES DLLEXPORT::SOR_LOCAL_BACKWARD_SWEEP 
!DEC$ ATTRIBUTES DLLEXPORT::SOR_LOCAL_SYMMETRIC_SWEEP 
!DEC$ ATTRIBUTES DLLEXPORT::SOR_ZERO_INITIAL_GUESS 
!DEC$ ATTRIBUTES DLLEXPORT::SOR_EISENSTAT 
!DEC$ ATTRIBUTES DLLEXPORT::SOR_APPLY_UPPER 
!DEC$ ATTRIBUTES DLLEXPORT::SOR_APPLY_LOWER 
#endif

  type eMatColoringWeightType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatColoringWeightType

  MatColoringWeightType, parameter :: PETSC_NULL_MATCOLORINGWEIGHTTYPE = eMatColoringWeightType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATCOLORINGWEIGHTTYPE
#endif
    MatColoringWeightType, parameter :: MAT_COLORING_WEIGHT_RANDOM = eMatColoringWeightType(0)
    MatColoringWeightType, parameter :: MAT_COLORING_WEIGHT_LEXICAL = eMatColoringWeightType(1)
    MatColoringWeightType, parameter :: MAT_COLORING_WEIGHT_LF = eMatColoringWeightType(2)
    MatColoringWeightType, parameter :: MAT_COLORING_WEIGHT_SL = eMatColoringWeightType(3)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_COLORING_WEIGHT_RANDOM
!DEC$ ATTRIBUTES DLLEXPORT::MAT_COLORING_WEIGHT_LEXICAL
!DEC$ ATTRIBUTES DLLEXPORT::MAT_COLORING_WEIGHT_LF
!DEC$ ATTRIBUTES DLLEXPORT::MAT_COLORING_WEIGHT_SL
#endif

  type eMPChacoGlobalType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMPChacoGlobalType

  MPChacoGlobalType, parameter :: PETSC_NULL_MPCHACOGLOBALTYPE = eMPChacoGlobalType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MPCHACOGLOBALTYPE
#endif
    MPChacoGlobalType, parameter :: MP_CHACO_MULTILEVEL = eMPChacoGlobalType(1)
    MPChacoGlobalType, parameter :: MP_CHACO_SPECTRAL = eMPChacoGlobalType(2)
    MPChacoGlobalType, parameter :: MP_CHACO_LINEAR = eMPChacoGlobalType(4)
    MPChacoGlobalType, parameter :: MP_CHACO_RANDOM = eMPChacoGlobalType(5)
    MPChacoGlobalType, parameter :: MP_CHACO_SCATTERED = eMPChacoGlobalType(6)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MP_CHACO_MULTILEVEL 
!DEC$ ATTRIBUTES DLLEXPORT::MP_CHACO_SPECTRAL 
!DEC$ ATTRIBUTES DLLEXPORT::MP_CHACO_LINEAR 
!DEC$ ATTRIBUTES DLLEXPORT::MP_CHACO_RANDOM 
!DEC$ ATTRIBUTES DLLEXPORT::MP_CHACO_SCATTERED 
#endif

  type eMPChacoLocalType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMPChacoLocalType

  MPChacoLocalType, parameter :: PETSC_NULL_MPCHACOLOCALTYPE = eMPChacoLocalType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MPCHACOLOCALTYPE
#endif
    MPChacoLocalType, parameter :: MP_CHACO_KERNIGHAN = eMPChacoLocalType(1)
    MPChacoLocalType, parameter :: MP_CHACO_NONE = eMPChacoLocalType(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MP_CHACO_KERNIGHAN 
!DEC$ ATTRIBUTES DLLEXPORT::MP_CHACO_NONE 
#endif

  type eMPChacoEigenType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMPChacoEigenType

  MPChacoEigenType, parameter :: PETSC_NULL_MPCHACOEIGENTYPE = eMPChacoEigenType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MPCHACOEIGENTYPE
#endif
    MPChacoEigenType, parameter :: MP_CHACO_LANCZOS = eMPChacoEigenType(0)
    MPChacoEigenType, parameter :: MP_CHACO_RQI = eMPChacoEigenType(1)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MP_CHACO_LANCZOS 
!DEC$ ATTRIBUTES DLLEXPORT::MP_CHACO_RQI 
#endif

  type eMPPTScotchStrategyType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMPPTScotchStrategyType

  MPPTScotchStrategyType, parameter :: PETSC_NULL_MPPTSCOTCHSTRATEGYTYPE = eMPPTScotchStrategyType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MPPTSCOTCHSTRATEGYTYPE
#endif
    MPPTScotchStrategyType, parameter :: MP_PTSCOTCH_DEFAULT = eMPPTScotchStrategyType(0)
    MPPTScotchStrategyType, parameter :: MP_PTSCOTCH_QUALITY = eMPPTScotchStrategyType(1)
    MPPTScotchStrategyType, parameter :: MP_PTSCOTCH_SPEED = eMPPTScotchStrategyType(2)
    MPPTScotchStrategyType, parameter :: MP_PTSCOTCH_BALANCE = eMPPTScotchStrategyType(3)
    MPPTScotchStrategyType, parameter :: MP_PTSCOTCH_SAFETY = eMPPTScotchStrategyType(4)
    MPPTScotchStrategyType, parameter :: MP_PTSCOTCH_SCALABILITY = eMPPTScotchStrategyType(5)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MP_PTSCOTCH_DEFAULT
!DEC$ ATTRIBUTES DLLEXPORT::MP_PTSCOTCH_QUALITY
!DEC$ ATTRIBUTES DLLEXPORT::MP_PTSCOTCH_SPEED
!DEC$ ATTRIBUTES DLLEXPORT::MP_PTSCOTCH_BALANCE
!DEC$ ATTRIBUTES DLLEXPORT::MP_PTSCOTCH_SAFETY
!DEC$ ATTRIBUTES DLLEXPORT::MP_PTSCOTCH_SCALABILITY
#endif

  type eMatOperation
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatOperation

  MatOperation, parameter :: PETSC_NULL_MATOPERATION = eMatOperation(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATOPERATION
#endif
    MatOperation, parameter :: MATOP_SET_VALUES = eMatOperation(0)
    MatOperation, parameter :: MATOP_GET_ROW = eMatOperation(1)
    MatOperation, parameter :: MATOP_RESTORE_ROW = eMatOperation(2)
    MatOperation, parameter :: MATOP_MULT = eMatOperation(3)
    MatOperation, parameter :: MATOP_MULT_ADD = eMatOperation(4)
    MatOperation, parameter :: MATOP_MULT_TRANSPOSE = eMatOperation(5)
    MatOperation, parameter :: MATOP_MULT_TRANSPOSE_ADD = eMatOperation(6)
    MatOperation, parameter :: MATOP_SOLVE = eMatOperation(7)
    MatOperation, parameter :: MATOP_SOLVE_ADD = eMatOperation(8)
    MatOperation, parameter :: MATOP_SOLVE_TRANSPOSE = eMatOperation(9)
    MatOperation, parameter :: MATOP_SOLVE_TRANSPOSE_ADD = eMatOperation(10)
    MatOperation, parameter :: MATOP_LUFACTOR = eMatOperation(11)
    MatOperation, parameter :: MATOP_CHOLESKYFACTOR = eMatOperation(12)
    MatOperation, parameter :: MATOP_SOR = eMatOperation(13)
    MatOperation, parameter :: MATOP_TRANSPOSE = eMatOperation(14)
    MatOperation, parameter :: MATOP_GETINFO = eMatOperation(15)
    MatOperation, parameter :: MATOP_EQUAL = eMatOperation(16)
    MatOperation, parameter :: MATOP_GET_DIAGONAL = eMatOperation(17)
    MatOperation, parameter :: MATOP_DIAGONAL_SCALE = eMatOperation(18)
    MatOperation, parameter :: MATOP_NORM = eMatOperation(19)
    MatOperation, parameter :: MATOP_ASSEMBLY_BEGIN = eMatOperation(20)
    MatOperation, parameter :: MATOP_ASSEMBLY_END = eMatOperation(21)
    MatOperation, parameter :: MATOP_SET_OPTION = eMatOperation(22)
    MatOperation, parameter :: MATOP_ZERO_ENTRIES = eMatOperation(23)
    MatOperation, parameter :: MATOP_ZERO_ROWS = eMatOperation(24)
    MatOperation, parameter :: MATOP_LUFACTOR_SYMBOLIC = eMatOperation(25)
    MatOperation, parameter :: MATOP_LUFACTOR_NUMERIC = eMatOperation(26)
    MatOperation, parameter :: MATOP_CHOLESKY_FACTOR_SYMBOLIC = eMatOperation(27)
    MatOperation, parameter :: MATOP_CHOLESKY_FACTOR_NUMERIC = eMatOperation(28)
    MatOperation, parameter :: MATOP_SETUP = eMatOperation(29)
    MatOperation, parameter :: MATOP_ILUFACTOR_SYMBOLIC = eMatOperation(30)
    MatOperation, parameter :: MATOP_ICCFACTOR_SYMBOLIC = eMatOperation(31)
    MatOperation, parameter :: MATOP_GET_DIAGONAL_BLOCK = eMatOperation(32)
    MatOperation, parameter :: MATOP_SET_INF = eMatOperation(33)
    MatOperation, parameter :: MATOP_DUPLICATE = eMatOperation(34)
    MatOperation, parameter :: MATOP_FORWARD_SOLVE = eMatOperation(35)
    MatOperation, parameter :: MATOP_BACKWARD_SOLVE = eMatOperation(36)
    MatOperation, parameter :: MATOP_ILUFACTOR = eMatOperation(37)
    MatOperation, parameter :: MATOP_ICCFACTOR = eMatOperation(38)
    MatOperation, parameter :: MATOP_AXPY = eMatOperation(39)
    MatOperation, parameter :: MATOP_CREATE_SUBMATRICES = eMatOperation(40)
    MatOperation, parameter :: MATOP_INCREASE_OVERLAP = eMatOperation(41)
    MatOperation, parameter :: MATOP_GET_VALUES = eMatOperation(42)
    MatOperation, parameter :: MATOP_COPY = eMatOperation(43)
    MatOperation, parameter :: MATOP_GET_ROW_MAX = eMatOperation(44)
    MatOperation, parameter :: MATOP_SCALE = eMatOperation(45)
    MatOperation, parameter :: MATOP_SHIFT = eMatOperation(46)
    MatOperation, parameter :: MATOP_DIAGONAL_SET = eMatOperation(47)
    MatOperation, parameter :: MATOP_ZERO_ROWS_COLUMNS = eMatOperation(48)
    MatOperation, parameter :: MATOP_SET_RANDOM = eMatOperation(49)
    MatOperation, parameter :: MATOP_GET_ROW_IJ = eMatOperation(50)
    MatOperation, parameter :: MATOP_RESTORE_ROW_IJ = eMatOperation(51)
    MatOperation, parameter :: MATOP_GET_COLUMN_IJ = eMatOperation(52)
    MatOperation, parameter :: MATOP_RESTORE_COLUMN_IJ = eMatOperation(53)
    MatOperation, parameter :: MATOP_FDCOLORING_CREATE = eMatOperation(54)
    MatOperation, parameter :: MATOP_COLORING_PATCH = eMatOperation(55)
    MatOperation, parameter :: MATOP_SET_UNFACTORED = eMatOperation(56)
    MatOperation, parameter :: MATOP_PERMUTE = eMatOperation(57)
    MatOperation, parameter :: MATOP_SET_VALUES_BLOCKED = eMatOperation(58)
    MatOperation, parameter :: MATOP_CREATE_SUBMATRIX = eMatOperation(59)
    MatOperation, parameter :: MATOP_DESTROY = eMatOperation(60)
    MatOperation, parameter :: MATOP_VIEW = eMatOperation(61)
    MatOperation, parameter :: MATOP_CONVERT_FROM = eMatOperation(62)
    MatOperation, parameter :: MATOP_MATMAT_MULT_SYMBOLIC = eMatOperation(63)
    MatOperation, parameter :: MATOP_MATMAT_MULT_NUMERIC = eMatOperation(64)
    MatOperation, parameter :: MATOP_SET_LOCAL_TO_GLOBAL_MAP = eMatOperation(65)
    MatOperation, parameter :: MATOP_SET_VALUES_LOCAL = eMatOperation(66)
    MatOperation, parameter :: MATOP_ZERO_ROWS_LOCAL = eMatOperation(67)
    MatOperation, parameter :: MATOP_GET_ROW_MAX_ABS = eMatOperation(68)
    MatOperation, parameter :: MATOP_GET_ROW_MIN_ABS = eMatOperation(69)
    MatOperation, parameter :: MATOP_CONVERT = eMatOperation(70)
    MatOperation, parameter :: MATOP_HAS_OPERATION = eMatOperation(71)
    MatOperation, parameter :: MATOP_FD_COLORING_APPLY = eMatOperation(72)
    MatOperation, parameter :: MATOP_SET_FROM_OPTIONS = eMatOperation(73)
    MatOperation, parameter :: MATOP_FIND_ZERO_DIAGONALS = eMatOperation(74)
    MatOperation, parameter :: MATOP_MULT_MULTIPLE = eMatOperation(75)
    MatOperation, parameter :: MATOP_SOLVE_MULTIPLE = eMatOperation(76)
    MatOperation, parameter :: MATOP_GET_INERTIA = eMatOperation(77)
    MatOperation, parameter :: MATOP_LOAD = eMatOperation(78)
    MatOperation, parameter :: MATOP_IS_SYMMETRIC = eMatOperation(79)
    MatOperation, parameter :: MATOP_IS_HERMITIAN = eMatOperation(80)
    MatOperation, parameter :: MATOP_IS_STRUCTURALLY_SYMMETRIC = eMatOperation(81)
    MatOperation, parameter :: MATOP_SET_VALUES_BLOCKEDLOCAL = eMatOperation(82)
    MatOperation, parameter :: MATOP_CREATE_VECS = eMatOperation(83)
    MatOperation, parameter :: MATOP_MAT_MULT_SYMBOLIC = eMatOperation(84)
    MatOperation, parameter :: MATOP_MAT_MULT_NUMERIC = eMatOperation(85)
    MatOperation, parameter :: MATOP_PTAP_NUMERIC = eMatOperation(86)
    MatOperation, parameter :: MATOP_MAT_TRANSPOSE_MULT_SYMBO = eMatOperation(87)
    MatOperation, parameter :: MATOP_MAT_TRANSPOSE_MULT_NUMER = eMatOperation(88)
    MatOperation, parameter :: MATOP_BIND_TO_CPU = eMatOperation(89)
    MatOperation, parameter :: MATOP_PRODUCTSETFROMOPTIONS = eMatOperation(90)
    MatOperation, parameter :: MATOP_PRODUCTSYMBOLIC = eMatOperation(91)
    MatOperation, parameter :: MATOP_PRODUCTNUMERIC = eMatOperation(92)
    MatOperation, parameter :: MATOP_CONJUGATE = eMatOperation(93)
    MatOperation, parameter :: MATOP_VIEW_NATIVE = eMatOperation(94)
    MatOperation, parameter :: MATOP_SET_VALUES_ROW = eMatOperation(95)
    MatOperation, parameter :: MATOP_REAL_PART = eMatOperation(96)
    MatOperation, parameter :: MATOP_IMAGINARY_PART = eMatOperation(97)
    MatOperation, parameter :: MATOP_GET_ROW_UPPER_TRIANGULAR = eMatOperation(98)
    MatOperation, parameter :: MATOP_RESTORE_ROW_UPPER_TRIANG = eMatOperation(99)
    MatOperation, parameter :: MATOP_MAT_SOLVE = eMatOperation(100)
    MatOperation, parameter :: MATOP_MAT_SOLVE_TRANSPOSE = eMatOperation(101)
    MatOperation, parameter :: MATOP_GET_ROW_MIN = eMatOperation(102)
    MatOperation, parameter :: MATOP_GET_COLUMN_VECTOR = eMatOperation(103)
    MatOperation, parameter :: MATOP_GET_SEQ_NONZERO_STRUCTUR = eMatOperation(104)
    MatOperation, parameter :: MATOP_CREATE = eMatOperation(105)
    MatOperation, parameter :: MATOP_GET_GHOSTS = eMatOperation(106)
    MatOperation, parameter :: MATOP_GET_LOCAL_SUB_MATRIX = eMatOperation(107)
    MatOperation, parameter :: MATOP_RESTORE_LOCALSUB_MATRIX = eMatOperation(108)
    MatOperation, parameter :: MATOP_MULT_DIAGONAL_BLOCK = eMatOperation(109)
    MatOperation, parameter :: MATOP_HERMITIAN_TRANSPOSE = eMatOperation(110)
    MatOperation, parameter :: MATOP_MULT_HERMITIAN_TRANSPOSE = eMatOperation(111)
    MatOperation, parameter :: MATOP_MULT_HERMITIAN_TRANS_ADD = eMatOperation(112)
    MatOperation, parameter :: MATOP_GET_MULTI_PROC_BLOCK = eMatOperation(113)
    MatOperation, parameter :: MATOP_FIND_NONZERO_ROWS = eMatOperation(114)
    MatOperation, parameter :: MATOP_GET_COLUMN_NORMS = eMatOperation(115)
    MatOperation, parameter :: MATOP_INVERT_BLOCK_DIAGONAL = eMatOperation(116)
    MatOperation, parameter :: MATOP_INVERT_VBLOCK_DIAGONAL = eMatOperation(117)
    MatOperation, parameter :: MATOP_CREATE_SUB_MATRICES_MPI = eMatOperation(118)
    MatOperation, parameter :: MATOP_SET_VALUES_BATCH = eMatOperation(119)
    MatOperation, parameter :: MATOP_TRANSPOSE_MAT_MULT_SYMBO = eMatOperation(120)
    MatOperation, parameter :: MATOP_TRANSPOSE_MAT_MULT_NUMER = eMatOperation(121)
    MatOperation, parameter :: MATOP_TRANSPOSE_COLORING_CREAT = eMatOperation(122)
    MatOperation, parameter :: MATOP_TRANS_COLORING_APPLY_SPT = eMatOperation(123)
    MatOperation, parameter :: MATOP_TRANS_COLORING_APPLY_DEN = eMatOperation(124)
    MatOperation, parameter :: MATOP_RART_NUMERIC = eMatOperation(125)
    MatOperation, parameter :: MATOP_SET_BLOCK_SIZES = eMatOperation(126)
    MatOperation, parameter :: MATOP_RESIDUAL = eMatOperation(127)
    MatOperation, parameter :: MATOP_FDCOLORING_SETUP = eMatOperation(128)
    MatOperation, parameter :: MATOP_FIND_OFFBLOCK_ENTRIES = eMatOperation(129)
    MatOperation, parameter :: MATOP_MPICONCATENATESEQ = eMatOperation(130)
    MatOperation, parameter :: MATOP_DESTROYSUBMATRICES = eMatOperation(131)
    MatOperation, parameter :: MATOP_MAT_TRANSPOSE_SOLVE = eMatOperation(132)
    MatOperation, parameter :: MATOP_GET_VALUES_LOCAL = eMatOperation(133)
    MatOperation, parameter :: MATOP_CREATE_GRAPH = eMatOperation(134)
    MatOperation, parameter :: MATOP_TRANSPOSE_SYMBOLIC = eMatOperation(135)
    MatOperation, parameter :: MATOP_ELIMINATE_ZEROS = eMatOperation(136)
    MatOperation, parameter :: MATOP_GET_ROW_SUM_ABS = eMatOperation(137)
    MatOperation, parameter :: MATOP_GET_FACTOR = eMatOperation(138)
    MatOperation, parameter :: MATOP_GET_BLOCK_DIAGONAL = eMatOperation(139)
    MatOperation, parameter :: MATOP_GET_VBLOCK_DIAGONAL = eMatOperation(140)
    MatOperation, parameter :: MATOP_COPY_HASH_TO_XAIJ = eMatOperation(141)
    MatOperation, parameter :: MATOP_GET_CURRENT_MEM_TYPE = eMatOperation(142)
    MatOperation, parameter :: MATOP_ZERO_ROWS_COLUMNS_LOCAL = eMatOperation(143)
    MatOperation, parameter :: MATOP_ADOT = eMatOperation(144)
    MatOperation, parameter :: MATOP_ANORM = eMatOperation(145)
    MatOperation, parameter :: MATOP_ADOT_LOCAL = eMatOperation(146)
    MatOperation, parameter :: MATOP_ANORM_LOCAL = eMatOperation(147)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_VALUES 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_ROW 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_RESTORE_ROW 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MULT 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MULT_ADD 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MULT_TRANSPOSE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MULT_TRANSPOSE_ADD 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SOLVE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SOLVE_ADD 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SOLVE_TRANSPOSE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SOLVE_TRANSPOSE_ADD 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_LUFACTOR 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CHOLESKYFACTOR 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SOR 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_TRANSPOSE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GETINFO 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_EQUAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_DIAGONAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_DIAGONAL_SCALE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_NORM 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ASSEMBLY_BEGIN 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ASSEMBLY_END 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_OPTION 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ZERO_ENTRIES 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ZERO_ROWS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_LUFACTOR_SYMBOLIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_LUFACTOR_NUMERIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CHOLESKY_FACTOR_SYMBOLIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CHOLESKY_FACTOR_NUMERIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SETUP 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ILUFACTOR_SYMBOLIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ICCFACTOR_SYMBOLIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_DIAGONAL_BLOCK 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_INF 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_DUPLICATE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_FORWARD_SOLVE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_BACKWARD_SOLVE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ILUFACTOR 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ICCFACTOR 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_AXPY 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CREATE_SUBMATRICES 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_INCREASE_OVERLAP 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_VALUES 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_COPY 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_ROW_MAX 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SCALE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SHIFT 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_DIAGONAL_SET 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ZERO_ROWS_COLUMNS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_RANDOM 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_ROW_IJ 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_RESTORE_ROW_IJ 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_COLUMN_IJ 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_RESTORE_COLUMN_IJ 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_FDCOLORING_CREATE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_COLORING_PATCH 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_UNFACTORED 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_PERMUTE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_VALUES_BLOCKED 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CREATE_SUBMATRIX 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_DESTROY 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_VIEW 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CONVERT_FROM 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MATMAT_MULT_SYMBOLIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MATMAT_MULT_NUMERIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_LOCAL_TO_GLOBAL_MAP 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_VALUES_LOCAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ZERO_ROWS_LOCAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_ROW_MAX_ABS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_ROW_MIN_ABS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CONVERT 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_HAS_OPERATION 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_FD_COLORING_APPLY 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_FROM_OPTIONS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_FIND_ZERO_DIAGONALS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MULT_MULTIPLE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SOLVE_MULTIPLE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_INERTIA 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_LOAD 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_IS_SYMMETRIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_IS_HERMITIAN 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_IS_STRUCTURALLY_SYMMETRIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_VALUES_BLOCKEDLOCAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CREATE_VECS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MAT_MULT_SYMBOLIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MAT_MULT_NUMERIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_PTAP_NUMERIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MAT_TRANSPOSE_MULT_SYMBO 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MAT_TRANSPOSE_MULT_NUMER 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_BIND_TO_CPU 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_PRODUCTSETFROMOPTIONS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_PRODUCTSYMBOLIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_PRODUCTNUMERIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CONJUGATE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_VIEW_NATIVE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_VALUES_ROW 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_REAL_PART 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_IMAGINARY_PART 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_ROW_UPPER_TRIANGULAR 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_RESTORE_ROW_UPPER_TRIANG 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MAT_SOLVE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MAT_SOLVE_TRANSPOSE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_ROW_MIN 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_COLUMN_VECTOR 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_SEQ_NONZERO_STRUCTUR 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CREATE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_GHOSTS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_LOCAL_SUB_MATRIX 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_RESTORE_LOCALSUB_MATRIX 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MULT_DIAGONAL_BLOCK 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_HERMITIAN_TRANSPOSE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MULT_HERMITIAN_TRANSPOSE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MULT_HERMITIAN_TRANS_ADD 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_MULTI_PROC_BLOCK 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_FIND_NONZERO_ROWS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_COLUMN_NORMS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_INVERT_BLOCK_DIAGONAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_INVERT_VBLOCK_DIAGONAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CREATE_SUB_MATRICES_MPI 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_VALUES_BATCH 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_TRANSPOSE_MAT_MULT_SYMBO 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_TRANSPOSE_MAT_MULT_NUMER 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_TRANSPOSE_COLORING_CREAT 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_TRANS_COLORING_APPLY_SPT 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_TRANS_COLORING_APPLY_DEN 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_RART_NUMERIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_SET_BLOCK_SIZES 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_RESIDUAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_FDCOLORING_SETUP 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_FIND_OFFBLOCK_ENTRIES 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MPICONCATENATESEQ 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_DESTROYSUBMATRICES 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_MAT_TRANSPOSE_SOLVE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_VALUES_LOCAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_CREATE_GRAPH 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_TRANSPOSE_SYMBOLIC 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ELIMINATE_ZEROS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_ROW_SUM_ABS 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_FACTOR 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_BLOCK_DIAGONAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_VBLOCK_DIAGONAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_COPY_HASH_TO_XAIJ 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_GET_CURRENT_MEM_TYPE 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ZERO_ROWS_COLUMNS_LOCAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ADOT 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ANORM 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ADOT_LOCAL 
!DEC$ ATTRIBUTES DLLEXPORT::MATOP_ANORM_LOCAL 
#endif

  type eMatHtoolCompressorType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatHtoolCompressorType

  MatHtoolCompressorType, parameter :: PETSC_NULL_MATHTOOLCOMPRESSORTYPE = eMatHtoolCompressorType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATHTOOLCOMPRESSORTYPE
#endif
    MatHtoolCompressorType, parameter :: MAT_HTOOL_COMPRESSOR_SYMPARTIAL_ACA = eMatHtoolCompressorType(0)
    MatHtoolCompressorType, parameter :: MAT_HTOOL_COMPRESSOR_FULL_ACA = eMatHtoolCompressorType(1)
    MatHtoolCompressorType, parameter :: MAT_HTOOL_COMPRESSOR_SVD = eMatHtoolCompressorType(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HTOOL_COMPRESSOR_SYMPARTIAL_ACA
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HTOOL_COMPRESSOR_FULL_ACA
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HTOOL_COMPRESSOR_SVD
#endif

  type eMatHtoolClusteringType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatHtoolClusteringType

  MatHtoolClusteringType, parameter :: PETSC_NULL_MATHTOOLCLUSTERINGTYPE = eMatHtoolClusteringType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATHTOOLCLUSTERINGTYPE
#endif
    MatHtoolClusteringType, parameter :: MAT_HTOOL_CLUSTERING_PCA_REGULAR = eMatHtoolClusteringType(0)
    MatHtoolClusteringType, parameter :: MAT_HTOOL_CLUSTERING_PCA_GEOMETRIC = eMatHtoolClusteringType(1)
    MatHtoolClusteringType, parameter :: MAT_HTOOL_CLUSTERING_BOUNDING_BOX_1_REGULAR = eMatHtoolClusteringType(2)
    MatHtoolClusteringType, parameter :: MAT_HTOOL_CLUSTERING_BOUNDING_BOX_1_GEOMETRIC = eMatHtoolClusteringType(3)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HTOOL_CLUSTERING_PCA_REGULAR
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HTOOL_CLUSTERING_PCA_GEOMETRIC
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HTOOL_CLUSTERING_BOUNDING_BOX_1_REGULAR
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HTOOL_CLUSTERING_BOUNDING_BOX_1_GEOMETRIC
#endif

  type eMatSTRUMPACKReordering
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatSTRUMPACKReordering

  MatSTRUMPACKReordering, parameter :: PETSC_NULL_MATSTRUMPACKREORDERING = eMatSTRUMPACKReordering(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATSTRUMPACKREORDERING
#endif
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_NATURAL = eMatSTRUMPACKReordering(0)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_METIS = eMatSTRUMPACKReordering(1)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_PARMETIS = eMatSTRUMPACKReordering(2)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_SCOTCH = eMatSTRUMPACKReordering(3)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_PTSCOTCH = eMatSTRUMPACKReordering(4)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_RCM = eMatSTRUMPACKReordering(5)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_GEOMETRIC = eMatSTRUMPACKReordering(6)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_AMD = eMatSTRUMPACKReordering(7)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_MMD = eMatSTRUMPACKReordering(8)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_AND = eMatSTRUMPACKReordering(9)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_MLF = eMatSTRUMPACKReordering(10)
    MatSTRUMPACKReordering, parameter :: MAT_STRUMPACK_SPECTRAL = eMatSTRUMPACKReordering(11)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_NATURAL
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_METIS
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_PARMETIS
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_SCOTCH
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_PTSCOTCH
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_RCM
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_GEOMETRIC
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_AMD
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_MMD
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_AND
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_MLF
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_SPECTRAL
#endif

  type eMatSTRUMPACKCompressionType
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatSTRUMPACKCompressionType

  MatSTRUMPACKCompressionType, parameter :: PETSC_NULL_MATSTRUMPACKCOMPRESSIONTYPE = eMatSTRUMPACKCompressionType(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATSTRUMPACKCOMPRESSIONTYPE
#endif
    MatSTRUMPACKCompressionType, parameter :: MAT_STRUMPACK_COMPRESSION_TYPE_NONE = eMatSTRUMPACKCompressionType(0)
    MatSTRUMPACKCompressionType, parameter :: MAT_STRUMPACK_COMPRESSION_TYPE_HSS = eMatSTRUMPACKCompressionType(1)
    MatSTRUMPACKCompressionType, parameter :: MAT_STRUMPACK_COMPRESSION_TYPE_BLR = eMatSTRUMPACKCompressionType(2)
    MatSTRUMPACKCompressionType, parameter :: MAT_STRUMPACK_COMPRESSION_TYPE_HODLR = eMatSTRUMPACKCompressionType(3)
    MatSTRUMPACKCompressionType, parameter :: MAT_STRUMPACK_COMPRESSION_TYPE_BLR_HODLR = eMatSTRUMPACKCompressionType(4)
    MatSTRUMPACKCompressionType, parameter :: MAT_STRUMPACK_COMPRESSION_TYPE_ZFP_BLR_HODLR = eMatSTRUMPACKCompressionType(5)
    MatSTRUMPACKCompressionType, parameter :: MAT_STRUMPACK_COMPRESSION_TYPE_LOSSLESS = eMatSTRUMPACKCompressionType(6)
    MatSTRUMPACKCompressionType, parameter :: MAT_STRUMPACK_COMPRESSION_TYPE_LOSSY = eMatSTRUMPACKCompressionType(7)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_COMPRESSION_TYPE_NONE
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_COMPRESSION_TYPE_HSS
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_COMPRESSION_TYPE_BLR
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_COMPRESSION_TYPE_HODLR
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_COMPRESSION_TYPE_BLR_HODLR
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_COMPRESSION_TYPE_ZFP_BLR_HODLR
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_COMPRESSION_TYPE_LOSSLESS
!DEC$ ATTRIBUTES DLLEXPORT::MAT_STRUMPACK_COMPRESSION_TYPE_LOSSY
#endif

  type eMatCUSPARSEStorageFormat
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatCUSPARSEStorageFormat

  MatCUSPARSEStorageFormat, parameter :: PETSC_NULL_MATCUSPARSESTORAGEFORMAT = eMatCUSPARSEStorageFormat(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATCUSPARSESTORAGEFORMAT
#endif
    MatCUSPARSEStorageFormat, parameter :: MAT_CUSPARSE_CSR = eMatCUSPARSEStorageFormat(0)
    MatCUSPARSEStorageFormat, parameter :: MAT_CUSPARSE_ELL = eMatCUSPARSEStorageFormat(1)
    MatCUSPARSEStorageFormat, parameter :: MAT_CUSPARSE_HYB = eMatCUSPARSEStorageFormat(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_CUSPARSE_CSR
!DEC$ ATTRIBUTES DLLEXPORT::MAT_CUSPARSE_ELL
!DEC$ ATTRIBUTES DLLEXPORT::MAT_CUSPARSE_HYB
#endif

  type eMatCUSPARSEFormatOperation
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatCUSPARSEFormatOperation

  MatCUSPARSEFormatOperation, parameter :: PETSC_NULL_MATCUSPARSEFORMATOPERATION = eMatCUSPARSEFormatOperation(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATCUSPARSEFORMATOPERATION
#endif
    MatCUSPARSEFormatOperation, parameter :: MAT_CUSPARSE_MULT_DIAG = eMatCUSPARSEFormatOperation(0)
    MatCUSPARSEFormatOperation, parameter :: MAT_CUSPARSE_MULT_OFFDIAG = eMatCUSPARSEFormatOperation(1)
    MatCUSPARSEFormatOperation, parameter :: MAT_CUSPARSE_MULT = eMatCUSPARSEFormatOperation(2)
    MatCUSPARSEFormatOperation, parameter :: MAT_CUSPARSE_ALL = eMatCUSPARSEFormatOperation(3)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_CUSPARSE_MULT_DIAG
!DEC$ ATTRIBUTES DLLEXPORT::MAT_CUSPARSE_MULT_OFFDIAG
!DEC$ ATTRIBUTES DLLEXPORT::MAT_CUSPARSE_MULT
!DEC$ ATTRIBUTES DLLEXPORT::MAT_CUSPARSE_ALL
#endif

  type eMatHIPSPARSEStorageFormat
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatHIPSPARSEStorageFormat

  MatHIPSPARSEStorageFormat, parameter :: PETSC_NULL_MATHIPSPARSESTORAGEFORMAT = eMatHIPSPARSEStorageFormat(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATHIPSPARSESTORAGEFORMAT
#endif
    MatHIPSPARSEStorageFormat, parameter :: MAT_HIPSPARSE_CSR = eMatHIPSPARSEStorageFormat(0)
    MatHIPSPARSEStorageFormat, parameter :: MAT_HIPSPARSE_ELL = eMatHIPSPARSEStorageFormat(1)
    MatHIPSPARSEStorageFormat, parameter :: MAT_HIPSPARSE_HYB = eMatHIPSPARSEStorageFormat(2)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HIPSPARSE_CSR
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HIPSPARSE_ELL
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HIPSPARSE_HYB
#endif

  type eMatHIPSPARSEFormatOperation
    PetscEnum:: v = PETSC_FORTRAN_TYPE_INITIALIZE
  end type eMatHIPSPARSEFormatOperation

  MatHIPSPARSEFormatOperation, parameter :: PETSC_NULL_MATHIPSPARSEFORMATOPERATION = eMatHIPSPARSEFormatOperation(-50)
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_MATHIPSPARSEFORMATOPERATION
#endif
    MatHIPSPARSEFormatOperation, parameter :: MAT_HIPSPARSE_MULT_DIAG = eMatHIPSPARSEFormatOperation(0)
    MatHIPSPARSEFormatOperation, parameter :: MAT_HIPSPARSE_MULT_OFFDIAG = eMatHIPSPARSEFormatOperation(1)
    MatHIPSPARSEFormatOperation, parameter :: MAT_HIPSPARSE_MULT = eMatHIPSPARSEFormatOperation(2)
    MatHIPSPARSEFormatOperation, parameter :: MAT_HIPSPARSE_ALL = eMatHIPSPARSEFormatOperation(3)

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HIPSPARSE_MULT_DIAG
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HIPSPARSE_MULT_OFFDIAG
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HIPSPARSE_MULT
!DEC$ ATTRIBUTES DLLEXPORT::MAT_HIPSPARSE_ALL
#endif

  CHARACTER(LEN=*), PARAMETER :: MATSAME = 'same'
  CHARACTER(LEN=*), PARAMETER :: MATMAIJ = 'maij'
  CHARACTER(LEN=*), PARAMETER :: MATSEQMAIJ = 'seqmaij'
  CHARACTER(LEN=*), PARAMETER :: MATMPIMAIJ = 'mpimaij'
  CHARACTER(LEN=*), PARAMETER :: MATKAIJ = 'kaij'
  CHARACTER(LEN=*), PARAMETER :: MATSEQKAIJ = 'seqkaij'
  CHARACTER(LEN=*), PARAMETER :: MATMPIKAIJ = 'mpikaij'
  CHARACTER(LEN=*), PARAMETER :: MATIS = 'is'
  CHARACTER(LEN=*), PARAMETER :: MATAIJ = 'aij'
  CHARACTER(LEN=*), PARAMETER :: MATSEQAIJ = 'seqaij'
  CHARACTER(LEN=*), PARAMETER :: MATMPIAIJ = 'mpiaij'
  CHARACTER(LEN=*), PARAMETER :: MATAIJCRL = 'aijcrl'
  CHARACTER(LEN=*), PARAMETER :: MATSEQAIJCRL = 'seqaijcrl'
  CHARACTER(LEN=*), PARAMETER :: MATMPIAIJCRL = 'mpiaijcrl'
  CHARACTER(LEN=*), PARAMETER :: MATAIJCUSPARSE = 'aijcusparse'
  CHARACTER(LEN=*), PARAMETER :: MATSEQAIJCUSPARSE = 'seqaijcusparse'
  CHARACTER(LEN=*), PARAMETER :: MATMPIAIJCUSPARSE = 'mpiaijcusparse'
  CHARACTER(LEN=*), PARAMETER :: MATAIJHIPSPARSE = 'aijhipsparse'
  CHARACTER(LEN=*), PARAMETER :: MATSEQAIJHIPSPARSE = 'seqaijhipsparse'
  CHARACTER(LEN=*), PARAMETER :: MATMPIAIJHIPSPARSE = 'mpiaijhipsparse'
  CHARACTER(LEN=*), PARAMETER :: MATAIJKOKKOS = 'aijkokkos'
  CHARACTER(LEN=*), PARAMETER :: MATSEQAIJKOKKOS = 'seqaijkokkos'
  CHARACTER(LEN=*), PARAMETER :: MATMPIAIJKOKKOS = 'mpiaijkokkos'
  CHARACTER(LEN=*), PARAMETER :: MATAIJVIENNACL = 'aijviennacl'
  CHARACTER(LEN=*), PARAMETER :: MATSEQAIJVIENNACL = 'seqaijviennacl'
  CHARACTER(LEN=*), PARAMETER :: MATMPIAIJVIENNACL = 'mpiaijviennacl'
  CHARACTER(LEN=*), PARAMETER :: MATAIJPERM = 'aijperm'
  CHARACTER(LEN=*), PARAMETER :: MATSEQAIJPERM = 'seqaijperm'
  CHARACTER(LEN=*), PARAMETER :: MATMPIAIJPERM = 'mpiaijperm'
  CHARACTER(LEN=*), PARAMETER :: MATAIJSELL = 'aijsell'
  CHARACTER(LEN=*), PARAMETER :: MATSEQAIJSELL = 'seqaijsell'
  CHARACTER(LEN=*), PARAMETER :: MATMPIAIJSELL = 'mpiaijsell'
  CHARACTER(LEN=*), PARAMETER :: MATAIJMKL = 'aijmkl'
  CHARACTER(LEN=*), PARAMETER :: MATSEQAIJMKL = 'seqaijmkl'
  CHARACTER(LEN=*), PARAMETER :: MATMPIAIJMKL = 'mpiaijmkl'
  CHARACTER(LEN=*), PARAMETER :: MATBAIJMKL = 'baijmkl'
  CHARACTER(LEN=*), PARAMETER :: MATSEQBAIJMKL = 'seqbaijmkl'
  CHARACTER(LEN=*), PARAMETER :: MATMPIBAIJMKL = 'mpibaijmkl'
  CHARACTER(LEN=*), PARAMETER :: MATSHELL = 'shell'
  CHARACTER(LEN=*), PARAMETER :: MATCENTERING = 'centering'
  CHARACTER(LEN=*), PARAMETER :: MATDENSE = 'dense'
  CHARACTER(LEN=*), PARAMETER :: MATDENSECUDA = 'densecuda'
  CHARACTER(LEN=*), PARAMETER :: MATDENSEHIP = 'densehip'
  CHARACTER(LEN=*), PARAMETER :: MATSEQDENSE = 'seqdense'
  CHARACTER(LEN=*), PARAMETER :: MATSEQDENSECUDA = 'seqdensecuda'
  CHARACTER(LEN=*), PARAMETER :: MATSEQDENSEHIP = 'seqdensehip'
  CHARACTER(LEN=*), PARAMETER :: MATMPIDENSE = 'mpidense'
  CHARACTER(LEN=*), PARAMETER :: MATMPIDENSECUDA = 'mpidensecuda'
  CHARACTER(LEN=*), PARAMETER :: MATMPIDENSEHIP = 'mpidensehip'
  CHARACTER(LEN=*), PARAMETER :: MATELEMENTAL = 'elemental'
  CHARACTER(LEN=*), PARAMETER :: MATSCALAPACK = 'scalapack'
  CHARACTER(LEN=*), PARAMETER :: MATBAIJ = 'baij'
  CHARACTER(LEN=*), PARAMETER :: MATSEQBAIJ = 'seqbaij'
  CHARACTER(LEN=*), PARAMETER :: MATMPIBAIJ = 'mpibaij'
  CHARACTER(LEN=*), PARAMETER :: MATMPIADJ = 'mpiadj'
  CHARACTER(LEN=*), PARAMETER :: MATSBAIJ = 'sbaij'
  CHARACTER(LEN=*), PARAMETER :: MATSEQSBAIJ = 'seqsbaij'
  CHARACTER(LEN=*), PARAMETER :: MATMPISBAIJ = 'mpisbaij'
  CHARACTER(LEN=*), PARAMETER :: MATMFFD = 'mffd'
  CHARACTER(LEN=*), PARAMETER :: MATNORMAL = 'normal'
  CHARACTER(LEN=*), PARAMETER :: MATNORMALHERMITIAN = 'normalh'
  CHARACTER(LEN=*), PARAMETER :: MATLRC = 'lrc'
  CHARACTER(LEN=*), PARAMETER :: MATSCATTER = 'scatter'
  CHARACTER(LEN=*), PARAMETER :: MATBLOCKMAT = 'blockmat'
  CHARACTER(LEN=*), PARAMETER :: MATCOMPOSITE = 'composite'
  CHARACTER(LEN=*), PARAMETER :: MATFFT = 'fft'
  CHARACTER(LEN=*), PARAMETER :: MATFFTW = 'fftw'
  CHARACTER(LEN=*), PARAMETER :: MATSEQCUFFT = 'seqcufft'
  CHARACTER(LEN=*), PARAMETER :: MATSEQHIPFFT = 'seqhipfft'
  CHARACTER(LEN=*), PARAMETER :: MATTRANSPOSEMAT = 'PETSC_DEPRECATED_MACRO(3,'
  CHARACTER(LEN=*), PARAMETER :: MATTRANSPOSEVIRTUAL = 'transpose'
  CHARACTER(LEN=*), PARAMETER :: MATHERMITIANTRANSPOSEVIRTUAL = 'hermitiantranspose'
  CHARACTER(LEN=*), PARAMETER :: MATSCHURCOMPLEMENT = 'schurcomplement'
  CHARACTER(LEN=*), PARAMETER :: MATPYTHON = 'python'
  CHARACTER(LEN=*), PARAMETER :: MATHYPRE = 'hypre'
  CHARACTER(LEN=*), PARAMETER :: MATHYPRESTRUCT = 'hyprestruct'
  CHARACTER(LEN=*), PARAMETER :: MATHYPRESSTRUCT = 'hypresstruct'
  CHARACTER(LEN=*), PARAMETER :: MATSUBMATRIX = 'submatrix'
  CHARACTER(LEN=*), PARAMETER :: MATLOCALREF = 'localref'
  CHARACTER(LEN=*), PARAMETER :: MATNEST = 'nest'
  CHARACTER(LEN=*), PARAMETER :: MATPREALLOCATOR = 'preallocator'
  CHARACTER(LEN=*), PARAMETER :: MATSELL = 'sell'
  CHARACTER(LEN=*), PARAMETER :: MATSEQSELL = 'seqsell'
  CHARACTER(LEN=*), PARAMETER :: MATMPISELL = 'mpisell'
  CHARACTER(LEN=*), PARAMETER :: MATSELLCUDA = 'sellcuda'
  CHARACTER(LEN=*), PARAMETER :: MATSEQSELLCUDA = 'seqsellcuda'
  CHARACTER(LEN=*), PARAMETER :: MATMPISELLCUDA = 'mpisellcuda'
  CHARACTER(LEN=*), PARAMETER :: MATSELLHIP = 'sellhip'
  CHARACTER(LEN=*), PARAMETER :: MATSEQSELLHIP = 'seqsellhip'
  CHARACTER(LEN=*), PARAMETER :: MATMPISELLHIP = 'mpisellhip'
  CHARACTER(LEN=*), PARAMETER :: MATDUMMY = 'dummy'
  CHARACTER(LEN=*), PARAMETER :: MATLMVM = 'lmvm'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMDFP = 'lmvmdfp'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMDDFP = 'lmvmddfp'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMBFGS = 'lmvmbfgs'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMDBFGS = 'lmvmdbfgs'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMDQN = 'lmvmdqn'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMSR1 = 'lmvmsr1'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMBROYDEN = 'lmvmbroyden'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMBADBROYDEN = 'lmvmbadbroyden'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMSYMBROYDEN = 'lmvmsymbroyden'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMSYMBADBROYDEN = 'lmvmsymbadbroyden'
  CHARACTER(LEN=*), PARAMETER :: MATLMVMDIAGBROYDEN = 'lmvmdiagbroyden'
  CHARACTER(LEN=*), PARAMETER :: MATCONSTANTDIAGONAL = 'constantdiagonal'
  CHARACTER(LEN=*), PARAMETER :: MATDIAGONAL = 'diagonal'
  CHARACTER(LEN=*), PARAMETER :: MATHTOOL = 'htool'
  CHARACTER(LEN=*), PARAMETER :: MATH2OPUS = 'h2opus'

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MATSAME
!DEC$ ATTRIBUTES DLLEXPORT::MATMAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQMAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIMAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATKAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQKAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIKAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATIS
!DEC$ ATTRIBUTES DLLEXPORT::MATAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATAIJCRL
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQAIJCRL
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIAIJCRL
!DEC$ ATTRIBUTES DLLEXPORT::MATAIJCUSPARSE
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQAIJCUSPARSE
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIAIJCUSPARSE
!DEC$ ATTRIBUTES DLLEXPORT::MATAIJHIPSPARSE
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQAIJHIPSPARSE
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIAIJHIPSPARSE
!DEC$ ATTRIBUTES DLLEXPORT::MATAIJKOKKOS
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQAIJKOKKOS
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIAIJKOKKOS
!DEC$ ATTRIBUTES DLLEXPORT::MATAIJVIENNACL
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQAIJVIENNACL
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIAIJVIENNACL
!DEC$ ATTRIBUTES DLLEXPORT::MATAIJPERM
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQAIJPERM
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIAIJPERM
!DEC$ ATTRIBUTES DLLEXPORT::MATAIJSELL
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQAIJSELL
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIAIJSELL
!DEC$ ATTRIBUTES DLLEXPORT::MATAIJMKL
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQAIJMKL
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIAIJMKL
!DEC$ ATTRIBUTES DLLEXPORT::MATBAIJMKL
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQBAIJMKL
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIBAIJMKL
!DEC$ ATTRIBUTES DLLEXPORT::MATSHELL
!DEC$ ATTRIBUTES DLLEXPORT::MATCENTERING
!DEC$ ATTRIBUTES DLLEXPORT::MATDENSE
!DEC$ ATTRIBUTES DLLEXPORT::MATDENSECUDA
!DEC$ ATTRIBUTES DLLEXPORT::MATDENSEHIP
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQDENSE
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQDENSECUDA
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQDENSEHIP
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIDENSE
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIDENSECUDA
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIDENSEHIP
!DEC$ ATTRIBUTES DLLEXPORT::MATELEMENTAL
!DEC$ ATTRIBUTES DLLEXPORT::MATSCALAPACK
!DEC$ ATTRIBUTES DLLEXPORT::MATBAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQBAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIBAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATMPIADJ
!DEC$ ATTRIBUTES DLLEXPORT::MATSBAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQSBAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATMPISBAIJ
!DEC$ ATTRIBUTES DLLEXPORT::MATMFFD
!DEC$ ATTRIBUTES DLLEXPORT::MATNORMAL
!DEC$ ATTRIBUTES DLLEXPORT::MATNORMALHERMITIAN
!DEC$ ATTRIBUTES DLLEXPORT::MATLRC
!DEC$ ATTRIBUTES DLLEXPORT::MATSCATTER
!DEC$ ATTRIBUTES DLLEXPORT::MATBLOCKMAT
!DEC$ ATTRIBUTES DLLEXPORT::MATCOMPOSITE
!DEC$ ATTRIBUTES DLLEXPORT::MATFFT
!DEC$ ATTRIBUTES DLLEXPORT::MATFFTW
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQCUFFT
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQHIPFFT
!DEC$ ATTRIBUTES DLLEXPORT::MATTRANSPOSEMAT
!DEC$ ATTRIBUTES DLLEXPORT::MATTRANSPOSEVIRTUAL
!DEC$ ATTRIBUTES DLLEXPORT::MATHERMITIANTRANSPOSEVIRTUAL
!DEC$ ATTRIBUTES DLLEXPORT::MATSCHURCOMPLEMENT
!DEC$ ATTRIBUTES DLLEXPORT::MATPYTHON
!DEC$ ATTRIBUTES DLLEXPORT::MATHYPRE
!DEC$ ATTRIBUTES DLLEXPORT::MATHYPRESTRUCT
!DEC$ ATTRIBUTES DLLEXPORT::MATHYPRESSTRUCT
!DEC$ ATTRIBUTES DLLEXPORT::MATSUBMATRIX
!DEC$ ATTRIBUTES DLLEXPORT::MATLOCALREF
!DEC$ ATTRIBUTES DLLEXPORT::MATNEST
!DEC$ ATTRIBUTES DLLEXPORT::MATPREALLOCATOR
!DEC$ ATTRIBUTES DLLEXPORT::MATSELL
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQSELL
!DEC$ ATTRIBUTES DLLEXPORT::MATMPISELL
!DEC$ ATTRIBUTES DLLEXPORT::MATSELLCUDA
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQSELLCUDA
!DEC$ ATTRIBUTES DLLEXPORT::MATMPISELLCUDA
!DEC$ ATTRIBUTES DLLEXPORT::MATSELLHIP
!DEC$ ATTRIBUTES DLLEXPORT::MATSEQSELLHIP
!DEC$ ATTRIBUTES DLLEXPORT::MATMPISELLHIP
!DEC$ ATTRIBUTES DLLEXPORT::MATDUMMY
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVM
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMDFP
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMDDFP
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMBFGS
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMDBFGS
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMDQN
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMSR1
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMBROYDEN
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMBADBROYDEN
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMSYMBROYDEN
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMSYMBADBROYDEN
!DEC$ ATTRIBUTES DLLEXPORT::MATLMVMDIAGBROYDEN
!DEC$ ATTRIBUTES DLLEXPORT::MATCONSTANTDIAGONAL
!DEC$ ATTRIBUTES DLLEXPORT::MATDIAGONAL
!DEC$ ATTRIBUTES DLLEXPORT::MATHTOOL
!DEC$ ATTRIBUTES DLLEXPORT::MATH2OPUS
#endif

  CHARACTER(LEN=*), PARAMETER :: MATSOLVERSUPERLU = 'superlu'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERSUPERLU_DIST = 'superlu_dist'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERSTRUMPACK = 'strumpack'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERUMFPACK = 'umfpack'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERCHOLMOD = 'cholmod'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERKLU = 'klu'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERELEMENTAL = 'elemental'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERSCALAPACK = 'scalapack'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERESSL = 'essl'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERLUSOL = 'lusol'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERMUMPS = 'mumps'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERMKL_PARDISO = 'mkl_pardiso'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERMKL_CPARDISO = 'mkl_cpardiso'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERPASTIX = 'pastix'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERMATLAB = 'matlab'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERPETSC = 'petsc'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERBAS = 'bas'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERCUSPARSE = 'cusparse'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERCUDA = 'cuda'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERHIPSPARSE = 'hipsparse'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERHIP = 'hip'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERKOKKOS = 'kokkos'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERSPQR = 'spqr'
  CHARACTER(LEN=*), PARAMETER :: MATSOLVERHTOOL = 'htool'

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERSUPERLU
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERSUPERLU_DIST
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERSTRUMPACK
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERUMFPACK
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERCHOLMOD
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERKLU
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERELEMENTAL
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERSCALAPACK
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERESSL
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERLUSOL
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERMUMPS
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERMKL_PARDISO
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERMKL_CPARDISO
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERPASTIX
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERMATLAB
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERPETSC
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERBAS
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERCUSPARSE
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERCUDA
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERHIPSPARSE
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERHIP
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERKOKKOS
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERSPQR
!DEC$ ATTRIBUTES DLLEXPORT::MATSOLVERHTOOL
#endif

  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMDEFAULT = 'default'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMSORTED = 'sorted'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMSCALABLE = 'scalable'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMSCALABLEFAST = 'scalable_fast'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMHEAP = 'heap'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMBHEAP = 'btheap'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMLLCONDENSED = 'llcondensed'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMROWMERGE = 'rowmerge'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMOUTERPRODUCT = 'outerproduct'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMATB = 'at*b'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMRAP = 'rap'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMNONSCALABLE = 'nonscalable'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMSEQMPI = 'seqmpi'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMBACKEND = 'backend'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMOVERLAPPING = 'overlapping'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMMERGED = 'merged'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMALLATONCE = 'allatonce'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMALLATONCEMERGED = 'allatonce_merged'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMALLGATHERV = 'allgatherv'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMCYCLIC = 'cyclic'
  CHARACTER(LEN=*), PARAMETER :: MATPRODUCTALGORITHMHYPRE = 'hypre'

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMDEFAULT
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMSORTED
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMSCALABLE
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMSCALABLEFAST
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMHEAP
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMBHEAP
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMLLCONDENSED
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMROWMERGE
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMOUTERPRODUCT
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMATB
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMRAP
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMNONSCALABLE
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMSEQMPI
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMBACKEND
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMOVERLAPPING
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMMERGED
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMALLATONCE
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMALLATONCEMERGED
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMALLGATHERV
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMCYCLIC
!DEC$ ATTRIBUTES DLLEXPORT::MATPRODUCTALGORITHMHYPRE
#endif

  CHARACTER(LEN=*), PARAMETER :: MATORDERINGNATURAL = 'natural'
  CHARACTER(LEN=*), PARAMETER :: MATORDERINGND = 'nd'
  CHARACTER(LEN=*), PARAMETER :: MATORDERING1WD = '1wd'
  CHARACTER(LEN=*), PARAMETER :: MATORDERINGRCM = 'rcm'
  CHARACTER(LEN=*), PARAMETER :: MATORDERINGQMD = 'qmd'
  CHARACTER(LEN=*), PARAMETER :: MATORDERINGROWLENGTH = 'rowlength'
  CHARACTER(LEN=*), PARAMETER :: MATORDERINGWBM = 'wbm'
  CHARACTER(LEN=*), PARAMETER :: MATORDERINGSPECTRAL = 'spectral'
  CHARACTER(LEN=*), PARAMETER :: MATORDERINGAMD = 'amd'
  CHARACTER(LEN=*), PARAMETER :: MATORDERINGMETISND = 'metisnd'
  CHARACTER(LEN=*), PARAMETER :: MATORDERINGNATURAL_OR_ND = 'natural_or_nd'
  CHARACTER(LEN=*), PARAMETER :: MATORDERINGEXTERNAL = 'external'

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGNATURAL
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGND
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERING1WD
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGRCM
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGQMD
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGROWLENGTH
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGWBM
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGSPECTRAL
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGAMD
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGMETISND
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGNATURAL_OR_ND
!DEC$ ATTRIBUTES DLLEXPORT::MATORDERINGEXTERNAL
#endif

  CHARACTER(LEN=*), PARAMETER :: MATCOLORINGJP = 'jp'
  CHARACTER(LEN=*), PARAMETER :: MATCOLORINGPOWER = 'power'
  CHARACTER(LEN=*), PARAMETER :: MATCOLORINGNATURAL = 'natural'
  CHARACTER(LEN=*), PARAMETER :: MATCOLORINGSL = 'sl'
  CHARACTER(LEN=*), PARAMETER :: MATCOLORINGLF = 'lf'
  CHARACTER(LEN=*), PARAMETER :: MATCOLORINGID = 'id'
  CHARACTER(LEN=*), PARAMETER :: MATCOLORINGGREEDY = 'greedy'

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MATCOLORINGJP
!DEC$ ATTRIBUTES DLLEXPORT::MATCOLORINGPOWER
!DEC$ ATTRIBUTES DLLEXPORT::MATCOLORINGNATURAL
!DEC$ ATTRIBUTES DLLEXPORT::MATCOLORINGSL
!DEC$ ATTRIBUTES DLLEXPORT::MATCOLORINGLF
!DEC$ ATTRIBUTES DLLEXPORT::MATCOLORINGID
!DEC$ ATTRIBUTES DLLEXPORT::MATCOLORINGGREEDY
#endif

  CHARACTER(LEN=*), PARAMETER :: MATPARTITIONINGCURRENT = 'current'
  CHARACTER(LEN=*), PARAMETER :: MATPARTITIONINGAVERAGE = 'average'
  CHARACTER(LEN=*), PARAMETER :: MATPARTITIONINGSQUARE = 'square'
  CHARACTER(LEN=*), PARAMETER :: MATPARTITIONINGPARMETIS = 'parmetis'
  CHARACTER(LEN=*), PARAMETER :: MATPARTITIONINGCHACO = 'chaco'
  CHARACTER(LEN=*), PARAMETER :: MATPARTITIONINGPARTY = 'party'
  CHARACTER(LEN=*), PARAMETER :: MATPARTITIONINGPTSCOTCH = 'ptscotch'
  CHARACTER(LEN=*), PARAMETER :: MATPARTITIONINGHIERARCH = 'hierarch'

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MATPARTITIONINGCURRENT
!DEC$ ATTRIBUTES DLLEXPORT::MATPARTITIONINGAVERAGE
!DEC$ ATTRIBUTES DLLEXPORT::MATPARTITIONINGSQUARE
!DEC$ ATTRIBUTES DLLEXPORT::MATPARTITIONINGPARMETIS
!DEC$ ATTRIBUTES DLLEXPORT::MATPARTITIONINGCHACO
!DEC$ ATTRIBUTES DLLEXPORT::MATPARTITIONINGPARTY
!DEC$ ATTRIBUTES DLLEXPORT::MATPARTITIONINGPTSCOTCH
!DEC$ ATTRIBUTES DLLEXPORT::MATPARTITIONINGHIERARCH
#endif

  CHARACTER(LEN=*), PARAMETER :: MATMFFD_DS = 'ds'
  CHARACTER(LEN=*), PARAMETER :: MATMFFD_WP = 'wp'

#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::MATMFFD_DS
!DEC$ ATTRIBUTES DLLEXPORT::MATMFFD_WP
#endif

  type sMatStencil
    PetscInt k, j, i, c
  end type sMatStencil

  type sMatInfo
    PetscLogDouble block_size
    PetscLogDouble nz_allocated, nz_used, nz_unneeded
    PetscLogDouble memory
    PetscLogDouble assemblies
    PetscLogDouble mallocs
    PetscLogDouble fill_ratio_given, fill_ratio_needed
    PetscLogDouble factor_mallocs
  end type sMatInfo

  type sMatFactorInfo
    PetscReal diagonal_fill
    PetscReal usedt
    PetscReal dt
    PetscReal dtcol
    PetscReal dtcount
    PetscReal fill
    PetscReal levels
    PetscReal pivotinblocks
    PetscReal zeropivot
    PetscReal shifttype
    PetscReal shiftamount
    PetscBool factoronhost
    PetscBool solveonhost
  end type sMatFactorInfo

