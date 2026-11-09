#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspload_ KSPLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspload_ kspload
#endif
PETSC_EXTERN void kspload_(KSP *newdm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = KSPLoad(*newdm, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspview_ KSPVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspview_ kspview
#endif
PETSC_EXTERN void kspview_(KSP *ksp, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = KSPView(*ksp, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspviewfromoptions_ KSPVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspviewfromoptions_ kspviewfromoptions
#endif
PETSC_EXTERN void kspviewfromoptions_(KSP *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = KSPViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetnormtype_ KSPSETNORMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetnormtype_ kspsetnormtype
#endif
PETSC_EXTERN void kspsetnormtype_(KSP *ksp, KSPNormType *normtype, PetscErrorCode *ierr)
{
  *ierr = KSPSetNormType(*ksp, *normtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetchecknormiteration_ KSPSETCHECKNORMITERATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetchecknormiteration_ kspsetchecknormiteration
#endif
PETSC_EXTERN void kspsetchecknormiteration_(KSP *ksp, PetscInt *it, PetscErrorCode *ierr)
{
  *ierr = KSPSetCheckNormIteration(*ksp, *it);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetlagnorm_ KSPSETLAGNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetlagnorm_ kspsetlagnorm
#endif
PETSC_EXTERN void kspsetlagnorm_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPSetLagNorm(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetsupportednorm_ KSPSETSUPPORTEDNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetsupportednorm_ kspsetsupportednorm
#endif
PETSC_EXTERN void kspsetsupportednorm_(KSP *ksp, KSPNormType *normtype, PCSide *pcside, PetscInt *priority, PetscErrorCode *ierr)
{
  *ierr = KSPSetSupportedNorm(*ksp, *normtype, *pcside, *priority);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetnormtype_ KSPGETNORMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetnormtype_ kspgetnormtype
#endif
PETSC_EXTERN void kspgetnormtype_(KSP *ksp, KSPNormType *normtype, PetscErrorCode *ierr)
{
  *ierr = KSPGetNormType(*ksp, normtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetoperators_ KSPSETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetoperators_ kspsetoperators
#endif
PETSC_EXTERN void kspsetoperators_(KSP *ksp, Mat *Amat, Mat *Pmat, PetscErrorCode *ierr)
{
  *ierr = KSPSetOperators(*ksp, *Amat, *Pmat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetoperators_ KSPGETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetoperators_ kspgetoperators
#endif
PETSC_EXTERN void kspgetoperators_(KSP *ksp, Mat *Amat, Mat *Pmat, PetscErrorCode *ierr)
{
  PetscBool null_Amat = !*(void**) Amat ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_Pmat = !*(void**) Pmat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Amat);
  CHKFORTRANNULLOBJECT(Pmat);
  *ierr = KSPGetOperators(*ksp, Amat, Pmat);
  if (*ierr) return;
  if (! null_Amat && !*(void**) Amat) *(void **) Amat = (void *)-2;
  if (! null_Pmat && !*(void**) Pmat) *(void **) Pmat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetoperatorsset_ KSPGETOPERATORSSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetoperatorsset_ kspgetoperatorsset
#endif
PETSC_EXTERN void kspgetoperatorsset_(KSP *ksp, PetscBool *mat, PetscBool *pmat, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(mat);
  CHKFORTRANNULLBOOL(pmat);
  *ierr = KSPGetOperatorsSet(*ksp, mat, pmat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetnestlevel_ KSPSETNESTLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetnestlevel_ kspsetnestlevel
#endif
PETSC_EXTERN void kspsetnestlevel_(KSP *ksp, PetscInt *level, PetscErrorCode *ierr)
{
  *ierr = KSPSetNestLevel(*ksp, *level);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetnestlevel_ KSPGETNESTLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetnestlevel_ kspgetnestlevel
#endif
PETSC_EXTERN void kspgetnestlevel_(KSP *ksp, PetscInt *level, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(level);
  *ierr = KSPGetNestLevel(*ksp, level);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcreate_ KSPCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcreate_ kspcreate
#endif
PETSC_EXTERN void kspcreate_(MPI_Fint *comm, KSP *inksp, PetscErrorCode *ierr)
{
  PetscBool null_inksp = !*(void**) inksp ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(inksp);
  CHKFORTRANNULLOBJECT(inksp);
  *ierr = KSPCreate(MPI_Comm_f2c(*(comm)), inksp);
  if (*ierr) return;
  if (! null_inksp && !*(void**) inksp) *(void **) inksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsettype_ KSPSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsettype_ kspsettype
#endif
PETSC_EXTERN void kspsettype_(KSP *ksp, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = KSPSetType(*ksp, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgettype_ KSPGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgettype_ kspgettype
#endif
PETSC_EXTERN void kspgettype_(KSP *ksp, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = KSPGetType(*ksp, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
