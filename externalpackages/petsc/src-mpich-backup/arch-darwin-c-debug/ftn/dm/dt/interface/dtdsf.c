#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssettype_ PETSCDSSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssettype_ petscdssettype
#endif
PETSC_EXTERN void petscdssettype_(PetscDS *prob, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscDSSetType(*prob, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgettype_ PETSCDSGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgettype_ petscdsgettype
#endif
PETSC_EXTERN void petscdsgettype_(PetscDS *prob, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscDSGetType(*prob, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsviewfromoptions_ PETSCDSVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsviewfromoptions_ petscdsviewfromoptions
#endif
PETSC_EXTERN void petscdsviewfromoptions_(PetscDS *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscDSViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsview_ PETSCDSVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsview_ petscdsview
#endif
PETSC_EXTERN void petscdsview_(PetscDS *prob, PetscViewer *v, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscDSView(*prob, v_v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetfromoptions_ PETSCDSSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetfromoptions_ petscdssetfromoptions
#endif
PETSC_EXTERN void petscdssetfromoptions_(PetscDS *prob, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetFromOptions(*prob);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetup_ PETSCDSSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetup_ petscdssetup
#endif
PETSC_EXTERN void petscdssetup_(PetscDS *prob, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetUp(*prob);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsdestroy_ PETSCDSDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsdestroy_ petscdsdestroy
#endif
PETSC_EXTERN void petscdsdestroy_(PetscDS *ds, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ds);
  PetscBool null_ds = !*(void**) ds ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ds);
  *ierr = PetscDSDestroy(ds);
  if (*ierr) return;
  if (! null_ds && !*(void**) ds) *(void **) ds = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdscreate_ PETSCDSCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdscreate_ petscdscreate
#endif
PETSC_EXTERN void petscdscreate_(MPI_Fint *comm, PetscDS *ds, PetscErrorCode *ierr)
{
  PetscBool null_ds = !*(void**) ds ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ds);
  CHKFORTRANNULLOBJECT(ds);
  *ierr = PetscDSCreate(MPI_Comm_f2c(*(comm)), ds);
  if (*ierr) return;
  if (! null_ds && !*(void**) ds) *(void **) ds = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetnumfields_ PETSCDSGETNUMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetnumfields_ petscdsgetnumfields
#endif
PETSC_EXTERN void petscdsgetnumfields_(PetscDS *prob, PetscInt *Nf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Nf);
  *ierr = PetscDSGetNumFields(*prob, Nf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetspatialdimension_ PETSCDSGETSPATIALDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetspatialdimension_ petscdsgetspatialdimension
#endif
PETSC_EXTERN void petscdsgetspatialdimension_(PetscDS *prob, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = PetscDSGetSpatialDimension(*prob, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetcoordinatedimension_ PETSCDSGETCOORDINATEDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetcoordinatedimension_ petscdsgetcoordinatedimension
#endif
PETSC_EXTERN void petscdsgetcoordinatedimension_(PetscDS *prob, PetscInt *dimEmbed, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dimEmbed);
  *ierr = PetscDSGetCoordinateDimension(*prob, dimEmbed);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetcoordinatedimension_ PETSCDSSETCOORDINATEDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetcoordinatedimension_ petscdssetcoordinatedimension
#endif
PETSC_EXTERN void petscdssetcoordinatedimension_(PetscDS *prob, PetscInt *dimEmbed, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetCoordinateDimension(*prob, *dimEmbed);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetforcequad_ PETSCDSGETFORCEQUAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetforcequad_ petscdsgetforcequad
#endif
PETSC_EXTERN void petscdsgetforcequad_(PetscDS *ds, PetscBool *forceQuad, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(forceQuad);
  *ierr = PetscDSGetForceQuad(*ds, forceQuad);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetforcequad_ PETSCDSSETFORCEQUAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetforcequad_ petscdssetforcequad
#endif
PETSC_EXTERN void petscdssetforcequad_(PetscDS *ds, PetscBool *forceQuad, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetForceQuad(*ds, *forceQuad ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsiscohesive_ PETSCDSISCOHESIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsiscohesive_ petscdsiscohesive
#endif
PETSC_EXTERN void petscdsiscohesive_(PetscDS *ds, PetscBool *isCohesive, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isCohesive);
  *ierr = PetscDSIsCohesive(*ds, isCohesive);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetnumcohesive_ PETSCDSGETNUMCOHESIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetnumcohesive_ petscdsgetnumcohesive
#endif
PETSC_EXTERN void petscdsgetnumcohesive_(PetscDS *ds, PetscInt *numCohesive, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numCohesive);
  *ierr = PetscDSGetNumCohesive(*ds, numCohesive);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetcohesive_ PETSCDSGETCOHESIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetcohesive_ petscdsgetcohesive
#endif
PETSC_EXTERN void petscdsgetcohesive_(PetscDS *ds, PetscInt *f, PetscBool *isCohesive, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isCohesive);
  *ierr = PetscDSGetCohesive(*ds, *f, isCohesive);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetcohesive_ PETSCDSSETCOHESIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetcohesive_ petscdssetcohesive
#endif
PETSC_EXTERN void petscdssetcohesive_(PetscDS *ds, PetscInt *f, PetscBool *isCohesive, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetCohesive(*ds, *f, *isCohesive ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgettotaldimension_ PETSCDSGETTOTALDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgettotaldimension_ petscdsgettotaldimension
#endif
PETSC_EXTERN void petscdsgettotaldimension_(PetscDS *prob, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = PetscDSGetTotalDimension(*prob, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgettotalcomponents_ PETSCDSGETTOTALCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgettotalcomponents_ petscdsgettotalcomponents
#endif
PETSC_EXTERN void petscdsgettotalcomponents_(PetscDS *prob, PetscInt *Nc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Nc);
  *ierr = PetscDSGetTotalComponents(*prob, Nc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetdiscretization_ PETSCDSGETDISCRETIZATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetdiscretization_ petscdsgetdiscretization
#endif
PETSC_EXTERN void petscdsgetdiscretization_(PetscDS *prob, PetscInt *f, PetscObject *disc, PetscErrorCode *ierr)
{
  PetscBool null_disc = !*(void**) disc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(disc);
  *ierr = PetscDSGetDiscretization(*prob, *f, disc);
  if (*ierr) return;
  if (! null_disc && !*(void**) disc) *(void **) disc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetdiscretization_ PETSCDSSETDISCRETIZATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetdiscretization_ petscdssetdiscretization
#endif
PETSC_EXTERN void petscdssetdiscretization_(PetscDS *prob, PetscInt *f, PetscObject *disc, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetDiscretization(*prob, *f, *disc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetweakform_ PETSCDSGETWEAKFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetweakform_ petscdsgetweakform
#endif
PETSC_EXTERN void petscdsgetweakform_(PetscDS *ds, PetscWeakForm *wf, PetscErrorCode *ierr)
{
  PetscBool null_wf = !*(void**) wf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(wf);
  *ierr = PetscDSGetWeakForm(*ds, wf);
  if (*ierr) return;
  if (! null_wf && !*(void**) wf) *(void **) wf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetweakform_ PETSCDSSETWEAKFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetweakform_ petscdssetweakform
#endif
PETSC_EXTERN void petscdssetweakform_(PetscDS *ds, PetscWeakForm *wf, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetWeakForm(*ds, *wf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsadddiscretization_ PETSCDSADDDISCRETIZATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsadddiscretization_ petscdsadddiscretization
#endif
PETSC_EXTERN void petscdsadddiscretization_(PetscDS *prob, PetscObject *disc, PetscErrorCode *ierr)
{
  *ierr = PetscDSAddDiscretization(*prob, *disc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetquadrature_ PETSCDSGETQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetquadrature_ petscdsgetquadrature
#endif
PETSC_EXTERN void petscdsgetquadrature_(PetscDS *prob, PetscQuadrature *q, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscDSGetQuadrature(*prob, q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetimplicit_ PETSCDSGETIMPLICIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetimplicit_ petscdsgetimplicit
#endif
PETSC_EXTERN void petscdsgetimplicit_(PetscDS *prob, PetscInt *f, PetscBool *implicit, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(implicit);
  *ierr = PetscDSGetImplicit(*prob, *f, implicit);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetimplicit_ PETSCDSSETIMPLICIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetimplicit_ petscdssetimplicit
#endif
PETSC_EXTERN void petscdssetimplicit_(PetscDS *prob, PetscInt *f, PetscBool *implicit, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetImplicit(*prob, *f, *implicit ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetjetdegree_ PETSCDSGETJETDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetjetdegree_ petscdsgetjetdegree
#endif
PETSC_EXTERN void petscdsgetjetdegree_(PetscDS *ds, PetscInt *f, PetscInt *k, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(k);
  *ierr = PetscDSGetJetDegree(*ds, *f, k);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetjetdegree_ PETSCDSSETJETDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetjetdegree_ petscdssetjetdegree
#endif
PETSC_EXTERN void petscdssetjetdegree_(PetscDS *ds, PetscInt *f, PetscInt *k, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetJetDegree(*ds, *f, *k);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdshasjacobian_ PETSCDSHASJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdshasjacobian_ petscdshasjacobian
#endif
PETSC_EXTERN void petscdshasjacobian_(PetscDS *ds, PetscBool *hasJac, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasJac);
  *ierr = PetscDSHasJacobian(*ds, hasJac);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsusejacobianpreconditioner_ PETSCDSUSEJACOBIANPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsusejacobianpreconditioner_ petscdsusejacobianpreconditioner
#endif
PETSC_EXTERN void petscdsusejacobianpreconditioner_(PetscDS *prob, PetscBool *useJacPre, PetscErrorCode *ierr)
{
  *ierr = PetscDSUseJacobianPreconditioner(*prob, *useJacPre ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdshasjacobianpreconditioner_ PETSCDSHASJACOBIANPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdshasjacobianpreconditioner_ petscdshasjacobianpreconditioner
#endif
PETSC_EXTERN void petscdshasjacobianpreconditioner_(PetscDS *ds, PetscBool *hasJacPre, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasJacPre);
  *ierr = PetscDSHasJacobianPreconditioner(*ds, hasJacPre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdshasdynamicjacobian_ PETSCDSHASDYNAMICJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdshasdynamicjacobian_ petscdshasdynamicjacobian
#endif
PETSC_EXTERN void petscdshasdynamicjacobian_(PetscDS *ds, PetscBool *hasDynJac, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasDynJac);
  *ierr = PetscDSHasDynamicJacobian(*ds, hasDynJac);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetcontextcptr_ PETSCDSGETCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetcontextcptr_ petscdsgetcontextcptr
#endif
PETSC_EXTERN void petscdsgetcontextcptr_(PetscDS *ds, PetscInt *f, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = PetscDSGetContext(*ds, *f, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetcontext_ PETSCDSSETCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetcontext_ petscdssetcontext
#endif
PETSC_EXTERN void petscdssetcontext_(PetscDS *ds, PetscInt *f, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetContext(*ds, *f, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdshasbdjacobian_ PETSCDSHASBDJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdshasbdjacobian_ petscdshasbdjacobian
#endif
PETSC_EXTERN void petscdshasbdjacobian_(PetscDS *ds, PetscBool *hasBdJac, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasBdJac);
  *ierr = PetscDSHasBdJacobian(*ds, hasBdJac);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdshasbdjacobianpreconditioner_ PETSCDSHASBDJACOBIANPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdshasbdjacobianpreconditioner_ petscdshasbdjacobianpreconditioner
#endif
PETSC_EXTERN void petscdshasbdjacobianpreconditioner_(PetscDS *ds, PetscBool *hasBdJacPre, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasBdJacPre);
  *ierr = PetscDSHasBdJacobianPreconditioner(*ds, hasBdJacPre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetconstants_ PETSCDSSETCONSTANTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetconstants_ petscdssetconstants
#endif
PETSC_EXTERN void petscdssetconstants_(PetscDS *ds, PetscInt *numConstants, PetscScalar constants[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(constants);
  *ierr = PetscDSSetConstants(*ds, *numConstants, constants);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetintegrationparameters_ PETSCDSSETINTEGRATIONPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetintegrationparameters_ petscdssetintegrationparameters
#endif
PETSC_EXTERN void petscdssetintegrationparameters_(PetscDS *ds, PetscInt *fieldI, PetscInt *fieldJ, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetIntegrationParameters(*ds, *fieldI, *fieldJ);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdssetcellparameters_ PETSCDSSETCELLPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdssetcellparameters_ petscdssetcellparameters
#endif
PETSC_EXTERN void petscdssetcellparameters_(PetscDS *ds, PetscReal *volume, PetscErrorCode *ierr)
{
  *ierr = PetscDSSetCellParameters(*ds, *volume);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetfieldindex_ PETSCDSGETFIELDINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetfieldindex_ petscdsgetfieldindex
#endif
PETSC_EXTERN void petscdsgetfieldindex_(PetscDS *prob, PetscObject *disc, PetscInt *f, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(f);
  *ierr = PetscDSGetFieldIndex(*prob, *disc, f);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetfieldsize_ PETSCDSGETFIELDSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetfieldsize_ petscdsgetfieldsize
#endif
PETSC_EXTERN void petscdsgetfieldsize_(PetscDS *prob, PetscInt *f, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = PetscDSGetFieldSize(*prob, *f, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetfieldoffset_ PETSCDSGETFIELDOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetfieldoffset_ petscdsgetfieldoffset
#endif
PETSC_EXTERN void petscdsgetfieldoffset_(PetscDS *prob, PetscInt *f, PetscInt *off, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(off);
  *ierr = PetscDSGetFieldOffset(*prob, *f, off);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetfieldoffsetcohesive_ PETSCDSGETFIELDOFFSETCOHESIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetfieldoffsetcohesive_ petscdsgetfieldoffsetcohesive
#endif
PETSC_EXTERN void petscdsgetfieldoffsetcohesive_(PetscDS *ds, PetscInt *f, PetscInt *off, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(off);
  *ierr = PetscDSGetFieldOffsetCohesive(*ds, *f, off);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetcomponentoffset_ PETSCDSGETCOMPONENTOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetcomponentoffset_ petscdsgetcomponentoffset
#endif
PETSC_EXTERN void petscdsgetcomponentoffset_(PetscDS *prob, PetscInt *f, PetscInt *off, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(off);
  *ierr = PetscDSGetComponentOffset(*prob, *f, off);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetnumboundary_ PETSCDSGETNUMBOUNDARY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetnumboundary_ petscdsgetnumboundary
#endif
PETSC_EXTERN void petscdsgetnumboundary_(PetscDS *ds, PetscInt *numBd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numBd);
  *ierr = PetscDSGetNumBoundary(*ds, numBd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsupdateboundarylabels_ PETSCDSUPDATEBOUNDARYLABELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsupdateboundarylabels_ petscdsupdateboundarylabels
#endif
PETSC_EXTERN void petscdsupdateboundarylabels_(PetscDS *ds, DM *dm, PetscErrorCode *ierr)
{
  *ierr = PetscDSUpdateBoundaryLabels(*ds, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdscopyboundary_ PETSCDSCOPYBOUNDARY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdscopyboundary_ petscdscopyboundary
#endif
PETSC_EXTERN void petscdscopyboundary_(PetscDS *ds, PetscInt *numFields, const PetscInt fields[], PetscDS *newds, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(fields);
  *ierr = PetscDSCopyBoundary(*ds, *numFields, fields, *newds);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsdestroyboundary_ PETSCDSDESTROYBOUNDARY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsdestroyboundary_ petscdsdestroyboundary
#endif
PETSC_EXTERN void petscdsdestroyboundary_(PetscDS *ds, PetscErrorCode *ierr)
{
  *ierr = PetscDSDestroyBoundary(*ds);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsselectdiscretizations_ PETSCDSSELECTDISCRETIZATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsselectdiscretizations_ petscdsselectdiscretizations
#endif
PETSC_EXTERN void petscdsselectdiscretizations_(PetscDS *prob, PetscInt *numFields, const PetscInt fields[], PetscInt *minDegree, PetscInt *maxDegree, PetscDS *newprob, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(fields);
  *ierr = PetscDSSelectDiscretizations(*prob, *numFields, fields, *minDegree, *maxDegree, *newprob);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsselectequations_ PETSCDSSELECTEQUATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsselectequations_ petscdsselectequations
#endif
PETSC_EXTERN void petscdsselectequations_(PetscDS *prob, PetscInt *numFields, const PetscInt fields[], PetscDS *newprob, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(fields);
  *ierr = PetscDSSelectEquations(*prob, *numFields, fields, *newprob);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdscopyequations_ PETSCDSCOPYEQUATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdscopyequations_ petscdscopyequations
#endif
PETSC_EXTERN void petscdscopyequations_(PetscDS *prob, PetscDS *newprob, PetscErrorCode *ierr)
{
  *ierr = PetscDSCopyEquations(*prob, *newprob);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdscopyconstants_ PETSCDSCOPYCONSTANTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdscopyconstants_ petscdscopyconstants
#endif
PETSC_EXTERN void petscdscopyconstants_(PetscDS *prob, PetscDS *newprob, PetscErrorCode *ierr)
{
  *ierr = PetscDSCopyConstants(*prob, *newprob);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdscopyexactsolutions_ PETSCDSCOPYEXACTSOLUTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdscopyexactsolutions_ petscdscopyexactsolutions
#endif
PETSC_EXTERN void petscdscopyexactsolutions_(PetscDS *ds, PetscDS *newds, PetscErrorCode *ierr)
{
  *ierr = PetscDSCopyExactSolutions(*ds, *newds);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdscopybounds_ PETSCDSCOPYBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdscopybounds_ petscdscopybounds
#endif
PETSC_EXTERN void petscdscopybounds_(PetscDS *ds, PetscDS *newds, PetscErrorCode *ierr)
{
  *ierr = PetscDSCopyBounds(*ds, *newds);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdscopy_ PETSCDSCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdscopy_ petscdscopy
#endif
PETSC_EXTERN void petscdscopy_(PetscDS *ds, PetscInt *minDegree, PetscInt *maxDegree, DM *dmNew, PetscDS *dsNew, PetscErrorCode *ierr)
{
  *ierr = PetscDSCopy(*ds, *minDegree, *maxDegree, *dmNew, *dsNew);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsgetheightsubspace_ PETSCDSGETHEIGHTSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsgetheightsubspace_ petscdsgetheightsubspace
#endif
PETSC_EXTERN void petscdsgetheightsubspace_(PetscDS *prob, PetscInt *height, PetscDS *subprob, PetscErrorCode *ierr)
{
  PetscBool null_subprob = !*(void**) subprob ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subprob);
  *ierr = PetscDSGetHeightSubspace(*prob, *height, subprob);
  if (*ierr) return;
  if (! null_subprob && !*(void**) subprob) *(void **) subprob = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdspermutequadpoint_ PETSCDSPERMUTEQUADPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdspermutequadpoint_ petscdspermutequadpoint
#endif
PETSC_EXTERN void petscdspermutequadpoint_(PetscDS *ds, PetscInt *ornt, PetscInt *field, PetscInt *q, PetscInt *qperm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(qperm);
  *ierr = PetscDSPermuteQuadPoint(*ds, *ornt, *field, *q, qperm);
  if (*ierr) return;
}
