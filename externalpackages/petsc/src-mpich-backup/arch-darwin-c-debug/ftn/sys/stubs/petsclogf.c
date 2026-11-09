#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggpuflops_ PETSCLOGGPUFLOPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggpuflops_ petscloggpuflops
#endif
PETSC_EXTERN void petscloggpuflops_(PetscLogDouble *n, PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuFlops(*n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggputimeadd_ PETSCLOGGPUTIMEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggputimeadd_ petscloggputimeadd
#endif
PETSC_EXTERN void petscloggputimeadd_(PetscLogDouble *t, PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuTimeAdd(*t);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogcputogpu_ PETSCLOGCPUTOGPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogcputogpu_ petsclogcputogpu
#endif
PETSC_EXTERN void petsclogcputogpu_(PetscLogDouble *size, PetscErrorCode *ierr)
{
  *ierr = PetscLogCpuToGpu(*size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggputocpu_ PETSCLOGGPUTOCPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggputocpu_ petscloggputocpu
#endif
PETSC_EXTERN void petscloggputocpu_(PetscLogDouble *size, PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuToCpu(*size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogcputogpuscalar_ PETSCLOGCPUTOGPUSCALAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogcputogpuscalar_ petsclogcputogpuscalar
#endif
PETSC_EXTERN void petsclogcputogpuscalar_(PetscLogDouble *size, PetscErrorCode *ierr)
{
  *ierr = PetscLogCpuToGpuScalar(*size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggputocpuscalar_ PETSCLOGGPUTOCPUSCALAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggputocpuscalar_ petscloggputocpuscalar
#endif
PETSC_EXTERN void petscloggputocpuscalar_(PetscLogDouble *size, PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuToCpuScalar(*size);
  if (*ierr) return;
}
