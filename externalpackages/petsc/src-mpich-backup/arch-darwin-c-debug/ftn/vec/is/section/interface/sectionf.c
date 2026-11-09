#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncreate_ PETSCSECTIONCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncreate_ petscsectioncreate
#endif
PETSC_EXTERN void petscsectioncreate_(MPI_Fint *comm, PetscSection *s, PetscErrorCode *ierr)
{
  PetscBool null_s = !*(void**) s ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(s);
  CHKFORTRANNULLOBJECT(s);
  *ierr = PetscSectionCreate(MPI_Comm_f2c(*(comm)), s);
  if (*ierr) return;
  if (! null_s && !*(void**) s) *(void **) s = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncopy_ PETSCSECTIONCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncopy_ petscsectioncopy
#endif
PETSC_EXTERN void petscsectioncopy_(PetscSection *section, PetscSection *newSection, PetscErrorCode *ierr)
{
  *ierr = PetscSectionCopy(*section, *newSection);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionclone_ PETSCSECTIONCLONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionclone_ petscsectionclone
#endif
PETSC_EXTERN void petscsectionclone_(PetscSection *section, PetscSection *newSection, PetscErrorCode *ierr)
{
  PetscBool null_newSection = !*(void**) newSection ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newSection);
  *ierr = PetscSectionClone(*section, newSection);
  if (*ierr) return;
  if (! null_newSection && !*(void**) newSection) *(void **) newSection = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetfromoptions_ PETSCSECTIONSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetfromoptions_ petscsectionsetfromoptions
#endif
PETSC_EXTERN void petscsectionsetfromoptions_(PetscSection *s, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetFromOptions(*s);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncompare_ PETSCSECTIONCOMPARE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncompare_ petscsectioncompare
#endif
PETSC_EXTERN void petscsectioncompare_(PetscSection *s1, PetscSection *s2, PetscBool *congruent, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(congruent);
  *ierr = PetscSectionCompare(*s1, *s2, congruent);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetnumfields_ PETSCSECTIONGETNUMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetnumfields_ petscsectiongetnumfields
#endif
PETSC_EXTERN void petscsectiongetnumfields_(PetscSection *s, PetscInt *numFields, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numFields);
  *ierr = PetscSectionGetNumFields(*s, numFields);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetnumfields_ PETSCSECTIONSETNUMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetnumfields_ petscsectionsetnumfields
#endif
PETSC_EXTERN void petscsectionsetnumfields_(PetscSection *s, PetscInt *numFields, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetNumFields(*s, *numFields);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetfieldname_ PETSCSECTIONGETFIELDNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetfieldname_ petscsectiongetfieldname
#endif
PETSC_EXTERN void petscsectiongetfieldname_(PetscSection *s, PetscInt *field, char fieldName[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldName)
{
  char* c_fieldName = PETSC_NULLPTR;
  *ierr = PetscSectionGetFieldName(*s, *field, (const char **)&c_fieldName);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)fieldName, c_fieldName, l_fieldName);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, fieldName, l_fieldName);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetfieldname_ PETSCSECTIONSETFIELDNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetfieldname_ petscsectionsetfieldname
#endif
PETSC_EXTERN void petscsectionsetfieldname_(PetscSection *s, PetscInt *field, char fieldName[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldName)
{
  char* c_fieldName;
  FIXCHAR(fieldName, l_fieldName, c_fieldName);
  *ierr = PetscSectionSetFieldName(*s, *field, c_fieldName);
  if (*ierr) return;
  FREECHAR(fieldName, c_fieldName);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetcomponentname_ PETSCSECTIONGETCOMPONENTNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetcomponentname_ petscsectiongetcomponentname
#endif
PETSC_EXTERN void petscsectiongetcomponentname_(PetscSection *s, PetscInt *field, PetscInt *comp, char compName[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_compName)
{
  char* c_compName = PETSC_NULLPTR;
  *ierr = PetscSectionGetComponentName(*s, *field, *comp, (const char **)&c_compName);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)compName, c_compName, l_compName);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, compName, l_compName);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetcomponentname_ PETSCSECTIONSETCOMPONENTNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetcomponentname_ petscsectionsetcomponentname
#endif
PETSC_EXTERN void petscsectionsetcomponentname_(PetscSection *s, PetscInt *field, PetscInt *comp, char compName[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_compName)
{
  char* c_compName;
  FIXCHAR(compName, l_compName, c_compName);
  *ierr = PetscSectionSetComponentName(*s, *field, *comp, c_compName);
  if (*ierr) return;
  FREECHAR(compName, c_compName);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetfieldcomponents_ PETSCSECTIONGETFIELDCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetfieldcomponents_ petscsectiongetfieldcomponents
#endif
PETSC_EXTERN void petscsectiongetfieldcomponents_(PetscSection *s, PetscInt *field, PetscInt *numComp, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numComp);
  *ierr = PetscSectionGetFieldComponents(*s, *field, numComp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetfieldcomponents_ PETSCSECTIONSETFIELDCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetfieldcomponents_ petscsectionsetfieldcomponents
#endif
PETSC_EXTERN void petscsectionsetfieldcomponents_(PetscSection *s, PetscInt *field, PetscInt *numComp, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetFieldComponents(*s, *field, *numComp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetchart_ PETSCSECTIONGETCHART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetchart_ petscsectiongetchart
#endif
PETSC_EXTERN void petscsectiongetchart_(PetscSection *s, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(pStart);
  CHKFORTRANNULLINTEGER(pEnd);
  *ierr = PetscSectionGetChart(*s, pStart, pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetchart_ PETSCSECTIONSETCHART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetchart_ petscsectionsetchart
#endif
PETSC_EXTERN void petscsectionsetchart_(PetscSection *s, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetChart(*s, *pStart, *pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetpermutation_ PETSCSECTIONGETPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetpermutation_ petscsectiongetpermutation
#endif
PETSC_EXTERN void petscsectiongetpermutation_(PetscSection *s, IS *perm, PetscErrorCode *ierr)
{
  PetscBool null_perm = !*(void**) perm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(perm);
  *ierr = PetscSectionGetPermutation(*s, perm);
  if (*ierr) return;
  if (! null_perm && !*(void**) perm) *(void **) perm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetpermutation_ PETSCSECTIONSETPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetpermutation_ petscsectionsetpermutation
#endif
PETSC_EXTERN void petscsectionsetpermutation_(PetscSection *s, IS *perm, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetPermutation(*s, *perm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetpointmajor_ PETSCSECTIONGETPOINTMAJOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetpointmajor_ petscsectiongetpointmajor
#endif
PETSC_EXTERN void petscsectiongetpointmajor_(PetscSection *s, PetscBool *pm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(pm);
  *ierr = PetscSectionGetPointMajor(*s, pm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetpointmajor_ PETSCSECTIONSETPOINTMAJOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetpointmajor_ petscsectionsetpointmajor
#endif
PETSC_EXTERN void petscsectionsetpointmajor_(PetscSection *s, PetscBool *pm, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetPointMajor(*s, *pm ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetincludesconstraints_ PETSCSECTIONGETINCLUDESCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetincludesconstraints_ petscsectiongetincludesconstraints
#endif
PETSC_EXTERN void petscsectiongetincludesconstraints_(PetscSection *s, PetscBool *includesConstraints, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(includesConstraints);
  *ierr = PetscSectionGetIncludesConstraints(*s, includesConstraints);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetincludesconstraints_ PETSCSECTIONSETINCLUDESCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetincludesconstraints_ petscsectionsetincludesconstraints
#endif
PETSC_EXTERN void petscsectionsetincludesconstraints_(PetscSection *s, PetscBool *includesConstraints, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetIncludesConstraints(*s, *includesConstraints ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetdof_ PETSCSECTIONGETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetdof_ petscsectiongetdof
#endif
PETSC_EXTERN void petscsectiongetdof_(PetscSection *s, PetscInt *point, PetscInt *numDof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numDof);
  *ierr = PetscSectionGetDof(*s, *point, numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetdof_ PETSCSECTIONSETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetdof_ petscsectionsetdof
#endif
PETSC_EXTERN void petscsectionsetdof_(PetscSection *s, PetscInt *point, PetscInt *numDof, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetDof(*s, *point, *numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionadddof_ PETSCSECTIONADDDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionadddof_ petscsectionadddof
#endif
PETSC_EXTERN void petscsectionadddof_(PetscSection *s, PetscInt *point, PetscInt *numDof, PetscErrorCode *ierr)
{
  *ierr = PetscSectionAddDof(*s, *point, *numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetfielddof_ PETSCSECTIONGETFIELDDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetfielddof_ petscsectiongetfielddof
#endif
PETSC_EXTERN void petscsectiongetfielddof_(PetscSection *s, PetscInt *point, PetscInt *field, PetscInt *numDof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numDof);
  *ierr = PetscSectionGetFieldDof(*s, *point, *field, numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetfielddof_ PETSCSECTIONSETFIELDDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetfielddof_ petscsectionsetfielddof
#endif
PETSC_EXTERN void petscsectionsetfielddof_(PetscSection *s, PetscInt *point, PetscInt *field, PetscInt *numDof, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetFieldDof(*s, *point, *field, *numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionaddfielddof_ PETSCSECTIONADDFIELDDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionaddfielddof_ petscsectionaddfielddof
#endif
PETSC_EXTERN void petscsectionaddfielddof_(PetscSection *s, PetscInt *point, PetscInt *field, PetscInt *numDof, PetscErrorCode *ierr)
{
  *ierr = PetscSectionAddFieldDof(*s, *point, *field, *numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetconstraintdof_ PETSCSECTIONGETCONSTRAINTDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetconstraintdof_ petscsectiongetconstraintdof
#endif
PETSC_EXTERN void petscsectiongetconstraintdof_(PetscSection *s, PetscInt *point, PetscInt *numDof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numDof);
  *ierr = PetscSectionGetConstraintDof(*s, *point, numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetconstraintdof_ PETSCSECTIONSETCONSTRAINTDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetconstraintdof_ petscsectionsetconstraintdof
#endif
PETSC_EXTERN void petscsectionsetconstraintdof_(PetscSection *s, PetscInt *point, PetscInt *numDof, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetConstraintDof(*s, *point, *numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionaddconstraintdof_ PETSCSECTIONADDCONSTRAINTDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionaddconstraintdof_ petscsectionaddconstraintdof
#endif
PETSC_EXTERN void petscsectionaddconstraintdof_(PetscSection *s, PetscInt *point, PetscInt *numDof, PetscErrorCode *ierr)
{
  *ierr = PetscSectionAddConstraintDof(*s, *point, *numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetfieldconstraintdof_ PETSCSECTIONGETFIELDCONSTRAINTDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetfieldconstraintdof_ petscsectiongetfieldconstraintdof
#endif
PETSC_EXTERN void petscsectiongetfieldconstraintdof_(PetscSection *s, PetscInt *point, PetscInt *field, PetscInt *numDof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numDof);
  *ierr = PetscSectionGetFieldConstraintDof(*s, *point, *field, numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetfieldconstraintdof_ PETSCSECTIONSETFIELDCONSTRAINTDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetfieldconstraintdof_ petscsectionsetfieldconstraintdof
#endif
PETSC_EXTERN void petscsectionsetfieldconstraintdof_(PetscSection *s, PetscInt *point, PetscInt *field, PetscInt *numDof, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetFieldConstraintDof(*s, *point, *field, *numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionaddfieldconstraintdof_ PETSCSECTIONADDFIELDCONSTRAINTDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionaddfieldconstraintdof_ petscsectionaddfieldconstraintdof
#endif
PETSC_EXTERN void petscsectionaddfieldconstraintdof_(PetscSection *s, PetscInt *point, PetscInt *field, PetscInt *numDof, PetscErrorCode *ierr)
{
  *ierr = PetscSectionAddFieldConstraintDof(*s, *point, *field, *numDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetupbc_ PETSCSECTIONSETUPBC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetupbc_ petscsectionsetupbc
#endif
PETSC_EXTERN void petscsectionsetupbc_(PetscSection *s, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetUpBC(*s);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetup_ PETSCSECTIONSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetup_ petscsectionsetup
#endif
PETSC_EXTERN void petscsectionsetup_(PetscSection *s, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetUp(*s);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetmaxdof_ PETSCSECTIONGETMAXDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetmaxdof_ petscsectiongetmaxdof
#endif
PETSC_EXTERN void petscsectiongetmaxdof_(PetscSection *s, PetscInt *maxDof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(maxDof);
  *ierr = PetscSectionGetMaxDof(*s, maxDof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetstoragesize_ PETSCSECTIONGETSTORAGESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetstoragesize_ petscsectiongetstoragesize
#endif
PETSC_EXTERN void petscsectiongetstoragesize_(PetscSection *s, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = PetscSectionGetStorageSize(*s, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetconstrainedstoragesize_ PETSCSECTIONGETCONSTRAINEDSTORAGESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetconstrainedstoragesize_ petscsectiongetconstrainedstoragesize
#endif
PETSC_EXTERN void petscsectiongetconstrainedstoragesize_(PetscSection *s, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = PetscSectionGetConstrainedStorageSize(*s, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncreateglobalsection_ PETSCSECTIONCREATEGLOBALSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncreateglobalsection_ petscsectioncreateglobalsection
#endif
PETSC_EXTERN void petscsectioncreateglobalsection_(PetscSection *s, PetscSF *sf, PetscBool *usePermutation, PetscBool *includeConstraints, PetscBool *localOffsets, PetscSection *gsection, PetscErrorCode *ierr)
{
  PetscBool null_gsection = !*(void**) gsection ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(gsection);
  *ierr = PetscSectionCreateGlobalSection(*s, *sf, *usePermutation ? PETSC_TRUE : PETSC_FALSE, *includeConstraints ? PETSC_TRUE : PETSC_FALSE, *localOffsets ? PETSC_TRUE : PETSC_FALSE, gsection);
  if (*ierr) return;
  if (! null_gsection && !*(void**) gsection) *(void **) gsection = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncreateglobalsectioncensored_ PETSCSECTIONCREATEGLOBALSECTIONCENSORED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncreateglobalsectioncensored_ petscsectioncreateglobalsectioncensored
#endif
PETSC_EXTERN void petscsectioncreateglobalsectioncensored_(PetscSection *s, PetscSF *sf, PetscBool *includeConstraints, PetscInt *numExcludes, const PetscInt excludes[], PetscSection *gsection, PetscErrorCode *ierr)
{
  PetscBool null_gsection = !*(void**) gsection ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(excludes);
  CHKFORTRANNULLOBJECT(gsection);
  *ierr = PetscSectionCreateGlobalSectionCensored(*s, *sf, *includeConstraints ? PETSC_TRUE : PETSC_FALSE, *numExcludes, excludes, gsection);
  if (*ierr) return;
  if (! null_gsection && !*(void**) gsection) *(void **) gsection = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetpointlayout_ PETSCSECTIONGETPOINTLAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetpointlayout_ petscsectiongetpointlayout
#endif
PETSC_EXTERN void petscsectiongetpointlayout_(MPI_Fint *comm, PetscSection *s, PetscLayout *layout, PetscErrorCode *ierr)
{
  PetscBool null_layout = !*(void**) layout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(layout);
  *ierr = PetscSectionGetPointLayout(MPI_Comm_f2c(*(comm)), *s, layout);
  if (*ierr) return;
  if (! null_layout && !*(void**) layout) *(void **) layout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetvaluelayout_ PETSCSECTIONGETVALUELAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetvaluelayout_ petscsectiongetvaluelayout
#endif
PETSC_EXTERN void petscsectiongetvaluelayout_(MPI_Fint *comm, PetscSection *s, PetscLayout *layout, PetscErrorCode *ierr)
{
  PetscBool null_layout = !*(void**) layout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(layout);
  *ierr = PetscSectionGetValueLayout(MPI_Comm_f2c(*(comm)), *s, layout);
  if (*ierr) return;
  if (! null_layout && !*(void**) layout) *(void **) layout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetoffset_ PETSCSECTIONGETOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetoffset_ petscsectiongetoffset
#endif
PETSC_EXTERN void petscsectiongetoffset_(PetscSection *s, PetscInt *point, PetscInt *offset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(offset);
  *ierr = PetscSectionGetOffset(*s, *point, offset);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetoffset_ PETSCSECTIONSETOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetoffset_ petscsectionsetoffset
#endif
PETSC_EXTERN void petscsectionsetoffset_(PetscSection *s, PetscInt *point, PetscInt *offset, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetOffset(*s, *point, *offset);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetfieldoffset_ PETSCSECTIONGETFIELDOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetfieldoffset_ petscsectiongetfieldoffset
#endif
PETSC_EXTERN void petscsectiongetfieldoffset_(PetscSection *s, PetscInt *point, PetscInt *field, PetscInt *offset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(offset);
  *ierr = PetscSectionGetFieldOffset(*s, *point, *field, offset);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetfieldoffset_ PETSCSECTIONSETFIELDOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetfieldoffset_ petscsectionsetfieldoffset
#endif
PETSC_EXTERN void petscsectionsetfieldoffset_(PetscSection *s, PetscInt *point, PetscInt *field, PetscInt *offset, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetFieldOffset(*s, *point, *field, *offset);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetfieldpointoffset_ PETSCSECTIONGETFIELDPOINTOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetfieldpointoffset_ petscsectiongetfieldpointoffset
#endif
PETSC_EXTERN void petscsectiongetfieldpointoffset_(PetscSection *s, PetscInt *point, PetscInt *field, PetscInt *offset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(offset);
  *ierr = PetscSectionGetFieldPointOffset(*s, *point, *field, offset);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetoffsetrange_ PETSCSECTIONGETOFFSETRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetoffsetrange_ petscsectiongetoffsetrange
#endif
PETSC_EXTERN void petscsectiongetoffsetrange_(PetscSection *s, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = PetscSectionGetOffsetRange(*s, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncreatesubsection_ PETSCSECTIONCREATESUBSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncreatesubsection_ petscsectioncreatesubsection
#endif
PETSC_EXTERN void petscsectioncreatesubsection_(PetscSection *s, PetscInt *len, const PetscInt fields[], PetscSection *subs, PetscErrorCode *ierr)
{
  PetscBool null_subs = !*(void**) subs ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(fields);
  CHKFORTRANNULLOBJECT(subs);
  *ierr = PetscSectionCreateSubsection(*s, *len, fields, subs);
  if (*ierr) return;
  if (! null_subs && !*(void**) subs) *(void **) subs = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncreatecomponentsubsection_ PETSCSECTIONCREATECOMPONENTSUBSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncreatecomponentsubsection_ petscsectioncreatecomponentsubsection
#endif
PETSC_EXTERN void petscsectioncreatecomponentsubsection_(PetscSection *s, PetscInt *len, const PetscInt comps[], PetscSection *subs, PetscErrorCode *ierr)
{
  PetscBool null_subs = !*(void**) subs ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(comps);
  CHKFORTRANNULLOBJECT(subs);
  *ierr = PetscSectionCreateComponentSubsection(*s, *len, comps, subs);
  if (*ierr) return;
  if (! null_subs && !*(void**) subs) *(void **) subs = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncreatesupersection_ PETSCSECTIONCREATESUPERSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncreatesupersection_ petscsectioncreatesupersection
#endif
PETSC_EXTERN void petscsectioncreatesupersection_(PetscSection s[], PetscInt *len, PetscSection *supers, PetscErrorCode *ierr)
{
  PetscBool null_supers = !*(void**) supers ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(s);
  CHKFORTRANNULLOBJECT(supers);
  *ierr = PetscSectionCreateSupersection(s, *len, supers);
  if (*ierr) return;
  if (! null_supers && !*(void**) supers) *(void **) supers = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncreatesubmeshsection_ PETSCSECTIONCREATESUBMESHSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncreatesubmeshsection_ petscsectioncreatesubmeshsection
#endif
PETSC_EXTERN void petscsectioncreatesubmeshsection_(PetscSection *s, IS *subpointIS, PetscSection *subs, PetscErrorCode *ierr)
{
  PetscBool null_subs = !*(void**) subs ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subs);
  *ierr = PetscSectionCreateSubmeshSection(*s, *subpointIS, subs);
  if (*ierr) return;
  if (! null_subs && !*(void**) subs) *(void **) subs = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncreatesubdomainsection_ PETSCSECTIONCREATESUBDOMAINSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncreatesubdomainsection_ petscsectioncreatesubdomainsection
#endif
PETSC_EXTERN void petscsectioncreatesubdomainsection_(PetscSection *s, IS *subpointMap, PetscSection *subs, PetscErrorCode *ierr)
{
  PetscBool null_subs = !*(void**) subs ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subs);
  *ierr = PetscSectionCreateSubdomainSection(*s, *subpointMap, subs);
  if (*ierr) return;
  if (! null_subs && !*(void**) subs) *(void **) subs = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionviewfromoptions_ PETSCSECTIONVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionviewfromoptions_ petscsectionviewfromoptions
#endif
PETSC_EXTERN void petscsectionviewfromoptions_(PetscSection *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscSectionViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionview_ PETSCSECTIONVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionview_ petscsectionview
#endif
PETSC_EXTERN void petscsectionview_(PetscSection *s, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscSectionView(*s, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionload_ PETSCSECTIONLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionload_ petscsectionload
#endif
PETSC_EXTERN void petscsectionload_(PetscSection *s, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscSectionLoad(*s, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionarrayview_ PETSCSECTIONARRAYVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionarrayview_ petscsectionarrayview
#endif
PETSC_EXTERN void petscsectionarrayview_(PetscSection *s, void *array, PetscDataType *data_type, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscSectionArrayView(*s, array, *data_type, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionresetclosurepermutation_ PETSCSECTIONRESETCLOSUREPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionresetclosurepermutation_ petscsectionresetclosurepermutation
#endif
PETSC_EXTERN void petscsectionresetclosurepermutation_(PetscSection *section, PetscErrorCode *ierr)
{
  *ierr = PetscSectionResetClosurePermutation(*section);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionreset_ PETSCSECTIONRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionreset_ petscsectionreset
#endif
PETSC_EXTERN void petscsectionreset_(PetscSection *s, PetscErrorCode *ierr)
{
  *ierr = PetscSectionReset(*s);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiondestroy_ PETSCSECTIONDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiondestroy_ petscsectiondestroy
#endif
PETSC_EXTERN void petscsectiondestroy_(PetscSection *s, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(s);
  PetscBool null_s = !*(void**) s ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(s);
  *ierr = PetscSectionDestroy(s);
  if (*ierr) return;
  if (! null_s && !*(void**) s) *(void **) s = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionhasconstraints_ PETSCSECTIONHASCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionhasconstraints_ petscsectionhasconstraints
#endif
PETSC_EXTERN void petscsectionhasconstraints_(PetscSection *s, PetscBool *hasConstraints, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasConstraints);
  *ierr = PetscSectionHasConstraints(*s, hasConstraints);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetconstraintindices_ PETSCSECTIONSETCONSTRAINTINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetconstraintindices_ petscsectionsetconstraintindices
#endif
PETSC_EXTERN void petscsectionsetconstraintindices_(PetscSection *s, PetscInt *point, const PetscInt indices[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(indices);
  *ierr = PetscSectionSetConstraintIndices(*s, *point, indices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetfieldconstraintindices_ PETSCSECTIONSETFIELDCONSTRAINTINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetfieldconstraintindices_ petscsectionsetfieldconstraintindices
#endif
PETSC_EXTERN void petscsectionsetfieldconstraintindices_(PetscSection *s, PetscInt *point, PetscInt *field, const PetscInt indices[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(indices);
  *ierr = PetscSectionSetFieldConstraintIndices(*s, *point, *field, indices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionpermute_ PETSCSECTIONPERMUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionpermute_ petscsectionpermute
#endif
PETSC_EXTERN void petscsectionpermute_(PetscSection *section, IS *permutation, PetscSection *sectionNew, PetscErrorCode *ierr)
{
  PetscBool null_sectionNew = !*(void**) sectionNew ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sectionNew);
  *ierr = PetscSectionPermute(*section, *permutation, sectionNew);
  if (*ierr) return;
  if (! null_sectionNew && !*(void**) sectionNew) *(void **) sectionNew = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetclosureindex_ PETSCSECTIONSETCLOSUREINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetclosureindex_ petscsectionsetclosureindex
#endif
PETSC_EXTERN void petscsectionsetclosureindex_(PetscSection *section, PetscObject *obj, PetscSection *clSection, IS *clPoints, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetClosureIndex(*section, *obj, *clSection, *clPoints);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetclosureindex_ PETSCSECTIONGETCLOSUREINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetclosureindex_ petscsectiongetclosureindex
#endif
PETSC_EXTERN void petscsectiongetclosureindex_(PetscSection *section, PetscObject *obj, PetscSection *clSection, IS *clPoints, PetscErrorCode *ierr)
{
  PetscBool null_clSection = !*(void**) clSection ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_clPoints = !*(void**) clPoints ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(clSection);
  CHKFORTRANNULLOBJECT(clPoints);
  *ierr = PetscSectionGetClosureIndex(*section, *obj, clSection, clPoints);
  if (*ierr) return;
  if (! null_clSection && !*(void**) clSection) *(void **) clSection = (void *)-2;
  if (! null_clPoints && !*(void**) clPoints) *(void **) clPoints = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetclosurepermutation_ PETSCSECTIONSETCLOSUREPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetclosurepermutation_ petscsectionsetclosurepermutation
#endif
PETSC_EXTERN void petscsectionsetclosurepermutation_(PetscSection *section, PetscObject *obj, PetscInt *depth, IS *perm, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetClosurePermutation(*section, *obj, *depth, *perm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetclosurepermutation_ PETSCSECTIONGETCLOSUREPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetclosurepermutation_ petscsectiongetclosurepermutation
#endif
PETSC_EXTERN void petscsectiongetclosurepermutation_(PetscSection *section, PetscObject *obj, PetscInt *depth, PetscInt *clSize, IS *perm, PetscErrorCode *ierr)
{
  PetscBool null_perm = !*(void**) perm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(perm);
  *ierr = PetscSectionGetClosurePermutation(*section, *obj, *depth, *clSize, perm);
  if (*ierr) return;
  if (! null_perm && !*(void**) perm) *(void **) perm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetclosureinversepermutation_ PETSCSECTIONGETCLOSUREINVERSEPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetclosureinversepermutation_ petscsectiongetclosureinversepermutation
#endif
PETSC_EXTERN void petscsectiongetclosureinversepermutation_(PetscSection *section, PetscObject *obj, PetscInt *depth, PetscInt *clSize, IS *perm, PetscErrorCode *ierr)
{
  PetscBool null_perm = !*(void**) perm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(perm);
  *ierr = PetscSectionGetClosureInversePermutation(*section, *obj, *depth, *clSize, perm);
  if (*ierr) return;
  if (! null_perm && !*(void**) perm) *(void **) perm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetfield_ PETSCSECTIONGETFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetfield_ petscsectiongetfield
#endif
PETSC_EXTERN void petscsectiongetfield_(PetscSection *s, PetscInt *field, PetscSection *subs, PetscErrorCode *ierr)
{
  PetscBool null_subs = !*(void**) subs ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subs);
  *ierr = PetscSectionGetField(*s, *field, subs);
  if (*ierr) return;
  if (! null_subs && !*(void**) subs) *(void **) subs = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetsym_ PETSCSECTIONSETSYM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetsym_ petscsectionsetsym
#endif
PETSC_EXTERN void petscsectionsetsym_(PetscSection *section, PetscSectionSym *sym, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetSym(*section, *sym);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetsym_ PETSCSECTIONGETSYM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetsym_ petscsectiongetsym
#endif
PETSC_EXTERN void petscsectiongetsym_(PetscSection *section, PetscSectionSym *sym, PetscErrorCode *ierr)
{
  PetscBool null_sym = !*(void**) sym ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sym);
  *ierr = PetscSectionGetSym(*section, sym);
  if (*ierr) return;
  if (! null_sym && !*(void**) sym) *(void **) sym = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetfieldsym_ PETSCSECTIONSETFIELDSYM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetfieldsym_ petscsectionsetfieldsym
#endif
PETSC_EXTERN void petscsectionsetfieldsym_(PetscSection *section, PetscInt *field, PetscSectionSym *sym, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetFieldSym(*section, *field, *sym);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetfieldsym_ PETSCSECTIONGETFIELDSYM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetfieldsym_ petscsectiongetfieldsym
#endif
PETSC_EXTERN void petscsectiongetfieldsym_(PetscSection *section, PetscInt *field, PetscSectionSym *sym, PetscErrorCode *ierr)
{
  PetscBool null_sym = !*(void**) sym ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sym);
  *ierr = PetscSectionGetFieldSym(*section, *field, sym);
  if (*ierr) return;
  if (! null_sym && !*(void**) sym) *(void **) sym = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectiongetusefieldoffsets_ PETSCSECTIONGETUSEFIELDOFFSETS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectiongetusefieldoffsets_ petscsectiongetusefieldoffsets
#endif
PETSC_EXTERN void petscsectiongetusefieldoffsets_(PetscSection *s, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscSectionGetUseFieldOffsets(*s, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsetusefieldoffsets_ PETSCSECTIONSETUSEFIELDOFFSETS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsetusefieldoffsets_ petscsectionsetusefieldoffsets
#endif
PETSC_EXTERN void petscsectionsetusefieldoffsets_(PetscSection *s, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSetUseFieldOffsets(*s, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsymcreate_ PETSCSECTIONSYMCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsymcreate_ petscsectionsymcreate
#endif
PETSC_EXTERN void petscsectionsymcreate_(MPI_Fint *comm, PetscSectionSym *sym, PetscErrorCode *ierr)
{
  PetscBool null_sym = !*(void**) sym ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(sym);
  CHKFORTRANNULLOBJECT(sym);
  *ierr = PetscSectionSymCreate(MPI_Comm_f2c(*(comm)), sym);
  if (*ierr) return;
  if (! null_sym && !*(void**) sym) *(void **) sym = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsymsettype_ PETSCSECTIONSYMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsymsettype_ petscsectionsymsettype
#endif
PETSC_EXTERN void petscsectionsymsettype_(PetscSectionSym *sym, char *method, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_method)
{
  char* c_method;
  FIXCHAR(method, l_method, c_method);
  *ierr = PetscSectionSymSetType(*sym, c_method);
  if (*ierr) return;
  FREECHAR(method, c_method);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsymgettype_ PETSCSECTIONSYMGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsymgettype_ petscsectionsymgettype
#endif
PETSC_EXTERN void petscsectionsymgettype_(PetscSectionSym *sym, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = PetscSectionSymGetType(*sym, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsymdestroy_ PETSCSECTIONSYMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsymdestroy_ petscsectionsymdestroy
#endif
PETSC_EXTERN void petscsectionsymdestroy_(PetscSectionSym *sym, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(sym);
  PetscBool null_sym = !*(void**) sym ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sym);
  *ierr = PetscSectionSymDestroy(sym);
  if (*ierr) return;
  if (! null_sym && !*(void**) sym) *(void **) sym = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsymview_ PETSCSECTIONSYMVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsymview_ petscsectionsymview
#endif
PETSC_EXTERN void petscsectionsymview_(PetscSectionSym *sym, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscSectionSymView(*sym, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsymcopy_ PETSCSECTIONSYMCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsymcopy_ petscsectionsymcopy
#endif
PETSC_EXTERN void petscsectionsymcopy_(PetscSectionSym *sym, PetscSectionSym *nsym, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSymCopy(*sym, *nsym);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsection.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsymdistribute_ PETSCSECTIONSYMDISTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsymdistribute_ petscsectionsymdistribute
#endif
PETSC_EXTERN void petscsectionsymdistribute_(PetscSectionSym *sym, PetscSF *migrationSF, PetscSectionSym *dsym, PetscErrorCode *ierr)
{
  PetscBool null_dsym = !*(void**) dsym ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dsym);
  *ierr = PetscSectionSymDistribute(*sym, *migrationSF, dsym);
  if (*ierr) return;
  if (! null_dsym && !*(void**) dsym) *(void **) dsym = (void *)-2;
}
