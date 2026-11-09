#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetreferencetree_ DMPLEXSETREFERENCETREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetreferencetree_ dmplexsetreferencetree
#endif
PETSC_EXTERN void dmplexsetreferencetree_(DM *dm, DM *ref, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetReferenceTree(*dm, *ref);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetreferencetree_ DMPLEXGETREFERENCETREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetreferencetree_ dmplexgetreferencetree
#endif
PETSC_EXTERN void dmplexgetreferencetree_(DM *dm, DM *ref, PetscErrorCode *ierr)
{
  PetscBool null_ref = !*(void**) ref ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ref);
  *ierr = DMPlexGetReferenceTree(*dm, ref);
  if (*ierr) return;
  if (! null_ref && !*(void**) ref) *(void **) ref = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexreferencetreegetchildsymmetry_ DMPLEXREFERENCETREEGETCHILDSYMMETRY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexreferencetreegetchildsymmetry_ dmplexreferencetreegetchildsymmetry
#endif
PETSC_EXTERN void dmplexreferencetreegetchildsymmetry_(DM *dm, PetscInt *parent, PetscInt *parentOrientA, PetscInt *childOrientA, PetscInt *childA, PetscInt *parentOrientB, PetscInt *childOrientB, PetscInt *childB, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(childOrientB);
  CHKFORTRANNULLINTEGER(childB);
  *ierr = DMPlexReferenceTreeGetChildSymmetry(*dm, *parent, *parentOrientA, *childOrientA, *childA, *parentOrientB, childOrientB, childB);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatedefaultreferencetree_ DMPLEXCREATEDEFAULTREFERENCETREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatedefaultreferencetree_ dmplexcreatedefaultreferencetree
#endif
PETSC_EXTERN void dmplexcreatedefaultreferencetree_(MPI_Fint *comm, PetscInt *dim, PetscBool *simplex, DM *ref, PetscErrorCode *ierr)
{
  PetscBool null_ref = !*(void**) ref ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ref);
  *ierr = DMPlexCreateDefaultReferenceTree(MPI_Comm_f2c(*(comm)), *dim, *simplex ? PETSC_TRUE : PETSC_FALSE, ref);
  if (*ierr) return;
  if (! null_ref && !*(void**) ref) *(void **) ref = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsettree_ DMPLEXSETTREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsettree_ dmplexsettree
#endif
PETSC_EXTERN void dmplexsettree_(DM *dm, PetscSection *parentSection, PetscInt parents[], PetscInt childIDs[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(parents);
  CHKFORTRANNULLINTEGER(childIDs);
  *ierr = DMPlexSetTree(*dm, *parentSection, parents, childIDs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgettreeparent_ DMPLEXGETTREEPARENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgettreeparent_ dmplexgettreeparent
#endif
PETSC_EXTERN void dmplexgettreeparent_(DM *dm, PetscInt *point, PetscInt *parent, PetscInt *childID, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(parent);
  CHKFORTRANNULLINTEGER(childID);
  *ierr = DMPlexGetTreeParent(*dm, *point, parent, childID);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextreerefinecell_ DMPLEXTREEREFINECELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextreerefinecell_ dmplextreerefinecell
#endif
PETSC_EXTERN void dmplextreerefinecell_(DM *dm, PetscInt *cell, DM *ncdm, PetscErrorCode *ierr)
{
  PetscBool null_ncdm = !*(void**) ncdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ncdm);
  *ierr = DMPlexTreeRefineCell(*dm, *cell, ncdm);
  if (*ierr) return;
  if (! null_ncdm && !*(void**) ncdm) *(void **) ncdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcomputeinjectorreferencetree_ DMPLEXCOMPUTEINJECTORREFERENCETREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcomputeinjectorreferencetree_ dmplexcomputeinjectorreferencetree
#endif
PETSC_EXTERN void dmplexcomputeinjectorreferencetree_(DM *refTree, Mat *inj, PetscErrorCode *ierr)
{
  PetscBool null_inj = !*(void**) inj ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(inj);
  *ierr = DMPlexComputeInjectorReferenceTree(*refTree, inj);
  if (*ierr) return;
  if (! null_inj && !*(void**) inj) *(void **) inj = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextransfervectree_ DMPLEXTRANSFERVECTREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextransfervectree_ dmplextransfervectree
#endif
PETSC_EXTERN void dmplextransfervectree_(DM *dmIn, Vec *vecIn, DM *dmOut, Vec *vecOut, PetscSF *sfRefine, PetscSF *sfCoarsen, PetscInt *cidsRefine, PetscInt *cidsCoarsen, PetscBool *useBCs, PetscReal *time, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cidsRefine);
  CHKFORTRANNULLINTEGER(cidsCoarsen);
  *ierr = DMPlexTransferVecTree(*dmIn, *vecIn, *dmOut, *vecOut, *sfRefine, *sfCoarsen, cidsRefine, cidsCoarsen, *useBCs ? PETSC_TRUE : PETSC_FALSE, *time);
  if (*ierr) return;
}
