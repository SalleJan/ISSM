#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggercreate_ VECTAGGERCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggercreate_ vectaggercreate
#endif
PETSC_EXTERN void vectaggercreate_(MPI_Fint *comm, VecTagger *tagger, PetscErrorCode *ierr)
{
  PetscBool null_tagger = !*(void**) tagger ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(tagger);
  CHKFORTRANNULLOBJECT(tagger);
  *ierr = VecTaggerCreate(MPI_Comm_f2c(*(comm)), tagger);
  if (*ierr) return;
  if (! null_tagger && !*(void**) tagger) *(void **) tagger = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggersettype_ VECTAGGERSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggersettype_ vectaggersettype
#endif
PETSC_EXTERN void vectaggersettype_(VecTagger *tagger, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = VecTaggerSetType(*tagger, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggergettype_ VECTAGGERGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggergettype_ vectaggergettype
#endif
PETSC_EXTERN void vectaggergettype_(VecTagger *tagger, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = VecTaggerGetType(*tagger, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggerdestroy_ VECTAGGERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggerdestroy_ vectaggerdestroy
#endif
PETSC_EXTERN void vectaggerdestroy_(VecTagger *tagger, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(tagger);
  PetscBool null_tagger = !*(void**) tagger ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tagger);
  *ierr = VecTaggerDestroy(tagger);
  if (*ierr) return;
  if (! null_tagger && !*(void**) tagger) *(void **) tagger = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggersetup_ VECTAGGERSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggersetup_ vectaggersetup
#endif
PETSC_EXTERN void vectaggersetup_(VecTagger *tagger, PetscErrorCode *ierr)
{
  *ierr = VecTaggerSetUp(*tagger);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggersetfromoptions_ VECTAGGERSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggersetfromoptions_ vectaggersetfromoptions
#endif
PETSC_EXTERN void vectaggersetfromoptions_(VecTagger *tagger, PetscErrorCode *ierr)
{
  *ierr = VecTaggerSetFromOptions(*tagger);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggersetblocksize_ VECTAGGERSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggersetblocksize_ vectaggersetblocksize
#endif
PETSC_EXTERN void vectaggersetblocksize_(VecTagger *tagger, PetscInt *blocksize, PetscErrorCode *ierr)
{
  *ierr = VecTaggerSetBlockSize(*tagger, *blocksize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggergetblocksize_ VECTAGGERGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggergetblocksize_ vectaggergetblocksize
#endif
PETSC_EXTERN void vectaggergetblocksize_(VecTagger *tagger, PetscInt *blocksize, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(blocksize);
  *ierr = VecTaggerGetBlockSize(*tagger, blocksize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggersetinvert_ VECTAGGERSETINVERT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggersetinvert_ vectaggersetinvert
#endif
PETSC_EXTERN void vectaggersetinvert_(VecTagger *tagger, PetscBool *invert, PetscErrorCode *ierr)
{
  *ierr = VecTaggerSetInvert(*tagger, *invert ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggergetinvert_ VECTAGGERGETINVERT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggergetinvert_ vectaggergetinvert
#endif
PETSC_EXTERN void vectaggergetinvert_(VecTagger *tagger, PetscBool *invert, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(invert);
  *ierr = VecTaggerGetInvert(*tagger, invert);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggerview_ VECTAGGERVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggerview_ vectaggerview
#endif
PETSC_EXTERN void vectaggerview_(VecTagger *tagger, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = VecTaggerView(*tagger, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggercomputeis_ VECTAGGERCOMPUTEIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggercomputeis_ vectaggercomputeis
#endif
PETSC_EXTERN void vectaggercomputeis_(VecTagger *tagger, Vec *vec, IS is[], PetscBool *listed, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(is);
  CHKFORTRANNULLBOOL(listed);
  *ierr = VecTaggerComputeIS(*tagger, *vec, is, listed);
  if (*ierr) return;
}
