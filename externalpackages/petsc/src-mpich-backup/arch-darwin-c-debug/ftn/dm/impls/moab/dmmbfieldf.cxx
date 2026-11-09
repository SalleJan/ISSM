#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabsetfieldvector_ DMMOABSETFIELDVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabsetfieldvector_ dmmoabsetfieldvector
#endif
PETSC_EXTERN void dmmoabsetfieldvector_(DM *dm, PetscInt *ifield, Vec *fvec, PetscErrorCode *ierr)
{
  *ierr = DMMoabSetFieldVector(*dm, *ifield, *fvec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabsetglobalfieldvector_ DMMOABSETGLOBALFIELDVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabsetglobalfieldvector_ dmmoabsetglobalfieldvector
#endif
PETSC_EXTERN void dmmoabsetglobalfieldvector_(DM *dm, Vec *fvec, PetscErrorCode *ierr)
{
  *ierr = DMMoabSetGlobalFieldVector(*dm, *fvec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabsetfieldnames_ DMMOABSETFIELDNAMES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabsetfieldnames_ dmmoabsetfieldnames
#endif
PETSC_EXTERN void dmmoabsetfieldnames_(DM *dm, PetscInt *numFields, char fields[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fields)
{
  char* c_fields = PETSC_NULLPTR;
  *ierr = DMMoabSetFieldNames(*dm, *numFields, (const char **)&c_fields);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)fields, c_fields, l_fields);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, fields, l_fields);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetfieldname_ DMMOABGETFIELDNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetfieldname_ dmmoabgetfieldname
#endif
PETSC_EXTERN void dmmoabgetfieldname_(DM *dm, PetscInt *field, char fieldName[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldName)
{
  char* c_fieldName = PETSC_NULLPTR;
  *ierr = DMMoabGetFieldName(*dm, *field, (const char **)&c_fieldName);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)fieldName, c_fieldName, l_fieldName);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, fieldName, l_fieldName);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabsetfieldname_ DMMOABSETFIELDNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabsetfieldname_ dmmoabsetfieldname
#endif
PETSC_EXTERN void dmmoabsetfieldname_(DM *dm, PetscInt *field, char fieldName[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldName)
{
  char* c_fieldName;
  FIXCHAR(fieldName, l_fieldName, c_fieldName);
  *ierr = DMMoabSetFieldName(*dm, *field, c_fieldName);
  if (*ierr) return;
  FREECHAR(fieldName, c_fieldName);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetfielddof_ DMMOABGETFIELDDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetfielddof_ dmmoabgetfielddof
#endif
PETSC_EXTERN void dmmoabgetfielddof_(DM *dm, moab::EntityHandle *point, PetscInt *field, PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof);
  *ierr = DMMoabGetFieldDof(*dm, *point, *field, dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetfielddofs_ DMMOABGETFIELDDOFS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetfielddofs_ dmmoabgetfielddofs
#endif
PETSC_EXTERN void dmmoabgetfielddofs_(DM *dm, PetscInt *npoints, const moab::EntityHandle *points, PetscInt *field, PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof);
  *ierr = DMMoabGetFieldDofs(*dm, *npoints, points, *field, dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetfielddofslocal_ DMMOABGETFIELDDOFSLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetfielddofslocal_ dmmoabgetfielddofslocal
#endif
PETSC_EXTERN void dmmoabgetfielddofslocal_(DM *dm, PetscInt *npoints, const moab::EntityHandle *points, PetscInt *field, PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof);
  *ierr = DMMoabGetFieldDofsLocal(*dm, *npoints, points, *field, dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetdofs_ DMMOABGETDOFS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetdofs_ dmmoabgetdofs
#endif
PETSC_EXTERN void dmmoabgetdofs_(DM *dm, PetscInt *npoints, const moab::EntityHandle *points, PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof);
  *ierr = DMMoabGetDofs(*dm, *npoints, points, dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetdofslocal_ DMMOABGETDOFSLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetdofslocal_ dmmoabgetdofslocal
#endif
PETSC_EXTERN void dmmoabgetdofslocal_(DM *dm, PetscInt *npoints, const moab::EntityHandle *points, PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof);
  *ierr = DMMoabGetDofsLocal(*dm, *npoints, points, dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetdofsblocked_ DMMOABGETDOFSBLOCKED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetdofsblocked_ dmmoabgetdofsblocked
#endif
PETSC_EXTERN void dmmoabgetdofsblocked_(DM *dm, PetscInt *npoints, const moab::EntityHandle *points, PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof);
  *ierr = DMMoabGetDofsBlocked(*dm, *npoints, points, dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetdofsblockedlocal_ DMMOABGETDOFSBLOCKEDLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetdofsblockedlocal_ dmmoabgetdofsblockedlocal
#endif
PETSC_EXTERN void dmmoabgetdofsblockedlocal_(DM *dm, PetscInt *npoints, const moab::EntityHandle *points, PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof);
  *ierr = DMMoabGetDofsBlockedLocal(*dm, *npoints, points, dof);
  if (*ierr) return;
}
