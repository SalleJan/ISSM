#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetplex_ DMNETWORKGETPLEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetplex_ dmnetworkgetplex
#endif
PETSC_EXTERN void dmnetworkgetplex_(DM *dm, DM *plexdm, PetscErrorCode *ierr)
{
  PetscBool null_plexdm = !*(void**) plexdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(plexdm);
  *ierr = DMNetworkGetPlex(*dm, plexdm);
  if (*ierr) return;
  if (! null_plexdm && !*(void**) plexdm) *(void **) plexdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetnumsubnetworks_ DMNETWORKGETNUMSUBNETWORKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetnumsubnetworks_ dmnetworkgetnumsubnetworks
#endif
PETSC_EXTERN void dmnetworkgetnumsubnetworks_(DM *dm, PetscInt *nsubnet, PetscInt *M_Nsubnet, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nsubnet);
  CHKFORTRANNULLINTEGER(M_Nsubnet);
  *ierr = DMNetworkGetNumSubNetworks(*dm, nsubnet, M_Nsubnet);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworksetnumsubnetworks_ DMNETWORKSETNUMSUBNETWORKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworksetnumsubnetworks_ dmnetworksetnumsubnetworks
#endif
PETSC_EXTERN void dmnetworksetnumsubnetworks_(DM *dm, PetscInt *nsubnet, PetscInt *M_Nsubnet, PetscErrorCode *ierr)
{
  *ierr = DMNetworkSetNumSubNetworks(*dm, *nsubnet, *M_Nsubnet);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkaddsubnetwork_ DMNETWORKADDSUBNETWORK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkaddsubnetwork_ dmnetworkaddsubnetwork
#endif
PETSC_EXTERN void dmnetworkaddsubnetwork_(DM *dm, char name[], PetscInt *ne, PetscInt edgelist[], PetscInt *netnum, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(edgelist);
  CHKFORTRANNULLINTEGER(netnum);
  *ierr = DMNetworkAddSubnetwork(*dm, c_name, *ne, edgelist, netnum);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworklayoutsetup_ DMNETWORKLAYOUTSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworklayoutsetup_ dmnetworklayoutsetup
#endif
PETSC_EXTERN void dmnetworklayoutsetup_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMNetworkLayoutSetUp(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkaddsharedvertices_ DMNETWORKADDSHAREDVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkaddsharedvertices_ dmnetworkaddsharedvertices
#endif
PETSC_EXTERN void dmnetworkaddsharedvertices_(DM *dm, PetscInt *anetnum, PetscInt *bnetnum, PetscInt *nsvtx, PetscInt asvtx[], PetscInt bsvtx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(asvtx);
  CHKFORTRANNULLINTEGER(bsvtx);
  *ierr = DMNetworkAddSharedVertices(*dm, *anetnum, *bnetnum, *nsvtx, asvtx, bsvtx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkregistercomponent_ DMNETWORKREGISTERCOMPONENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkregistercomponent_ dmnetworkregistercomponent
#endif
PETSC_EXTERN void dmnetworkregistercomponent_(DM *dm, char name[], size_t *size, PetscInt *key, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(key);
  *ierr = DMNetworkRegisterComponent(*dm, c_name, *size, key);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetnumvertices_ DMNETWORKGETNUMVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetnumvertices_ dmnetworkgetnumvertices
#endif
PETSC_EXTERN void dmnetworkgetnumvertices_(DM *dm, PetscInt *nVertices, PetscInt *M_NVertices, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nVertices);
  CHKFORTRANNULLINTEGER(M_NVertices);
  *ierr = DMNetworkGetNumVertices(*dm, nVertices, M_NVertices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetnumedges_ DMNETWORKGETNUMEDGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetnumedges_ dmnetworkgetnumedges
#endif
PETSC_EXTERN void dmnetworkgetnumedges_(DM *dm, PetscInt *nEdges, PetscInt *M_NEdges, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nEdges);
  CHKFORTRANNULLINTEGER(M_NEdges);
  *ierr = DMNetworkGetNumEdges(*dm, nEdges, M_NEdges);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetvertexrange_ DMNETWORKGETVERTEXRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetvertexrange_ dmnetworkgetvertexrange
#endif
PETSC_EXTERN void dmnetworkgetvertexrange_(DM *dm, PetscInt *vStart, PetscInt *vEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(vStart);
  CHKFORTRANNULLINTEGER(vEnd);
  *ierr = DMNetworkGetVertexRange(*dm, vStart, vEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetedgerange_ DMNETWORKGETEDGERANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetedgerange_ dmnetworkgetedgerange
#endif
PETSC_EXTERN void dmnetworkgetedgerange_(DM *dm, PetscInt *eStart, PetscInt *eEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(eStart);
  CHKFORTRANNULLINTEGER(eEnd);
  *ierr = DMNetworkGetEdgeRange(*dm, eStart, eEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetglobaledgeindex_ DMNETWORKGETGLOBALEDGEINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetglobaledgeindex_ dmnetworkgetglobaledgeindex
#endif
PETSC_EXTERN void dmnetworkgetglobaledgeindex_(DM *dm, PetscInt *p, PetscInt *index, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(index);
  *ierr = DMNetworkGetGlobalEdgeIndex(*dm, *p, index);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetglobalvertexindex_ DMNETWORKGETGLOBALVERTEXINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetglobalvertexindex_ dmnetworkgetglobalvertexindex
#endif
PETSC_EXTERN void dmnetworkgetglobalvertexindex_(DM *dm, PetscInt *p, PetscInt *index, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(index);
  *ierr = DMNetworkGetGlobalVertexIndex(*dm, *p, index);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetnumcomponents_ DMNETWORKGETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetnumcomponents_ dmnetworkgetnumcomponents
#endif
PETSC_EXTERN void dmnetworkgetnumcomponents_(DM *dm, PetscInt *p, PetscInt *numcomponents, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numcomponents);
  *ierr = DMNetworkGetNumComponents(*dm, *p, numcomponents);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetlocalvecoffset_ DMNETWORKGETLOCALVECOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetlocalvecoffset_ dmnetworkgetlocalvecoffset
#endif
PETSC_EXTERN void dmnetworkgetlocalvecoffset_(DM *dm, PetscInt *p, PetscInt *compnum, PetscInt *offset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(offset);
  *ierr = DMNetworkGetLocalVecOffset(*dm, *p, *compnum, offset);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetglobalvecoffset_ DMNETWORKGETGLOBALVECOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetglobalvecoffset_ dmnetworkgetglobalvecoffset
#endif
PETSC_EXTERN void dmnetworkgetglobalvecoffset_(DM *dm, PetscInt *p, PetscInt *compnum, PetscInt *offsetg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(offsetg);
  *ierr = DMNetworkGetGlobalVecOffset(*dm, *p, *compnum, offsetg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetedgeoffset_ DMNETWORKGETEDGEOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetedgeoffset_ dmnetworkgetedgeoffset
#endif
PETSC_EXTERN void dmnetworkgetedgeoffset_(DM *dm, PetscInt *p, PetscInt *offset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(offset);
  *ierr = DMNetworkGetEdgeOffset(*dm, *p, offset);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetvertexoffset_ DMNETWORKGETVERTEXOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetvertexoffset_ dmnetworkgetvertexoffset
#endif
PETSC_EXTERN void dmnetworkgetvertexoffset_(DM *dm, PetscInt *p, PetscInt *offset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(offset);
  *ierr = DMNetworkGetVertexOffset(*dm, *p, offset);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkaddcomponent_ DMNETWORKADDCOMPONENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkaddcomponent_ dmnetworkaddcomponent
#endif
PETSC_EXTERN void dmnetworkaddcomponent_(DM *dm, PetscInt *p, PetscInt *componentkey, void *compvalue, PetscInt *nvar, PetscErrorCode *ierr)
{
  *ierr = DMNetworkAddComponent(*dm, *p, *componentkey, compvalue, *nvar);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetcomponentcptr_ DMNETWORKGETCOMPONENTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetcomponentcptr_ dmnetworkgetcomponentcptr
#endif
PETSC_EXTERN void dmnetworkgetcomponentcptr_(DM *dm, PetscInt *p, PetscInt *compnum, PetscInt *compkey, PetscCtxRt component, PetscInt *nvar, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(compkey);
  CHKFORTRANNULLINTEGER(nvar);
  *ierr = DMNetworkGetComponent(*dm, *p, *compnum, compkey, component, nvar);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkassemblegraphstructures_ DMNETWORKASSEMBLEGRAPHSTRUCTURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkassemblegraphstructures_ dmnetworkassemblegraphstructures
#endif
PETSC_EXTERN void dmnetworkassemblegraphstructures_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMNetworkAssembleGraphStructures(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkdistribute_ DMNETWORKDISTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkdistribute_ dmnetworkdistribute
#endif
PETSC_EXTERN void dmnetworkdistribute_(DM *dm, PetscInt *overlap, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMNetworkDistribute(dm, *overlap);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkissharedvertex_ DMNETWORKISSHAREDVERTEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkissharedvertex_ dmnetworkissharedvertex
#endif
PETSC_EXTERN void dmnetworkissharedvertex_(DM *dm, PetscInt *p, PetscBool *flag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flag);
  *ierr = DMNetworkIsSharedVertex(*dm, *p, flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkisghostvertex_ DMNETWORKISGHOSTVERTEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkisghostvertex_ dmnetworkisghostvertex
#endif
PETSC_EXTERN void dmnetworkisghostvertex_(DM *dm, PetscInt *p, PetscBool *isghost, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isghost);
  *ierr = DMNetworkIsGhostVertex(*dm, *p, isghost);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkhasjacobian_ DMNETWORKHASJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkhasjacobian_ dmnetworkhasjacobian
#endif
PETSC_EXTERN void dmnetworkhasjacobian_(DM *dm, PetscBool *eflg, PetscBool *vflg, PetscErrorCode *ierr)
{
  *ierr = DMNetworkHasJacobian(*dm, *eflg ? PETSC_TRUE : PETSC_FALSE, *vflg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkedgesetmatrix_ DMNETWORKEDGESETMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkedgesetmatrix_ dmnetworkedgesetmatrix
#endif
PETSC_EXTERN void dmnetworkedgesetmatrix_(DM *dm, PetscInt *p, Mat J[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(J);
  *ierr = DMNetworkEdgeSetMatrix(*dm, *p, J);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkvertexsetmatrix_ DMNETWORKVERTEXSETMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkvertexsetmatrix_ dmnetworkvertexsetmatrix
#endif
PETSC_EXTERN void dmnetworkvertexsetmatrix_(DM *dm, PetscInt *p, Mat J[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(J);
  *ierr = DMNetworkVertexSetMatrix(*dm, *p, J);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkgetvertexlocaltoglobalordering_ DMNETWORKGETVERTEXLOCALTOGLOBALORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkgetvertexlocaltoglobalordering_ dmnetworkgetvertexlocaltoglobalordering
#endif
PETSC_EXTERN void dmnetworkgetvertexlocaltoglobalordering_(DM *dm, PetscInt *vloc, PetscInt *vg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(vg);
  *ierr = DMNetworkGetVertexLocalToGlobalOrdering(*dm, *vloc, vg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworksetvertexlocaltoglobalordering_ DMNETWORKSETVERTEXLOCALTOGLOBALORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworksetvertexlocaltoglobalordering_ dmnetworksetvertexlocaltoglobalordering
#endif
PETSC_EXTERN void dmnetworksetvertexlocaltoglobalordering_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMNetworkSetVertexLocalToGlobalOrdering(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkfinalizecomponents_ DMNETWORKFINALIZECOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkfinalizecomponents_ dmnetworkfinalizecomponents
#endif
PETSC_EXTERN void dmnetworkfinalizecomponents_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMNetworkFinalizeComponents(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfgetsubsf_ PETSCSFGETSUBSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfgetsubsf_ petscsfgetsubsf
#endif
PETSC_EXTERN void petscsfgetsubsf_(PetscSF *mainsf, ISLocalToGlobalMapping *map, PetscSF *subSF, PetscErrorCode *ierr)
{
  PetscBool null_subSF = !*(void**) subSF ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subSF);
  *ierr = PetscSFGetSubSF(*mainsf, *map, subSF);
  if (*ierr) return;
  if (! null_subSF && !*(void**) subSF) *(void **) subSF = (void *)-2;
}
