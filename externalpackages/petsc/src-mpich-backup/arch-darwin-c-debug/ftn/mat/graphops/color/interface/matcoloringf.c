#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringcreate_ MATCOLORINGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringcreate_ matcoloringcreate
#endif
PETSC_EXTERN void matcoloringcreate_(Mat *m, MatColoring *mcptr, PetscErrorCode *ierr)
{
  PetscBool null_mcptr = !*(void**) mcptr ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(mcptr);
  CHKFORTRANNULLOBJECT(mcptr);
  *ierr = MatColoringCreate(*m, mcptr);
  if (*ierr) return;
  if (! null_mcptr && !*(void**) mcptr) *(void **) mcptr = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringdestroy_ MATCOLORINGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringdestroy_ matcoloringdestroy
#endif
PETSC_EXTERN void matcoloringdestroy_(MatColoring *mc, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(mc);
  PetscBool null_mc = !*(void**) mc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mc);
  *ierr = MatColoringDestroy(mc);
  if (*ierr) return;
  if (! null_mc && !*(void**) mc) *(void **) mc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringsettype_ MATCOLORINGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringsettype_ matcoloringsettype
#endif
PETSC_EXTERN void matcoloringsettype_(MatColoring *mc, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = MatColoringSetType(*mc, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringsetfromoptions_ MATCOLORINGSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringsetfromoptions_ matcoloringsetfromoptions
#endif
PETSC_EXTERN void matcoloringsetfromoptions_(MatColoring *mc, PetscErrorCode *ierr)
{
  *ierr = MatColoringSetFromOptions(*mc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringsetdistance_ MATCOLORINGSETDISTANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringsetdistance_ matcoloringsetdistance
#endif
PETSC_EXTERN void matcoloringsetdistance_(MatColoring *mc, PetscInt *dist, PetscErrorCode *ierr)
{
  *ierr = MatColoringSetDistance(*mc, *dist);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringgetdistance_ MATCOLORINGGETDISTANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringgetdistance_ matcoloringgetdistance
#endif
PETSC_EXTERN void matcoloringgetdistance_(MatColoring *mc, PetscInt *dist, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dist);
  *ierr = MatColoringGetDistance(*mc, dist);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringsetmaxcolors_ MATCOLORINGSETMAXCOLORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringsetmaxcolors_ matcoloringsetmaxcolors
#endif
PETSC_EXTERN void matcoloringsetmaxcolors_(MatColoring *mc, PetscInt *maxcolors, PetscErrorCode *ierr)
{
  *ierr = MatColoringSetMaxColors(*mc, *maxcolors);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringgetmaxcolors_ MATCOLORINGGETMAXCOLORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringgetmaxcolors_ matcoloringgetmaxcolors
#endif
PETSC_EXTERN void matcoloringgetmaxcolors_(MatColoring *mc, PetscInt *maxcolors, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(maxcolors);
  *ierr = MatColoringGetMaxColors(*mc, maxcolors);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringapply_ MATCOLORINGAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringapply_ matcoloringapply
#endif
PETSC_EXTERN void matcoloringapply_(MatColoring *mc, ISColoring *coloring, PetscErrorCode *ierr)
{
  PetscBool null_coloring = !*(void**) coloring ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(coloring);
  *ierr = MatColoringApply(*mc, coloring);
  if (*ierr) return;
  if (! null_coloring && !*(void**) coloring) *(void **) coloring = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringview_ MATCOLORINGVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringview_ matcoloringview
#endif
PETSC_EXTERN void matcoloringview_(MatColoring *mc, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = MatColoringView(*mc, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringsetweighttype_ MATCOLORINGSETWEIGHTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringsetweighttype_ matcoloringsetweighttype
#endif
PETSC_EXTERN void matcoloringsetweighttype_(MatColoring *mc, MatColoringWeightType *wt, PetscErrorCode *ierr)
{
  *ierr = MatColoringSetWeightType(*mc, *wt);
  if (*ierr) return;
}
