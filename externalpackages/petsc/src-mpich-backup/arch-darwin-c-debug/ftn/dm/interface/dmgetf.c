#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlocalvector_ DMGETLOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlocalvector_ dmgetlocalvector
#endif
PETSC_EXTERN void dmgetlocalvector_(DM *dm, Vec *g, PetscErrorCode *ierr)
{
  PetscBool null_g = !*(void**) g ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(g);
  *ierr = DMGetLocalVector(*dm, g);
  if (*ierr) return;
  if (! null_g && !*(void**) g) *(void **) g = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmrestorelocalvector_ DMRESTORELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmrestorelocalvector_ dmrestorelocalvector
#endif
PETSC_EXTERN void dmrestorelocalvector_(DM *dm, Vec *g, PetscErrorCode *ierr)
{
  PetscBool null_g = !*(void**) g ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(g);
  *ierr = DMRestoreLocalVector(*dm, g);
  if (*ierr) return;
  if (! null_g && !*(void**) g) *(void **) g = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetglobalvector_ DMGETGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetglobalvector_ dmgetglobalvector
#endif
PETSC_EXTERN void dmgetglobalvector_(DM *dm, Vec *g, PetscErrorCode *ierr)
{
  PetscBool null_g = !*(void**) g ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(g);
  *ierr = DMGetGlobalVector(*dm, g);
  if (*ierr) return;
  if (! null_g && !*(void**) g) *(void **) g = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmclearglobalvectors_ DMCLEARGLOBALVECTORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmclearglobalvectors_ dmclearglobalvectors
#endif
PETSC_EXTERN void dmclearglobalvectors_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMClearGlobalVectors(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmclearlocalvectors_ DMCLEARLOCALVECTORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmclearlocalvectors_ dmclearlocalvectors
#endif
PETSC_EXTERN void dmclearlocalvectors_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMClearLocalVectors(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmrestoreglobalvector_ DMRESTOREGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmrestoreglobalvector_ dmrestoreglobalvector
#endif
PETSC_EXTERN void dmrestoreglobalvector_(DM *dm, Vec *g, PetscErrorCode *ierr)
{
  PetscBool null_g = !*(void**) g ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(g);
  *ierr = DMRestoreGlobalVector(*dm, g);
  if (*ierr) return;
  if (! null_g && !*(void**) g) *(void **) g = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmclearnamedglobalvectors_ DMCLEARNAMEDGLOBALVECTORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmclearnamedglobalvectors_ dmclearnamedglobalvectors
#endif
PETSC_EXTERN void dmclearnamedglobalvectors_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMClearNamedGlobalVectors(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmclearnamedlocalvectors_ DMCLEARNAMEDLOCALVECTORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmclearnamedlocalvectors_ dmclearnamedlocalvectors
#endif
PETSC_EXTERN void dmclearnamedlocalvectors_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMClearNamedLocalVectors(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmhasnamedglobalvector_ DMHASNAMEDGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmhasnamedglobalvector_ dmhasnamedglobalvector
#endif
PETSC_EXTERN void dmhasnamedglobalvector_(DM *dm, char name[], PetscBool *exists, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(exists);
  *ierr = DMHasNamedGlobalVector(*dm, c_name, exists);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetnamedglobalvector_ DMGETNAMEDGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetnamedglobalvector_ dmgetnamedglobalvector
#endif
PETSC_EXTERN void dmgetnamedglobalvector_(DM *dm, char name[], Vec *X, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_X = !*(void**) X ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(X);
  *ierr = DMGetNamedGlobalVector(*dm, c_name, X);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_X && !*(void**) X) *(void **) X = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmrestorenamedglobalvector_ DMRESTORENAMEDGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmrestorenamedglobalvector_ dmrestorenamedglobalvector
#endif
PETSC_EXTERN void dmrestorenamedglobalvector_(DM *dm, char name[], Vec *X, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_X = !*(void**) X ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(X);
  *ierr = DMRestoreNamedGlobalVector(*dm, c_name, X);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_X && !*(void**) X) *(void **) X = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmhasnamedlocalvector_ DMHASNAMEDLOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmhasnamedlocalvector_ dmhasnamedlocalvector
#endif
PETSC_EXTERN void dmhasnamedlocalvector_(DM *dm, char name[], PetscBool *exists, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(exists);
  *ierr = DMHasNamedLocalVector(*dm, c_name, exists);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetnamedlocalvector_ DMGETNAMEDLOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetnamedlocalvector_ dmgetnamedlocalvector
#endif
PETSC_EXTERN void dmgetnamedlocalvector_(DM *dm, char name[], Vec *X, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_X = !*(void**) X ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(X);
  *ierr = DMGetNamedLocalVector(*dm, c_name, X);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_X && !*(void**) X) *(void **) X = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmrestorenamedlocalvector_ DMRESTORENAMEDLOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmrestorenamedlocalvector_ dmrestorenamedlocalvector
#endif
PETSC_EXTERN void dmrestorenamedlocalvector_(DM *dm, char name[], Vec *X, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_X = !*(void**) X ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(X);
  *ierr = DMRestoreNamedLocalVector(*dm, c_name, X);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_X && !*(void**) X) *(void **) X = (void *)-2;
}
