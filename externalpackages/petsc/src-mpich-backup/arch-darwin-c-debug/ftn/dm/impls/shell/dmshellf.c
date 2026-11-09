#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmglobaltolocalbegindefaultshell_ DMGLOBALTOLOCALBEGINDEFAULTSHELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmglobaltolocalbegindefaultshell_ dmglobaltolocalbegindefaultshell
#endif
PETSC_EXTERN void dmglobaltolocalbegindefaultshell_(DM *dm, Vec *g, InsertMode *mode, Vec *l, PetscErrorCode *ierr)
{
  *ierr = DMGlobalToLocalBeginDefaultShell(*dm, *g, *mode, *l);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmglobaltolocalenddefaultshell_ DMGLOBALTOLOCALENDDEFAULTSHELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmglobaltolocalenddefaultshell_ dmglobaltolocalenddefaultshell
#endif
PETSC_EXTERN void dmglobaltolocalenddefaultshell_(DM *dm, Vec *g, InsertMode *mode, Vec *l, PetscErrorCode *ierr)
{
  *ierr = DMGlobalToLocalEndDefaultShell(*dm, *g, *mode, *l);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocaltoglobalbegindefaultshell_ DMLOCALTOGLOBALBEGINDEFAULTSHELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocaltoglobalbegindefaultshell_ dmlocaltoglobalbegindefaultshell
#endif
PETSC_EXTERN void dmlocaltoglobalbegindefaultshell_(DM *dm, Vec *l, InsertMode *mode, Vec *g, PetscErrorCode *ierr)
{
  *ierr = DMLocalToGlobalBeginDefaultShell(*dm, *l, *mode, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocaltoglobalenddefaultshell_ DMLOCALTOGLOBALENDDEFAULTSHELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocaltoglobalenddefaultshell_ dmlocaltoglobalenddefaultshell
#endif
PETSC_EXTERN void dmlocaltoglobalenddefaultshell_(DM *dm, Vec *l, InsertMode *mode, Vec *g, PetscErrorCode *ierr)
{
  *ierr = DMLocalToGlobalEndDefaultShell(*dm, *l, *mode, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocaltolocalbegindefaultshell_ DMLOCALTOLOCALBEGINDEFAULTSHELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocaltolocalbegindefaultshell_ dmlocaltolocalbegindefaultshell
#endif
PETSC_EXTERN void dmlocaltolocalbegindefaultshell_(DM *dm, Vec *g, InsertMode *mode, Vec *l, PetscErrorCode *ierr)
{
  *ierr = DMLocalToLocalBeginDefaultShell(*dm, *g, *mode, *l);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocaltolocalenddefaultshell_ DMLOCALTOLOCALENDDEFAULTSHELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocaltolocalenddefaultshell_ dmlocaltolocalenddefaultshell
#endif
PETSC_EXTERN void dmlocaltolocalenddefaultshell_(DM *dm, Vec *g, InsertMode *mode, Vec *l, PetscErrorCode *ierr)
{
  *ierr = DMLocalToLocalEndDefaultShell(*dm, *g, *mode, *l);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmshellsetcontext_ DMSHELLSETCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmshellsetcontext_ dmshellsetcontext
#endif
PETSC_EXTERN void dmshellsetcontext_(DM *dm, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMShellSetContext(*dm, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmshellgetcontextcptr_ DMSHELLGETCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmshellgetcontextcptr_ dmshellgetcontextcptr
#endif
PETSC_EXTERN void dmshellgetcontextcptr_(DM *dm, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = DMShellGetContext(*dm, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmshellsetmatrix_ DMSHELLSETMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmshellsetmatrix_ dmshellsetmatrix
#endif
PETSC_EXTERN void dmshellsetmatrix_(DM *dm, Mat *J, PetscErrorCode *ierr)
{
  *ierr = DMShellSetMatrix(*dm, *J);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmshellsetglobalvector_ DMSHELLSETGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmshellsetglobalvector_ dmshellsetglobalvector
#endif
PETSC_EXTERN void dmshellsetglobalvector_(DM *dm, Vec *X, PetscErrorCode *ierr)
{
  *ierr = DMShellSetGlobalVector(*dm, *X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmshellgetglobalvector_ DMSHELLGETGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmshellgetglobalvector_ dmshellgetglobalvector
#endif
PETSC_EXTERN void dmshellgetglobalvector_(DM *dm, Vec *X, PetscErrorCode *ierr)
{
  PetscBool null_X = !*(void**) X ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(X);
  *ierr = DMShellGetGlobalVector(*dm, X);
  if (*ierr) return;
  if (! null_X && !*(void**) X) *(void **) X = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmshellsetlocalvector_ DMSHELLSETLOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmshellsetlocalvector_ dmshellsetlocalvector
#endif
PETSC_EXTERN void dmshellsetlocalvector_(DM *dm, Vec *X, PetscErrorCode *ierr)
{
  *ierr = DMShellSetLocalVector(*dm, *X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmshellsetglobaltolocalvecscatter_ DMSHELLSETGLOBALTOLOCALVECSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmshellsetglobaltolocalvecscatter_ dmshellsetglobaltolocalvecscatter
#endif
PETSC_EXTERN void dmshellsetglobaltolocalvecscatter_(DM *dm, VecScatter *gtol, PetscErrorCode *ierr)
{
  *ierr = DMShellSetGlobalToLocalVecScatter(*dm, *gtol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmshellsetlocaltoglobalvecscatter_ DMSHELLSETLOCALTOGLOBALVECSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmshellsetlocaltoglobalvecscatter_ dmshellsetlocaltoglobalvecscatter
#endif
PETSC_EXTERN void dmshellsetlocaltoglobalvecscatter_(DM *dm, VecScatter *ltog, PetscErrorCode *ierr)
{
  *ierr = DMShellSetLocalToGlobalVecScatter(*dm, *ltog);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmshellsetlocaltolocalvecscatter_ DMSHELLSETLOCALTOLOCALVECSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmshellsetlocaltolocalvecscatter_ dmshellsetlocaltolocalvecscatter
#endif
PETSC_EXTERN void dmshellsetlocaltolocalvecscatter_(DM *dm, VecScatter *ltol, PetscErrorCode *ierr)
{
  *ierr = DMShellSetLocalToLocalVecScatter(*dm, *ltol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmshell.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmshellcreate_ DMSHELLCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmshellcreate_ dmshellcreate
#endif
PETSC_EXTERN void dmshellcreate_(MPI_Fint *comm, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(dm);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMShellCreate(MPI_Comm_f2c(*(comm)), dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
