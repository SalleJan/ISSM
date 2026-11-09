#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscattersetup_ VECSCATTERSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscattersetup_ vecscattersetup
#endif
PETSC_EXTERN void vecscattersetup_(VecScatter *sf, PetscErrorCode *ierr)
{
  *ierr = VecScatterSetUp(*sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscattersettype_ VECSCATTERSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscattersettype_ vecscattersettype
#endif
PETSC_EXTERN void vecscattersettype_(VecScatter *sf, VecScatterType *type, PetscErrorCode *ierr)
{
  *ierr = VecScatterSetType(*sf, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscattergettype_ VECSCATTERGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscattergettype_ vecscattergettype
#endif
PETSC_EXTERN void vecscattergettype_(VecScatter *sf, VecScatterType *type, PetscErrorCode *ierr)
{
  *ierr = VecScatterGetType(*sf, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscattergetmerged_ VECSCATTERGETMERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscattergetmerged_ vecscattergetmerged
#endif
PETSC_EXTERN void vecscattergetmerged_(VecScatter *sf, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = VecScatterGetMerged(*sf, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscatterdestroy_ VECSCATTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscatterdestroy_ vecscatterdestroy
#endif
PETSC_EXTERN void vecscatterdestroy_(VecScatter *sf, PetscErrorCode *ierr)
{
  *ierr = VecScatterDestroy(sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscattercopy_ VECSCATTERCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscattercopy_ vecscattercopy
#endif
PETSC_EXTERN void vecscattercopy_(VecScatter *sf, VecScatter *newsf, PetscErrorCode *ierr)
{
  *ierr = VecScatterCopy(*sf, newsf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscatterviewfromoptions_ VECSCATTERVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscatterviewfromoptions_ vecscatterviewfromoptions
#endif
PETSC_EXTERN void vecscatterviewfromoptions_(VecScatter *sf, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = VecScatterViewFromOptions(*sf, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscatterview_ VECSCATTERVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscatterview_ vecscatterview
#endif
PETSC_EXTERN void vecscatterview_(VecScatter *sf, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = VecScatterView(*sf, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscatterremap_ VECSCATTERREMAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscatterremap_ vecscatterremap
#endif
PETSC_EXTERN void vecscatterremap_(VecScatter *sf, PetscInt tomap[], PetscInt frommap[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(tomap);
  CHKFORTRANNULLINTEGER(frommap);
  *ierr = VecScatterRemap(*sf, tomap, frommap);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscattersetfromoptions_ VECSCATTERSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscattersetfromoptions_ vecscattersetfromoptions
#endif
PETSC_EXTERN void vecscattersetfromoptions_(VecScatter *sf, PetscErrorCode *ierr)
{
  *ierr = VecScatterSetFromOptions(*sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscattercreate_ VECSCATTERCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscattercreate_ vecscattercreate
#endif
PETSC_EXTERN void vecscattercreate_(Vec *x, IS *ix, Vec *y, IS *iy, VecScatter *newsf, PetscErrorCode *ierr)
{
  *ierr = VecScatterCreate(*x, *ix, *y, *iy, newsf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscattercreatetoall_ VECSCATTERCREATETOALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscattercreatetoall_ vecscattercreatetoall
#endif
PETSC_EXTERN void vecscattercreatetoall_(Vec *vin, VecScatter *ctx, Vec *vout, PetscErrorCode *ierr)
{
  PetscBool null_vout = !*(void**) vout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(vout);
  *ierr = VecScatterCreateToAll(*vin, ctx, vout);
  if (*ierr) return;
  if (! null_vout && !*(void**) vout) *(void **) vout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscattercreatetozero_ VECSCATTERCREATETOZERO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscattercreatetozero_ vecscattercreatetozero
#endif
PETSC_EXTERN void vecscattercreatetozero_(Vec *vin, VecScatter *ctx, Vec *vout, PetscErrorCode *ierr)
{
  PetscBool null_vout = !*(void**) vout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(vout);
  *ierr = VecScatterCreateToZero(*vin, ctx, vout);
  if (*ierr) return;
  if (! null_vout && !*(void**) vout) *(void **) vout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscatterbegin_ VECSCATTERBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscatterbegin_ vecscatterbegin
#endif
PETSC_EXTERN void vecscatterbegin_(VecScatter *sf, Vec *x, Vec *y, InsertMode *addv, ScatterMode *mode, PetscErrorCode *ierr)
{
  *ierr = VecScatterBegin(*sf, *x, *y, *addv, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscatterend_ VECSCATTEREND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscatterend_ vecscatterend
#endif
PETSC_EXTERN void vecscatterend_(VecScatter *sf, Vec *x, Vec *y, InsertMode *addv, ScatterMode *mode, PetscErrorCode *ierr)
{
  *ierr = VecScatterEnd(*sf, *x, *y, *addv, *mode);
  if (*ierr) return;
}
