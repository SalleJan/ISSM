#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfsetgraphlayout_ PETSCSFSETGRAPHLAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfsetgraphlayout_ petscsfsetgraphlayout
#endif
PETSC_EXTERN void petscsfsetgraphlayout_(PetscSF *sf, PetscLayout *layout, PetscInt *nleaves, PetscInt ilocal[], PetscCopyMode *localmode, const PetscInt gremote[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ilocal);
  CHKFORTRANNULLINTEGER(gremote);
  *ierr = PetscSFSetGraphLayout(*sf, *layout, *nleaves, ilocal, *localmode, gremote);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfsetgraphsection_ PETSCSFSETGRAPHSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfsetgraphsection_ petscsfsetgraphsection
#endif
PETSC_EXTERN void petscsfsetgraphsection_(PetscSF *sf, PetscSection *localSection, PetscSection *globalSection, PetscErrorCode *ierr)
{
  *ierr = PetscSFSetGraphSection(*sf, *localSection, *globalSection);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcreatesectionsf_ PETSCSFCREATESECTIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcreatesectionsf_ petscsfcreatesectionsf
#endif
PETSC_EXTERN void petscsfcreatesectionsf_(PetscSF *sf, PetscSection *rootSection, PetscInt remoteOffsets[], PetscSection *leafSection, PetscSF *sectionSF, PetscErrorCode *ierr)
{
  PetscBool null_sectionSF = !*(void**) sectionSF ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(remoteOffsets);
  CHKFORTRANNULLOBJECT(sectionSF);
  *ierr = PetscSFCreateSectionSF(*sf, *rootSection, remoteOffsets, *leafSection, sectionSF);
  if (*ierr) return;
  if (! null_sectionSF && !*(void**) sectionSF) *(void **) sectionSF = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcreatefromlayouts_ PETSCSFCREATEFROMLAYOUTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcreatefromlayouts_ petscsfcreatefromlayouts
#endif
PETSC_EXTERN void petscsfcreatefromlayouts_(PetscLayout *rmap, PetscLayout *lmap, PetscSF *sf, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  *ierr = PetscSFCreateFromLayouts(*rmap, *lmap, sf);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcreatebymatchingindices_ PETSCSFCREATEBYMATCHINGINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcreatebymatchingindices_ petscsfcreatebymatchingindices
#endif
PETSC_EXTERN void petscsfcreatebymatchingindices_(PetscLayout *layout, PetscInt *numRootIndices, const PetscInt rootIndices[], const PetscInt rootLocalIndices[], PetscInt *rootLocalOffset, PetscInt *numLeafIndices, const PetscInt leafIndices[], const PetscInt leafLocalIndices[], PetscInt *leafLocalOffset, PetscSF *sfA, PetscSF *sf, PetscErrorCode *ierr)
{
  PetscBool null_sfA = !*(void**) sfA ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(rootIndices);
  CHKFORTRANNULLINTEGER(rootLocalIndices);
  CHKFORTRANNULLINTEGER(leafIndices);
  CHKFORTRANNULLINTEGER(leafLocalIndices);
  CHKFORTRANNULLOBJECT(sfA);
  CHKFORTRANNULLOBJECT(sf);
  *ierr = PetscSFCreateByMatchingIndices(*layout, *numRootIndices, rootIndices, rootLocalIndices, *rootLocalOffset, *numLeafIndices, leafIndices, leafLocalIndices, *leafLocalOffset, sfA, sf);
  if (*ierr) return;
  if (! null_sfA && !*(void**) sfA) *(void **) sfA = (void *)-2;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfmerge_ PETSCSFMERGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfmerge_ petscsfmerge
#endif
PETSC_EXTERN void petscsfmerge_(PetscSF *sfa, PetscSF *sfb, PetscSF *merged, PetscErrorCode *ierr)
{
  PetscBool null_merged = !*(void**) merged ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(merged);
  *ierr = PetscSFMerge(*sfa, *sfb, merged);
  if (*ierr) return;
  if (! null_merged && !*(void**) merged) *(void **) merged = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcreatestridedsf_ PETSCSFCREATESTRIDEDSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcreatestridedsf_ petscsfcreatestridedsf
#endif
PETSC_EXTERN void petscsfcreatestridedsf_(PetscSF *sf, PetscInt *bs, PetscInt *ldr, PetscInt *ldl, PetscSF *vsf, PetscErrorCode *ierr)
{
  PetscBool null_vsf = !*(void**) vsf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(vsf);
  *ierr = PetscSFCreateStridedSF(*sf, *bs, *ldr, *ldl, vsf);
  if (*ierr) return;
  if (! null_vsf && !*(void**) vsf) *(void **) vsf = (void *)-2;
}
