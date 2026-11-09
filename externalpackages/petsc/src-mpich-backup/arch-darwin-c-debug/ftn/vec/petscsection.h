  type, extends(tPetscObject) ::  tPetscSection
  end type tPetscSection
  PetscSection, parameter :: PETSC_NULL_SECTION = tPetscSection(0)
  PetscSection, target :: PETSC_NULL_SECTION_ARRAY(1) = [tPetscSection(0)]
  PetscSection, pointer :: PETSC_NULL_SECTION_POINTER(:) => PETSC_NULL_SECTION_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SECTION
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SECTION_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SECTION_POINTER
#endif

  type, extends(tPetscObject) ::  tPetscSectionSym
  end type tPetscSectionSym
  PetscSectionSym, parameter :: PETSC_NULL_SECTIONSYM = tPetscSectionSym(0)
  PetscSectionSym, target :: PETSC_NULL_SECTIONSYM_ARRAY(1) = [tPetscSectionSym(0)]
  PetscSectionSym, pointer :: PETSC_NULL_SECTIONSYM_POINTER(:) => PETSC_NULL_SECTIONSYM_ARRAY
#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SECTIONSYM
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SECTIONSYM_ARRAY
!DEC$ ATTRIBUTES DLLEXPORT::PETSC_NULL_SECTIONSYM_POINTER
#endif


#if defined(_WIN32) && defined(PETSC_USE_SHARED_LIBRARIES)
#endif

