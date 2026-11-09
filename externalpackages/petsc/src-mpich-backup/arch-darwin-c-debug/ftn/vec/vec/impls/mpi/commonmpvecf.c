#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecghostgetlocalform_ VECGHOSTGETLOCALFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecghostgetlocalform_ vecghostgetlocalform
#endif
PETSC_EXTERN void vecghostgetlocalform_(Vec *g, Vec *l, PetscErrorCode *ierr)
{
  PetscBool null_l = !*(void**) l ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(l);
  *ierr = VecGhostGetLocalForm(*g, l);
  if (*ierr) return;
  if (! null_l && !*(void**) l) *(void **) l = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecghostislocalform_ VECGHOSTISLOCALFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecghostislocalform_ vecghostislocalform
#endif
PETSC_EXTERN void vecghostislocalform_(Vec *g, Vec *l, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = VecGhostIsLocalForm(*g, *l, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecghostrestorelocalform_ VECGHOSTRESTORELOCALFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecghostrestorelocalform_ vecghostrestorelocalform
#endif
PETSC_EXTERN void vecghostrestorelocalform_(Vec *g, Vec *l, PetscErrorCode *ierr)
{
  PetscBool null_l = !*(void**) l ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(l);
  *ierr = VecGhostRestoreLocalForm(*g, l);
  if (*ierr) return;
  if (! null_l && !*(void**) l) *(void **) l = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecghostupdatebegin_ VECGHOSTUPDATEBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecghostupdatebegin_ vecghostupdatebegin
#endif
PETSC_EXTERN void vecghostupdatebegin_(Vec *g, InsertMode *insertmode, ScatterMode *scattermode, PetscErrorCode *ierr)
{
  *ierr = VecGhostUpdateBegin(*g, *insertmode, *scattermode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecghostupdateend_ VECGHOSTUPDATEEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecghostupdateend_ vecghostupdateend
#endif
PETSC_EXTERN void vecghostupdateend_(Vec *g, InsertMode *insertmode, ScatterMode *scattermode, PetscErrorCode *ierr)
{
  *ierr = VecGhostUpdateEnd(*g, *insertmode, *scattermode);
  if (*ierr) return;
}
