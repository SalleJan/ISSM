#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsettype_ MATSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsettype_ matsettype
#endif
PETSC_EXTERN void matsettype_(Mat *mat, char *matype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_matype)
{
  char* c_matype;
  FIXCHAR(matype, l_matype, c_matype);
  *ierr = MatSetType(*mat, c_matype);
  if (*ierr) return;
  FREECHAR(matype, c_matype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgettype_ MATGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgettype_ matgettype
#endif
PETSC_EXTERN void matgettype_(Mat *mat, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = MatGetType(*mat, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetvectype_ MATGETVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetvectype_ matgetvectype
#endif
PETSC_EXTERN void matgetvectype_(Mat *mat, char *vtype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_vtype)
{
  char* c_vtype = PETSC_NULLPTR;
  *ierr = MatGetVecType(*mat, (const char **)&c_vtype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)vtype, c_vtype, l_vtype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, vtype, l_vtype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetvectype_ MATSETVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetvectype_ matsetvectype
#endif
PETSC_EXTERN void matsetvectype_(Mat *mat, char *vtype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_vtype)
{
  char* c_vtype;
  FIXCHAR(vtype, l_vtype, c_vtype);
  *ierr = MatSetVecType(*mat, c_vtype);
  if (*ierr) return;
  FREECHAR(vtype, c_vtype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matregisterrootname_ MATREGISTERROOTNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matregisterrootname_ matregisterrootname
#endif
PETSC_EXTERN void matregisterrootname_(char rname[], char sname[], char mname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_rname, PETSC_FORTRAN_CHARLEN_T l_sname, PETSC_FORTRAN_CHARLEN_T l_mname)
{
  char* c_rname;
  FIXCHAR(rname, l_rname, c_rname);
  char* c_sname;
  FIXCHAR(sname, l_sname, c_sname);
  char* c_mname;
  FIXCHAR(mname, l_mname, c_mname);
  *ierr = MatRegisterRootName(c_rname, c_sname, c_mname);
  if (*ierr) return;
  FREECHAR(rname, c_rname);
  FREECHAR(sname, c_sname);
  FREECHAR(mname, c_mname);
}
