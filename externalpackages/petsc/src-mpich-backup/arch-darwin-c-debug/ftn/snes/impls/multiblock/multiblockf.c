#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmultiblocksetfields_ SNESMULTIBLOCKSETFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmultiblocksetfields_ snesmultiblocksetfields
#endif
PETSC_EXTERN void snesmultiblocksetfields_(SNES *snes, char name[], PetscInt *n, const PetscInt *fields, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(fields);
  *ierr = SNESMultiblockSetFields(*snes, c_name, *n, fields);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmultiblocksetis_ SNESMULTIBLOCKSETIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmultiblocksetis_ snesmultiblocksetis
#endif
PETSC_EXTERN void snesmultiblocksetis_(SNES *snes, char name[], IS *is, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = SNESMultiblockSetIS(*snes, c_name, *is);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmultiblocksettype_ SNESMULTIBLOCKSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmultiblocksettype_ snesmultiblocksettype
#endif
PETSC_EXTERN void snesmultiblocksettype_(SNES *snes, PCCompositeType *type, PetscErrorCode *ierr)
{
  *ierr = SNESMultiblockSetType(*snes, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmultiblocksetblocksize_ SNESMULTIBLOCKSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmultiblocksetblocksize_ snesmultiblocksetblocksize
#endif
PETSC_EXTERN void snesmultiblocksetblocksize_(SNES *snes, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = SNESMultiblockSetBlockSize(*snes, *bs);
  if (*ierr) return;
}
