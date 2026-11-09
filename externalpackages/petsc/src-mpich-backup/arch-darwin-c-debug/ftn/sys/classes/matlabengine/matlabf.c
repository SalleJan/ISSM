#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscmatlab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmatlabenginecreate_ PETSCMATLABENGINECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmatlabenginecreate_ petscmatlabenginecreate
#endif
PETSC_EXTERN void petscmatlabenginecreate_(MPI_Fint *comm, char host[], PetscMatlabEngine *mengine, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_host)
{
  PetscBool null_mengine = !*(void**) mengine ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(mengine);
  char* c_host;
  FIXCHAR(host, l_host, c_host);
  CHKFORTRANNULLOBJECT(mengine);
  *ierr = PetscMatlabEngineCreate(MPI_Comm_f2c(*(comm)), c_host, mengine);
  if (*ierr) return;
  FREECHAR(host, c_host);
  if (! null_mengine && !*(void**) mengine) *(void **) mengine = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscmatlab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmatlabenginedestroy_ PETSCMATLABENGINEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmatlabenginedestroy_ petscmatlabenginedestroy
#endif
PETSC_EXTERN void petscmatlabenginedestroy_(PetscMatlabEngine *v, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(v);
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = PetscMatlabEngineDestroy(v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscmatlab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmatlabenginegetoutput_ PETSCMATLABENGINEGETOUTPUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmatlabenginegetoutput_ petscmatlabenginegetoutput
#endif
PETSC_EXTERN void petscmatlabenginegetoutput_(PetscMatlabEngine *mengine, char string[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_string)
{
  char* c_string = PETSC_NULLPTR;
  *ierr = PetscMatlabEngineGetOutput(*mengine, (const char **)&c_string);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)string, c_string, l_string);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, string, l_string);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscmatlab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmatlabengineput_ PETSCMATLABENGINEPUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmatlabengineput_ petscmatlabengineput
#endif
PETSC_EXTERN void petscmatlabengineput_(PetscMatlabEngine *mengine, PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscMatlabEnginePut(*mengine, *obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscmatlab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmatlabengineget_ PETSCMATLABENGINEGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmatlabengineget_ petscmatlabengineget
#endif
PETSC_EXTERN void petscmatlabengineget_(PetscMatlabEngine *mengine, PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscMatlabEngineGet(*mengine, *obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscmatlab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmatlabengineputarray_ PETSCMATLABENGINEPUTARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmatlabengineputarray_ petscmatlabengineputarray
#endif
PETSC_EXTERN void petscmatlabengineputarray_(PetscMatlabEngine *mengine, int *m, int *n, const PetscScalar array[], char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLSCALAR(array);
  *ierr = PetscMatlabEnginePutArray(*mengine, *m, *n, array, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscmatlab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmatlabenginegetarray_ PETSCMATLABENGINEGETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmatlabenginegetarray_ petscmatlabenginegetarray
#endif
PETSC_EXTERN void petscmatlabenginegetarray_(PetscMatlabEngine *mengine, int *m, int *n, PetscScalar array[], char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLSCALAR(array);
  *ierr = PetscMatlabEngineGetArray(*mengine, *m, *n, array, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
