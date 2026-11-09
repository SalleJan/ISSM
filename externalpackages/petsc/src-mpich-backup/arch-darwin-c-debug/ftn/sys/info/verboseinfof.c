#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfoenabled_ PETSCINFOENABLED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfoenabled_ petscinfoenabled
#endif
PETSC_EXTERN void petscinfoenabled_(PetscClassId *classid, PetscBool *enabled, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(enabled);
  *ierr = PetscInfoEnabled(*classid, enabled);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfoallow_ PETSCINFOALLOW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfoallow_ petscinfoallow
#endif
PETSC_EXTERN void petscinfoallow_(PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = PetscInfoAllow(*flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfosetfile_ PETSCINFOSETFILE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfosetfile_ petscinfosetfile
#endif
PETSC_EXTERN void petscinfosetfile_(char filename[], char mode[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename, PETSC_FORTRAN_CHARLEN_T l_mode)
{
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  char* c_mode;
  FIXCHAR(mode, l_mode, c_mode);
  *ierr = PetscInfoSetFile(c_filename, c_mode);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
  FREECHAR(mode, c_mode);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfogetclass_ PETSCINFOGETCLASS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfogetclass_ petscinfogetclass
#endif
PETSC_EXTERN void petscinfogetclass_(char classname[], PetscBool *found, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_classname)
{
  char* c_classname;
  FIXCHAR(classname, l_classname, c_classname);
  CHKFORTRANNULLBOOL(found);
  *ierr = PetscInfoGetClass(c_classname, found);
  if (*ierr) return;
  FREECHAR(classname, c_classname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfogetinfo_ PETSCINFOGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfogetinfo_ petscinfogetinfo
#endif
PETSC_EXTERN void petscinfogetinfo_(PetscBool *infoEnabled, PetscBool *classesSet, PetscBool *exclude, PetscBool *locked, PetscInfoCommFlag *commSelfFlag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(infoEnabled);
  CHKFORTRANNULLBOOL(classesSet);
  CHKFORTRANNULLBOOL(exclude);
  CHKFORTRANNULLBOOL(locked);
  *ierr = PetscInfoGetInfo(infoEnabled, classesSet, exclude, locked, commSelfFlag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfoprocessclass_ PETSCINFOPROCESSCLASS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfoprocessclass_ petscinfoprocessclass
#endif
PETSC_EXTERN void petscinfoprocessclass_(char classname[], PetscInt *numClassID, const PetscClassId classIDs[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_classname)
{
  char* c_classname;
  FIXCHAR(classname, l_classname, c_classname);
  *ierr = PetscInfoProcessClass(c_classname, *numClassID, classIDs);
  if (*ierr) return;
  FREECHAR(classname, c_classname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfosetfiltercommself_ PETSCINFOSETFILTERCOMMSELF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfosetfiltercommself_ petscinfosetfiltercommself
#endif
PETSC_EXTERN void petscinfosetfiltercommself_(PetscInfoCommFlag *commSelfFlag, PetscErrorCode *ierr)
{
  *ierr = PetscInfoSetFilterCommSelf(*commSelfFlag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfosetfromoptions_ PETSCINFOSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfosetfromoptions_ petscinfosetfromoptions
#endif
PETSC_EXTERN void petscinfosetfromoptions_(PetscOptions *options, PetscErrorCode *ierr)
{
  *ierr = PetscInfoSetFromOptions(*options);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfodestroy_ PETSCINFODESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfodestroy_ petscinfodestroy
#endif
PETSC_EXTERN void petscinfodestroy_(PetscErrorCode *ierr)
{
  *ierr = PetscInfoDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfodeactivateclass_ PETSCINFODEACTIVATECLASS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfodeactivateclass_ petscinfodeactivateclass
#endif
PETSC_EXTERN void petscinfodeactivateclass_(PetscClassId *classid, PetscErrorCode *ierr)
{
  *ierr = PetscInfoDeactivateClass(*classid);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinfoactivateclass_ PETSCINFOACTIVATECLASS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinfoactivateclass_ petscinfoactivateclass
#endif
PETSC_EXTERN void petscinfoactivateclass_(PetscClassId *classid, PetscErrorCode *ierr)
{
  *ierr = PetscInfoActivateClass(*classid);
  if (*ierr) return;
}
