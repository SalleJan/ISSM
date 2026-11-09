#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmcomposite.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcompositegetnumberdm_ DMCOMPOSITEGETNUMBERDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcompositegetnumberdm_ dmcompositegetnumberdm
#endif
PETSC_EXTERN void dmcompositegetnumberdm_(DM *dm, PetscInt *nDM, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nDM);
  *ierr = DMCompositeGetNumberDM(*dm, nDM);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmcomposite.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcompositegetaccessarray_ DMCOMPOSITEGETACCESSARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcompositegetaccessarray_ dmcompositegetaccessarray
#endif
PETSC_EXTERN void dmcompositegetaccessarray_(DM *dm, Vec *pvec, PetscInt *nwanted, const PetscInt wanted[], Vec vecs[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(wanted);
  CHKFORTRANNULLOBJECT(vecs);
  *ierr = DMCompositeGetAccessArray(*dm, *pvec, *nwanted, wanted, vecs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmcomposite.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcompositegetlocalaccessarray_ DMCOMPOSITEGETLOCALACCESSARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcompositegetlocalaccessarray_ dmcompositegetlocalaccessarray
#endif
PETSC_EXTERN void dmcompositegetlocalaccessarray_(DM *dm, Vec *pvec, PetscInt *nwanted, const PetscInt wanted[], Vec vecs[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(wanted);
  CHKFORTRANNULLOBJECT(vecs);
  *ierr = DMCompositeGetLocalAccessArray(*dm, *pvec, *nwanted, wanted, vecs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmcomposite.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcompositerestoreaccessarray_ DMCOMPOSITERESTOREACCESSARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcompositerestoreaccessarray_ dmcompositerestoreaccessarray
#endif
PETSC_EXTERN void dmcompositerestoreaccessarray_(DM *dm, Vec *pvec, PetscInt *nwanted, const PetscInt wanted[], Vec vecs[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(wanted);
  CHKFORTRANNULLOBJECT(vecs);
  *ierr = DMCompositeRestoreAccessArray(*dm, *pvec, *nwanted, wanted, vecs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmcomposite.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcompositerestorelocalaccessarray_ DMCOMPOSITERESTORELOCALACCESSARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcompositerestorelocalaccessarray_ dmcompositerestorelocalaccessarray
#endif
PETSC_EXTERN void dmcompositerestorelocalaccessarray_(DM *dm, Vec *pvec, PetscInt *nwanted, const PetscInt wanted[], Vec *vecs, PetscErrorCode *ierr)
{
  PetscBool null_vecs = !*(void**) vecs ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(wanted);
  CHKFORTRANNULLOBJECT(vecs);
  *ierr = DMCompositeRestoreLocalAccessArray(*dm, *pvec, *nwanted, wanted, vecs);
  if (*ierr) return;
  if (! null_vecs && !*(void**) vecs) *(void **) vecs = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmcomposite.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcompositescatterarray_ DMCOMPOSITESCATTERARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcompositescatterarray_ dmcompositescatterarray
#endif
PETSC_EXTERN void dmcompositescatterarray_(DM *dm, Vec *gvec, Vec *lvecs, PetscErrorCode *ierr)
{
  PetscBool null_lvecs = !*(void**) lvecs ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(lvecs);
  *ierr = DMCompositeScatterArray(*dm, *gvec, lvecs);
  if (*ierr) return;
  if (! null_lvecs && !*(void**) lvecs) *(void **) lvecs = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmcomposite.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcompositegatherarray_ DMCOMPOSITEGATHERARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcompositegatherarray_ dmcompositegatherarray
#endif
PETSC_EXTERN void dmcompositegatherarray_(DM *dm, InsertMode *imode, Vec *gvec, Vec *lvecs, PetscErrorCode *ierr)
{
  PetscBool null_lvecs = !*(void**) lvecs ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(lvecs);
  *ierr = DMCompositeGatherArray(*dm, *imode, *gvec, lvecs);
  if (*ierr) return;
  if (! null_lvecs && !*(void**) lvecs) *(void **) lvecs = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmcomposite.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcompositeadddm_ DMCOMPOSITEADDDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcompositeadddm_ dmcompositeadddm
#endif
PETSC_EXTERN void dmcompositeadddm_(DM *dmc, DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMCompositeAddDM(*dmc, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmcomposite.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcompositegetentriesarray_ DMCOMPOSITEGETENTRIESARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcompositegetentriesarray_ dmcompositegetentriesarray
#endif
PETSC_EXTERN void dmcompositegetentriesarray_(DM *dm, DM dms[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(dms);
  *ierr = DMCompositeGetEntriesArray(*dm, dms);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmcomposite.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcompositecreate_ DMCOMPOSITECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcompositecreate_ dmcompositecreate
#endif
PETSC_EXTERN void dmcompositecreate_(MPI_Fint *comm, DM *packer, PetscErrorCode *ierr)
{
  PetscBool null_packer = !*(void**) packer ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(packer);
  CHKFORTRANNULLOBJECT(packer);
  *ierr = DMCompositeCreate(MPI_Comm_f2c(*(comm)), packer);
  if (*ierr) return;
  if (! null_packer && !*(void**) packer) *(void **) packer = (void *)-2;
}
