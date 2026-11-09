#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationcreate_ DMINTERPOLATIONCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationcreate_ dminterpolationcreate
#endif
PETSC_EXTERN void dminterpolationcreate_(MPI_Fint *comm, DMInterpolationInfo *ctx, PetscErrorCode *ierr)
{
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ctx);
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = DMInterpolationCreate(MPI_Comm_f2c(*(comm)), ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationsetdim_ DMINTERPOLATIONSETDIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationsetdim_ dminterpolationsetdim
#endif
PETSC_EXTERN void dminterpolationsetdim_(DMInterpolationInfo *ctx, PetscInt *dim, PetscErrorCode *ierr)
{
  *ierr = DMInterpolationSetDim(*ctx, *dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationgetdim_ DMINTERPOLATIONGETDIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationgetdim_ dminterpolationgetdim
#endif
PETSC_EXTERN void dminterpolationgetdim_(DMInterpolationInfo *ctx, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = DMInterpolationGetDim(*ctx, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationsetdof_ DMINTERPOLATIONSETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationsetdof_ dminterpolationsetdof
#endif
PETSC_EXTERN void dminterpolationsetdof_(DMInterpolationInfo *ctx, PetscInt *dof, PetscErrorCode *ierr)
{
  *ierr = DMInterpolationSetDof(*ctx, *dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationgetdof_ DMINTERPOLATIONGETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationgetdof_ dminterpolationgetdof
#endif
PETSC_EXTERN void dminterpolationgetdof_(DMInterpolationInfo *ctx, PetscInt *dof, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dof);
  *ierr = DMInterpolationGetDof(*ctx, dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationaddpoints_ DMINTERPOLATIONADDPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationaddpoints_ dminterpolationaddpoints
#endif
PETSC_EXTERN void dminterpolationaddpoints_(DMInterpolationInfo *ctx, PetscInt *n, PetscReal points[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(points);
  *ierr = DMInterpolationAddPoints(*ctx, *n, points);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationsetup_ DMINTERPOLATIONSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationsetup_ dminterpolationsetup
#endif
PETSC_EXTERN void dminterpolationsetup_(DMInterpolationInfo *ctx, DM *dm, PetscBool *redundantPoints, PetscBool *ignoreOutsideDomain, PetscErrorCode *ierr)
{
  *ierr = DMInterpolationSetUp(*ctx, *dm, *redundantPoints ? PETSC_TRUE : PETSC_FALSE, *ignoreOutsideDomain ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationgetcoordinates_ DMINTERPOLATIONGETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationgetcoordinates_ dminterpolationgetcoordinates
#endif
PETSC_EXTERN void dminterpolationgetcoordinates_(DMInterpolationInfo *ctx, Vec *coordinates, PetscErrorCode *ierr)
{
  PetscBool null_coordinates = !*(void**) coordinates ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(coordinates);
  *ierr = DMInterpolationGetCoordinates(*ctx, coordinates);
  if (*ierr) return;
  if (! null_coordinates && !*(void**) coordinates) *(void **) coordinates = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationgetvector_ DMINTERPOLATIONGETVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationgetvector_ dminterpolationgetvector
#endif
PETSC_EXTERN void dminterpolationgetvector_(DMInterpolationInfo *ctx, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = DMInterpolationGetVector(*ctx, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationrestorevector_ DMINTERPOLATIONRESTOREVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationrestorevector_ dminterpolationrestorevector
#endif
PETSC_EXTERN void dminterpolationrestorevector_(DMInterpolationInfo *ctx, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = DMInterpolationRestoreVector(*ctx, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationevaluate_ DMINTERPOLATIONEVALUATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationevaluate_ dminterpolationevaluate
#endif
PETSC_EXTERN void dminterpolationevaluate_(DMInterpolationInfo *ctx, DM *dm, Vec *x, Vec *v, PetscErrorCode *ierr)
{
  *ierr = DMInterpolationEvaluate(*ctx, *dm, *x, *v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolationdestroy_ DMINTERPOLATIONDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolationdestroy_ dminterpolationdestroy
#endif
PETSC_EXTERN void dminterpolationdestroy_(DMInterpolationInfo *ctx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ctx);
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = DMInterpolationDestroy(ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
