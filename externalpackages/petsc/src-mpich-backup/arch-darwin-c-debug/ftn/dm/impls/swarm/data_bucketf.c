#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmdatabucketgetdmswarmdatafieldidbyname_ DMSWARMDATABUCKETGETDMSWARMDATAFIELDIDBYNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmdatabucketgetdmswarmdatafieldidbyname_ dmswarmdatabucketgetdmswarmdatafieldidbyname
#endif
PETSC_EXTERN void dmswarmdatabucketgetdmswarmdatafieldidbyname_(DMSwarmDataBucket *db, char name[], PetscInt *idx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(idx);
  *ierr = DMSwarmDataBucketGetDMSwarmDataFieldIdByName(*db, c_name, idx);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmdatabucketgetdmswarmdatafieldbyname_ DMSWARMDATABUCKETGETDMSWARMDATAFIELDBYNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmdatabucketgetdmswarmdatafieldbyname_ dmswarmdatabucketgetdmswarmdatafieldbyname
#endif
PETSC_EXTERN void dmswarmdatabucketgetdmswarmdatafieldbyname_(DMSwarmDataBucket *db, char name[], DMSwarmDataField *gfield, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_gfield = !*(void**) gfield ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(gfield);
  *ierr = DMSwarmDataBucketGetDMSwarmDataFieldByName(*db, c_name, gfield);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_gfield && !*(void**) gfield) *(void **) gfield = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmdatabucketquerydmswarmdatafieldbyname_ DMSWARMDATABUCKETQUERYDMSWARMDATAFIELDBYNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmdatabucketquerydmswarmdatafieldbyname_ dmswarmdatabucketquerydmswarmdatafieldbyname
#endif
PETSC_EXTERN void dmswarmdatabucketquerydmswarmdatafieldbyname_(DMSwarmDataBucket *db, char name[], PetscBool *found, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(found);
  *ierr = DMSwarmDataBucketQueryDMSwarmDataFieldByName(*db, c_name, found);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
