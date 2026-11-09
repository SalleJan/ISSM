#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacosetglobal_ MATPARTITIONINGCHACOSETGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacosetglobal_ matpartitioningchacosetglobal
#endif
PETSC_EXTERN void matpartitioningchacosetglobal_(MatPartitioning *part, MPChacoGlobalType *method, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningChacoSetGlobal(*part, *method);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacogetglobal_ MATPARTITIONINGCHACOGETGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacogetglobal_ matpartitioningchacogetglobal
#endif
PETSC_EXTERN void matpartitioningchacogetglobal_(MatPartitioning *part, MPChacoGlobalType *method, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningChacoGetGlobal(*part, method);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacosetlocal_ MATPARTITIONINGCHACOSETLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacosetlocal_ matpartitioningchacosetlocal
#endif
PETSC_EXTERN void matpartitioningchacosetlocal_(MatPartitioning *part, MPChacoLocalType *method, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningChacoSetLocal(*part, *method);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacogetlocal_ MATPARTITIONINGCHACOGETLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacogetlocal_ matpartitioningchacogetlocal
#endif
PETSC_EXTERN void matpartitioningchacogetlocal_(MatPartitioning *part, MPChacoLocalType *method, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningChacoGetLocal(*part, method);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacosetcoarselevel_ MATPARTITIONINGCHACOSETCOARSELEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacosetcoarselevel_ matpartitioningchacosetcoarselevel
#endif
PETSC_EXTERN void matpartitioningchacosetcoarselevel_(MatPartitioning *part, PetscReal *level, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningChacoSetCoarseLevel(*part, *level);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacoseteigensolver_ MATPARTITIONINGCHACOSETEIGENSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacoseteigensolver_ matpartitioningchacoseteigensolver
#endif
PETSC_EXTERN void matpartitioningchacoseteigensolver_(MatPartitioning *part, MPChacoEigenType *method, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningChacoSetEigenSolver(*part, *method);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacogeteigensolver_ MATPARTITIONINGCHACOGETEIGENSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacogeteigensolver_ matpartitioningchacogeteigensolver
#endif
PETSC_EXTERN void matpartitioningchacogeteigensolver_(MatPartitioning *part, MPChacoEigenType *method, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningChacoGetEigenSolver(*part, method);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacoseteigentol_ MATPARTITIONINGCHACOSETEIGENTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacoseteigentol_ matpartitioningchacoseteigentol
#endif
PETSC_EXTERN void matpartitioningchacoseteigentol_(MatPartitioning *part, PetscReal *tol, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningChacoSetEigenTol(*part, *tol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacogeteigentol_ MATPARTITIONINGCHACOGETEIGENTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacogeteigentol_ matpartitioningchacogeteigentol
#endif
PETSC_EXTERN void matpartitioningchacogeteigentol_(MatPartitioning *part, PetscReal *tol, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(tol);
  *ierr = MatPartitioningChacoGetEigenTol(*part, tol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacoseteigennumber_ MATPARTITIONINGCHACOSETEIGENNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacoseteigennumber_ matpartitioningchacoseteigennumber
#endif
PETSC_EXTERN void matpartitioningchacoseteigennumber_(MatPartitioning *part, PetscInt *num, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningChacoSetEigenNumber(*part, *num);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningchacogeteigennumber_ MATPARTITIONINGCHACOGETEIGENNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningchacogeteigennumber_ matpartitioningchacogeteigennumber
#endif
PETSC_EXTERN void matpartitioningchacogeteigennumber_(MatPartitioning *part, PetscInt *num, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(num);
  *ierr = MatPartitioningChacoGetEigenNumber(*part, num);
  if (*ierr) return;
}
