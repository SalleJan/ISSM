#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscompctrlcreate_ PETSCOMPCTRLCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscompctrlcreate_ petscompctrlcreate
#endif
PETSC_EXTERN void petscompctrlcreate_(MPI_Fint *petsc_comm, PetscInt *nthreads, PetscOmpCtrl *pctrl, PetscErrorCode *ierr)
{
  PetscBool null_pctrl = !*(void**) pctrl ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(pctrl);
  CHKFORTRANNULLOBJECT(pctrl);
  *ierr = PetscOmpCtrlCreate(MPI_Comm_f2c(*(petsc_comm)), *nthreads, pctrl);
  if (*ierr) return;
  if (! null_pctrl && !*(void**) pctrl) *(void **) pctrl = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscompctrldestroy_ PETSCOMPCTRLDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscompctrldestroy_ petscompctrldestroy
#endif
PETSC_EXTERN void petscompctrldestroy_(PetscOmpCtrl *pctrl, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(pctrl);
  PetscBool null_pctrl = !*(void**) pctrl ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pctrl);
  *ierr = PetscOmpCtrlDestroy(pctrl);
  if (*ierr) return;
  if (! null_pctrl && !*(void**) pctrl) *(void **) pctrl = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscompctrlbarrier_ PETSCOMPCTRLBARRIER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscompctrlbarrier_ petscompctrlbarrier
#endif
PETSC_EXTERN void petscompctrlbarrier_(PetscOmpCtrl *ctrl, PetscErrorCode *ierr)
{
  *ierr = PetscOmpCtrlBarrier(*ctrl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscompctrlompregiononmasterbegin_ PETSCOMPCTRLOMPREGIONONMASTERBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscompctrlompregiononmasterbegin_ petscompctrlompregiononmasterbegin
#endif
PETSC_EXTERN void petscompctrlompregiononmasterbegin_(PetscOmpCtrl *ctrl, PetscErrorCode *ierr)
{
  *ierr = PetscOmpCtrlOmpRegionOnMasterBegin(*ctrl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscompctrlompregiononmasterend_ PETSCOMPCTRLOMPREGIONONMASTEREND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscompctrlompregiononmasterend_ petscompctrlompregiononmasterend
#endif
PETSC_EXTERN void petscompctrlompregiononmasterend_(PetscOmpCtrl *ctrl, PetscErrorCode *ierr)
{
  *ierr = PetscOmpCtrlOmpRegionOnMasterEnd(*ctrl);
  if (*ierr) return;
}
