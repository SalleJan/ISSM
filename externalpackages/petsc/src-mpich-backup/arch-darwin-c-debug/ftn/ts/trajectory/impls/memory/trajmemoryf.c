#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorymemorysettype_ TSTRAJECTORYMEMORYSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorymemorysettype_ tstrajectorymemorysettype
#endif
PETSC_EXTERN void tstrajectorymemorysettype_(TSTrajectory *tj, TSTrajectoryMemoryType *tj_memory_type, PetscErrorCode *ierr)
{
  *ierr = TSTrajectoryMemorySetType(*tj, *tj_memory_type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetmaxcpsram_ TSTRAJECTORYSETMAXCPSRAM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetmaxcpsram_ tstrajectorysetmaxcpsram
#endif
PETSC_EXTERN void tstrajectorysetmaxcpsram_(TSTrajectory *tj, PetscInt *max_cps_ram, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySetMaxCpsRAM(*tj, *max_cps_ram);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetmaxcpsdisk_ TSTRAJECTORYSETMAXCPSDISK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetmaxcpsdisk_ tstrajectorysetmaxcpsdisk
#endif
PETSC_EXTERN void tstrajectorysetmaxcpsdisk_(TSTrajectory *tj, PetscInt *max_cps_disk, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySetMaxCpsDisk(*tj, *max_cps_disk);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetmaxunitsram_ TSTRAJECTORYSETMAXUNITSRAM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetmaxunitsram_ tstrajectorysetmaxunitsram
#endif
PETSC_EXTERN void tstrajectorysetmaxunitsram_(TSTrajectory *tj, PetscInt *max_units_ram, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySetMaxUnitsRAM(*tj, *max_units_ram);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetmaxunitsdisk_ TSTRAJECTORYSETMAXUNITSDISK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetmaxunitsdisk_ tstrajectorysetmaxunitsdisk
#endif
PETSC_EXTERN void tstrajectorysetmaxunitsdisk_(TSTrajectory *tj, PetscInt *max_units_disk, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySetMaxUnitsDisk(*tj, *max_units_disk);
  if (*ierr) return;
}
