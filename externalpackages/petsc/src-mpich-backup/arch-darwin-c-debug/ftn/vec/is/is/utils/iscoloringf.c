#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isbuildtwosided_ ISBUILDTWOSIDED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isbuildtwosided_ isbuildtwosided
#endif
PETSC_EXTERN void isbuildtwosided_(IS *ito, IS *toindx, IS *rows, PetscErrorCode *ierr)
{
  PetscBool null_rows = !*(void**) rows ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rows);
  *ierr = ISBuildTwoSided(*ito, *toindx, rows);
  if (*ierr) return;
  if (! null_rows && !*(void**) rows) *(void **) rows = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ispartitioningtonumbering_ ISPARTITIONINGTONUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ispartitioningtonumbering_ ispartitioningtonumbering
#endif
PETSC_EXTERN void ispartitioningtonumbering_(IS *part, IS *is, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = ISPartitioningToNumbering(*part, is);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ispartitioningcount_ ISPARTITIONINGCOUNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ispartitioningcount_ ispartitioningcount
#endif
PETSC_EXTERN void ispartitioningcount_(IS *part, PetscInt *len, PetscInt count[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(count);
  *ierr = ISPartitioningCount(*part, *len, count);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isallgather_ ISALLGATHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isallgather_ isallgather
#endif
PETSC_EXTERN void isallgather_(IS *is, IS *isout, PetscErrorCode *ierr)
{
  PetscBool null_isout = !*(void**) isout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(isout);
  *ierr = ISAllGather(*is, isout);
  if (*ierr) return;
  if (! null_isout && !*(void**) isout) *(void **) isout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscomplement_ ISCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscomplement_ iscomplement
#endif
PETSC_EXTERN void iscomplement_(IS *is, PetscInt *nmin, PetscInt *nmax, IS *isout, PetscErrorCode *ierr)
{
  PetscBool null_isout = !*(void**) isout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(isout);
  *ierr = ISComplement(*is, *nmin, *nmax, isout);
  if (*ierr) return;
  if (! null_isout && !*(void**) isout) *(void **) isout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscoloringreference_ ISCOLORINGREFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscoloringreference_ iscoloringreference
#endif
PETSC_EXTERN void iscoloringreference_(ISColoring *coloring, PetscErrorCode *ierr)
{
  *ierr = ISColoringReference(*coloring);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscoloringsettype_ ISCOLORINGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscoloringsettype_ iscoloringsettype
#endif
PETSC_EXTERN void iscoloringsettype_(ISColoring *coloring, ISColoringType *type, PetscErrorCode *ierr)
{
  *ierr = ISColoringSetType(*coloring, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscoloringgettype_ ISCOLORINGGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscoloringgettype_ iscoloringgettype
#endif
PETSC_EXTERN void iscoloringgettype_(ISColoring *coloring, ISColoringType *type, PetscErrorCode *ierr)
{
  *ierr = ISColoringGetType(*coloring, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscoloringdestroy_ ISCOLORINGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscoloringdestroy_ iscoloringdestroy
#endif
PETSC_EXTERN void iscoloringdestroy_(ISColoring *iscoloring, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(iscoloring);
  PetscBool null_iscoloring = !*(void**) iscoloring ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(iscoloring);
  *ierr = ISColoringDestroy(iscoloring);
  if (*ierr) return;
  if (! null_iscoloring && !*(void**) iscoloring) *(void **) iscoloring = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscoloringviewfromoptions_ ISCOLORINGVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscoloringviewfromoptions_ iscoloringviewfromoptions
#endif
PETSC_EXTERN void iscoloringviewfromoptions_(ISColoring *obj, PetscObject *bobj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = ISColoringViewFromOptions(*obj, *bobj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscoloringview_ ISCOLORINGVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscoloringview_ iscoloringview
#endif
PETSC_EXTERN void iscoloringview_(ISColoring *iscoloring, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = ISColoringView(*iscoloring, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscoloringcreate_ ISCOLORINGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscoloringcreate_ iscoloringcreate
#endif
PETSC_EXTERN void iscoloringcreate_(MPI_Fint *comm, PetscInt *ncolors, PetscInt *n, const ISColoringValue colors[], PetscCopyMode *mode, ISColoring *iscoloring, PetscErrorCode *ierr)
{
  PetscBool null_iscoloring = !*(void**) iscoloring ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(iscoloring);
  CHKFORTRANNULLOBJECT(iscoloring);
  *ierr = ISColoringCreate(MPI_Comm_f2c(*(comm)), *ncolors, *n, colors, *mode, iscoloring);
  if (*ierr) return;
  if (! null_iscoloring && !*(void**) iscoloring) *(void **) iscoloring = (void *)-2;
}
