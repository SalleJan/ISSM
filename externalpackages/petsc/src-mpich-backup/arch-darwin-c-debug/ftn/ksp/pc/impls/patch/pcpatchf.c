#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpatchsetsaveoperators_ PCPATCHSETSAVEOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpatchsetsaveoperators_ pcpatchsetsaveoperators
#endif
PETSC_EXTERN void pcpatchsetsaveoperators_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCPatchSetSaveOperators(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpatchgetsaveoperators_ PCPATCHGETSAVEOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpatchgetsaveoperators_ pcpatchgetsaveoperators
#endif
PETSC_EXTERN void pcpatchgetsaveoperators_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCPatchGetSaveOperators(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpatchsetprecomputeelementtensors_ PCPATCHSETPRECOMPUTEELEMENTTENSORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpatchsetprecomputeelementtensors_ pcpatchsetprecomputeelementtensors
#endif
PETSC_EXTERN void pcpatchsetprecomputeelementtensors_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCPatchSetPrecomputeElementTensors(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpatchgetprecomputeelementtensors_ PCPATCHGETPRECOMPUTEELEMENTTENSORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpatchgetprecomputeelementtensors_ pcpatchgetprecomputeelementtensors
#endif
PETSC_EXTERN void pcpatchgetprecomputeelementtensors_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCPatchGetPrecomputeElementTensors(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpatchsetpartitionofunity_ PCPATCHSETPARTITIONOFUNITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpatchsetpartitionofunity_ pcpatchsetpartitionofunity
#endif
PETSC_EXTERN void pcpatchsetpartitionofunity_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCPatchSetPartitionOfUnity(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpatchgetpartitionofunity_ PCPATCHGETPARTITIONOFUNITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpatchgetpartitionofunity_ pcpatchgetpartitionofunity
#endif
PETSC_EXTERN void pcpatchgetpartitionofunity_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCPatchGetPartitionOfUnity(*pc, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpatchsetsubmattype_ PCPATCHSETSUBMATTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpatchsetsubmattype_ pcpatchsetsubmattype
#endif
PETSC_EXTERN void pcpatchsetsubmattype_(PC *pc, char *sub_mat_type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_sub_mat_type)
{
  char* c_sub_mat_type;
  FIXCHAR(sub_mat_type, l_sub_mat_type, c_sub_mat_type);
  *ierr = PCPatchSetSubMatType(*pc, c_sub_mat_type);
  if (*ierr) return;
  FREECHAR(sub_mat_type, c_sub_mat_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpatchgetsubmattype_ PCPATCHGETSUBMATTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpatchgetsubmattype_ pcpatchgetsubmattype
#endif
PETSC_EXTERN void pcpatchgetsubmattype_(PC *pc, char *sub_mat_type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_sub_mat_type)
{
  char* c_sub_mat_type = PETSC_NULLPTR;
  *ierr = PCPatchGetSubMatType(*pc, (const char **)&c_sub_mat_type);
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
  #define pcpatchsetcellnumbering_ PCPATCHSETCELLNUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpatchsetcellnumbering_ pcpatchsetcellnumbering
#endif
PETSC_EXTERN void pcpatchsetcellnumbering_(PC *pc, PetscSection *cellNumbering, PetscErrorCode *ierr)
{
  *ierr = PCPatchSetCellNumbering(*pc, *cellNumbering);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpatchgetcellnumbering_ PCPATCHGETCELLNUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpatchgetcellnumbering_ pcpatchgetcellnumbering
#endif
PETSC_EXTERN void pcpatchgetcellnumbering_(PC *pc, PetscSection *cellNumbering, PetscErrorCode *ierr)
{
  PetscBool null_cellNumbering = !*(void**) cellNumbering ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(cellNumbering);
  *ierr = PCPatchGetCellNumbering(*pc, cellNumbering);
  if (*ierr) return;
  if (! null_cellNumbering && !*(void**) cellNumbering) *(void **) cellNumbering = (void *)-2;
}
