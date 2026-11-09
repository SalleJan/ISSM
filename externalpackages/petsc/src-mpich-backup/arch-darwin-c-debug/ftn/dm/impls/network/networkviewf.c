#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkviewsetshowranks_ DMNETWORKVIEWSETSHOWRANKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkviewsetshowranks_ dmnetworkviewsetshowranks
#endif
PETSC_EXTERN void dmnetworkviewsetshowranks_(DM *dm, PetscBool *showranks, PetscErrorCode *ierr)
{
  *ierr = DMNetworkViewSetShowRanks(*dm, *showranks ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkviewsetshowglobal_ DMNETWORKVIEWSETSHOWGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkviewsetshowglobal_ dmnetworkviewsetshowglobal
#endif
PETSC_EXTERN void dmnetworkviewsetshowglobal_(DM *dm, PetscBool *showglobal, PetscErrorCode *ierr)
{
  *ierr = DMNetworkViewSetShowGlobal(*dm, *showglobal ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkviewsetshowvertices_ DMNETWORKVIEWSETSHOWVERTICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkviewsetshowvertices_ dmnetworkviewsetshowvertices
#endif
PETSC_EXTERN void dmnetworkviewsetshowvertices_(DM *dm, PetscBool *showvertices, PetscErrorCode *ierr)
{
  *ierr = DMNetworkViewSetShowVertices(*dm, *showvertices ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkviewsetshownumbering_ DMNETWORKVIEWSETSHOWNUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkviewsetshownumbering_ dmnetworkviewsetshownumbering
#endif
PETSC_EXTERN void dmnetworkviewsetshownumbering_(DM *dm, PetscBool *shownumbering, PetscErrorCode *ierr)
{
  *ierr = DMNetworkViewSetShowNumbering(*dm, *shownumbering ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkviewsetviewranks_ DMNETWORKVIEWSETVIEWRANKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkviewsetviewranks_ dmnetworkviewsetviewranks
#endif
PETSC_EXTERN void dmnetworkviewsetviewranks_(DM *dm, IS *viewranks, PetscErrorCode *ierr)
{
  *ierr = DMNetworkViewSetViewRanks(*dm, *viewranks);
  if (*ierr) return;
}
