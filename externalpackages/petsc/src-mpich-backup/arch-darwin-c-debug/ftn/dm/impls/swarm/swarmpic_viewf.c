#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmviewfieldsxdmf_ DMSWARMVIEWFIELDSXDMF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmviewfieldsxdmf_ dmswarmviewfieldsxdmf
#endif
PETSC_EXTERN void dmswarmviewfieldsxdmf_(DM *dm, char filename[], PetscInt *nfields, char field_name_list[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename, PETSC_FORTRAN_CHARLEN_T l_field_name_list)
{
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  char* c_field_name_list = PETSC_NULLPTR;
  *ierr = DMSwarmViewFieldsXDMF(*dm, c_filename, *nfields, (const char **)&c_field_name_list);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
  *ierr = PetscStrncpy((char *)field_name_list, c_field_name_list, l_field_name_list);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, field_name_list, l_field_name_list);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmviewxdmf_ DMSWARMVIEWXDMF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmviewxdmf_ dmswarmviewxdmf
#endif
PETSC_EXTERN void dmswarmviewxdmf_(DM *dm, char filename[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  *ierr = DMSwarmViewXDMF(*dm, c_filename);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
}
