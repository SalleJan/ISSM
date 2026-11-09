#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfdestroy_ PFDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfdestroy_ pfdestroy
#endif
PETSC_EXTERN void pfdestroy_(PF *pf, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(pf);
  PetscBool null_pf = !*(void**) pf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pf);
  *ierr = PFDestroy(pf);
  if (*ierr) return;
  if (! null_pf && !*(void**) pf) *(void **) pf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfcreate_ PFCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfcreate_ pfcreate
#endif
PETSC_EXTERN void pfcreate_(MPI_Fint *comm, PetscInt *dimin, PetscInt *dimout, PF *pf, PetscErrorCode *ierr)
{
  PetscBool null_pf = !*(void**) pf ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(pf);
  CHKFORTRANNULLOBJECT(pf);
  *ierr = PFCreate(MPI_Comm_f2c(*(comm)), *dimin, *dimout, pf);
  if (*ierr) return;
  if (! null_pf && !*(void**) pf) *(void **) pf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfapplyvec_ PFAPPLYVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfapplyvec_ pfapplyvec
#endif
PETSC_EXTERN void pfapplyvec_(PF *pf, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = PFApplyVec(*pf, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfapply_ PFAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfapply_ pfapply
#endif
PETSC_EXTERN void pfapply_(PF *pf, PetscInt *n, const PetscScalar *x, PetscScalar *y, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(x);
  CHKFORTRANNULLSCALAR(y);
  *ierr = PFApply(*pf, *n, x, y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfviewfromoptions_ PFVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfviewfromoptions_ pfviewfromoptions
#endif
PETSC_EXTERN void pfviewfromoptions_(PF *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PFViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfview_ PFVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfview_ pfview
#endif
PETSC_EXTERN void pfview_(PF *pf, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PFView(*pf, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfgettype_ PFGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfgettype_ pfgettype
#endif
PETSC_EXTERN void pfgettype_(PF *pf, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = PFGetType(*pf, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfsettype_ PFSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfsettype_ pfsettype
#endif
PETSC_EXTERN void pfsettype_(PF *pf, char *type, PetscCtx ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PFSetType(*pf, c_type, ctx);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfsetfromoptions_ PFSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfsetfromoptions_ pfsetfromoptions
#endif
PETSC_EXTERN void pfsetfromoptions_(PF *pf, PetscErrorCode *ierr)
{
  *ierr = PFSetFromOptions(*pf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pffinalizepackage_ PFFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pffinalizepackage_ pffinalizepackage
#endif
PETSC_EXTERN void pffinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PFFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscpf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pfinitializepackage_ PFINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pfinitializepackage_ pfinitializepackage
#endif
PETSC_EXTERN void pfinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PFInitializePackage();
  if (*ierr) return;
}
