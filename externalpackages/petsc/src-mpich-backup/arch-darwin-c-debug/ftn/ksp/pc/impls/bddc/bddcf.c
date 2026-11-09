#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetdiscretegradient_ PCBDDCSETDISCRETEGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetdiscretegradient_ pcbddcsetdiscretegradient
#endif
PETSC_EXTERN void pcbddcsetdiscretegradient_(PC *pc, Mat *G, PetscInt *order, PetscInt *field, PetscBool *global, PetscBool *conforming, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetDiscreteGradient(*pc, *G, *order, *field, *global ? PETSC_TRUE : PETSC_FALSE, *conforming ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetdivergencemat_ PCBDDCSETDIVERGENCEMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetdivergencemat_ pcbddcsetdivergencemat
#endif
PETSC_EXTERN void pcbddcsetdivergencemat_(PC *pc, Mat *divudotp, PetscBool *trans, IS *vl2l, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetDivergenceMat(*pc, *divudotp, *trans ? PETSC_TRUE : PETSC_FALSE, *vl2l);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetchangeofbasismat_ PCBDDCSETCHANGEOFBASISMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetchangeofbasismat_ pcbddcsetchangeofbasismat
#endif
PETSC_EXTERN void pcbddcsetchangeofbasismat_(PC *pc, Mat *change, PetscBool *interior, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetChangeOfBasisMat(*pc, *change, *interior ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetprimalverticesis_ PCBDDCSETPRIMALVERTICESIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetprimalverticesis_ pcbddcsetprimalverticesis
#endif
PETSC_EXTERN void pcbddcsetprimalverticesis_(PC *pc, IS *PrimalVertices, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetPrimalVerticesIS(*pc, *PrimalVertices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcgetprimalverticesis_ PCBDDCGETPRIMALVERTICESIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcgetprimalverticesis_ pcbddcgetprimalverticesis
#endif
PETSC_EXTERN void pcbddcgetprimalverticesis_(PC *pc, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = PCBDDCGetPrimalVerticesIS(*pc, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetprimalverticeslocalis_ PCBDDCSETPRIMALVERTICESLOCALIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetprimalverticeslocalis_ pcbddcsetprimalverticeslocalis
#endif
PETSC_EXTERN void pcbddcsetprimalverticeslocalis_(PC *pc, IS *PrimalVertices, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetPrimalVerticesLocalIS(*pc, *PrimalVertices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcgetprimalverticeslocalis_ PCBDDCGETPRIMALVERTICESLOCALIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcgetprimalverticeslocalis_ pcbddcgetprimalverticeslocalis
#endif
PETSC_EXTERN void pcbddcgetprimalverticeslocalis_(PC *pc, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = PCBDDCGetPrimalVerticesLocalIS(*pc, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetcoarseningratio_ PCBDDCSETCOARSENINGRATIO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetcoarseningratio_ pcbddcsetcoarseningratio
#endif
PETSC_EXTERN void pcbddcsetcoarseningratio_(PC *pc, PetscInt *k, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetCoarseningRatio(*pc, *k);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetlevels_ PCBDDCSETLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetlevels_ pcbddcsetlevels
#endif
PETSC_EXTERN void pcbddcsetlevels_(PC *pc, PetscInt *levels, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetLevels(*pc, *levels);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetdirichletboundaries_ PCBDDCSETDIRICHLETBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetdirichletboundaries_ pcbddcsetdirichletboundaries
#endif
PETSC_EXTERN void pcbddcsetdirichletboundaries_(PC *pc, IS *DirichletBoundaries, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetDirichletBoundaries(*pc, *DirichletBoundaries);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetdirichletboundarieslocal_ PCBDDCSETDIRICHLETBOUNDARIESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetdirichletboundarieslocal_ pcbddcsetdirichletboundarieslocal
#endif
PETSC_EXTERN void pcbddcsetdirichletboundarieslocal_(PC *pc, IS *DirichletBoundaries, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetDirichletBoundariesLocal(*pc, *DirichletBoundaries);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetneumannboundaries_ PCBDDCSETNEUMANNBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetneumannboundaries_ pcbddcsetneumannboundaries
#endif
PETSC_EXTERN void pcbddcsetneumannboundaries_(PC *pc, IS *NeumannBoundaries, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetNeumannBoundaries(*pc, *NeumannBoundaries);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetneumannboundarieslocal_ PCBDDCSETNEUMANNBOUNDARIESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetneumannboundarieslocal_ pcbddcsetneumannboundarieslocal
#endif
PETSC_EXTERN void pcbddcsetneumannboundarieslocal_(PC *pc, IS *NeumannBoundaries, PetscErrorCode *ierr)
{
  *ierr = PCBDDCSetNeumannBoundariesLocal(*pc, *NeumannBoundaries);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcgetdirichletboundaries_ PCBDDCGETDIRICHLETBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcgetdirichletboundaries_ pcbddcgetdirichletboundaries
#endif
PETSC_EXTERN void pcbddcgetdirichletboundaries_(PC *pc, IS *DirichletBoundaries, PetscErrorCode *ierr)
{
  PetscBool null_DirichletBoundaries = !*(void**) DirichletBoundaries ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(DirichletBoundaries);
  *ierr = PCBDDCGetDirichletBoundaries(*pc, DirichletBoundaries);
  if (*ierr) return;
  if (! null_DirichletBoundaries && !*(void**) DirichletBoundaries) *(void **) DirichletBoundaries = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcgetdirichletboundarieslocal_ PCBDDCGETDIRICHLETBOUNDARIESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcgetdirichletboundarieslocal_ pcbddcgetdirichletboundarieslocal
#endif
PETSC_EXTERN void pcbddcgetdirichletboundarieslocal_(PC *pc, IS *DirichletBoundaries, PetscErrorCode *ierr)
{
  PetscBool null_DirichletBoundaries = !*(void**) DirichletBoundaries ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(DirichletBoundaries);
  *ierr = PCBDDCGetDirichletBoundariesLocal(*pc, DirichletBoundaries);
  if (*ierr) return;
  if (! null_DirichletBoundaries && !*(void**) DirichletBoundaries) *(void **) DirichletBoundaries = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcgetneumannboundaries_ PCBDDCGETNEUMANNBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcgetneumannboundaries_ pcbddcgetneumannboundaries
#endif
PETSC_EXTERN void pcbddcgetneumannboundaries_(PC *pc, IS *NeumannBoundaries, PetscErrorCode *ierr)
{
  PetscBool null_NeumannBoundaries = !*(void**) NeumannBoundaries ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(NeumannBoundaries);
  *ierr = PCBDDCGetNeumannBoundaries(*pc, NeumannBoundaries);
  if (*ierr) return;
  if (! null_NeumannBoundaries && !*(void**) NeumannBoundaries) *(void **) NeumannBoundaries = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcgetneumannboundarieslocal_ PCBDDCGETNEUMANNBOUNDARIESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcgetneumannboundarieslocal_ pcbddcgetneumannboundarieslocal
#endif
PETSC_EXTERN void pcbddcgetneumannboundarieslocal_(PC *pc, IS *NeumannBoundaries, PetscErrorCode *ierr)
{
  PetscBool null_NeumannBoundaries = !*(void**) NeumannBoundaries ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(NeumannBoundaries);
  *ierr = PCBDDCGetNeumannBoundariesLocal(*pc, NeumannBoundaries);
  if (*ierr) return;
  if (! null_NeumannBoundaries && !*(void**) NeumannBoundaries) *(void **) NeumannBoundaries = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetlocaladjacencygraph_ PCBDDCSETLOCALADJACENCYGRAPH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetlocaladjacencygraph_ pcbddcsetlocaladjacencygraph
#endif
PETSC_EXTERN void pcbddcsetlocaladjacencygraph_(PC *pc, PetscInt *nvtxs, const PetscInt xadj[], const PetscInt adjncy[], PetscCopyMode *copymode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(xadj);
  CHKFORTRANNULLINTEGER(adjncy);
  *ierr = PCBDDCSetLocalAdjacencyGraph(*pc, *nvtxs, xadj, adjncy, *copymode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetdofssplittinglocal_ PCBDDCSETDOFSSPLITTINGLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetdofssplittinglocal_ pcbddcsetdofssplittinglocal
#endif
PETSC_EXTERN void pcbddcsetdofssplittinglocal_(PC *pc, PetscInt *n_is, IS ISForDofs[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(ISForDofs);
  *ierr = PCBDDCSetDofsSplittingLocal(*pc, *n_is, ISForDofs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcsetdofssplitting_ PCBDDCSETDOFSSPLITTING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcsetdofssplitting_ pcbddcsetdofssplitting
#endif
PETSC_EXTERN void pcbddcsetdofssplitting_(PC *pc, PetscInt *n_is, IS ISForDofs[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(ISForDofs);
  *ierr = PCBDDCSetDofsSplitting(*pc, *n_is, ISForDofs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcmatfetidpgetrhs_ PCBDDCMATFETIDPGETRHS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcmatfetidpgetrhs_ pcbddcmatfetidpgetrhs
#endif
PETSC_EXTERN void pcbddcmatfetidpgetrhs_(Mat *fetidp_mat, Vec *standard_rhs, Vec *fetidp_flux_rhs, PetscErrorCode *ierr)
{
  *ierr = PCBDDCMatFETIDPGetRHS(*fetidp_mat, *standard_rhs, *fetidp_flux_rhs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcmatfetidpgetsolution_ PCBDDCMATFETIDPGETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcmatfetidpgetsolution_ pcbddcmatfetidpgetsolution
#endif
PETSC_EXTERN void pcbddcmatfetidpgetsolution_(Mat *fetidp_mat, Vec *fetidp_flux_sol, Vec *standard_sol, PetscErrorCode *ierr)
{
  *ierr = PCBDDCMatFETIDPGetSolution(*fetidp_mat, *fetidp_flux_sol, *standard_sol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddccreatefetidpoperators_ PCBDDCCREATEFETIDPOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddccreatefetidpoperators_ pcbddccreatefetidpoperators
#endif
PETSC_EXTERN void pcbddccreatefetidpoperators_(PC *pc, PetscBool *fully_redundant, char prefix[], Mat *fetidp_mat, PC *fetidp_pc, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  PetscBool null_fetidp_mat = !*(void**) fetidp_mat ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_fetidp_pc = !*(void**) fetidp_pc ? PETSC_TRUE : PETSC_FALSE;
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  CHKFORTRANNULLOBJECT(fetidp_mat);
  CHKFORTRANNULLOBJECT(fetidp_pc);
  *ierr = PCBDDCCreateFETIDPOperators(*pc, *fully_redundant ? PETSC_TRUE : PETSC_FALSE, c_prefix, fetidp_mat, fetidp_pc);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
  if (! null_fetidp_mat && !*(void**) fetidp_mat) *(void **) fetidp_mat = (void *)-2;
  if (! null_fetidp_pc && !*(void**) fetidp_pc) *(void **) fetidp_pc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcinitializepackage_ PCBDDCINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcinitializepackage_ pcbddcinitializepackage
#endif
PETSC_EXTERN void pcbddcinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PCBDDCInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbddcfinalizepackage_ PCBDDCFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbddcfinalizepackage_ pcbddcfinalizepackage
#endif
PETSC_EXTERN void pcbddcfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PCBDDCFinalizePackage();
  if (*ierr) return;
}
