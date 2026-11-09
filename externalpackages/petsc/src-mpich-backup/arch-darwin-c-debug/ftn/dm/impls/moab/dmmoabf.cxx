#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabcreate_ DMMOABCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabcreate_ dmmoabcreate
#endif
PETSC_EXTERN void dmmoabcreate_(MPI_Fint *comm, DM *dmb, PetscErrorCode *ierr)
{
  PetscBool null_dmb = !*(void**) dmb ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(dmb);
  CHKFORTRANNULLOBJECT(dmb);
  *ierr = DMMoabCreate(MPI_Comm_f2c(*(comm)), dmb);
  if (*ierr) return;
  if (! null_dmb && !*(void**) dmb) *(void **) dmb = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabcreatemoab_ DMMOABCREATEMOAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabcreatemoab_ dmmoabcreatemoab
#endif
PETSC_EXTERN void dmmoabcreatemoab_(MPI_Fint *comm, moab::Interface *mbiface, moab::Tag *ltog_tag, moab::Range *range, DM *dmb, PetscErrorCode *ierr)
{
  PetscBool null_dmb = !*(void**) dmb ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmb);
  *ierr = DMMoabCreateMoab(MPI_Comm_f2c(*(comm)), mbiface, ltog_tag, range, dmb);
  if (*ierr) return;
  if (! null_dmb && !*(void**) dmb) *(void **) dmb = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabsetinterface_ DMMOABSETINTERFACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabsetinterface_ dmmoabsetinterface
#endif
PETSC_EXTERN void dmmoabsetinterface_(DM *dm, moab::Interface *mbiface, PetscErrorCode *ierr)
{
  *ierr = DMMoabSetInterface(*dm, mbiface);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabsetlocalvertices_ DMMOABSETLOCALVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabsetlocalvertices_ dmmoabsetlocalvertices
#endif
PETSC_EXTERN void dmmoabsetlocalvertices_(DM *dm, moab::Range *range, PetscErrorCode *ierr)
{
  *ierr = DMMoabSetLocalVertices(*dm, range);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetallvertices_ DMMOABGETALLVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetallvertices_ dmmoabgetallvertices
#endif
PETSC_EXTERN void dmmoabgetallvertices_(DM *dm, moab::Range *local, PetscErrorCode *ierr)
{
  *ierr = DMMoabGetAllVertices(*dm, local);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabsetlocalelements_ DMMOABSETLOCALELEMENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabsetlocalelements_ dmmoabsetlocalelements
#endif
PETSC_EXTERN void dmmoabsetlocalelements_(DM *dm, moab::Range *range, PetscErrorCode *ierr)
{
  *ierr = DMMoabSetLocalElements(*dm, range);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabsetlocaltoglobaltag_ DMMOABSETLOCALTOGLOBALTAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabsetlocaltoglobaltag_ dmmoabsetlocaltoglobaltag
#endif
PETSC_EXTERN void dmmoabsetlocaltoglobaltag_(DM *dm, moab::Tag *ltogtag, PetscErrorCode *ierr)
{
  *ierr = DMMoabSetLocalToGlobalTag(*dm, *ltogtag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetlocaltoglobaltag_ DMMOABGETLOCALTOGLOBALTAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetlocaltoglobaltag_ dmmoabgetlocaltoglobaltag
#endif
PETSC_EXTERN void dmmoabgetlocaltoglobaltag_(DM *dm, moab::Tag *ltog_tag, PetscErrorCode *ierr)
{
  *ierr = DMMoabGetLocalToGlobalTag(*dm, ltog_tag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabsetblocksize_ DMMOABSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabsetblocksize_ dmmoabsetblocksize
#endif
PETSC_EXTERN void dmmoabsetblocksize_(DM *dm, PetscInt *bs, PetscErrorCode *ierr)
{
  *ierr = DMMoabSetBlockSize(*dm, *bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetblocksize_ DMMOABGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetblocksize_ dmmoabgetblocksize
#endif
PETSC_EXTERN void dmmoabgetblocksize_(DM *dm, PetscInt *bs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bs);
  *ierr = DMMoabGetBlockSize(*dm, bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetsize_ DMMOABGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetsize_ dmmoabgetsize
#endif
PETSC_EXTERN void dmmoabgetsize_(DM *dm, PetscInt *neg, PetscInt *nvg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(neg);
  CHKFORTRANNULLINTEGER(nvg);
  *ierr = DMMoabGetSize(*dm, neg, nvg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetlocalsize_ DMMOABGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetlocalsize_ dmmoabgetlocalsize
#endif
PETSC_EXTERN void dmmoabgetlocalsize_(DM *dm, PetscInt *nel, PetscInt *neg, PetscInt *nvl, PetscInt *nvg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nel);
  CHKFORTRANNULLINTEGER(neg);
  CHKFORTRANNULLINTEGER(nvl);
  CHKFORTRANNULLINTEGER(nvg);
  *ierr = DMMoabGetLocalSize(*dm, nel, neg, nvl, nvg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetoffset_ DMMOABGETOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetoffset_ dmmoabgetoffset
#endif
PETSC_EXTERN void dmmoabgetoffset_(DM *dm, PetscInt *offset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(offset);
  *ierr = DMMoabGetOffset(*dm, offset);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetdimension_ DMMOABGETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetdimension_ dmmoabgetdimension
#endif
PETSC_EXTERN void dmmoabgetdimension_(DM *dm, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = DMMoabGetDimension(*dm, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgethierarchylevel_ DMMOABGETHIERARCHYLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgethierarchylevel_ dmmoabgethierarchylevel
#endif
PETSC_EXTERN void dmmoabgethierarchylevel_(DM *dm, PetscInt *nlevel, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nlevel);
  *ierr = DMMoabGetHierarchyLevel(*dm, nlevel);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetmaterialblock_ DMMOABGETMATERIALBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetmaterialblock_ dmmoabgetmaterialblock
#endif
PETSC_EXTERN void dmmoabgetmaterialblock_(DM *dm, const moab::EntityHandle *ehandle, PetscInt *mat, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(mat);
  *ierr = DMMoabGetMaterialBlock(*dm, *ehandle, mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgetvertexcoordinates_ DMMOABGETVERTEXCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgetvertexcoordinates_ dmmoabgetvertexcoordinates
#endif
PETSC_EXTERN void dmmoabgetvertexcoordinates_(DM *dm, PetscInt *nconn, const moab::EntityHandle *conn, PetscReal *vpos, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(vpos);
  *ierr = DMMoabGetVertexCoordinates(*dm, *nconn, conn, vpos);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabisentityonboundary_ DMMOABISENTITYONBOUNDARY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabisentityonboundary_ dmmoabisentityonboundary
#endif
PETSC_EXTERN void dmmoabisentityonboundary_(DM *dm, const moab::EntityHandle *ent, PetscBool *ent_on_boundary, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(ent_on_boundary);
  *ierr = DMMoabIsEntityOnBoundary(*dm, *ent, ent_on_boundary);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabcheckboundaryvertices_ DMMOABCHECKBOUNDARYVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabcheckboundaryvertices_ dmmoabcheckboundaryvertices
#endif
PETSC_EXTERN void dmmoabcheckboundaryvertices_(DM *dm, PetscInt *nconn, const moab::EntityHandle *cnt, PetscBool *isbdvtx, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isbdvtx);
  *ierr = DMMoabCheckBoundaryVertices(*dm, *nconn, cnt, isbdvtx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabcreatevertices_ DMMOABCREATEVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabcreatevertices_ dmmoabcreatevertices
#endif
PETSC_EXTERN void dmmoabcreatevertices_(DM *dm, const PetscReal *coords, PetscInt *nverts, moab::Range *overts, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(coords);
  *ierr = DMMoabCreateVertices(*dm, coords, *nverts, overts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabcreateelement_ DMMOABCREATEELEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabcreateelement_ dmmoabcreateelement
#endif
PETSC_EXTERN void dmmoabcreateelement_(DM *dm, const moab::EntityType *type, const moab::EntityHandle *conn, PetscInt *nverts, moab::EntityHandle *oelem, PetscErrorCode *ierr)
{
  *ierr = DMMoabCreateElement(*dm, *type, conn, *nverts, oelem);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabcreatesubmesh_ DMMOABCREATESUBMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabcreatesubmesh_ dmmoabcreatesubmesh
#endif
PETSC_EXTERN void dmmoabcreatesubmesh_(DM *dm, DM *newdm, PetscErrorCode *ierr)
{
  PetscBool null_newdm = !*(void**) newdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newdm);
  *ierr = DMMoabCreateSubmesh(*dm, newdm);
  if (*ierr) return;
  if (! null_newdm && !*(void**) newdm) *(void **) newdm = (void *)-2;
}
