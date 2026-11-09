#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isrenumber_ ISRENUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isrenumber_ isrenumber
#endif
PETSC_EXTERN void isrenumber_(IS *subset, IS *subset_mult, PetscInt *N, IS *subset_n, PetscErrorCode *ierr)
{
  PetscBool null_subset_n = !*(void**) subset_n ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(N);
  CHKFORTRANNULLOBJECT(subset_n);
  *ierr = ISRenumber(*subset, *subset_mult, N, subset_n);
  if (*ierr) return;
  if (! null_subset_n && !*(void**) subset_n) *(void **) subset_n = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscreatesubis_ ISCREATESUBIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscreatesubis_ iscreatesubis
#endif
PETSC_EXTERN void iscreatesubis_(IS *is, IS *comps, IS *subis, PetscErrorCode *ierr)
{
  PetscBool null_subis = !*(void**) subis ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subis);
  *ierr = ISCreateSubIS(*is, *comps, subis);
  if (*ierr) return;
  if (! null_subis && !*(void**) subis) *(void **) subis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isclearinfocache_ ISCLEARINFOCACHE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isclearinfocache_ isclearinfocache
#endif
PETSC_EXTERN void isclearinfocache_(IS *is, PetscBool *clear_permanent_local, PetscErrorCode *ierr)
{
  *ierr = ISClearInfoCache(*is, *clear_permanent_local ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issetinfo_ ISSETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issetinfo_ issetinfo
#endif
PETSC_EXTERN void issetinfo_(IS *is, ISInfo *info, ISInfoType *type, PetscBool *permanent, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = ISSetInfo(*is, *info, *type, *permanent ? PETSC_TRUE : PETSC_FALSE, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgetinfo_ ISGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgetinfo_ isgetinfo
#endif
PETSC_EXTERN void isgetinfo_(IS *is, ISInfo *info, ISInfoType *type, PetscBool *compute, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = ISGetInfo(*is, *info, *type, *compute ? PETSC_TRUE : PETSC_FALSE, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isidentity_ ISIDENTITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isidentity_ isidentity
#endif
PETSC_EXTERN void isidentity_(IS *is, PetscBool *ident, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(ident);
  *ierr = ISIdentity(*is, ident);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issetidentity_ ISSETIDENTITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issetidentity_ issetidentity
#endif
PETSC_EXTERN void issetidentity_(IS *is, PetscErrorCode *ierr)
{
  *ierr = ISSetIdentity(*is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscontiguouslocal_ ISCONTIGUOUSLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscontiguouslocal_ iscontiguouslocal
#endif
PETSC_EXTERN void iscontiguouslocal_(IS *is, PetscInt *gstart, PetscInt *gend, PetscInt *start, PetscBool *contig, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLBOOL(contig);
  *ierr = ISContiguousLocal(*is, *gstart, *gend, start, contig);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ispermutation_ ISPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ispermutation_ ispermutation
#endif
PETSC_EXTERN void ispermutation_(IS *is, PetscBool *perm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(perm);
  *ierr = ISPermutation(*is, perm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issetpermutation_ ISSETPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issetpermutation_ issetpermutation
#endif
PETSC_EXTERN void issetpermutation_(IS *is, PetscErrorCode *ierr)
{
  *ierr = ISSetPermutation(*is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isdestroy_ ISDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isdestroy_ isdestroy
#endif
PETSC_EXTERN void isdestroy_(IS *is, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(is);
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = ISDestroy(is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isinvertpermutation_ ISINVERTPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isinvertpermutation_ isinvertpermutation
#endif
PETSC_EXTERN void isinvertpermutation_(IS *is, PetscInt *nlocal, IS *isout, PetscErrorCode *ierr)
{
  PetscBool null_isout = !*(void**) isout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(isout);
  *ierr = ISInvertPermutation(*is, *nlocal, isout);
  if (*ierr) return;
  if (! null_isout && !*(void**) isout) *(void **) isout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgetsize_ ISGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgetsize_ isgetsize
#endif
PETSC_EXTERN void isgetsize_(IS *is, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = ISGetSize(*is, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgetlocalsize_ ISGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgetlocalsize_ isgetlocalsize
#endif
PETSC_EXTERN void isgetlocalsize_(IS *is, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = ISGetLocalSize(*is, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgetlayout_ ISGETLAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgetlayout_ isgetlayout
#endif
PETSC_EXTERN void isgetlayout_(IS *is, PetscLayout *map, PetscErrorCode *ierr)
{
  PetscBool null_map = !*(void**) map ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(map);
  *ierr = ISGetLayout(*is, map);
  if (*ierr) return;
  if (! null_map && !*(void**) map) *(void **) map = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issetlayout_ ISSETLAYOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issetlayout_ issetlayout
#endif
PETSC_EXTERN void issetlayout_(IS *is, PetscLayout *map, PetscErrorCode *ierr)
{
  *ierr = ISSetLayout(*is, *map);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgetminmax_ ISGETMINMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgetminmax_ isgetminmax
#endif
PETSC_EXTERN void isgetminmax_(IS *is, PetscInt *min, PetscInt *max, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(min);
  CHKFORTRANNULLINTEGER(max);
  *ierr = ISGetMinMax(*is, min, max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocate_ ISLOCATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocate_ islocate
#endif
PETSC_EXTERN void islocate_(IS *is, PetscInt *key, PetscInt *location, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(location);
  *ierr = ISLocate(*is, *key, location);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgetnonlocalis_ ISGETNONLOCALIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgetnonlocalis_ isgetnonlocalis
#endif
PETSC_EXTERN void isgetnonlocalis_(IS *is, IS *complement, PetscErrorCode *ierr)
{
  PetscBool null_complement = !*(void**) complement ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(complement);
  *ierr = ISGetNonlocalIS(*is, complement);
  if (*ierr) return;
  if (! null_complement && !*(void**) complement) *(void **) complement = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isrestorenonlocalis_ ISRESTORENONLOCALIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isrestorenonlocalis_ isrestorenonlocalis
#endif
PETSC_EXTERN void isrestorenonlocalis_(IS *is, IS *complement, PetscErrorCode *ierr)
{
  PetscBool null_complement = !*(void**) complement ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(complement);
  *ierr = ISRestoreNonlocalIS(*is, complement);
  if (*ierr) return;
  if (! null_complement && !*(void**) complement) *(void **) complement = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isviewfromoptions_ ISVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isviewfromoptions_ isviewfromoptions
#endif
PETSC_EXTERN void isviewfromoptions_(IS *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = ISViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isview_ ISVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isview_ isview
#endif
PETSC_EXTERN void isview_(IS *is, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = ISView(*is, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isload_ ISLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isload_ isload
#endif
PETSC_EXTERN void isload_(IS *is, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = ISLoad(*is, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issort_ ISSORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issort_ issort
#endif
PETSC_EXTERN void issort_(IS *is, PetscErrorCode *ierr)
{
  *ierr = ISSort(*is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issortremovedups_ ISSORTREMOVEDUPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issortremovedups_ issortremovedups
#endif
PETSC_EXTERN void issortremovedups_(IS *is, PetscErrorCode *ierr)
{
  *ierr = ISSortRemoveDups(*is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define istogeneral_ ISTOGENERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define istogeneral_ istogeneral
#endif
PETSC_EXTERN void istogeneral_(IS *is, PetscErrorCode *ierr)
{
  *ierr = ISToGeneral(*is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issorted_ ISSORTED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issorted_ issorted
#endif
PETSC_EXTERN void issorted_(IS *is, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = ISSorted(*is, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isduplicate_ ISDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isduplicate_ isduplicate
#endif
PETSC_EXTERN void isduplicate_(IS *is, IS *newIS, PetscErrorCode *ierr)
{
  PetscBool null_newIS = !*(void**) newIS ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newIS);
  *ierr = ISDuplicate(*is, newIS);
  if (*ierr) return;
  if (! null_newIS && !*(void**) newIS) *(void **) newIS = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscopy_ ISCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscopy_ iscopy
#endif
PETSC_EXTERN void iscopy_(IS *is, IS *isy, PetscErrorCode *ierr)
{
  *ierr = ISCopy(*is, *isy);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isshift_ ISSHIFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isshift_ isshift
#endif
PETSC_EXTERN void isshift_(IS *is, PetscInt *offset, IS *isy, PetscErrorCode *ierr)
{
  *ierr = ISShift(*is, *offset, *isy);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isoncomm_ ISONCOMM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isoncomm_ isoncomm
#endif
PETSC_EXTERN void isoncomm_(IS *is, MPI_Fint *comm, PetscCopyMode *mode, IS *newis, PetscErrorCode *ierr)
{
  PetscBool null_newis = !*(void**) newis ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newis);
  *ierr = ISOnComm(*is, MPI_Comm_f2c(*(comm)), *mode, newis);
  if (*ierr) return;
  if (! null_newis && !*(void**) newis) *(void **) newis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issetblocksize_ ISSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issetblocksize_ issetblocksize
#endif
PETSC_EXTERN void issetblocksize_(IS *is, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = ISSetBlockSize(*is, *bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgetblocksize_ ISGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgetblocksize_ isgetblocksize
#endif
PETSC_EXTERN void isgetblocksize_(IS *is, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = ISGetBlockSize(*is, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issetcompressoutput_ ISSETCOMPRESSOUTPUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issetcompressoutput_ issetcompressoutput
#endif
PETSC_EXTERN void issetcompressoutput_(IS *is, PetscBool *compress, PetscErrorCode *ierr)
{
  *ierr = ISSetCompressOutput(*is, *compress ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgetcompressoutput_ ISGETCOMPRESSOUTPUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgetcompressoutput_ isgetcompressoutput
#endif
PETSC_EXTERN void isgetcompressoutput_(IS *is, PetscBool *compress, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(compress);
  *ierr = ISGetCompressOutput(*is, compress);
  if (*ierr) return;
}
