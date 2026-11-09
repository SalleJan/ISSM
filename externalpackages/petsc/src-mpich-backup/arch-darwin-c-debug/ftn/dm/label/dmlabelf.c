#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectioncreateglobalsectionlabel_ PETSCSECTIONCREATEGLOBALSECTIONLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectioncreateglobalsectionlabel_ petscsectioncreateglobalsectionlabel
#endif
PETSC_EXTERN void petscsectioncreateglobalsectionlabel_(PetscSection *s, PetscSF *sf, PetscBool *includeConstraints, DMLabel *label, PetscInt *labelValue, PetscSection *gsection, PetscErrorCode *ierr)
{
  PetscBool null_gsection = !*(void**) gsection ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(gsection);
  *ierr = PetscSectionCreateGlobalSectionLabel(*s, *sf, *includeConstraints ? PETSC_TRUE : PETSC_FALSE, *label, *labelValue, gsection);
  if (*ierr) return;
  if (! null_gsection && !*(void**) gsection) *(void **) gsection = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsymlabelsetlabel_ PETSCSECTIONSYMLABELSETLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsymlabelsetlabel_ petscsectionsymlabelsetlabel
#endif
PETSC_EXTERN void petscsectionsymlabelsetlabel_(PetscSectionSym *sym, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = PetscSectionSymLabelSetLabel(*sym, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsectionsymcreatelabel_ PETSCSECTIONSYMCREATELABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsectionsymcreatelabel_ petscsectionsymcreatelabel
#endif
PETSC_EXTERN void petscsectionsymcreatelabel_(MPI_Fint *comm, DMLabel *label, PetscSectionSym *sym, PetscErrorCode *ierr)
{
  PetscBool null_sym = !*(void**) sym ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sym);
  *ierr = PetscSectionSymCreateLabel(MPI_Comm_f2c(*(comm)), *label, sym);
  if (*ierr) return;
  if (! null_sym && !*(void**) sym) *(void **) sym = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelcreate_ DMLABELCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelcreate_ dmlabelcreate
#endif
PETSC_EXTERN void dmlabelcreate_(MPI_Fint *comm, char name[], DMLabel *label, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_label = !*(void**) label ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(label);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(label);
  *ierr = DMLabelCreate(MPI_Comm_f2c(*(comm)), c_name, label);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_label && !*(void**) label) *(void **) label = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelsetup_ DMLABELSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelsetup_ dmlabelsetup
#endif
PETSC_EXTERN void dmlabelsetup_(DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMLabelSetUp(*label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabeladdstratum_ DMLABELADDSTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabeladdstratum_ dmlabeladdstratum
#endif
PETSC_EXTERN void dmlabeladdstratum_(DMLabel *label, PetscInt *value, PetscErrorCode *ierr)
{
  *ierr = DMLabelAddStratum(*label, *value);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabeladdstrata_ DMLABELADDSTRATA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabeladdstrata_ dmlabeladdstrata
#endif
PETSC_EXTERN void dmlabeladdstrata_(DMLabel *label, PetscInt *numStrata, const PetscInt stratumValues[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(stratumValues);
  *ierr = DMLabelAddStrata(*label, *numStrata, stratumValues);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabeladdstratais_ DMLABELADDSTRATAIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabeladdstratais_ dmlabeladdstratais
#endif
PETSC_EXTERN void dmlabeladdstratais_(DMLabel *label, IS *valueIS, PetscErrorCode *ierr)
{
  *ierr = DMLabelAddStrataIS(*label, *valueIS);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelview_ DMLABELVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelview_ dmlabelview
#endif
PETSC_EXTERN void dmlabelview_(DMLabel *label, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMLabelView(*label, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelviewfromoptions_ DMLABELVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelviewfromoptions_ dmlabelviewfromoptions
#endif
PETSC_EXTERN void dmlabelviewfromoptions_(DMLabel *label, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMLabelViewFromOptions(*label, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelreset_ DMLABELRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelreset_ dmlabelreset
#endif
PETSC_EXTERN void dmlabelreset_(DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMLabelReset(*label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabeldestroy_ DMLABELDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabeldestroy_ dmlabeldestroy
#endif
PETSC_EXTERN void dmlabeldestroy_(DMLabel *label, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(label);
  PetscBool null_label = !*(void**) label ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(label);
  *ierr = DMLabelDestroy(label);
  if (*ierr) return;
  if (! null_label && !*(void**) label) *(void **) label = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelduplicate_ DMLABELDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelduplicate_ dmlabelduplicate
#endif
PETSC_EXTERN void dmlabelduplicate_(DMLabel *label, DMLabel *labelnew, PetscErrorCode *ierr)
{
  PetscBool null_labelnew = !*(void**) labelnew ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(labelnew);
  *ierr = DMLabelDuplicate(*label, labelnew);
  if (*ierr) return;
  if (! null_labelnew && !*(void**) labelnew) *(void **) labelnew = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelcomputeindex_ DMLABELCOMPUTEINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelcomputeindex_ dmlabelcomputeindex
#endif
PETSC_EXTERN void dmlabelcomputeindex_(DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMLabelComputeIndex(*label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelcreateindex_ DMLABELCREATEINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelcreateindex_ dmlabelcreateindex
#endif
PETSC_EXTERN void dmlabelcreateindex_(DMLabel *label, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  *ierr = DMLabelCreateIndex(*label, *pStart, *pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabeldestroyindex_ DMLABELDESTROYINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabeldestroyindex_ dmlabeldestroyindex
#endif
PETSC_EXTERN void dmlabeldestroyindex_(DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMLabelDestroyIndex(*label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetbounds_ DMLABELGETBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetbounds_ dmlabelgetbounds
#endif
PETSC_EXTERN void dmlabelgetbounds_(DMLabel *label, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(pStart);
  CHKFORTRANNULLINTEGER(pEnd);
  *ierr = DMLabelGetBounds(*label, pStart, pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelhasvalue_ DMLABELHASVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelhasvalue_ dmlabelhasvalue
#endif
PETSC_EXTERN void dmlabelhasvalue_(DMLabel *label, PetscInt *value, PetscBool *contains, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(contains);
  *ierr = DMLabelHasValue(*label, *value, contains);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelhaspoint_ DMLABELHASPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelhaspoint_ dmlabelhaspoint
#endif
PETSC_EXTERN void dmlabelhaspoint_(DMLabel *label, PetscInt *point, PetscBool *contains, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(contains);
  *ierr = DMLabelHasPoint(*label, *point, contains);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelstratumhaspoint_ DMLABELSTRATUMHASPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelstratumhaspoint_ dmlabelstratumhaspoint
#endif
PETSC_EXTERN void dmlabelstratumhaspoint_(DMLabel *label, PetscInt *value, PetscInt *point, PetscBool *contains, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(contains);
  *ierr = DMLabelStratumHasPoint(*label, *value, *point, contains);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetdefaultvalue_ DMLABELGETDEFAULTVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetdefaultvalue_ dmlabelgetdefaultvalue
#endif
PETSC_EXTERN void dmlabelgetdefaultvalue_(DMLabel *label, PetscInt *defaultValue, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(defaultValue);
  *ierr = DMLabelGetDefaultValue(*label, defaultValue);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelsetdefaultvalue_ DMLABELSETDEFAULTVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelsetdefaultvalue_ dmlabelsetdefaultvalue
#endif
PETSC_EXTERN void dmlabelsetdefaultvalue_(DMLabel *label, PetscInt *defaultValue, PetscErrorCode *ierr)
{
  *ierr = DMLabelSetDefaultValue(*label, *defaultValue);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetvalue_ DMLABELGETVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetvalue_ dmlabelgetvalue
#endif
PETSC_EXTERN void dmlabelgetvalue_(DMLabel *label, PetscInt *point, PetscInt *value, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(value);
  *ierr = DMLabelGetValue(*label, *point, value);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelsetvalue_ DMLABELSETVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelsetvalue_ dmlabelsetvalue
#endif
PETSC_EXTERN void dmlabelsetvalue_(DMLabel *label, PetscInt *point, PetscInt *value, PetscErrorCode *ierr)
{
  *ierr = DMLabelSetValue(*label, *point, *value);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelclearvalue_ DMLABELCLEARVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelclearvalue_ dmlabelclearvalue
#endif
PETSC_EXTERN void dmlabelclearvalue_(DMLabel *label, PetscInt *point, PetscInt *value, PetscErrorCode *ierr)
{
  *ierr = DMLabelClearValue(*label, *point, *value);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelinsertis_ DMLABELINSERTIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelinsertis_ dmlabelinsertis
#endif
PETSC_EXTERN void dmlabelinsertis_(DMLabel *label, IS *is, PetscInt *value, PetscErrorCode *ierr)
{
  *ierr = DMLabelInsertIS(*label, *is, *value);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetnumvalues_ DMLABELGETNUMVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetnumvalues_ dmlabelgetnumvalues
#endif
PETSC_EXTERN void dmlabelgetnumvalues_(DMLabel *label, PetscInt *numValues, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numValues);
  *ierr = DMLabelGetNumValues(*label, numValues);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetvalueis_ DMLABELGETVALUEIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetvalueis_ dmlabelgetvalueis
#endif
PETSC_EXTERN void dmlabelgetvalueis_(DMLabel *label, IS *values, PetscErrorCode *ierr)
{
  PetscBool null_values = !*(void**) values ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(values);
  *ierr = DMLabelGetValueIS(*label, values);
  if (*ierr) return;
  if (! null_values && !*(void**) values) *(void **) values = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetvaluebounds_ DMLABELGETVALUEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetvaluebounds_ dmlabelgetvaluebounds
#endif
PETSC_EXTERN void dmlabelgetvaluebounds_(DMLabel *label, PetscInt *minValue, PetscInt *maxValue, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(minValue);
  CHKFORTRANNULLINTEGER(maxValue);
  *ierr = DMLabelGetValueBounds(*label, minValue, maxValue);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetnonemptystratumvaluesis_ DMLABELGETNONEMPTYSTRATUMVALUESIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetnonemptystratumvaluesis_ dmlabelgetnonemptystratumvaluesis
#endif
PETSC_EXTERN void dmlabelgetnonemptystratumvaluesis_(DMLabel *label, IS *values, PetscErrorCode *ierr)
{
  PetscBool null_values = !*(void**) values ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(values);
  *ierr = DMLabelGetNonEmptyStratumValuesIS(*label, values);
  if (*ierr) return;
  if (! null_values && !*(void**) values) *(void **) values = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetvalueisglobal_ DMLABELGETVALUEISGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetvalueisglobal_ dmlabelgetvalueisglobal
#endif
PETSC_EXTERN void dmlabelgetvalueisglobal_(MPI_Fint *comm, DMLabel *label, PetscBool *get_nonempty, IS *values, PetscErrorCode *ierr)
{
  PetscBool null_values = !*(void**) values ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(values);
  *ierr = DMLabelGetValueISGlobal(MPI_Comm_f2c(*(comm)), *label, *get_nonempty ? PETSC_TRUE : PETSC_FALSE, values);
  if (*ierr) return;
  if (! null_values && !*(void**) values) *(void **) values = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetvalueindex_ DMLABELGETVALUEINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetvalueindex_ dmlabelgetvalueindex
#endif
PETSC_EXTERN void dmlabelgetvalueindex_(DMLabel *label, PetscInt *value, PetscInt *index, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(index);
  *ierr = DMLabelGetValueIndex(*label, *value, index);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelhasstratum_ DMLABELHASSTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelhasstratum_ dmlabelhasstratum
#endif
PETSC_EXTERN void dmlabelhasstratum_(DMLabel *label, PetscInt *value, PetscBool *exists, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(exists);
  *ierr = DMLabelHasStratum(*label, *value, exists);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetstratumsize_ DMLABELGETSTRATUMSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetstratumsize_ dmlabelgetstratumsize
#endif
PETSC_EXTERN void dmlabelgetstratumsize_(DMLabel *label, PetscInt *value, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = DMLabelGetStratumSize(*label, *value, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetstratumbounds_ DMLABELGETSTRATUMBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetstratumbounds_ dmlabelgetstratumbounds
#endif
PETSC_EXTERN void dmlabelgetstratumbounds_(DMLabel *label, PetscInt *value, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(end);
  *ierr = DMLabelGetStratumBounds(*label, *value, start, end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetstratumis_ DMLABELGETSTRATUMIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetstratumis_ dmlabelgetstratumis
#endif
PETSC_EXTERN void dmlabelgetstratumis_(DMLabel *label, PetscInt *value, IS *points, PetscErrorCode *ierr)
{
  PetscBool null_points = !*(void**) points ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(points);
  *ierr = DMLabelGetStratumIS(*label, *value, points);
  if (*ierr) return;
  if (! null_points && !*(void**) points) *(void **) points = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelsetstratumis_ DMLABELSETSTRATUMIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelsetstratumis_ dmlabelsetstratumis
#endif
PETSC_EXTERN void dmlabelsetstratumis_(DMLabel *label, PetscInt *value, IS *is, PetscErrorCode *ierr)
{
  *ierr = DMLabelSetStratumIS(*label, *value, *is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelclearstratum_ DMLABELCLEARSTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelclearstratum_ dmlabelclearstratum
#endif
PETSC_EXTERN void dmlabelclearstratum_(DMLabel *label, PetscInt *value, PetscErrorCode *ierr)
{
  *ierr = DMLabelClearStratum(*label, *value);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelsetstratumbounds_ DMLABELSETSTRATUMBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelsetstratumbounds_ dmlabelsetstratumbounds
#endif
PETSC_EXTERN void dmlabelsetstratumbounds_(DMLabel *label, PetscInt *value, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  *ierr = DMLabelSetStratumBounds(*label, *value, *pStart, *pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgetstratumpointindex_ DMLABELGETSTRATUMPOINTINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgetstratumpointindex_ dmlabelgetstratumpointindex
#endif
PETSC_EXTERN void dmlabelgetstratumpointindex_(DMLabel *label, PetscInt *value, PetscInt *p, PetscInt *index, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(index);
  *ierr = DMLabelGetStratumPointIndex(*label, *value, *p, index);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelfilter_ DMLABELFILTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelfilter_ dmlabelfilter
#endif
PETSC_EXTERN void dmlabelfilter_(DMLabel *label, PetscInt *start, PetscInt *end, PetscErrorCode *ierr)
{
  *ierr = DMLabelFilter(*label, *start, *end);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelpermute_ DMLABELPERMUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelpermute_ dmlabelpermute
#endif
PETSC_EXTERN void dmlabelpermute_(DMLabel *label, IS *permutation, DMLabel *labelNew, PetscErrorCode *ierr)
{
  PetscBool null_labelNew = !*(void**) labelNew ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(labelNew);
  *ierr = DMLabelPermute(*label, *permutation, labelNew);
  if (*ierr) return;
  if (! null_labelNew && !*(void**) labelNew) *(void **) labelNew = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelpermutevalues_ DMLABELPERMUTEVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelpermutevalues_ dmlabelpermutevalues
#endif
PETSC_EXTERN void dmlabelpermutevalues_(DMLabel *label, IS *permutation, PetscErrorCode *ierr)
{
  *ierr = DMLabelPermuteValues(*label, *permutation);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelrewritevalues_ DMLABELREWRITEVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelrewritevalues_ dmlabelrewritevalues
#endif
PETSC_EXTERN void dmlabelrewritevalues_(DMLabel *label, IS *permutation, PetscErrorCode *ierr)
{
  *ierr = DMLabelRewriteValues(*label, *permutation);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabeldistribute_ DMLABELDISTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabeldistribute_ dmlabeldistribute
#endif
PETSC_EXTERN void dmlabeldistribute_(DMLabel *label, PetscSF *sf, DMLabel *labelNew, PetscErrorCode *ierr)
{
  PetscBool null_labelNew = !*(void**) labelNew ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(labelNew);
  *ierr = DMLabelDistribute(*label, *sf, labelNew);
  if (*ierr) return;
  if (! null_labelNew && !*(void**) labelNew) *(void **) labelNew = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgather_ DMLABELGATHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgather_ dmlabelgather
#endif
PETSC_EXTERN void dmlabelgather_(DMLabel *label, PetscSF *sf, DMLabel *labelNew, PetscErrorCode *ierr)
{
  PetscBool null_labelNew = !*(void**) labelNew ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(labelNew);
  *ierr = DMLabelGather(*label, *sf, labelNew);
  if (*ierr) return;
  if (! null_labelNew && !*(void**) labelNew) *(void **) labelNew = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelpropagatebegin_ DMLABELPROPAGATEBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelpropagatebegin_ dmlabelpropagatebegin
#endif
PETSC_EXTERN void dmlabelpropagatebegin_(DMLabel *label, PetscSF *sf, PetscErrorCode *ierr)
{
  *ierr = DMLabelPropagateBegin(*label, *sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelpropagateend_ DMLABELPROPAGATEEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelpropagateend_ dmlabelpropagateend
#endif
PETSC_EXTERN void dmlabelpropagateend_(DMLabel *label, PetscSF *pointSF, PetscErrorCode *ierr)
{
  *ierr = DMLabelPropagateEnd(*label, *pointSF);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelconverttosection_ DMLABELCONVERTTOSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelconverttosection_ dmlabelconverttosection
#endif
PETSC_EXTERN void dmlabelconverttosection_(DMLabel *label, PetscSection *section, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(section);
  CHKFORTRANNULLOBJECT(is);
  *ierr = DMLabelConvertToSection(*label, section, is);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelregisterall_ DMLABELREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelregisterall_ dmlabelregisterall
#endif
PETSC_EXTERN void dmlabelregisterall_(PetscErrorCode *ierr)
{
  *ierr = DMLabelRegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelregisterdestroy_ DMLABELREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelregisterdestroy_ dmlabelregisterdestroy
#endif
PETSC_EXTERN void dmlabelregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = DMLabelRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelsettype_ DMLABELSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelsettype_ dmlabelsettype
#endif
PETSC_EXTERN void dmlabelsettype_(DMLabel *label, char *method, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_method)
{
  char* c_method;
  FIXCHAR(method, l_method, c_method);
  *ierr = DMLabelSetType(*label, c_method);
  if (*ierr) return;
  FREECHAR(method, c_method);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabel.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelgettype_ DMLABELGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelgettype_ dmlabelgettype
#endif
PETSC_EXTERN void dmlabelgettype_(DMLabel *label, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = DMLabelGetType(*label, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
