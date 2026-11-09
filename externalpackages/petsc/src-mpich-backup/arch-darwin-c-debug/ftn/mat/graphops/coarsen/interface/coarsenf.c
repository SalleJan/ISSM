#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsengettype_ MATCOARSENGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsengettype_ matcoarsengettype
#endif
PETSC_EXTERN void matcoarsengettype_(MatCoarsen *coarsen, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = MatCoarsenGetType(*coarsen, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsenapply_ MATCOARSENAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsenapply_ matcoarsenapply
#endif
PETSC_EXTERN void matcoarsenapply_(MatCoarsen *coarser, PetscErrorCode *ierr)
{
  *ierr = MatCoarsenApply(*coarser);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsensetadjacency_ MATCOARSENSETADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsensetadjacency_ matcoarsensetadjacency
#endif
PETSC_EXTERN void matcoarsensetadjacency_(MatCoarsen *agg, Mat *adj, PetscErrorCode *ierr)
{
  *ierr = MatCoarsenSetAdjacency(*agg, *adj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsensetstrictaggs_ MATCOARSENSETSTRICTAGGS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsensetstrictaggs_ matcoarsensetstrictaggs
#endif
PETSC_EXTERN void matcoarsensetstrictaggs_(MatCoarsen *agg, PetscBool *str, PetscErrorCode *ierr)
{
  *ierr = MatCoarsenSetStrictAggs(*agg, *str ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsendestroy_ MATCOARSENDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsendestroy_ matcoarsendestroy
#endif
PETSC_EXTERN void matcoarsendestroy_(MatCoarsen *agg, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(agg);
  PetscBool null_agg = !*(void**) agg ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(agg);
  *ierr = MatCoarsenDestroy(agg);
  if (*ierr) return;
  if (! null_agg && !*(void**) agg) *(void **) agg = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsenviewfromoptions_ MATCOARSENVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsenviewfromoptions_ matcoarsenviewfromoptions
#endif
PETSC_EXTERN void matcoarsenviewfromoptions_(MatCoarsen *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = MatCoarsenViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsenview_ MATCOARSENVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsenview_ matcoarsenview
#endif
PETSC_EXTERN void matcoarsenview_(MatCoarsen *agg, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = MatCoarsenView(*agg, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsensettype_ MATCOARSENSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsensettype_ matcoarsensettype
#endif
PETSC_EXTERN void matcoarsensettype_(MatCoarsen *coarser, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = MatCoarsenSetType(*coarser, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsensetgreedyordering_ MATCOARSENSETGREEDYORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsensetgreedyordering_ matcoarsensetgreedyordering
#endif
PETSC_EXTERN void matcoarsensetgreedyordering_(MatCoarsen *coarser, const IS *perm, PetscErrorCode *ierr)
{
  *ierr = MatCoarsenSetGreedyOrdering(*coarser, *perm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsensetfromoptions_ MATCOARSENSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsensetfromoptions_ matcoarsensetfromoptions
#endif
PETSC_EXTERN void matcoarsensetfromoptions_(MatCoarsen *coarser, PetscErrorCode *ierr)
{
  *ierr = MatCoarsenSetFromOptions(*coarser);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsensetmaximumiterations_ MATCOARSENSETMAXIMUMITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsensetmaximumiterations_ matcoarsensetmaximumiterations
#endif
PETSC_EXTERN void matcoarsensetmaximumiterations_(MatCoarsen *coarse, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = MatCoarsenSetMaximumIterations(*coarse, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsensetstrengthindex_ MATCOARSENSETSTRENGTHINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsensetstrengthindex_ matcoarsensetstrengthindex
#endif
PETSC_EXTERN void matcoarsensetstrengthindex_(MatCoarsen *coarse, PetscInt *n, PetscInt idx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idx);
  *ierr = MatCoarsenSetStrengthIndex(*coarse, *n, idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsensetthreshold_ MATCOARSENSETTHRESHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsensetthreshold_ matcoarsensetthreshold
#endif
PETSC_EXTERN void matcoarsensetthreshold_(MatCoarsen *coarse, PetscReal *b, PetscErrorCode *ierr)
{
  *ierr = MatCoarsenSetThreshold(*coarse, *b);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmatcoarsen.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoarsencreate_ MATCOARSENCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoarsencreate_ matcoarsencreate
#endif
PETSC_EXTERN void matcoarsencreate_(MPI_Fint *comm, MatCoarsen *newcrs, PetscErrorCode *ierr)
{
  PetscBool null_newcrs = !*(void**) newcrs ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(newcrs);
  CHKFORTRANNULLOBJECT(newcrs);
  *ierr = MatCoarsenCreate(MPI_Comm_f2c(*(comm)), newcrs);
  if (*ierr) return;
  if (! null_newcrs && !*(void**) newcrs) *(void **) newcrs = (void *)-2;
}
