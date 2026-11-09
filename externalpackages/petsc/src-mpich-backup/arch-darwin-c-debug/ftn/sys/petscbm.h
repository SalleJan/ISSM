  type, extends(tPetscObject) ::  tPetscBench
  end type tPetscBench
  PetscBench, parameter :: PETSC_NULL_BENCH = tPetscBench(0)
  PetscBench, target :: PETSC_NULL_BENCH_ARRAY(1) = [tPetscBench(0)]
  PetscBench, pointer :: PETSC_NULL_BENCH_POINTER(:) => PETSC_NULL_BENCH_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_BENCH
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_BENCH_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_BENCH_POINTER
#endif


#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
#endif

