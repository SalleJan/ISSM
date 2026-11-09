#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgasmsettotalsubdomains_ PCGASMSETTOTALSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgasmsettotalsubdomains_ pcgasmsettotalsubdomains
#endif
PETSC_EXTERN void pcgasmsettotalsubdomains_(PC *pc, PetscInt *N, PetscErrorCode *ierr)
{
  *ierr = PCGASMSetTotalSubdomains(*pc, *N);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgasmsetsubdomains_ PCGASMSETSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgasmsetsubdomains_ pcgasmsetsubdomains
#endif
PETSC_EXTERN void pcgasmsetsubdomains_(PC *pc, PetscInt *n, IS iis[], IS ois[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(iis);
  CHKFORTRANNULLOBJECT(ois);
  *ierr = PCGASMSetSubdomains(*pc, *n, iis, ois);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgasmsetoverlap_ PCGASMSETOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgasmsetoverlap_ pcgasmsetoverlap
#endif
PETSC_EXTERN void pcgasmsetoverlap_(PC *pc, PetscInt *ovl, PetscErrorCode *ierr)
{
  *ierr = PCGASMSetOverlap(*pc, *ovl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgasmsettype_ PCGASMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgasmsettype_ pcgasmsettype
#endif
PETSC_EXTERN void pcgasmsettype_(PC *pc, PCGASMType *type, PetscErrorCode *ierr)
{
  *ierr = PCGASMSetType(*pc, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgasmsetsortindices_ PCGASMSETSORTINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgasmsetsortindices_ pcgasmsetsortindices
#endif
PETSC_EXTERN void pcgasmsetsortindices_(PC *pc, PetscBool *doSort, PetscErrorCode *ierr)
{
  *ierr = PCGASMSetSortIndices(*pc, *doSort ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgasmsetusedmsubdomains_ PCGASMSETUSEDMSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgasmsetusedmsubdomains_ pcgasmsetusedmsubdomains
#endif
PETSC_EXTERN void pcgasmsetusedmsubdomains_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCGASMSetUseDMSubdomains(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgasmgetusedmsubdomains_ PCGASMGETUSEDMSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgasmgetusedmsubdomains_ pcgasmgetusedmsubdomains
#endif
PETSC_EXTERN void pcgasmgetusedmsubdomains_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCGASMGetUseDMSubdomains(*pc, flg);
  if (*ierr) return;
}
