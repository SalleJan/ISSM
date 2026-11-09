#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isdifference_ ISDIFFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isdifference_ isdifference
#endif
PETSC_EXTERN void isdifference_(IS *is1, IS *is2, IS *isout, PetscErrorCode *ierr)
{
  PetscBool null_isout = !*(void**) isout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(isout);
  *ierr = ISDifference(*is1, *is2, isout);
  if (*ierr) return;
  if (! null_isout && !*(void**) isout) *(void **) isout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issum_ ISSUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issum_ issum
#endif
PETSC_EXTERN void issum_(IS *is1, IS *is2, IS *is3, PetscErrorCode *ierr)
{
  PetscBool null_is3 = !*(void**) is3 ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is3);
  *ierr = ISSum(*is1, *is2, is3);
  if (*ierr) return;
  if (! null_is3 && !*(void**) is3) *(void **) is3 = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isexpand_ ISEXPAND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isexpand_ isexpand
#endif
PETSC_EXTERN void isexpand_(IS *is1, IS *is2, IS *isout, PetscErrorCode *ierr)
{
  PetscBool null_isout = !*(void**) isout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(isout);
  *ierr = ISExpand(*is1, *is2, isout);
  if (*ierr) return;
  if (! null_isout && !*(void**) isout) *(void **) isout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isintersect_ ISINTERSECT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isintersect_ isintersect
#endif
PETSC_EXTERN void isintersect_(IS *is1, IS *is2, IS *isout, PetscErrorCode *ierr)
{
  PetscBool null_isout = !*(void**) isout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(isout);
  *ierr = ISIntersect(*is1, *is2, isout);
  if (*ierr) return;
  if (! null_isout && !*(void**) isout) *(void **) isout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isconcatenate_ ISCONCATENATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isconcatenate_ isconcatenate
#endif
PETSC_EXTERN void isconcatenate_(MPI_Fint *comm, PetscInt *len, const IS islist[], IS *isout, PetscErrorCode *ierr)
{
  PetscBool null_isout = !*(void**) isout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(islist);
  CHKFORTRANNULLOBJECT(isout);
  *ierr = ISConcatenate(MPI_Comm_f2c(*(comm)), *len, islist, isout);
  if (*ierr) return;
  if (! null_isout && !*(void**) isout) *(void **) isout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define islisttopair_ ISLISTTOPAIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define islisttopair_ islisttopair
#endif
PETSC_EXTERN void islisttopair_(MPI_Fint *comm, PetscInt *listlen, IS islist[], IS *xis, IS *yis, PetscErrorCode *ierr)
{
  PetscBool null_xis = !*(void**) xis ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_yis = !*(void**) yis ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(islist);
  CHKFORTRANNULLOBJECT(xis);
  CHKFORTRANNULLOBJECT(yis);
  *ierr = ISListToPair(MPI_Comm_f2c(*(comm)), *listlen, islist, xis, yis);
  if (*ierr) return;
  if (! null_xis && !*(void**) xis) *(void **) xis = (void *)-2;
  if (! null_yis && !*(void**) yis) *(void **) yis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isembed_ ISEMBED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isembed_ isembed
#endif
PETSC_EXTERN void isembed_(IS *a, IS *b, PetscBool *drop, IS *c, PetscErrorCode *ierr)
{
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(c);
  *ierr = ISEmbed(*a, *b, *drop ? PETSC_TRUE : PETSC_FALSE, c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define issortpermutation_ ISSORTPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define issortpermutation_ issortpermutation
#endif
PETSC_EXTERN void issortpermutation_(IS *f, PetscBool *always, IS *h, PetscErrorCode *ierr)
{
  PetscBool null_h = !*(void**) h ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(h);
  *ierr = ISSortPermutation(*f, *always ? PETSC_TRUE : PETSC_FALSE, h);
  if (*ierr) return;
  if (! null_h && !*(void**) h) *(void **) h = (void *)-2;
}
