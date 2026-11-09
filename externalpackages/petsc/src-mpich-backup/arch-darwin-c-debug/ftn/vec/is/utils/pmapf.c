#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutcreate_ PETSCLAYOUTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutcreate_ petsclayoutcreate
#endif
PETSC_EXTERN void petsclayoutcreate_(MPI_Fint *comm, PetscLayout *map, PetscErrorCode *ierr)
{
  PetscBool null_map = !*(void**) map ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(map);
  CHKFORTRANNULLOBJECT(map);
  *ierr = PetscLayoutCreate(MPI_Comm_f2c(*(comm)), map);
  if (*ierr) return;
  if (! null_map && !*(void**) map) *(void **) map = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutcreatefromsizes_ PETSCLAYOUTCREATEFROMSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutcreatefromsizes_ petsclayoutcreatefromsizes
#endif
PETSC_EXTERN void petsclayoutcreatefromsizes_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, PetscInt *bs, PetscLayout *map, PetscErrorCode *ierr)
{
  PetscBool null_map = !*(void**) map ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(map);
  *ierr = PetscLayoutCreateFromSizes(MPI_Comm_f2c(*(comm)), *n, *M_N, *bs, map);
  if (*ierr) return;
  if (! null_map && !*(void**) map) *(void **) map = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutdestroy_ PETSCLAYOUTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutdestroy_ petsclayoutdestroy
#endif
PETSC_EXTERN void petsclayoutdestroy_(PetscLayout *map, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(map);
  PetscBool null_map = !*(void**) map ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(map);
  *ierr = PetscLayoutDestroy(map);
  if (*ierr) return;
  if (! null_map && !*(void**) map) *(void **) map = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutcreatefromranges_ PETSCLAYOUTCREATEFROMRANGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutcreatefromranges_ petsclayoutcreatefromranges
#endif
PETSC_EXTERN void petsclayoutcreatefromranges_(MPI_Fint *comm, const PetscInt range[], PetscCopyMode *mode, PetscInt *bs, PetscLayout *newmap, PetscErrorCode *ierr)
{
  PetscBool null_newmap = !*(void**) newmap ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(range);
  CHKFORTRANNULLOBJECT(newmap);
  *ierr = PetscLayoutCreateFromRanges(MPI_Comm_f2c(*(comm)), range, *mode, *bs, newmap);
  if (*ierr) return;
  if (! null_newmap && !*(void**) newmap) *(void **) newmap = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutsetup_ PETSCLAYOUTSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutsetup_ petsclayoutsetup
#endif
PETSC_EXTERN void petsclayoutsetup_(PetscLayout *map, PetscErrorCode *ierr)
{
  *ierr = PetscLayoutSetUp(*map);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutduplicate_ PETSCLAYOUTDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutduplicate_ petsclayoutduplicate
#endif
PETSC_EXTERN void petsclayoutduplicate_(PetscLayout *in, PetscLayout *out, PetscErrorCode *ierr)
{
  PetscBool null_out = !*(void**) out ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(out);
  *ierr = PetscLayoutDuplicate(*in, out);
  if (*ierr) return;
  if (! null_out && !*(void**) out) *(void **) out = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutreference_ PETSCLAYOUTREFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutreference_ petsclayoutreference
#endif
PETSC_EXTERN void petsclayoutreference_(PetscLayout *in, PetscLayout *out, PetscErrorCode *ierr)
{
  PetscBool null_out = !*(void**) out ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(out);
  *ierr = PetscLayoutReference(*in, out);
  if (*ierr) return;
  if (! null_out && !*(void**) out) *(void **) out = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutsetislocaltoglobalmapping_ PETSCLAYOUTSETISLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutsetislocaltoglobalmapping_ petsclayoutsetislocaltoglobalmapping
#endif
PETSC_EXTERN void petsclayoutsetislocaltoglobalmapping_(PetscLayout *in, ISLocalToGlobalMapping *ltog, PetscErrorCode *ierr)
{
  *ierr = PetscLayoutSetISLocalToGlobalMapping(*in, *ltog);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutsetlocalsize_ PETSCLAYOUTSETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutsetlocalsize_ petsclayoutsetlocalsize
#endif
PETSC_EXTERN void petsclayoutsetlocalsize_(PetscLayout *map, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PetscLayoutSetLocalSize(*map, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutgetlocalsize_ PETSCLAYOUTGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutgetlocalsize_ petsclayoutgetlocalsize
#endif
PETSC_EXTERN void petsclayoutgetlocalsize_(PetscLayout *map, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  *ierr = PetscLayoutGetLocalSize(*map, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutsetsize_ PETSCLAYOUTSETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutsetsize_ petsclayoutsetsize
#endif
PETSC_EXTERN void petsclayoutsetsize_(PetscLayout *map, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = PetscLayoutSetSize(*map, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutgetsize_ PETSCLAYOUTGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutgetsize_ petsclayoutgetsize
#endif
PETSC_EXTERN void petsclayoutgetsize_(PetscLayout *map, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  *ierr = PetscLayoutGetSize(*map, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutsetblocksize_ PETSCLAYOUTSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutsetblocksize_ petsclayoutsetblocksize
#endif
PETSC_EXTERN void petsclayoutsetblocksize_(PetscLayout *map, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = PetscLayoutSetBlockSize(*map, *bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutgetblocksize_ PETSCLAYOUTGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutgetblocksize_ petsclayoutgetblocksize
#endif
PETSC_EXTERN void petsclayoutgetblocksize_(PetscLayout *map, PetscInt *bs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bs);
  *ierr = PetscLayoutGetBlockSize(*map, bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutgetrange_ PETSCLAYOUTGETRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutgetrange_ petsclayoutgetrange
#endif
PETSC_EXTERN void petsclayoutgetrange_(PetscLayout *map, PetscInt *rstart, PetscInt *rend, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rstart);
  CHKFORTRANNULLINTEGER(rend);
  *ierr = PetscLayoutGetRange(*map, rstart, rend);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutcompare_ PETSCLAYOUTCOMPARE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutcompare_ petsclayoutcompare
#endif
PETSC_EXTERN void petsclayoutcompare_(PetscLayout *mapa, PetscLayout *mapb, PetscBool *congruent, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(congruent);
  *ierr = PetscLayoutCompare(*mapa, *mapb, congruent);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutfindowner_ PETSCLAYOUTFINDOWNER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutfindowner_ petsclayoutfindowner
#endif
PETSC_EXTERN void petsclayoutfindowner_(PetscLayout *map, PetscInt *idx, PetscMPIInt *owner, PetscErrorCode *ierr)
{
  *ierr = PetscLayoutFindOwner(*map, *idx, owner);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclayoutfindownerindex_ PETSCLAYOUTFINDOWNERINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclayoutfindownerindex_ petsclayoutfindownerindex
#endif
PETSC_EXTERN void petsclayoutfindownerindex_(PetscLayout *map, PetscInt *idx, PetscMPIInt *owner, PetscInt *lidx, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lidx);
  *ierr = PetscLayoutFindOwnerIndex(*map, *idx, owner, lidx);
  if (*ierr) return;
}
