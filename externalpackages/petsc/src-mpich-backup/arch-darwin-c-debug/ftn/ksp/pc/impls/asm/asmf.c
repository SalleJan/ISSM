#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmsetlocalsubdomains_ PCASMSETLOCALSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmsetlocalsubdomains_ pcasmsetlocalsubdomains
#endif
PETSC_EXTERN void pcasmsetlocalsubdomains_(PC *pc, PetscInt *n, IS is[], IS is_local[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(is);
  CHKFORTRANNULLOBJECT(is_local);
  *ierr = PCASMSetLocalSubdomains(*pc, *n, is, is_local);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmsettotalsubdomains_ PCASMSETTOTALSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmsettotalsubdomains_ pcasmsettotalsubdomains
#endif
PETSC_EXTERN void pcasmsettotalsubdomains_(PC *pc, PetscInt *N, IS is[], IS is_local[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(is);
  CHKFORTRANNULLOBJECT(is_local);
  *ierr = PCASMSetTotalSubdomains(*pc, *N, is, is_local);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmsetoverlap_ PCASMSETOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmsetoverlap_ pcasmsetoverlap
#endif
PETSC_EXTERN void pcasmsetoverlap_(PC *pc, PetscInt *ovl, PetscErrorCode *ierr)
{
  *ierr = PCASMSetOverlap(*pc, *ovl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmsettype_ PCASMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmsettype_ pcasmsettype
#endif
PETSC_EXTERN void pcasmsettype_(PC *pc, PCASMType *type, PetscErrorCode *ierr)
{
  *ierr = PCASMSetType(*pc, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmgettype_ PCASMGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmgettype_ pcasmgettype
#endif
PETSC_EXTERN void pcasmgettype_(PC *pc, PCASMType *type, PetscErrorCode *ierr)
{
  *ierr = PCASMGetType(*pc, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmsetlocaltype_ PCASMSETLOCALTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmsetlocaltype_ pcasmsetlocaltype
#endif
PETSC_EXTERN void pcasmsetlocaltype_(PC *pc, PCCompositeType *type, PetscErrorCode *ierr)
{
  *ierr = PCASMSetLocalType(*pc, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmgetlocaltype_ PCASMGETLOCALTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmgetlocaltype_ pcasmgetlocaltype
#endif
PETSC_EXTERN void pcasmgetlocaltype_(PC *pc, PCCompositeType *type, PetscErrorCode *ierr)
{
  *ierr = PCASMGetLocalType(*pc, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmsetsortindices_ PCASMSETSORTINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmsetsortindices_ pcasmsetsortindices
#endif
PETSC_EXTERN void pcasmsetsortindices_(PC *pc, PetscBool *doSort, PetscErrorCode *ierr)
{
  *ierr = PCASMSetSortIndices(*pc, *doSort ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmsetdmsubdomains_ PCASMSETDMSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmsetdmsubdomains_ pcasmsetdmsubdomains
#endif
PETSC_EXTERN void pcasmsetdmsubdomains_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCASMSetDMSubdomains(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmgetdmsubdomains_ PCASMGETDMSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmgetdmsubdomains_ pcasmgetdmsubdomains
#endif
PETSC_EXTERN void pcasmgetdmsubdomains_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCASMGetDMSubdomains(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmgetsubmattype_ PCASMGETSUBMATTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmgetsubmattype_ pcasmgetsubmattype
#endif
PETSC_EXTERN void pcasmgetsubmattype_(PC *pc, char *sub_mat_type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_sub_mat_type)
{
  char* c_sub_mat_type = PETSC_NULLPTR;
  *ierr = PCASMGetSubMatType(*pc, (const char **)&c_sub_mat_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)sub_mat_type, c_sub_mat_type, l_sub_mat_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, sub_mat_type, l_sub_mat_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcasmsetsubmattype_ PCASMSETSUBMATTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcasmsetsubmattype_ pcasmsetsubmattype
#endif
PETSC_EXTERN void pcasmsetsubmattype_(PC *pc, char *sub_mat_type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_sub_mat_type)
{
  char* c_sub_mat_type;
  FIXCHAR(sub_mat_type, l_sub_mat_type, c_sub_mat_type);
  *ierr = PCASMSetSubMatType(*pc, c_sub_mat_type);
  if (*ierr) return;
  FREECHAR(sub_mat_type, c_sub_mat_type);
}
