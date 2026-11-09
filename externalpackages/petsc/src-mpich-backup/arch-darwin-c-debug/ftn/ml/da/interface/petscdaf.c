#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdainitializepackage_ PETSCDAINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdainitializepackage_ petscdainitializepackage
#endif
PETSC_EXTERN void petscdainitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscDAInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdafinalizepackage_ PETSCDAFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdafinalizepackage_ petscdafinalizepackage
#endif
PETSC_EXTERN void petscdafinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscDAFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaregisterall_ PETSCDAREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaregisterall_ petscdaregisterall
#endif
PETSC_EXTERN void petscdaregisterall_(PetscErrorCode *ierr)
{
  *ierr = PetscDARegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdasetoptionsprefix_ PETSCDASETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdasetoptionsprefix_ petscdasetoptionsprefix
#endif
PETSC_EXTERN void petscdasetoptionsprefix_(PetscDA *das, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p;
  FIXCHAR(p, l_p, c_p);
  *ierr = PetscDASetOptionsPrefix(*das, c_p);
  if (*ierr) return;
  FREECHAR(p, c_p);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaappendoptionsprefix_ PETSCDAAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaappendoptionsprefix_ petscdaappendoptionsprefix
#endif
PETSC_EXTERN void petscdaappendoptionsprefix_(PetscDA *das, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p;
  FIXCHAR(p, l_p, c_p);
  *ierr = PetscDAAppendOptionsPrefix(*das, c_p);
  if (*ierr) return;
  FREECHAR(p, c_p);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdagetoptionsprefix_ PETSCDAGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdagetoptionsprefix_ petscdagetoptionsprefix
#endif
PETSC_EXTERN void petscdagetoptionsprefix_(PetscDA *das, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p = PETSC_NULLPTR;
  *ierr = PetscDAGetOptionsPrefix(*das, (const char **)&c_p);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)p, c_p, l_p);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, p, l_p);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdacreate_ PETSCDACREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdacreate_ petscdacreate
#endif
PETSC_EXTERN void petscdacreate_(MPI_Fint *comm, PetscDA *da_out, PetscErrorCode *ierr)
{
  PetscBool null_da_out = !*(void**) da_out ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(da_out);
  CHKFORTRANNULLOBJECT(da_out);
  *ierr = PetscDACreate(MPI_Comm_f2c(*(comm)), da_out);
  if (*ierr) return;
  if (! null_da_out && !*(void**) da_out) *(void **) da_out = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdadestroy_ PETSCDADESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdadestroy_ petscdadestroy
#endif
PETSC_EXTERN void petscdadestroy_(PetscDA *da, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(da);
  PetscBool null_da = !*(void**) da ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(da);
  *ierr = PetscDADestroy(da);
  if (*ierr) return;
  if (! null_da && !*(void**) da) *(void **) da = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdasettype_ PETSCDASETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdasettype_ petscdasettype
#endif
PETSC_EXTERN void petscdasettype_(PetscDA *da, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PetscDASetType(*da, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdagettype_ PETSCDAGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdagettype_ petscdagettype
#endif
PETSC_EXTERN void petscdagettype_(PetscDA *da, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = PetscDAGetType(*da, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdasetfromoptions_ PETSCDASETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdasetfromoptions_ petscdasetfromoptions
#endif
PETSC_EXTERN void petscdasetfromoptions_(PetscDA *da, PetscErrorCode *ierr)
{
  *ierr = PetscDASetFromOptions(*da);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdasetndof_ PETSCDASETNDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdasetndof_ petscdasetndof
#endif
PETSC_EXTERN void petscdasetndof_(PetscDA *da, PetscInt *ndof, PetscErrorCode *ierr)
{
  *ierr = PetscDASetNDOF(*da, *ndof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdagetndof_ PETSCDAGETNDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdagetndof_ petscdagetndof
#endif
PETSC_EXTERN void petscdagetndof_(PetscDA *da, PetscInt *ndof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ndof);
  *ierr = PetscDAGetNDOF(*da, ndof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdasetup_ PETSCDASETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdasetup_ petscdasetup
#endif
PETSC_EXTERN void petscdasetup_(PetscDA *da, PetscErrorCode *ierr)
{
  *ierr = PetscDASetUp(*da);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaview_ PETSCDAVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaview_ petscdaview
#endif
PETSC_EXTERN void petscdaview_(PetscDA *da, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscDAView(*da, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdaviewfromoptions_ PETSCDAVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdaviewfromoptions_ petscdaviewfromoptions
#endif
PETSC_EXTERN void petscdaviewfromoptions_(PetscDA *da, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscDAViewFromOptions(*da, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdasetobserrorvariance_ PETSCDASETOBSERRORVARIANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdasetobserrorvariance_ petscdasetobserrorvariance
#endif
PETSC_EXTERN void petscdasetobserrorvariance_(PetscDA *da, Vec *obs_error_var, PetscErrorCode *ierr)
{
  *ierr = PetscDASetObsErrorVariance(*da, *obs_error_var);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdagetobserrorvariance_ PETSCDAGETOBSERRORVARIANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdagetobserrorvariance_ petscdagetobserrorvariance
#endif
PETSC_EXTERN void petscdagetobserrorvariance_(PetscDA *da, Vec *obs_error_var, PetscErrorCode *ierr)
{
  PetscBool null_obs_error_var = !*(void**) obs_error_var ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(obs_error_var);
  *ierr = PetscDAGetObsErrorVariance(*da, obs_error_var);
  if (*ierr) return;
  if (! null_obs_error_var && !*(void**) obs_error_var) *(void **) obs_error_var = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdasetsizes_ PETSCDASETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdasetsizes_ petscdasetsizes
#endif
PETSC_EXTERN void petscdasetsizes_(PetscDA *da, PetscInt *state_size, PetscInt *obs_size, PetscErrorCode *ierr)
{
  *ierr = PetscDASetSizes(*da, *state_size, *obs_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdasetlocalsizes_ PETSCDASETLOCALSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdasetlocalsizes_ petscdasetlocalsizes
#endif
PETSC_EXTERN void petscdasetlocalsizes_(PetscDA *da, PetscInt *local_state_size, PetscInt *local_obs_size, PetscErrorCode *ierr)
{
  *ierr = PetscDASetLocalSizes(*da, *local_state_size, *local_obs_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdagetsizes_ PETSCDAGETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdagetsizes_ petscdagetsizes
#endif
PETSC_EXTERN void petscdagetsizes_(PetscDA *da, PetscInt *state_size, PetscInt *obs_size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(state_size);
  CHKFORTRANNULLINTEGER(obs_size);
  *ierr = PetscDAGetSizes(*da, state_size, obs_size);
  if (*ierr) return;
}
