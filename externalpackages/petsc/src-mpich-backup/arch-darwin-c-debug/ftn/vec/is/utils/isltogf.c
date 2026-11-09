#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isgetpointsubrange_ ISGETPOINTSUBRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isgetpointsubrange_ isgetpointsubrange
#endif
PETSC_EXTERN void isgetpointsubrange_(IS *subpointIS, PetscInt *pStart, PetscInt *pEnd, const PetscInt points[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(points);
  *ierr = ISGetPointSubrange(*subpointIS, *pStart, *pEnd, points);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isglobaltolocalmappingapply_ ISGLOBALTOLOCALMAPPINGAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isglobaltolocalmappingapply_ isglobaltolocalmappingapply
#endif
PETSC_EXTERN void isglobaltolocalmappingapply_(ISLocalToGlobalMapping *mapping, ISGlobalToLocalMappingMode *type, PetscInt *n, const PetscInt idx[], PetscInt *nout, PetscInt idxout[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  CHKFORTRANNULLINTEGER(nout);
  CHKFORTRANNULLINTEGER(idxout);
  *ierr = ISGlobalToLocalMappingApply(*mapping, *type, *n, idx, nout, idxout);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isglobaltolocalmappingapplyis_ ISGLOBALTOLOCALMAPPINGAPPLYIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isglobaltolocalmappingapplyis_ isglobaltolocalmappingapplyis
#endif
PETSC_EXTERN void isglobaltolocalmappingapplyis_(ISLocalToGlobalMapping *mapping, ISGlobalToLocalMappingMode *type, IS *is, IS *newis, PetscErrorCode *ierr)
{
  PetscBool null_newis = !*(void**) newis ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newis);
  *ierr = ISGlobalToLocalMappingApplyIS(*mapping, *type, *is, newis);
  if (*ierr) return;
  if (! null_newis && !*(void**) newis) *(void **) newis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isglobaltolocalmappingapplyblock_ ISGLOBALTOLOCALMAPPINGAPPLYBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isglobaltolocalmappingapplyblock_ isglobaltolocalmappingapplyblock
#endif
PETSC_EXTERN void isglobaltolocalmappingapplyblock_(ISLocalToGlobalMapping *mapping, ISGlobalToLocalMappingMode *type, PetscInt *n, const PetscInt idx[], PetscInt *nout, PetscInt idxout[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  CHKFORTRANNULLINTEGER(nout);
  CHKFORTRANNULLINTEGER(idxout);
  *ierr = ISGlobalToLocalMappingApplyBlock(*mapping, *type, *n, idx, nout, idxout);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingduplicate_ ISLOCALTOGLOBALMAPPINGDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingduplicate_ islocaltoglobalmappingduplicate
#endif
PETSC_EXTERN void islocaltoglobalmappingduplicate_(ISLocalToGlobalMapping *ltog, ISLocalToGlobalMapping *nltog, PetscErrorCode *ierr)
{
  PetscBool null_nltog = !*(void**) nltog ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(nltog);
  *ierr = ISLocalToGlobalMappingDuplicate(*ltog, nltog);
  if (*ierr) return;
  if (! null_nltog && !*(void**) nltog) *(void **) nltog = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappinggetsize_ ISLOCALTOGLOBALMAPPINGGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappinggetsize_ islocaltoglobalmappinggetsize
#endif
PETSC_EXTERN void islocaltoglobalmappinggetsize_(ISLocalToGlobalMapping *mapping, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  *ierr = ISLocalToGlobalMappingGetSize(*mapping, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingviewfromoptions_ ISLOCALTOGLOBALMAPPINGVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingviewfromoptions_ islocaltoglobalmappingviewfromoptions
#endif
PETSC_EXTERN void islocaltoglobalmappingviewfromoptions_(ISLocalToGlobalMapping *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = ISLocalToGlobalMappingViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingview_ ISLOCALTOGLOBALMAPPINGVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingview_ islocaltoglobalmappingview
#endif
PETSC_EXTERN void islocaltoglobalmappingview_(ISLocalToGlobalMapping *mapping, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = ISLocalToGlobalMappingView(*mapping, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingload_ ISLOCALTOGLOBALMAPPINGLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingload_ islocaltoglobalmappingload
#endif
PETSC_EXTERN void islocaltoglobalmappingload_(ISLocalToGlobalMapping *mapping, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = ISLocalToGlobalMappingLoad(*mapping, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingcreateis_ ISLOCALTOGLOBALMAPPINGCREATEIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingcreateis_ islocaltoglobalmappingcreateis
#endif
PETSC_EXTERN void islocaltoglobalmappingcreateis_(IS *is, ISLocalToGlobalMapping *mapping, PetscErrorCode *ierr)
{
  PetscBool null_mapping = !*(void**) mapping ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mapping);
  *ierr = ISLocalToGlobalMappingCreateIS(*is, mapping);
  if (*ierr) return;
  if (! null_mapping && !*(void**) mapping) *(void **) mapping = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingcreatesf_ ISLOCALTOGLOBALMAPPINGCREATESF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingcreatesf_ islocaltoglobalmappingcreatesf
#endif
PETSC_EXTERN void islocaltoglobalmappingcreatesf_(PetscSF *sf, PetscInt *start, ISLocalToGlobalMapping *mapping, PetscErrorCode *ierr)
{
  PetscBool null_mapping = !*(void**) mapping ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mapping);
  *ierr = ISLocalToGlobalMappingCreateSF(*sf, *start, mapping);
  if (*ierr) return;
  if (! null_mapping && !*(void**) mapping) *(void **) mapping = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingsetblocksize_ ISLOCALTOGLOBALMAPPINGSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingsetblocksize_ islocaltoglobalmappingsetblocksize
#endif
PETSC_EXTERN void islocaltoglobalmappingsetblocksize_(ISLocalToGlobalMapping *mapping, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = ISLocalToGlobalMappingSetBlockSize(*mapping, *bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappinggetblocksize_ ISLOCALTOGLOBALMAPPINGGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappinggetblocksize_ islocaltoglobalmappinggetblocksize
#endif
PETSC_EXTERN void islocaltoglobalmappinggetblocksize_(ISLocalToGlobalMapping *mapping, PetscInt *bs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bs);
  *ierr = ISLocalToGlobalMappingGetBlockSize(*mapping, bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingcreate_ ISLOCALTOGLOBALMAPPINGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingcreate_ islocaltoglobalmappingcreate
#endif
PETSC_EXTERN void islocaltoglobalmappingcreate_(MPI_Fint *comm, PetscInt *bs, PetscInt *n, const PetscInt indices[], PetscCopyMode *mode, ISLocalToGlobalMapping *mapping, PetscErrorCode *ierr)
{
  PetscBool null_mapping = !*(void**) mapping ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(mapping);
  CHKFORTRANNULLINTEGER(indices);
  CHKFORTRANNULLOBJECT(mapping);
  *ierr = ISLocalToGlobalMappingCreate(MPI_Comm_f2c(*(comm)), *bs, *n, indices, *mode, mapping);
  if (*ierr) return;
  if (! null_mapping && !*(void**) mapping) *(void **) mapping = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingsetfromoptions_ ISLOCALTOGLOBALMAPPINGSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingsetfromoptions_ islocaltoglobalmappingsetfromoptions
#endif
PETSC_EXTERN void islocaltoglobalmappingsetfromoptions_(ISLocalToGlobalMapping *mapping, PetscErrorCode *ierr)
{
  *ierr = ISLocalToGlobalMappingSetFromOptions(*mapping);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingdestroy_ ISLOCALTOGLOBALMAPPINGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingdestroy_ islocaltoglobalmappingdestroy
#endif
PETSC_EXTERN void islocaltoglobalmappingdestroy_(ISLocalToGlobalMapping *mapping, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(mapping);
  PetscBool null_mapping = !*(void**) mapping ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mapping);
  *ierr = ISLocalToGlobalMappingDestroy(mapping);
  if (*ierr) return;
  if (! null_mapping && !*(void**) mapping) *(void **) mapping = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingapplyis_ ISLOCALTOGLOBALMAPPINGAPPLYIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingapplyis_ islocaltoglobalmappingapplyis
#endif
PETSC_EXTERN void islocaltoglobalmappingapplyis_(ISLocalToGlobalMapping *mapping, IS *is, IS *newis, PetscErrorCode *ierr)
{
  PetscBool null_newis = !*(void**) newis ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newis);
  *ierr = ISLocalToGlobalMappingApplyIS(*mapping, *is, newis);
  if (*ierr) return;
  if (! null_newis && !*(void**) newis) *(void **) newis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingapply_ ISLOCALTOGLOBALMAPPINGAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingapply_ islocaltoglobalmappingapply
#endif
PETSC_EXTERN void islocaltoglobalmappingapply_(ISLocalToGlobalMapping *mapping, PetscInt *N, const PetscInt in[], PetscInt out[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(in);
  CHKFORTRANNULLINTEGER(out);
  *ierr = ISLocalToGlobalMappingApply(*mapping, *N, in, out);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingapplyblock_ ISLOCALTOGLOBALMAPPINGAPPLYBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingapplyblock_ islocaltoglobalmappingapplyblock
#endif
PETSC_EXTERN void islocaltoglobalmappingapplyblock_(ISLocalToGlobalMapping *mapping, PetscInt *N, const PetscInt in[], PetscInt out[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(in);
  CHKFORTRANNULLINTEGER(out);
  *ierr = ISLocalToGlobalMappingApplyBlock(*mapping, *N, in, out);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappinggetblockmultileavessf_ ISLOCALTOGLOBALMAPPINGGETBLOCKMULTILEAVESSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappinggetblockmultileavessf_ islocaltoglobalmappinggetblockmultileavessf
#endif
PETSC_EXTERN void islocaltoglobalmappinggetblockmultileavessf_(ISLocalToGlobalMapping *mapping, PetscSF *mlsf, PetscErrorCode *ierr)
{
  PetscBool null_mlsf = !*(void**) mlsf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mlsf);
  *ierr = ISLocalToGlobalMappingGetBlockMultiLeavesSF(*mapping, mlsf);
  if (*ierr) return;
  if (! null_mlsf && !*(void**) mlsf) *(void **) mlsf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingconcatenate_ ISLOCALTOGLOBALMAPPINGCONCATENATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingconcatenate_ islocaltoglobalmappingconcatenate
#endif
PETSC_EXTERN void islocaltoglobalmappingconcatenate_(MPI_Fint *comm, PetscInt *n, const ISLocalToGlobalMapping ltogs[], ISLocalToGlobalMapping *ltogcat, PetscErrorCode *ierr)
{
  PetscBool null_ltogcat = !*(void**) ltogcat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ltogs);
  CHKFORTRANNULLOBJECT(ltogcat);
  *ierr = ISLocalToGlobalMappingConcatenate(MPI_Comm_f2c(*(comm)), *n, ltogs, ltogcat);
  if (*ierr) return;
  if (! null_ltogcat && !*(void**) ltogcat) *(void **) ltogcat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingsettype_ ISLOCALTOGLOBALMAPPINGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingsettype_ islocaltoglobalmappingsettype
#endif
PETSC_EXTERN void islocaltoglobalmappingsettype_(ISLocalToGlobalMapping *ltog, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = ISLocalToGlobalMappingSetType(*ltog, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappinggettype_ ISLOCALTOGLOBALMAPPINGGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappinggettype_ islocaltoglobalmappinggettype
#endif
PETSC_EXTERN void islocaltoglobalmappinggettype_(ISLocalToGlobalMapping *ltog, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = ISLocalToGlobalMappingGetType(*ltog, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islocaltoglobalmappingregisterall_ ISLOCALTOGLOBALMAPPINGREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islocaltoglobalmappingregisterall_ islocaltoglobalmappingregisterall
#endif
PETSC_EXTERN void islocaltoglobalmappingregisterall_(PetscErrorCode *ierr)
{
  *ierr = ISLocalToGlobalMappingRegisterAll();
  if (*ierr) return;
}
