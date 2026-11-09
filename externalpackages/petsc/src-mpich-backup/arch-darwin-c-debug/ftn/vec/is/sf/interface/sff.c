#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcreate_ PETSCSFCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcreate_ petscsfcreate
#endif
PETSC_EXTERN void petscsfcreate_(MPI_Fint *comm, PetscSF *sf, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(sf);
  CHKFORTRANNULLOBJECT(sf);
  *ierr = PetscSFCreate(MPI_Comm_f2c(*(comm)), sf);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfreset_ PETSCSFRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfreset_ petscsfreset
#endif
PETSC_EXTERN void petscsfreset_(PetscSF *sf, PetscErrorCode *ierr)
{
  *ierr = PetscSFReset(*sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfsettype_ PETSCSFSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfsettype_ petscsfsettype
#endif
PETSC_EXTERN void petscsfsettype_(PetscSF *sf, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PetscSFSetType(*sf, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfgettype_ PETSCSFGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfgettype_ petscsfgettype
#endif
PETSC_EXTERN void petscsfgettype_(PetscSF *sf, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = PetscSFGetType(*sf, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfdestroy_ PETSCSFDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfdestroy_ petscsfdestroy
#endif
PETSC_EXTERN void petscsfdestroy_(PetscSF *sf, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(sf);
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  *ierr = PetscSFDestroy(sf);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfsetup_ PETSCSFSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfsetup_ petscsfsetup
#endif
PETSC_EXTERN void petscsfsetup_(PetscSF *sf, PetscErrorCode *ierr)
{
  *ierr = PetscSFSetUp(*sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfsetfromoptions_ PETSCSFSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfsetfromoptions_ petscsfsetfromoptions
#endif
PETSC_EXTERN void petscsfsetfromoptions_(PetscSF *sf, PetscErrorCode *ierr)
{
  *ierr = PetscSFSetFromOptions(*sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfsetrankorder_ PETSCSFSETRANKORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfsetrankorder_ petscsfsetrankorder
#endif
PETSC_EXTERN void petscsfsetrankorder_(PetscSF *sf, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PetscSFSetRankOrder(*sf, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfsetgraph_ PETSCSFSETGRAPH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfsetgraph_ petscsfsetgraph
#endif
PETSC_EXTERN void petscsfsetgraph_(PetscSF *sf, PetscInt *nroots, PetscInt *nleaves, PetscInt ilocal[], PetscCopyMode *localmode, PetscSFNode iremote[], PetscCopyMode *remotemode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ilocal);
  *ierr = PetscSFSetGraph(*sf, *nroots, *nleaves, ilocal, *localmode, iremote, *remotemode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfsetgraphwithpattern_ PETSCSFSETGRAPHWITHPATTERN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfsetgraphwithpattern_ petscsfsetgraphwithpattern
#endif
PETSC_EXTERN void petscsfsetgraphwithpattern_(PetscSF *sf, PetscLayout *map, PetscSFPattern *pattern, PetscErrorCode *ierr)
{
  *ierr = PetscSFSetGraphWithPattern(*sf, *map, *pattern);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcreateinversesf_ PETSCSFCREATEINVERSESF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcreateinversesf_ petscsfcreateinversesf
#endif
PETSC_EXTERN void petscsfcreateinversesf_(PetscSF *sf, PetscSF *isf, PetscErrorCode *ierr)
{
  PetscBool null_isf = !*(void**) isf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(isf);
  *ierr = PetscSFCreateInverseSF(*sf, isf);
  if (*ierr) return;
  if (! null_isf && !*(void**) isf) *(void **) isf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfduplicate_ PETSCSFDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfduplicate_ petscsfduplicate
#endif
PETSC_EXTERN void petscsfduplicate_(PetscSF *sf, PetscSFDuplicateOption *opt, PetscSF *newsf, PetscErrorCode *ierr)
{
  PetscBool null_newsf = !*(void**) newsf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newsf);
  *ierr = PetscSFDuplicate(*sf, *opt, newsf);
  if (*ierr) return;
  if (! null_newsf && !*(void**) newsf) *(void **) newsf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfgetleafrange_ PETSCSFGETLEAFRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfgetleafrange_ petscsfgetleafrange
#endif
PETSC_EXTERN void petscsfgetleafrange_(PetscSF *sf, PetscInt *minleaf, PetscInt *maxleaf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(minleaf);
  CHKFORTRANNULLINTEGER(maxleaf);
  *ierr = PetscSFGetLeafRange(*sf, minleaf, maxleaf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfviewfromoptions_ PETSCSFVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfviewfromoptions_ petscsfviewfromoptions
#endif
PETSC_EXTERN void petscsfviewfromoptions_(PetscSF *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscSFViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfview_ PETSCSFVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfview_ petscsfview
#endif
PETSC_EXTERN void petscsfview_(PetscSF *sf, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscSFView(*sf, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfgetrankssf_ PETSCSFGETRANKSSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfgetrankssf_ petscsfgetrankssf
#endif
PETSC_EXTERN void petscsfgetrankssf_(PetscSF *sf, PetscSF *rsf, PetscErrorCode *ierr)
{
  PetscBool null_rsf = !*(void**) rsf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rsf);
  *ierr = PetscSFGetRanksSF(*sf, rsf);
  if (*ierr) return;
  if (! null_rsf && !*(void**) rsf) *(void **) rsf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfgetmultisf_ PETSCSFGETMULTISF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfgetmultisf_ petscsfgetmultisf
#endif
PETSC_EXTERN void petscsfgetmultisf_(PetscSF *sf, PetscSF *multi, PetscErrorCode *ierr)
{
  PetscBool null_multi = !*(void**) multi ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(multi);
  *ierr = PetscSFGetMultiSF(*sf, multi);
  if (*ierr) return;
  if (! null_multi && !*(void**) multi) *(void **) multi = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcreateembeddedrootsf_ PETSCSFCREATEEMBEDDEDROOTSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcreateembeddedrootsf_ petscsfcreateembeddedrootsf
#endif
PETSC_EXTERN void petscsfcreateembeddedrootsf_(PetscSF *sf, PetscInt *nselected, const PetscInt selected[], PetscSF *esf, PetscErrorCode *ierr)
{
  PetscBool null_esf = !*(void**) esf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(selected);
  CHKFORTRANNULLOBJECT(esf);
  *ierr = PetscSFCreateEmbeddedRootSF(*sf, *nselected, selected, esf);
  if (*ierr) return;
  if (! null_esf && !*(void**) esf) *(void **) esf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcreateembeddedleafsf_ PETSCSFCREATEEMBEDDEDLEAFSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcreateembeddedleafsf_ petscsfcreateembeddedleafsf
#endif
PETSC_EXTERN void petscsfcreateembeddedleafsf_(PetscSF *sf, PetscInt *nselected, const PetscInt selected[], PetscSF *newsf, PetscErrorCode *ierr)
{
  PetscBool null_newsf = !*(void**) newsf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(selected);
  CHKFORTRANNULLOBJECT(newsf);
  *ierr = PetscSFCreateEmbeddedLeafSF(*sf, *nselected, selected, newsf);
  if (*ierr) return;
  if (! null_newsf && !*(void**) newsf) *(void **) newsf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcompose_ PETSCSFCOMPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcompose_ petscsfcompose
#endif
PETSC_EXTERN void petscsfcompose_(PetscSF *sfA, PetscSF *sfB, PetscSF *sfBA, PetscErrorCode *ierr)
{
  PetscBool null_sfBA = !*(void**) sfBA ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sfBA);
  *ierr = PetscSFCompose(*sfA, *sfB, sfBA);
  if (*ierr) return;
  if (! null_sfBA && !*(void**) sfBA) *(void **) sfBA = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfcomposeinverse_ PETSCSFCOMPOSEINVERSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfcomposeinverse_ petscsfcomposeinverse
#endif
PETSC_EXTERN void petscsfcomposeinverse_(PetscSF *sfA, PetscSF *sfB, PetscSF *sfBA, PetscErrorCode *ierr)
{
  PetscBool null_sfBA = !*(void**) sfBA ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sfBA);
  *ierr = PetscSFComposeInverse(*sfA, *sfB, sfBA);
  if (*ierr) return;
  if (! null_sfBA && !*(void**) sfBA) *(void **) sfBA = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfconcatenate_ PETSCSFCONCATENATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfconcatenate_ petscsfconcatenate
#endif
PETSC_EXTERN void petscsfconcatenate_(MPI_Fint *comm, PetscInt *nsfs, PetscSF sfs[], PetscSFConcatenateRootMode *rootMode, PetscInt leafOffsets[], PetscSF *newsf, PetscErrorCode *ierr)
{
  PetscBool null_newsf = !*(void**) newsf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sfs);
  CHKFORTRANNULLINTEGER(leafOffsets);
  CHKFORTRANNULLOBJECT(newsf);
  *ierr = PetscSFConcatenate(MPI_Comm_f2c(*(comm)), *nsfs, sfs, *rootMode, leafOffsets, newsf);
  if (*ierr) return;
  if (! null_newsf && !*(void**) newsf) *(void **) newsf = (void *)-2;
}
