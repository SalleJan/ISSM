#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetlocaltoglobalmapping_ VECGETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetlocaltoglobalmapping_ vecgetlocaltoglobalmapping
#endif
PETSC_EXTERN void vecgetlocaltoglobalmapping_(Vec *X, ISLocalToGlobalMapping *mapping, PetscErrorCode *ierr)
{
  PetscBool null_mapping = !*(void**) mapping ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mapping);
  *ierr = VecGetLocalToGlobalMapping(*X, mapping);
  if (*ierr) return;
  if (! null_mapping && !*(void**) mapping) *(void **) mapping = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecassemblybegin_ VECASSEMBLYBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecassemblybegin_ vecassemblybegin
#endif
PETSC_EXTERN void vecassemblybegin_(Vec *vec, PetscErrorCode *ierr)
{
  *ierr = VecAssemblyBegin(*vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecassemblyend_ VECASSEMBLYEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecassemblyend_ vecassemblyend
#endif
PETSC_EXTERN void vecassemblyend_(Vec *vec, PetscErrorCode *ierr)
{
  *ierr = VecAssemblyEnd(*vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecpointwisemax_ VECPOINTWISEMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecpointwisemax_ vecpointwisemax
#endif
PETSC_EXTERN void vecpointwisemax_(Vec *w, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecPointwiseMax(*w, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecpointwisemin_ VECPOINTWISEMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecpointwisemin_ vecpointwisemin
#endif
PETSC_EXTERN void vecpointwisemin_(Vec *w, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecPointwiseMin(*w, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecpointwisemaxabs_ VECPOINTWISEMAXABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecpointwisemaxabs_ vecpointwisemaxabs
#endif
PETSC_EXTERN void vecpointwisemaxabs_(Vec *w, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecPointwiseMaxAbs(*w, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecpointwisedivide_ VECPOINTWISEDIVIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecpointwisedivide_ vecpointwisedivide
#endif
PETSC_EXTERN void vecpointwisedivide_(Vec *w, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecPointwiseDivide(*w, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecpointwisesign_ VECPOINTWISESIGN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecpointwisesign_ vecpointwisesign
#endif
PETSC_EXTERN void vecpointwisesign_(Vec *y, Vec *x, VecSignMode *sign_type, PetscErrorCode *ierr)
{
  *ierr = VecPointwiseSign(*y, *x, *sign_type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecpointwisemult_ VECPOINTWISEMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecpointwisemult_ vecpointwisemult
#endif
PETSC_EXTERN void vecpointwisemult_(Vec *w, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecPointwiseMult(*w, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecduplicate_ VECDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecduplicate_ vecduplicate
#endif
PETSC_EXTERN void vecduplicate_(Vec *v, Vec *newv, PetscErrorCode *ierr)
{
  PetscBool null_newv = !*(void**) newv ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newv);
  *ierr = VecDuplicate(*v, newv);
  if (*ierr) return;
  if (! null_newv && !*(void**) newv) *(void **) newv = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecdestroy_ VECDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecdestroy_ vecdestroy
#endif
PETSC_EXTERN void vecdestroy_(Vec *v, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(v);
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = VecDestroy(v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecviewfromoptions_ VECVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecviewfromoptions_ vecviewfromoptions
#endif
PETSC_EXTERN void vecviewfromoptions_(Vec *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = VecViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecview_ VECVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecview_ vecview
#endif
PETSC_EXTERN void vecview_(Vec *vec, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = VecView(*vec, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecviewnative_ VECVIEWNATIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecviewnative_ vecviewnative
#endif
PETSC_EXTERN void vecviewnative_(Vec *vec, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = VecViewNative(*vec, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetsize_ VECGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetsize_ vecgetsize
#endif
PETSC_EXTERN void vecgetsize_(Vec *x, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = VecGetSize(*x, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetlocalsize_ VECGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetlocalsize_ vecgetlocalsize
#endif
PETSC_EXTERN void vecgetlocalsize_(Vec *x, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = VecGetLocalSize(*x, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetownershiprange_ VECGETOWNERSHIPRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetownershiprange_ vecgetownershiprange
#endif
PETSC_EXTERN void vecgetownershiprange_(Vec *x, PetscInt *low, PetscInt *high, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(low);
  CHKFORTRANNULLINTEGER(high);
  *ierr = VecGetOwnershipRange(*x, low, high);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecresetarray_ VECRESETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecresetarray_ vecresetarray
#endif
PETSC_EXTERN void vecresetarray_(Vec *vec, PetscErrorCode *ierr)
{
  *ierr = VecResetArray(*vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecload_ VECLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecload_ vecload
#endif
PETSC_EXTERN void vecload_(Vec *vec, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = VecLoad(*vec, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecreciprocal_ VECRECIPROCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecreciprocal_ vecreciprocal
#endif
PETSC_EXTERN void vecreciprocal_(Vec *vec, PetscErrorCode *ierr)
{
  *ierr = VecReciprocal(*vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veczeroentries_ VECZEROENTRIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veczeroentries_ veczeroentries
#endif
PETSC_EXTERN void veczeroentries_(Vec *vec, PetscErrorCode *ierr)
{
  *ierr = VecZeroEntries(*vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetblocksize_ VECGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetblocksize_ vecgetblocksize
#endif
PETSC_EXTERN void vecgetblocksize_(Vec *v, PetscInt *bs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bs);
  *ierr = VecGetBlockSize(*v, bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecappendoptionsprefix_ VECAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecappendoptionsprefix_ vecappendoptionsprefix
#endif
PETSC_EXTERN void vecappendoptionsprefix_(Vec *v, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = VecAppendOptionsPrefix(*v, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetoptionsprefix_ VECGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetoptionsprefix_ vecgetoptionsprefix
#endif
PETSC_EXTERN void vecgetoptionsprefix_(Vec *v, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix = PETSC_NULLPTR;
  *ierr = VecGetOptionsPrefix(*v, (const char **)&c_prefix);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)prefix, c_prefix, l_prefix);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, prefix, l_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetstate_ VECGETSTATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetstate_ vecgetstate
#endif
PETSC_EXTERN void vecgetstate_(Vec *v, PetscObjectState *state, PetscErrorCode *ierr)
{
  *ierr = VecGetState(*v, state);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccopy_ VECCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccopy_ veccopy
#endif
PETSC_EXTERN void veccopy_(Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecCopy(*x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetlayout_ VECGETLAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetlayout_ vecgetlayout
#endif
PETSC_EXTERN void vecgetlayout_(Vec *x, PetscLayout *map, PetscErrorCode *ierr)
{
  PetscBool null_map = !*(void**) map ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(map);
  *ierr = VecGetLayout(*x, map);
  if (*ierr) return;
  if (! null_map && !*(void**) map) *(void **) map = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecflag_ VECFLAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecflag_ vecflag
#endif
PETSC_EXTERN void vecflag_(Vec *xin, PetscInt *flg, PetscErrorCode *ierr)
{
  *ierr = VecFlag(*xin, *flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecbindtocpu_ VECBINDTOCPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecbindtocpu_ vecbindtocpu
#endif
PETSC_EXTERN void vecbindtocpu_(Vec *v, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = VecBindToCPU(*v, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecboundtocpu_ VECBOUNDTOCPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecboundtocpu_ vecboundtocpu
#endif
PETSC_EXTERN void vecboundtocpu_(Vec *v, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = VecBoundToCPU(*v, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetbindingpropagates_ VECGETBINDINGPROPAGATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetbindingpropagates_ vecgetbindingpropagates
#endif
PETSC_EXTERN void vecgetbindingpropagates_(Vec *v, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = VecGetBindingPropagates(*v, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetpinnedmemorymin_ VECGETPINNEDMEMORYMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetpinnedmemorymin_ vecgetpinnedmemorymin
#endif
PETSC_EXTERN void vecgetpinnedmemorymin_(Vec *v, size_t *mbytes, PetscErrorCode *ierr)
{
  *ierr = VecGetPinnedMemoryMin(*v, mbytes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetoffloadmask_ VECGETOFFLOADMASK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetoffloadmask_ vecgetoffloadmask
#endif
PETSC_EXTERN void vecgetoffloadmask_(Vec *v, PetscOffloadMask *mask, PetscErrorCode *ierr)
{
  *ierr = VecGetOffloadMask(*v, mask);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecerrorweightednorms_ VECERRORWEIGHTEDNORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecerrorweightednorms_ vecerrorweightednorms
#endif
PETSC_EXTERN void vecerrorweightednorms_(Vec *U, Vec *Y, Vec *E, NormType *wnormtype, PetscReal *atol, Vec *vatol, PetscReal *rtol, Vec *vrtol, PetscReal *ignore_max, PetscReal *norm, PetscInt *norm_loc, PetscReal *norma, PetscInt *norma_loc, PetscReal *normr, PetscInt *normr_loc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(norm);
  CHKFORTRANNULLINTEGER(norm_loc);
  CHKFORTRANNULLREAL(norma);
  CHKFORTRANNULLINTEGER(norma_loc);
  CHKFORTRANNULLREAL(normr);
  CHKFORTRANNULLINTEGER(normr_loc);
  *ierr = VecErrorWeightedNorms(*U, *Y, *E, *wnormtype, *atol, *vatol, *rtol, *vrtol, *ignore_max, norm, norm_loc, norma, norma_loc, normr, normr_loc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstashgetinfo_ VECSTASHGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstashgetinfo_ vecstashgetinfo
#endif
PETSC_EXTERN void vecstashgetinfo_(Vec *vec, PetscInt *nstash, PetscInt *reallocs, PetscInt *bnstash, PetscInt *breallocs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nstash);
  CHKFORTRANNULLINTEGER(reallocs);
  CHKFORTRANNULLINTEGER(bnstash);
  CHKFORTRANNULLINTEGER(breallocs);
  *ierr = VecStashGetInfo(*vec, nstash, reallocs, bnstash, breallocs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetlocaltoglobalmapping_ VECSETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetlocaltoglobalmapping_ vecsetlocaltoglobalmapping
#endif
PETSC_EXTERN void vecsetlocaltoglobalmapping_(Vec *x, ISLocalToGlobalMapping *mapping, PetscErrorCode *ierr)
{
  *ierr = VecSetLocalToGlobalMapping(*x, *mapping);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetpreallocationcoo_ VECSETPREALLOCATIONCOO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetpreallocationcoo_ vecsetpreallocationcoo
#endif
PETSC_EXTERN void vecsetpreallocationcoo_(Vec *x, PetscCount *ncoo, const PetscInt coo_i[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(coo_i);
  *ierr = VecSetPreallocationCOO(*x, *ncoo, coo_i);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetpreallocationcoolocal_ VECSETPREALLOCATIONCOOLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetpreallocationcoolocal_ vecsetpreallocationcoolocal
#endif
PETSC_EXTERN void vecsetpreallocationcoolocal_(Vec *x, PetscCount *ncoo, PetscInt coo_i[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(coo_i);
  *ierr = VecSetPreallocationCOOLocal(*x, *ncoo, coo_i);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetvaluescoo_ VECSETVALUESCOO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetvaluescoo_ vecsetvaluescoo
#endif
PETSC_EXTERN void vecsetvaluescoo_(Vec *x, const PetscScalar coo_v[], InsertMode *imode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(coo_v);
  *ierr = VecSetValuesCOO(*x, coo_v, *imode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetoption_ VECSETOPTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetoption_ vecsetoption
#endif
PETSC_EXTERN void vecsetoption_(Vec *x, VecOption *op, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = VecSetOption(*x, *op, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstashsetinitialsize_ VECSTASHSETINITIALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstashsetinitialsize_ vecstashsetinitialsize
#endif
PETSC_EXTERN void vecstashsetinitialsize_(Vec *vec, PetscInt *size, PetscInt *bsize, PetscErrorCode *ierr)
{
  *ierr = VecStashSetInitialSize(*vec, *size, *bsize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetrandom_ VECSETRANDOM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetrandom_ vecsetrandom
#endif
PETSC_EXTERN void vecsetrandom_(Vec *x, PetscRandom *rctx, PetscErrorCode *ierr)
{
  *ierr = VecSetRandom(*x, *rctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetrandomgaussian_ VECSETRANDOMGAUSSIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetrandomgaussian_ vecsetrandomgaussian
#endif
PETSC_EXTERN void vecsetrandomgaussian_(Vec *v, PetscRandom *rng, PetscReal *mean, PetscReal *std_dev, PetscErrorCode *ierr)
{
  *ierr = VecSetRandomGaussian(*v, *rng, *mean, *std_dev);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetfromoptions_ VECSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetfromoptions_ vecsetfromoptions
#endif
PETSC_EXTERN void vecsetfromoptions_(Vec *vec, PetscErrorCode *ierr)
{
  *ierr = VecSetFromOptions(*vec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetsizes_ VECSETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetsizes_ vecsetsizes
#endif
PETSC_EXTERN void vecsetsizes_(Vec *v, PetscInt *n, PetscInt *M_N, PetscErrorCode *ierr)
{
  *ierr = VecSetSizes(*v, *n, *M_N);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetblocksize_ VECSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetblocksize_ vecsetblocksize
#endif
PETSC_EXTERN void vecsetblocksize_(Vec *v, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = VecSetBlockSize(*v, *bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetoptionsprefix_ VECSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetoptionsprefix_ vecsetoptionsprefix
#endif
PETSC_EXTERN void vecsetoptionsprefix_(Vec *v, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = VecSetOptionsPrefix(*v, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetup_ VECSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetup_ vecsetup
#endif
PETSC_EXTERN void vecsetup_(Vec *v, PetscErrorCode *ierr)
{
  *ierr = VecSetUp(*v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecswap_ VECSWAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecswap_ vecswap
#endif
PETSC_EXTERN void vecswap_(Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecSwap(*x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstashviewfromoptions_ VECSTASHVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstashviewfromoptions_ vecstashviewfromoptions
#endif
PETSC_EXTERN void vecstashviewfromoptions_(Vec *obj, PetscObject *bobj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = VecStashViewFromOptions(*obj, *bobj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstashview_ VECSTASHVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstashview_ vecstashview
#endif
PETSC_EXTERN void vecstashview_(Vec *v, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = VecStashView(*v, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetlayout_ VECSETLAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetlayout_ vecsetlayout
#endif
PETSC_EXTERN void vecsetlayout_(Vec *x, PetscLayout *map, PetscErrorCode *ierr)
{
  *ierr = VecSetLayout(*x, *map);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetbindingpropagates_ VECSETBINDINGPROPAGATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetbindingpropagates_ vecsetbindingpropagates
#endif
PETSC_EXTERN void vecsetbindingpropagates_(Vec *v, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = VecSetBindingPropagates(*v, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetpinnedmemorymin_ VECSETPINNEDMEMORYMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetpinnedmemorymin_ vecsetpinnedmemorymin
#endif
PETSC_EXTERN void vecsetpinnedmemorymin_(Vec *v, size_t *mbytes, PetscErrorCode *ierr)
{
  *ierr = VecSetPinnedMemoryMin(*v, *mbytes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetvec_ PETSCOPTIONSGETVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetvec_ petscoptionsgetvec
#endif
PETSC_EXTERN void petscoptionsgetvec_(PetscOptions *options, char prefix[], char key[], Vec *v, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix, PETSC_FORTRAN_CHARLEN_T l_key)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  char* c_key;
  FIXCHAR(key, l_key, c_key);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsGetVec(*options, c_prefix, c_key, *v, set);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
  FREECHAR(key, c_key);
}
