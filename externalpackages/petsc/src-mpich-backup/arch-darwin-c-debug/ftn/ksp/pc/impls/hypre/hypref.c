#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchypresetdiscretegradient_ PCHYPRESETDISCRETEGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchypresetdiscretegradient_ pchypresetdiscretegradient
#endif
PETSC_EXTERN void pchypresetdiscretegradient_(PC *pc, Mat *G, PetscErrorCode *ierr)
{
  *ierr = PCHYPRESetDiscreteGradient(*pc, *G);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchypresetdiscretecurl_ PCHYPRESETDISCRETECURL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchypresetdiscretecurl_ pchypresetdiscretecurl
#endif
PETSC_EXTERN void pchypresetdiscretecurl_(PC *pc, Mat *C, PetscErrorCode *ierr)
{
  *ierr = PCHYPRESetDiscreteCurl(*pc, *C);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchypresetinterpolations_ PCHYPRESETINTERPOLATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchypresetinterpolations_ pchypresetinterpolations
#endif
PETSC_EXTERN void pchypresetinterpolations_(PC *pc, PetscInt *dim, Mat *RT_PiFull, Mat RT_Pi[], Mat *ND_PiFull, Mat ND_Pi[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(RT_Pi);
  CHKFORTRANNULLOBJECT(ND_Pi);
  *ierr = PCHYPRESetInterpolations(*pc, *dim, *RT_PiFull, RT_Pi, *ND_PiFull, ND_Pi);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchypresetalphapoissonmatrix_ PCHYPRESETALPHAPOISSONMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchypresetalphapoissonmatrix_ pchypresetalphapoissonmatrix
#endif
PETSC_EXTERN void pchypresetalphapoissonmatrix_(PC *pc, Mat *A, PetscErrorCode *ierr)
{
  *ierr = PCHYPRESetAlphaPoissonMatrix(*pc, *A);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchypresetbetapoissonmatrix_ PCHYPRESETBETAPOISSONMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchypresetbetapoissonmatrix_ pchypresetbetapoissonmatrix
#endif
PETSC_EXTERN void pchypresetbetapoissonmatrix_(PC *pc, Mat *A, PetscErrorCode *ierr)
{
  *ierr = PCHYPRESetBetaPoissonMatrix(*pc, *A);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchypresetedgeconstantvectors_ PCHYPRESETEDGECONSTANTVECTORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchypresetedgeconstantvectors_ pchypresetedgeconstantvectors
#endif
PETSC_EXTERN void pchypresetedgeconstantvectors_(PC *pc, Vec *ozz, Vec *zoz, Vec *zzo, PetscErrorCode *ierr)
{
  *ierr = PCHYPRESetEdgeConstantVectors(*pc, *ozz, *zoz, *zzo);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchypreamssetinteriornodes_ PCHYPREAMSSETINTERIORNODES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchypreamssetinteriornodes_ pchypreamssetinteriornodes
#endif
PETSC_EXTERN void pchypreamssetinteriornodes_(PC *pc, Vec *interior, PetscErrorCode *ierr)
{
  *ierr = PCHYPREAMSSetInteriorNodes(*pc, *interior);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchypresettype_ PCHYPRESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchypresettype_ pchypresettype
#endif
PETSC_EXTERN void pchypresettype_(PC *pc, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PCHYPRESetType(*pc, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchypregettype_ PCHYPREGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchypregettype_ pchypregettype
#endif
PETSC_EXTERN void pchypregettype_(PC *pc, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PCHYPREGetType(*pc, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggalerkinsetmatproductalgorithm_ PCMGGALERKINSETMATPRODUCTALGORITHM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggalerkinsetmatproductalgorithm_ pcmggalerkinsetmatproductalgorithm
#endif
PETSC_EXTERN void pcmggalerkinsetmatproductalgorithm_(PC *pc, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PCMGGalerkinSetMatProductAlgorithm(*pc, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggalerkingetmatproductalgorithm_ PCMGGALERKINGETMATPRODUCTALGORITHM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggalerkingetmatproductalgorithm_ pcmggalerkingetmatproductalgorithm
#endif
PETSC_EXTERN void pcmggalerkingetmatproductalgorithm_(PC *pc, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PCMGGalerkinGetMatProductAlgorithm(*pc, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
