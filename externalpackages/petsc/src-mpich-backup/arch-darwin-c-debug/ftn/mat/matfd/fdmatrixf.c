#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringsetf_ MATFDCOLORINGSETF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringsetf_ matfdcoloringsetf
#endif
PETSC_EXTERN void matfdcoloringsetf_(MatFDColoring *fd, Vec *F, PetscErrorCode *ierr)
{
  *ierr = MatFDColoringSetF(*fd, *F);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringview_ MATFDCOLORINGVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringview_ matfdcoloringview
#endif
PETSC_EXTERN void matfdcoloringview_(MatFDColoring *c, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = MatFDColoringView(*c, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringsetparameters_ MATFDCOLORINGSETPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringsetparameters_ matfdcoloringsetparameters
#endif
PETSC_EXTERN void matfdcoloringsetparameters_(MatFDColoring *matfd, PetscReal *error, PetscReal *umin, PetscErrorCode *ierr)
{
  *ierr = MatFDColoringSetParameters(*matfd, *error, *umin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringsetblocksize_ MATFDCOLORINGSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringsetblocksize_ matfdcoloringsetblocksize
#endif
PETSC_EXTERN void matfdcoloringsetblocksize_(MatFDColoring *matfd, PetscInt *brows, PetscInt *bcols, PetscErrorCode *ierr)
{
  *ierr = MatFDColoringSetBlockSize(*matfd, *brows, *bcols);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringsetup_ MATFDCOLORINGSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringsetup_ matfdcoloringsetup
#endif
PETSC_EXTERN void matfdcoloringsetup_(Mat *mat, ISColoring *iscoloring, MatFDColoring *color, PetscErrorCode *ierr)
{
  *ierr = MatFDColoringSetUp(*mat, *iscoloring, *color);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringsetfromoptions_ MATFDCOLORINGSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringsetfromoptions_ matfdcoloringsetfromoptions
#endif
PETSC_EXTERN void matfdcoloringsetfromoptions_(MatFDColoring *matfd, PetscErrorCode *ierr)
{
  *ierr = MatFDColoringSetFromOptions(*matfd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringsettype_ MATFDCOLORINGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringsettype_ matfdcoloringsettype
#endif
PETSC_EXTERN void matfdcoloringsettype_(MatFDColoring *matfd, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = MatFDColoringSetType(*matfd, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringcreate_ MATFDCOLORINGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringcreate_ matfdcoloringcreate
#endif
PETSC_EXTERN void matfdcoloringcreate_(Mat *mat, ISColoring *iscoloring, MatFDColoring *color, PetscErrorCode *ierr)
{
  PetscBool null_color = !*(void**) color ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(color);
  CHKFORTRANNULLOBJECT(color);
  *ierr = MatFDColoringCreate(*mat, *iscoloring, color);
  if (*ierr) return;
  if (! null_color && !*(void**) color) *(void **) color = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringdestroy_ MATFDCOLORINGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringdestroy_ matfdcoloringdestroy
#endif
PETSC_EXTERN void matfdcoloringdestroy_(MatFDColoring *c, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(c);
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(c);
  *ierr = MatFDColoringDestroy(c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringapply_ MATFDCOLORINGAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringapply_ matfdcoloringapply
#endif
PETSC_EXTERN void matfdcoloringapply_(Mat *J, MatFDColoring *coloring, Vec *x1, void *sctx, PetscErrorCode *ierr)
{
  *ierr = MatFDColoringApply(*J, *coloring, *x1, sctx);
  if (*ierr) return;
}
