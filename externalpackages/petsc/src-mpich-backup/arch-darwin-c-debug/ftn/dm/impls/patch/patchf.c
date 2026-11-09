#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmpatch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpatchzoom_ DMPATCHZOOM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpatchzoom_ dmpatchzoom
#endif
PETSC_EXTERN void dmpatchzoom_(DM *dm, MatStencil *lower, MatStencil *upper, MPI_Fint *commz, DM *dmz, PetscSF *sfz, PetscSF *sfzr, PetscErrorCode *ierr)
{
  PetscBool null_dmz = !*(void**) dmz ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_sfz = !*(void**) sfz ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_sfzr = !*(void**) sfzr ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmz);
  CHKFORTRANNULLOBJECT(sfz);
  CHKFORTRANNULLOBJECT(sfzr);
  *ierr = DMPatchZoom(*dm, *lower, *upper, MPI_Comm_f2c(*(commz)), dmz, sfz, sfzr);
  if (*ierr) return;
  if (! null_dmz && !*(void**) dmz) *(void **) dmz = (void *)-2;
  if (! null_sfz && !*(void**) sfz) *(void **) sfz = (void *)-2;
  if (! null_sfzr && !*(void**) sfzr) *(void **) sfzr = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmpatch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpatchsolve_ DMPATCHSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpatchsolve_ dmpatchsolve
#endif
PETSC_EXTERN void dmpatchsolve_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPatchSolve(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmpatch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpatchgetcoarse_ DMPATCHGETCOARSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpatchgetcoarse_ dmpatchgetcoarse
#endif
PETSC_EXTERN void dmpatchgetcoarse_(DM *dm, DM *dmCoarse, PetscErrorCode *ierr)
{
  PetscBool null_dmCoarse = !*(void**) dmCoarse ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmCoarse);
  *ierr = DMPatchGetCoarse(*dm, dmCoarse);
  if (*ierr) return;
  if (! null_dmCoarse && !*(void**) dmCoarse) *(void **) dmCoarse = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmpatch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpatchgetpatchsize_ DMPATCHGETPATCHSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpatchgetpatchsize_ dmpatchgetpatchsize
#endif
PETSC_EXTERN void dmpatchgetpatchsize_(DM *dm, MatStencil *patchSize, PetscErrorCode *ierr)
{
  *ierr = DMPatchGetPatchSize(*dm, patchSize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmpatch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpatchsetpatchsize_ DMPATCHSETPATCHSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpatchsetpatchsize_ dmpatchsetpatchsize
#endif
PETSC_EXTERN void dmpatchsetpatchsize_(DM *dm, MatStencil *patchSize, PetscErrorCode *ierr)
{
  *ierr = DMPatchSetPatchSize(*dm, *patchSize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmpatch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpatchgetcommsize_ DMPATCHGETCOMMSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpatchgetcommsize_ dmpatchgetcommsize
#endif
PETSC_EXTERN void dmpatchgetcommsize_(DM *dm, MatStencil *commSize, PetscErrorCode *ierr)
{
  *ierr = DMPatchGetCommSize(*dm, commSize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmpatch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpatchsetcommsize_ DMPATCHSETCOMMSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpatchsetcommsize_ dmpatchsetcommsize
#endif
PETSC_EXTERN void dmpatchsetcommsize_(DM *dm, MatStencil *commSize, PetscErrorCode *ierr)
{
  *ierr = DMPatchSetCommSize(*dm, *commSize);
  if (*ierr) return;
}
