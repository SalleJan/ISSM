#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorcreate_ PETSCREGRESSORCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorcreate_ petscregressorcreate
#endif
PETSC_EXTERN void petscregressorcreate_(MPI_Fint *comm, PetscRegressor *newregressor, PetscErrorCode *ierr)
{
  PetscBool null_newregressor = !*(void**) newregressor ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(newregressor);
  CHKFORTRANNULLOBJECT(newregressor);
  *ierr = PetscRegressorCreate(MPI_Comm_f2c(*(comm)), newregressor);
  if (*ierr) return;
  if (! null_newregressor && !*(void**) newregressor) *(void **) newregressor = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorview_ PETSCREGRESSORVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorview_ petscregressorview
#endif
PETSC_EXTERN void petscregressorview_(PetscRegressor *regressor, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscRegressorView(*regressor, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorviewfromoptions_ PETSCREGRESSORVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorviewfromoptions_ petscregressorviewfromoptions
#endif
PETSC_EXTERN void petscregressorviewfromoptions_(PetscRegressor *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscRegressorViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorsetfromoptions_ PETSCREGRESSORSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorsetfromoptions_ petscregressorsetfromoptions
#endif
PETSC_EXTERN void petscregressorsetfromoptions_(PetscRegressor *regressor, PetscErrorCode *ierr)
{
  *ierr = PetscRegressorSetFromOptions(*regressor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorsetup_ PETSCREGRESSORSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorsetup_ petscregressorsetup
#endif
PETSC_EXTERN void petscregressorsetup_(PetscRegressor *regressor, PetscErrorCode *ierr)
{
  *ierr = PetscRegressorSetUp(*regressor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorfit_ PETSCREGRESSORFIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorfit_ petscregressorfit
#endif
PETSC_EXTERN void petscregressorfit_(PetscRegressor *regressor, Mat *X, Vec *y, PetscErrorCode *ierr)
{
  *ierr = PetscRegressorFit(*regressor, *X, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorpredict_ PETSCREGRESSORPREDICT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorpredict_ petscregressorpredict
#endif
PETSC_EXTERN void petscregressorpredict_(PetscRegressor *regressor, Mat *X, Vec *y, PetscErrorCode *ierr)
{
  *ierr = PetscRegressorPredict(*regressor, *X, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorreset_ PETSCREGRESSORRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorreset_ petscregressorreset
#endif
PETSC_EXTERN void petscregressorreset_(PetscRegressor *regressor, PetscErrorCode *ierr)
{
  *ierr = PetscRegressorReset(*regressor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressordestroy_ PETSCREGRESSORDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressordestroy_ petscregressordestroy
#endif
PETSC_EXTERN void petscregressordestroy_(PetscRegressor *regressor, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(regressor);
  PetscBool null_regressor = !*(void**) regressor ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(regressor);
  *ierr = PetscRegressorDestroy(regressor);
  if (*ierr) return;
  if (! null_regressor && !*(void**) regressor) *(void **) regressor = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorsettype_ PETSCREGRESSORSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorsettype_ petscregressorsettype
#endif
PETSC_EXTERN void petscregressorsettype_(PetscRegressor *regressor, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PetscRegressorSetType(*regressor, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorgettype_ PETSCREGRESSORGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorgettype_ petscregressorgettype
#endif
PETSC_EXTERN void petscregressorgettype_(PetscRegressor *regressor, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = PetscRegressorGetType(*regressor, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorsetregularizerweight_ PETSCREGRESSORSETREGULARIZERWEIGHT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorsetregularizerweight_ petscregressorsetregularizerweight
#endif
PETSC_EXTERN void petscregressorsetregularizerweight_(PetscRegressor *regressor, PetscReal *weight, PetscErrorCode *ierr)
{
  *ierr = PetscRegressorSetRegularizerWeight(*regressor, *weight);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorgettao_ PETSCREGRESSORGETTAO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorgettao_ petscregressorgettao
#endif
PETSC_EXTERN void petscregressorgettao_(PetscRegressor *regressor, Tao *tao, PetscErrorCode *ierr)
{
  PetscBool null_tao = !*(void**) tao ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tao);
  *ierr = PetscRegressorGetTao(*regressor, tao);
  if (*ierr) return;
  if (! null_tao && !*(void**) tao) *(void **) tao = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorsetoptionsprefix_ PETSCREGRESSORSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorsetoptionsprefix_ petscregressorsetoptionsprefix
#endif
PETSC_EXTERN void petscregressorsetoptionsprefix_(PetscRegressor *regressor, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p;
  FIXCHAR(p, l_p, c_p);
  *ierr = PetscRegressorSetOptionsPrefix(*regressor, c_p);
  if (*ierr) return;
  FREECHAR(p, c_p);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorappendoptionsprefix_ PETSCREGRESSORAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorappendoptionsprefix_ petscregressorappendoptionsprefix
#endif
PETSC_EXTERN void petscregressorappendoptionsprefix_(PetscRegressor *regressor, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p;
  FIXCHAR(p, l_p, c_p);
  *ierr = PetscRegressorAppendOptionsPrefix(*regressor, c_p);
  if (*ierr) return;
  FREECHAR(p, c_p);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorgetoptionsprefix_ PETSCREGRESSORGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorgetoptionsprefix_ petscregressorgetoptionsprefix
#endif
PETSC_EXTERN void petscregressorgetoptionsprefix_(PetscRegressor *regressor, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p = PETSC_NULLPTR;
  *ierr = PetscRegressorGetOptionsPrefix(*regressor, (const char **)&c_p);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)p, c_p, l_p);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, p, l_p);
}
