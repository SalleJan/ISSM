#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetdm_ VECGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetdm_ vecgetdm
#endif
PETSC_EXTERN void vecgetdm_(Vec *v, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = VecGetDM(*v, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetdm_ VECSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetdm_ vecsetdm
#endif
PETSC_EXTERN void vecsetdm_(Vec *v, DM *dm, PetscErrorCode *ierr)
{
  *ierr = VecSetDM(*v, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetdm_ MATGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetdm_ matgetdm
#endif
PETSC_EXTERN void matgetdm_(Mat *A, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = MatGetDM(*A, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsetdm_ MATSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsetdm_ matsetdm
#endif
PETSC_EXTERN void matsetdm_(Mat *A, DM *dm, PetscErrorCode *ierr)
{
  *ierr = MatSetDM(*A, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringusedm_ MATFDCOLORINGUSEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringusedm_ matfdcoloringusedm
#endif
PETSC_EXTERN void matfdcoloringusedm_(Mat *coloring, MatFDColoring *fdcoloring, PetscErrorCode *ierr)
{
  *ierr = MatFDColoringUseDM(*coloring, *fdcoloring);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreate_ DMCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreate_ dmcreate
#endif
PETSC_EXTERN void dmcreate_(MPI_Fint *comm, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(dm);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMCreate(MPI_Comm_f2c(*(comm)), dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmclone_ DMCLONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmclone_ dmclone
#endif
PETSC_EXTERN void dmclone_(DM *dm, DM *newdm, PetscErrorCode *ierr)
{
  PetscBool null_newdm = !*(void**) newdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newdm);
  *ierr = DMClone(*dm, newdm);
  if (*ierr) return;
  if (! null_newdm && !*(void**) newdm) *(void **) newdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetvectype_ DMSETVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetvectype_ dmsetvectype
#endif
PETSC_EXTERN void dmsetvectype_(DM *dm, char *ctype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_ctype)
{
  char* c_ctype;
  FIXCHAR(ctype, l_ctype, c_ctype);
  *ierr = DMSetVecType(*dm, c_ctype);
  if (*ierr) return;
  FREECHAR(ctype, c_ctype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetvectype_ DMGETVECTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetvectype_ dmgetvectype
#endif
PETSC_EXTERN void dmgetvectype_(DM *da, char *ctype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_ctype)
{
  char* c_ctype = PETSC_NULLPTR;
  *ierr = DMGetVecType(*da, (const char **)&c_ctype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)ctype, c_ctype, l_ctype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, ctype, l_ctype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetiscoloringtype_ DMSETISCOLORINGTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetiscoloringtype_ dmsetiscoloringtype
#endif
PETSC_EXTERN void dmsetiscoloringtype_(DM *dm, ISColoringType *ctype, PetscErrorCode *ierr)
{
  *ierr = DMSetISColoringType(*dm, *ctype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetiscoloringtype_ DMGETISCOLORINGTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetiscoloringtype_ dmgetiscoloringtype
#endif
PETSC_EXTERN void dmgetiscoloringtype_(DM *dm, ISColoringType *ctype, PetscErrorCode *ierr)
{
  *ierr = DMGetISColoringType(*dm, ctype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetmattype_ DMSETMATTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetmattype_ dmsetmattype
#endif
PETSC_EXTERN void dmsetmattype_(DM *dm, char *ctype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_ctype)
{
  char* c_ctype;
  FIXCHAR(ctype, l_ctype, c_ctype);
  *ierr = DMSetMatType(*dm, c_ctype);
  if (*ierr) return;
  FREECHAR(ctype, c_ctype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetmattype_ DMGETMATTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetmattype_ dmgetmattype
#endif
PETSC_EXTERN void dmgetmattype_(DM *dm, char *ctype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_ctype)
{
  char* c_ctype = PETSC_NULLPTR;
  *ierr = DMGetMatType(*dm, (const char **)&c_ctype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)ctype, c_ctype, l_ctype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, ctype, l_ctype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetoptionsprefix_ DMSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetoptionsprefix_ dmsetoptionsprefix
#endif
PETSC_EXTERN void dmsetoptionsprefix_(DM *dm, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = DMSetOptionsPrefix(*dm, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmappendoptionsprefix_ DMAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmappendoptionsprefix_ dmappendoptionsprefix
#endif
PETSC_EXTERN void dmappendoptionsprefix_(DM *dm, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = DMAppendOptionsPrefix(*dm, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetoptionsprefix_ DMGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetoptionsprefix_ dmgetoptionsprefix
#endif
PETSC_EXTERN void dmgetoptionsprefix_(DM *dm, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix = PETSC_NULLPTR;
  *ierr = DMGetOptionsPrefix(*dm, (const char **)&c_prefix);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)prefix, c_prefix, l_prefix);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, prefix, l_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdestroy_ DMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdestroy_ dmdestroy
#endif
PETSC_EXTERN void dmdestroy_(DM *dm, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(dm);
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMDestroy(dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetup_ DMSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetup_ dmsetup
#endif
PETSC_EXTERN void dmsetup_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMSetUp(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetfromoptions_ DMSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetfromoptions_ dmsetfromoptions
#endif
PETSC_EXTERN void dmsetfromoptions_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMSetFromOptions(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmviewfromoptions_ DMVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmviewfromoptions_ dmviewfromoptions
#endif
PETSC_EXTERN void dmviewfromoptions_(DM *dm, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMViewFromOptions(*dm, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmview_ DMVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmview_ dmview
#endif
PETSC_EXTERN void dmview_(DM *dm, PetscViewer *v, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = DMView(*dm, v_v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreateglobalvector_ DMCREATEGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreateglobalvector_ dmcreateglobalvector
#endif
PETSC_EXTERN void dmcreateglobalvector_(DM *dm, Vec *vec, PetscErrorCode *ierr)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMCreateGlobalVector(*dm, vec);
  if (*ierr) return;
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatelocalvector_ DMCREATELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatelocalvector_ dmcreatelocalvector
#endif
PETSC_EXTERN void dmcreatelocalvector_(DM *dm, Vec *vec, PetscErrorCode *ierr)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMCreateLocalVector(*dm, vec);
  if (*ierr) return;
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlocaltoglobalmapping_ DMGETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlocaltoglobalmapping_ dmgetlocaltoglobalmapping
#endif
PETSC_EXTERN void dmgetlocaltoglobalmapping_(DM *dm, ISLocalToGlobalMapping *ltog, PetscErrorCode *ierr)
{
  PetscBool null_ltog = !*(void**) ltog ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ltog);
  *ierr = DMGetLocalToGlobalMapping(*dm, ltog);
  if (*ierr) return;
  if (! null_ltog && !*(void**) ltog) *(void **) ltog = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetblocksize_ DMGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetblocksize_ dmgetblocksize
#endif
PETSC_EXTERN void dmgetblocksize_(DM *dm, PetscInt *bs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bs);
  *ierr = DMGetBlockSize(*dm, bs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreateinterpolation_ DMCREATEINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreateinterpolation_ dmcreateinterpolation
#endif
PETSC_EXTERN void dmcreateinterpolation_(DM *dmc, DM *dmf, Mat *mat, Vec *vec, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMCreateInterpolation(*dmc, *dmf, mat, vec);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreateinterpolationscale_ DMCREATEINTERPOLATIONSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreateinterpolationscale_ dmcreateinterpolationscale
#endif
PETSC_EXTERN void dmcreateinterpolationscale_(DM *dac, DM *daf, Mat *mat, Vec *scale, PetscErrorCode *ierr)
{
  PetscBool null_scale = !*(void**) scale ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(scale);
  *ierr = DMCreateInterpolationScale(*dac, *daf, *mat, scale);
  if (*ierr) return;
  if (! null_scale && !*(void**) scale) *(void **) scale = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreaterestriction_ DMCREATERESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreaterestriction_ dmcreaterestriction
#endif
PETSC_EXTERN void dmcreaterestriction_(DM *dmc, DM *dmf, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = DMCreateRestriction(*dmc, *dmf, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreateinjection_ DMCREATEINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreateinjection_ dmcreateinjection
#endif
PETSC_EXTERN void dmcreateinjection_(DM *dac, DM *daf, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = DMCreateInjection(*dac, *daf, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatemassmatrix_ DMCREATEMASSMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatemassmatrix_ dmcreatemassmatrix
#endif
PETSC_EXTERN void dmcreatemassmatrix_(DM *dmc, DM *dmf, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = DMCreateMassMatrix(*dmc, *dmf, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatemassmatrixlumped_ DMCREATEMASSMATRIXLUMPED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatemassmatrixlumped_ dmcreatemassmatrixlumped
#endif
PETSC_EXTERN void dmcreatemassmatrixlumped_(DM *dm, Vec *llm, Vec *lm, PetscErrorCode *ierr)
{
  PetscBool null_llm = !*(void**) llm ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_lm = !*(void**) lm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(llm);
  CHKFORTRANNULLOBJECT(lm);
  *ierr = DMCreateMassMatrixLumped(*dm, llm, lm);
  if (*ierr) return;
  if (! null_llm && !*(void**) llm) *(void **) llm = (void *)-2;
  if (! null_lm && !*(void**) lm) *(void **) lm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreategradientmatrix_ DMCREATEGRADIENTMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreategradientmatrix_ dmcreategradientmatrix
#endif
PETSC_EXTERN void dmcreategradientmatrix_(DM *dmc, DM *dmf, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = DMCreateGradientMatrix(*dmc, *dmf, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatecoloring_ DMCREATECOLORING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatecoloring_ dmcreatecoloring
#endif
PETSC_EXTERN void dmcreatecoloring_(DM *dm, ISColoringType *ctype, ISColoring *coloring, PetscErrorCode *ierr)
{
  PetscBool null_coloring = !*(void**) coloring ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(coloring);
  *ierr = DMCreateColoring(*dm, *ctype, coloring);
  if (*ierr) return;
  if (! null_coloring && !*(void**) coloring) *(void **) coloring = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatematrix_ DMCREATEMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatematrix_ dmcreatematrix
#endif
PETSC_EXTERN void dmcreatematrix_(DM *dm, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = DMCreateMatrix(*dm, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetmatrixpreallocateskip_ DMSETMATRIXPREALLOCATESKIP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetmatrixpreallocateskip_ dmsetmatrixpreallocateskip
#endif
PETSC_EXTERN void dmsetmatrixpreallocateskip_(DM *dm, PetscBool *skip, PetscErrorCode *ierr)
{
  *ierr = DMSetMatrixPreallocateSkip(*dm, *skip ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetmatrixpreallocateonly_ DMSETMATRIXPREALLOCATEONLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetmatrixpreallocateonly_ dmsetmatrixpreallocateonly
#endif
PETSC_EXTERN void dmsetmatrixpreallocateonly_(DM *dm, PetscBool *only, PetscErrorCode *ierr)
{
  *ierr = DMSetMatrixPreallocateOnly(*dm, *only ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetmatrixstructureonly_ DMSETMATRIXSTRUCTUREONLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetmatrixstructureonly_ dmsetmatrixstructureonly
#endif
PETSC_EXTERN void dmsetmatrixstructureonly_(DM *dm, PetscBool *only, PetscErrorCode *ierr)
{
  *ierr = DMSetMatrixStructureOnly(*dm, *only ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetblockingtype_ DMSETBLOCKINGTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetblockingtype_ dmsetblockingtype
#endif
PETSC_EXTERN void dmsetblockingtype_(DM *dm, DMBlockingType *btype, PetscErrorCode *ierr)
{
  *ierr = DMSetBlockingType(*dm, *btype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetblockingtype_ DMGETBLOCKINGTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetblockingtype_ dmgetblockingtype
#endif
PETSC_EXTERN void dmgetblockingtype_(DM *dm, DMBlockingType *btype, PetscErrorCode *ierr)
{
  *ierr = DMGetBlockingType(*dm, btype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatesubdm_ DMCREATESUBDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatesubdm_ dmcreatesubdm
#endif
PETSC_EXTERN void dmcreatesubdm_(DM *dm, PetscInt *numFields, const PetscInt fields[], IS *is, DM *subdm, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_subdm = !*(void**) subdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(fields);
  CHKFORTRANNULLOBJECT(is);
  CHKFORTRANNULLOBJECT(subdm);
  *ierr = DMCreateSubDM(*dm, *numFields, fields, is, subdm);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
  if (! null_subdm && !*(void**) subdm) *(void **) subdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmrefine_ DMREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmrefine_ dmrefine
#endif
PETSC_EXTERN void dmrefine_(DM *dm, MPI_Fint *comm, DM *dmf, PetscErrorCode *ierr)
{
  PetscBool null_dmf = !*(void**) dmf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmf);
  *ierr = DMRefine(*dm, MPI_Comm_f2c(*(comm)), dmf);
  if (*ierr) return;
  if (! null_dmf && !*(void**) dmf) *(void **) dmf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolate_ DMINTERPOLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolate_ dminterpolate
#endif
PETSC_EXTERN void dminterpolate_(DM *coarse, Mat *interp, DM *fine, PetscErrorCode *ierr)
{
  *ierr = DMInterpolate(*coarse, *interp, *fine);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminterpolatesolution_ DMINTERPOLATESOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminterpolatesolution_ dminterpolatesolution
#endif
PETSC_EXTERN void dminterpolatesolution_(DM *coarse, DM *fine, Mat *interp, Vec *coarseSol, Vec *fineSol, PetscErrorCode *ierr)
{
  *ierr = DMInterpolateSolution(*coarse, *fine, *interp, *coarseSol, *fineSol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetrefinelevel_ DMGETREFINELEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetrefinelevel_ dmgetrefinelevel
#endif
PETSC_EXTERN void dmgetrefinelevel_(DM *dm, PetscInt *level, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(level);
  *ierr = DMGetRefineLevel(*dm, level);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetrefinelevel_ DMSETREFINELEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetrefinelevel_ dmsetrefinelevel
#endif
PETSC_EXTERN void dmsetrefinelevel_(DM *dm, PetscInt *level, PetscErrorCode *ierr)
{
  *ierr = DMSetRefineLevel(*dm, *level);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmextrude_ DMEXTRUDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmextrude_ dmextrude
#endif
PETSC_EXTERN void dmextrude_(DM *dm, PetscInt *layers, DM *dme, PetscErrorCode *ierr)
{
  PetscBool null_dme = !*(void**) dme ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dme);
  *ierr = DMExtrude(*dm, *layers, dme);
  if (*ierr) return;
  if (! null_dme && !*(void**) dme) *(void **) dme = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmhasbasistransform_ DMHASBASISTRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmhasbasistransform_ dmhasbasistransform
#endif
PETSC_EXTERN void dmhasbasistransform_(DM *dm, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = DMHasBasisTransform(*dm, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcopytransform_ DMCOPYTRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcopytransform_ dmcopytransform
#endif
PETSC_EXTERN void dmcopytransform_(DM *dm, DM *newdm, PetscErrorCode *ierr)
{
  *ierr = DMCopyTransform(*dm, *newdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmglobaltolocal_ DMGLOBALTOLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmglobaltolocal_ dmglobaltolocal
#endif
PETSC_EXTERN void dmglobaltolocal_(DM *dm, Vec *g, InsertMode *mode, Vec *l, PetscErrorCode *ierr)
{
  *ierr = DMGlobalToLocal(*dm, *g, *mode, *l);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmglobaltolocalbegin_ DMGLOBALTOLOCALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmglobaltolocalbegin_ dmglobaltolocalbegin
#endif
PETSC_EXTERN void dmglobaltolocalbegin_(DM *dm, Vec *g, InsertMode *mode, Vec *l, PetscErrorCode *ierr)
{
  *ierr = DMGlobalToLocalBegin(*dm, *g, *mode, *l);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmglobaltolocalend_ DMGLOBALTOLOCALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmglobaltolocalend_ dmglobaltolocalend
#endif
PETSC_EXTERN void dmglobaltolocalend_(DM *dm, Vec *g, InsertMode *mode, Vec *l, PetscErrorCode *ierr)
{
  *ierr = DMGlobalToLocalEnd(*dm, *g, *mode, *l);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocaltoglobal_ DMLOCALTOGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocaltoglobal_ dmlocaltoglobal
#endif
PETSC_EXTERN void dmlocaltoglobal_(DM *dm, Vec *l, InsertMode *mode, Vec *g, PetscErrorCode *ierr)
{
  *ierr = DMLocalToGlobal(*dm, *l, *mode, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocaltoglobalbegin_ DMLOCALTOGLOBALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocaltoglobalbegin_ dmlocaltoglobalbegin
#endif
PETSC_EXTERN void dmlocaltoglobalbegin_(DM *dm, Vec *l, InsertMode *mode, Vec *g, PetscErrorCode *ierr)
{
  *ierr = DMLocalToGlobalBegin(*dm, *l, *mode, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocaltoglobalend_ DMLOCALTOGLOBALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocaltoglobalend_ dmlocaltoglobalend
#endif
PETSC_EXTERN void dmlocaltoglobalend_(DM *dm, Vec *l, InsertMode *mode, Vec *g, PetscErrorCode *ierr)
{
  *ierr = DMLocalToGlobalEnd(*dm, *l, *mode, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocaltolocalbegin_ DMLOCALTOLOCALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocaltolocalbegin_ dmlocaltolocalbegin
#endif
PETSC_EXTERN void dmlocaltolocalbegin_(DM *dm, Vec *g, InsertMode *mode, Vec *l, PetscErrorCode *ierr)
{
  *ierr = DMLocalToLocalBegin(*dm, *g, *mode, *l);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocaltolocalend_ DMLOCALTOLOCALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocaltolocalend_ dmlocaltolocalend
#endif
PETSC_EXTERN void dmlocaltolocalend_(DM *dm, Vec *g, InsertMode *mode, Vec *l, PetscErrorCode *ierr)
{
  *ierr = DMLocalToLocalEnd(*dm, *g, *mode, *l);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcoarsen_ DMCOARSEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcoarsen_ dmcoarsen
#endif
PETSC_EXTERN void dmcoarsen_(DM *dm, MPI_Fint *comm, DM *dmc, PetscErrorCode *ierr)
{
  PetscBool null_dmc = !*(void**) dmc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmc);
  *ierr = DMCoarsen(*dm, MPI_Comm_f2c(*(comm)), dmc);
  if (*ierr) return;
  if (! null_dmc && !*(void**) dmc) *(void **) dmc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmrestrict_ DMRESTRICT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmrestrict_ dmrestrict
#endif
PETSC_EXTERN void dmrestrict_(DM *fine, Mat *restrct, Vec *rscale, Mat *inject, DM *coarse, PetscErrorCode *ierr)
{
  *ierr = DMRestrict(*fine, *restrct, *rscale, *inject, *coarse);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsubdomainrestrict_ DMSUBDOMAINRESTRICT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsubdomainrestrict_ dmsubdomainrestrict
#endif
PETSC_EXTERN void dmsubdomainrestrict_(DM *global, VecScatter *oscatter, VecScatter *gscatter, DM *subdm, PetscErrorCode *ierr)
{
  *ierr = DMSubDomainRestrict(*global, *oscatter, *gscatter, *subdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoarsenlevel_ DMGETCOARSENLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoarsenlevel_ dmgetcoarsenlevel
#endif
PETSC_EXTERN void dmgetcoarsenlevel_(DM *dm, PetscInt *level, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(level);
  *ierr = DMGetCoarsenLevel(*dm, level);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcoarsenlevel_ DMSETCOARSENLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcoarsenlevel_ dmsetcoarsenlevel
#endif
PETSC_EXTERN void dmsetcoarsenlevel_(DM *dm, PetscInt *level, PetscErrorCode *ierr)
{
  *ierr = DMSetCoarsenLevel(*dm, *level);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmrefinehierarchy_ DMREFINEHIERARCHY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmrefinehierarchy_ dmrefinehierarchy
#endif
PETSC_EXTERN void dmrefinehierarchy_(DM *dm, PetscInt *nlevels, DM dmf[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(dmf);
  *ierr = DMRefineHierarchy(*dm, *nlevels, dmf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcoarsenhierarchy_ DMCOARSENHIERARCHY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcoarsenhierarchy_ dmcoarsenhierarchy
#endif
PETSC_EXTERN void dmcoarsenhierarchy_(DM *dm, PetscInt *nlevels, DM dmc[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(dmc);
  *ierr = DMCoarsenHierarchy(*dm, *nlevels, dmc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetapplicationcontext_ DMSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetapplicationcontext_ dmsetapplicationcontext
#endif
PETSC_EXTERN void dmsetapplicationcontext_(DM *dm, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMSetApplicationContext(*dm, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetapplicationcontextcptr_ DMGETAPPLICATIONCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetapplicationcontextcptr_ dmgetapplicationcontextcptr
#endif
PETSC_EXTERN void dmgetapplicationcontextcptr_(DM *dm, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = DMGetApplicationContext(*dm, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmhasvariablebounds_ DMHASVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmhasvariablebounds_ dmhasvariablebounds
#endif
PETSC_EXTERN void dmhasvariablebounds_(DM *dm, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = DMHasVariableBounds(*dm, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcomputevariablebounds_ DMCOMPUTEVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcomputevariablebounds_ dmcomputevariablebounds
#endif
PETSC_EXTERN void dmcomputevariablebounds_(DM *dm, Vec *xl, Vec *xu, PetscErrorCode *ierr)
{
  *ierr = DMComputeVariableBounds(*dm, *xl, *xu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmhascoloring_ DMHASCOLORING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmhascoloring_ dmhascoloring
#endif
PETSC_EXTERN void dmhascoloring_(DM *dm, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = DMHasColoring(*dm, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmhascreaterestriction_ DMHASCREATERESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmhascreaterestriction_ dmhascreaterestriction
#endif
PETSC_EXTERN void dmhascreaterestriction_(DM *dm, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = DMHasCreateRestriction(*dm, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmhascreateinjection_ DMHASCREATEINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmhascreateinjection_ dmhascreateinjection
#endif
PETSC_EXTERN void dmhascreateinjection_(DM *dm, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = DMHasCreateInjection(*dm, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsettype_ DMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsettype_ dmsettype
#endif
PETSC_EXTERN void dmsettype_(DM *dm, char *method, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_method)
{
  char* c_method;
  FIXCHAR(method, l_method, c_method);
  *ierr = DMSetType(*dm, c_method);
  if (*ierr) return;
  FREECHAR(method, c_method);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgettype_ DMGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgettype_ dmgettype
#endif
PETSC_EXTERN void dmgettype_(DM *dm, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = DMGetType(*dm, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmconvert_ DMCONVERT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmconvert_ dmconvert
#endif
PETSC_EXTERN void dmconvert_(DM *dm, char *newtype, DM *M, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_newtype)
{
  PetscBool null_M = !*(void**) M ? PETSC_TRUE : PETSC_FALSE;
  char* c_newtype;
  FIXCHAR(newtype, l_newtype, c_newtype);
  CHKFORTRANNULLOBJECT(M);
  *ierr = DMConvert(*dm, c_newtype, M);
  if (*ierr) return;
  FREECHAR(newtype, c_newtype);
  if (! null_M && !*(void**) M) *(void **) M = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmload_ DMLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmload_ dmload
#endif
PETSC_EXTERN void dmload_(DM *newdm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMLoad(*newdm, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmprintcellindices_ DMPRINTCELLINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmprintcellindices_ dmprintcellindices
#endif
PETSC_EXTERN void dmprintcellindices_(PetscInt *c, char name[], PetscInt *len, const PetscInt x[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(x);
  *ierr = DMPrintCellIndices(*c, c_name, *len, x);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmprintcellvector_ DMPRINTCELLVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmprintcellvector_ dmprintcellvector
#endif
PETSC_EXTERN void dmprintcellvector_(PetscInt *c, char name[], PetscInt *len, const PetscScalar x[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLSCALAR(x);
  *ierr = DMPrintCellVector(*c, c_name, *len, x);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmprintcellvectorreal_ DMPRINTCELLVECTORREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmprintcellvectorreal_ dmprintcellvectorreal
#endif
PETSC_EXTERN void dmprintcellvectorreal_(PetscInt *c, char name[], PetscInt *len, const PetscReal x[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLREAL(x);
  *ierr = DMPrintCellVectorReal(*c, c_name, *len, x);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmprintcellmatrix_ DMPRINTCELLMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmprintcellmatrix_ dmprintcellmatrix
#endif
PETSC_EXTERN void dmprintcellmatrix_(PetscInt *c, char name[], PetscInt *rows, PetscInt *cols, const PetscScalar A[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLSCALAR(A);
  *ierr = DMPrintCellMatrix(*c, c_name, *rows, *cols, A);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmprintlocalvec_ DMPRINTLOCALVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmprintlocalvec_ dmprintlocalvec
#endif
PETSC_EXTERN void dmprintlocalvec_(DM *dm, char name[], PetscReal *tol, Vec *X, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMPrintLocalVec(*dm, c_name, *tol, *X);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlocalsection_ DMGETLOCALSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlocalsection_ dmgetlocalsection
#endif
PETSC_EXTERN void dmgetlocalsection_(DM *dm, PetscSection *section, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(section);
  *ierr = DMGetLocalSection(*dm, section);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetlocalsection_ DMSETLOCALSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetlocalsection_ dmsetlocalsection
#endif
PETSC_EXTERN void dmsetlocalsection_(DM *dm, PetscSection *section, PetscErrorCode *ierr)
{
  *ierr = DMSetLocalSection(*dm, *section);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetdefaultconstraints_ DMGETDEFAULTCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetdefaultconstraints_ dmgetdefaultconstraints
#endif
PETSC_EXTERN void dmgetdefaultconstraints_(DM *dm, PetscSection *section, Mat *mat, Vec *bias, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_bias = !*(void**) bias ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(section);
  CHKFORTRANNULLOBJECT(mat);
  CHKFORTRANNULLOBJECT(bias);
  *ierr = DMGetDefaultConstraints(*dm, section, mat, bias);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
  if (! null_bias && !*(void**) bias) *(void **) bias = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetdefaultconstraints_ DMSETDEFAULTCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetdefaultconstraints_ dmsetdefaultconstraints
#endif
PETSC_EXTERN void dmsetdefaultconstraints_(DM *dm, PetscSection *section, Mat *mat, Vec *bias, PetscErrorCode *ierr)
{
  *ierr = DMSetDefaultConstraints(*dm, *section, *mat, *bias);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetglobalsection_ DMGETGLOBALSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetglobalsection_ dmgetglobalsection
#endif
PETSC_EXTERN void dmgetglobalsection_(DM *dm, PetscSection *section, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(section);
  *ierr = DMGetGlobalSection(*dm, section);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetglobalsection_ DMSETGLOBALSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetglobalsection_ dmsetglobalsection
#endif
PETSC_EXTERN void dmsetglobalsection_(DM *dm, PetscSection *section, PetscErrorCode *ierr)
{
  *ierr = DMSetGlobalSection(*dm, *section);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetsectionsf_ DMGETSECTIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetsectionsf_ dmgetsectionsf
#endif
PETSC_EXTERN void dmgetsectionsf_(DM *dm, PetscSF *sf, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  *ierr = DMGetSectionSF(*dm, sf);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetsectionsf_ DMSETSECTIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetsectionsf_ dmsetsectionsf
#endif
PETSC_EXTERN void dmsetsectionsf_(DM *dm, PetscSF *sf, PetscErrorCode *ierr)
{
  *ierr = DMSetSectionSF(*dm, *sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatesectionsf_ DMCREATESECTIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatesectionsf_ dmcreatesectionsf
#endif
PETSC_EXTERN void dmcreatesectionsf_(DM *dm, PetscSection *localSection, PetscSection *globalSection, PetscErrorCode *ierr)
{
  *ierr = DMCreateSectionSF(*dm, *localSection, *globalSection);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetpointsf_ DMGETPOINTSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetpointsf_ dmgetpointsf
#endif
PETSC_EXTERN void dmgetpointsf_(DM *dm, PetscSF *sf, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  *ierr = DMGetPointSF(*dm, sf);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetpointsf_ DMSETPOINTSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetpointsf_ dmsetpointsf
#endif
PETSC_EXTERN void dmsetpointsf_(DM *dm, PetscSF *sf, PetscErrorCode *ierr)
{
  *ierr = DMSetPointSF(*dm, *sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetnaturalsf_ DMGETNATURALSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetnaturalsf_ dmgetnaturalsf
#endif
PETSC_EXTERN void dmgetnaturalsf_(DM *dm, PetscSF *sf, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  *ierr = DMGetNaturalSF(*dm, sf);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetnaturalsf_ DMSETNATURALSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetnaturalsf_ dmsetnaturalsf
#endif
PETSC_EXTERN void dmsetnaturalsf_(DM *dm, PetscSF *sf, PetscErrorCode *ierr)
{
  *ierr = DMSetNaturalSF(*dm, *sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmclearfields_ DMCLEARFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmclearfields_ dmclearfields
#endif
PETSC_EXTERN void dmclearfields_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMClearFields(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetnumfields_ DMGETNUMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetnumfields_ dmgetnumfields
#endif
PETSC_EXTERN void dmgetnumfields_(DM *dm, PetscInt *numFields, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numFields);
  *ierr = DMGetNumFields(*dm, numFields);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetnumfields_ DMSETNUMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetnumfields_ dmsetnumfields
#endif
PETSC_EXTERN void dmsetnumfields_(DM *dm, PetscInt *numFields, PetscErrorCode *ierr)
{
  *ierr = DMSetNumFields(*dm, *numFields);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetfield_ DMGETFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetfield_ dmgetfield
#endif
PETSC_EXTERN void dmgetfield_(DM *dm, PetscInt *f, DMLabel *label, PetscObject *disc, PetscErrorCode *ierr)
{
  PetscBool null_label = !*(void**) label ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_disc = !*(void**) disc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(label);
  CHKFORTRANNULLOBJECT(disc);
  *ierr = DMGetField(*dm, *f, label, disc);
  if (*ierr) return;
  if (! null_label && !*(void**) label) *(void **) label = (void *)-2;
  if (! null_disc && !*(void**) disc) *(void **) disc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetfield_ DMSETFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetfield_ dmsetfield
#endif
PETSC_EXTERN void dmsetfield_(DM *dm, PetscInt *f, DMLabel *label, PetscObject *disc, PetscErrorCode *ierr)
{
  *ierr = DMSetField(*dm, *f, *label, *disc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmaddfield_ DMADDFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmaddfield_ dmaddfield
#endif
PETSC_EXTERN void dmaddfield_(DM *dm, DMLabel *label, PetscObject *disc, PetscErrorCode *ierr)
{
  *ierr = DMAddField(*dm, *label, *disc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetfieldavoidtensor_ DMSETFIELDAVOIDTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetfieldavoidtensor_ dmsetfieldavoidtensor
#endif
PETSC_EXTERN void dmsetfieldavoidtensor_(DM *dm, PetscInt *f, PetscBool *avoidTensor, PetscErrorCode *ierr)
{
  *ierr = DMSetFieldAvoidTensor(*dm, *f, *avoidTensor ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetfieldavoidtensor_ DMGETFIELDAVOIDTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetfieldavoidtensor_ dmgetfieldavoidtensor
#endif
PETSC_EXTERN void dmgetfieldavoidtensor_(DM *dm, PetscInt *f, PetscBool *avoidTensor, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(avoidTensor);
  *ierr = DMGetFieldAvoidTensor(*dm, *f, avoidTensor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcopyfields_ DMCOPYFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcopyfields_ dmcopyfields
#endif
PETSC_EXTERN void dmcopyfields_(DM *dm, PetscInt *minDegree, PetscInt *maxDegree, DM *newdm, PetscErrorCode *ierr)
{
  *ierr = DMCopyFields(*dm, *minDegree, *maxDegree, *newdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetadjacency_ DMGETADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetadjacency_ dmgetadjacency
#endif
PETSC_EXTERN void dmgetadjacency_(DM *dm, PetscInt *f, PetscBool *useCone, PetscBool *useClosure, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(useCone);
  CHKFORTRANNULLBOOL(useClosure);
  *ierr = DMGetAdjacency(*dm, *f, useCone, useClosure);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetadjacency_ DMSETADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetadjacency_ dmsetadjacency
#endif
PETSC_EXTERN void dmsetadjacency_(DM *dm, PetscInt *f, PetscBool *useCone, PetscBool *useClosure, PetscErrorCode *ierr)
{
  *ierr = DMSetAdjacency(*dm, *f, *useCone ? PETSC_TRUE : PETSC_FALSE, *useClosure ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetbasicadjacency_ DMGETBASICADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetbasicadjacency_ dmgetbasicadjacency
#endif
PETSC_EXTERN void dmgetbasicadjacency_(DM *dm, PetscBool *useCone, PetscBool *useClosure, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(useCone);
  CHKFORTRANNULLBOOL(useClosure);
  *ierr = DMGetBasicAdjacency(*dm, useCone, useClosure);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetbasicadjacency_ DMSETBASICADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetbasicadjacency_ dmsetbasicadjacency
#endif
PETSC_EXTERN void dmsetbasicadjacency_(DM *dm, PetscBool *useCone, PetscBool *useClosure, PetscErrorCode *ierr)
{
  *ierr = DMSetBasicAdjacency(*dm, *useCone ? PETSC_TRUE : PETSC_FALSE, *useClosure ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetnumds_ DMGETNUMDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetnumds_ dmgetnumds
#endif
PETSC_EXTERN void dmgetnumds_(DM *dm, PetscInt *Nds, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Nds);
  *ierr = DMGetNumDS(*dm, Nds);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcleards_ DMCLEARDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcleards_ dmcleards
#endif
PETSC_EXTERN void dmcleards_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMClearDS(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetds_ DMGETDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetds_ dmgetds
#endif
PETSC_EXTERN void dmgetds_(DM *dm, PetscDS *ds, PetscErrorCode *ierr)
{
  PetscBool null_ds = !*(void**) ds ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ds);
  *ierr = DMGetDS(*dm, ds);
  if (*ierr) return;
  if (! null_ds && !*(void**) ds) *(void **) ds = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcellds_ DMGETCELLDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcellds_ dmgetcellds
#endif
PETSC_EXTERN void dmgetcellds_(DM *dm, PetscInt *point, PetscDS *ds, PetscDS *dsIn, PetscErrorCode *ierr)
{
  PetscBool null_ds = !*(void**) ds ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_dsIn = !*(void**) dsIn ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ds);
  CHKFORTRANNULLOBJECT(dsIn);
  *ierr = DMGetCellDS(*dm, *point, ds, dsIn);
  if (*ierr) return;
  if (! null_ds && !*(void**) ds) *(void **) ds = (void *)-2;
  if (! null_dsIn && !*(void**) dsIn) *(void **) dsIn = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetregionds_ DMGETREGIONDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetregionds_ dmgetregionds
#endif
PETSC_EXTERN void dmgetregionds_(DM *dm, DMLabel *label, IS *fields, PetscDS *ds, PetscDS *dsIn, PetscErrorCode *ierr)
{
  PetscBool null_fields = !*(void**) fields ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_ds = !*(void**) ds ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_dsIn = !*(void**) dsIn ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fields);
  CHKFORTRANNULLOBJECT(ds);
  CHKFORTRANNULLOBJECT(dsIn);
  *ierr = DMGetRegionDS(*dm, *label, fields, ds, dsIn);
  if (*ierr) return;
  if (! null_fields && !*(void**) fields) *(void **) fields = (void *)-2;
  if (! null_ds && !*(void**) ds) *(void **) ds = (void *)-2;
  if (! null_dsIn && !*(void**) dsIn) *(void **) dsIn = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetregionds_ DMSETREGIONDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetregionds_ dmsetregionds
#endif
PETSC_EXTERN void dmsetregionds_(DM *dm, DMLabel *label, IS *fields, PetscDS *ds, PetscDS *dsIn, PetscErrorCode *ierr)
{
  *ierr = DMSetRegionDS(*dm, *label, *fields, *ds, *dsIn);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetregionnumds_ DMGETREGIONNUMDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetregionnumds_ dmgetregionnumds
#endif
PETSC_EXTERN void dmgetregionnumds_(DM *dm, PetscInt *num, DMLabel *label, IS *fields, PetscDS *ds, PetscDS *dsIn, PetscErrorCode *ierr)
{
  PetscBool null_label = !*(void**) label ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_fields = !*(void**) fields ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_ds = !*(void**) ds ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_dsIn = !*(void**) dsIn ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(label);
  CHKFORTRANNULLOBJECT(fields);
  CHKFORTRANNULLOBJECT(ds);
  CHKFORTRANNULLOBJECT(dsIn);
  *ierr = DMGetRegionNumDS(*dm, *num, label, fields, ds, dsIn);
  if (*ierr) return;
  if (! null_label && !*(void**) label) *(void **) label = (void *)-2;
  if (! null_fields && !*(void**) fields) *(void **) fields = (void *)-2;
  if (! null_ds && !*(void**) ds) *(void **) ds = (void *)-2;
  if (! null_dsIn && !*(void**) dsIn) *(void **) dsIn = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetregionnumds_ DMSETREGIONNUMDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetregionnumds_ dmsetregionnumds
#endif
PETSC_EXTERN void dmsetregionnumds_(DM *dm, PetscInt *num, DMLabel *label, IS *fields, PetscDS *ds, PetscDS *dsIn, PetscErrorCode *ierr)
{
  *ierr = DMSetRegionNumDS(*dm, *num, *label, *fields, *ds, *dsIn);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfindregionnum_ DMFINDREGIONNUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfindregionnum_ dmfindregionnum
#endif
PETSC_EXTERN void dmfindregionnum_(DM *dm, PetscDS *ds, PetscInt *num, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(num);
  *ierr = DMFindRegionNum(*dm, *ds, num);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatefedefault_ DMCREATEFEDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatefedefault_ dmcreatefedefault
#endif
PETSC_EXTERN void dmcreatefedefault_(DM *dm, PetscInt *Nc, char prefix[], PetscInt *qorder, PetscFE *fem, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  PetscBool null_fem = !*(void**) fem ? PETSC_TRUE : PETSC_FALSE;
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  CHKFORTRANNULLOBJECT(fem);
  *ierr = DMCreateFEDefault(*dm, *Nc, c_prefix, *qorder, fem);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
  if (! null_fem && !*(void**) fem) *(void **) fem = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreateds_ DMCREATEDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreateds_ dmcreateds
#endif
PETSC_EXTERN void dmcreateds_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMCreateDS(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmusetensororder_ DMUSETENSORORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmusetensororder_ dmusetensororder
#endif
PETSC_EXTERN void dmusetensororder_(DM *dm, PetscBool *tensor, PetscErrorCode *ierr)
{
  *ierr = DMUseTensorOrder(*dm, *tensor ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcomputeexactsolution_ DMCOMPUTEEXACTSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcomputeexactsolution_ dmcomputeexactsolution
#endif
PETSC_EXTERN void dmcomputeexactsolution_(DM *dm, PetscReal *time, Vec *u, Vec *u_t, PetscErrorCode *ierr)
{
  *ierr = DMComputeExactSolution(*dm, *time, *u, *u_t);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcopyds_ DMCOPYDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcopyds_ dmcopyds
#endif
PETSC_EXTERN void dmcopyds_(DM *dm, PetscInt *minDegree, PetscInt *maxDegree, DM *newdm, PetscErrorCode *ierr)
{
  *ierr = DMCopyDS(*dm, *minDegree, *maxDegree, *newdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcopydisc_ DMCOPYDISC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcopydisc_ dmcopydisc
#endif
PETSC_EXTERN void dmcopydisc_(DM *dm, DM *newdm, PetscErrorCode *ierr)
{
  *ierr = DMCopyDisc(*dm, *newdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetdimension_ DMGETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetdimension_ dmgetdimension
#endif
PETSC_EXTERN void dmgetdimension_(DM *dm, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = DMGetDimension(*dm, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetdimension_ DMSETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetdimension_ dmsetdimension
#endif
PETSC_EXTERN void dmsetdimension_(DM *dm, PetscInt *dim, PetscErrorCode *ierr)
{
  *ierr = DMSetDimension(*dm, *dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetdimpoints_ DMGETDIMPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetdimpoints_ dmgetdimpoints
#endif
PETSC_EXTERN void dmgetdimpoints_(DM *dm, PetscInt *dim, PetscInt *pStart, PetscInt *pEnd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(pStart);
  CHKFORTRANNULLINTEGER(pEnd);
  *ierr = DMGetDimPoints(*dm, *dim, pStart, pEnd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetoutputdm_ DMGETOUTPUTDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetoutputdm_ dmgetoutputdm
#endif
PETSC_EXTERN void dmgetoutputdm_(DM *dm, DM *odm, PetscErrorCode *ierr)
{
  PetscBool null_odm = !*(void**) odm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(odm);
  *ierr = DMGetOutputDM(*dm, odm);
  if (*ierr) return;
  if (! null_odm && !*(void**) odm) *(void **) odm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetoutputsequencenumber_ DMGETOUTPUTSEQUENCENUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetoutputsequencenumber_ dmgetoutputsequencenumber
#endif
PETSC_EXTERN void dmgetoutputsequencenumber_(DM *dm, PetscInt *num, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(num);
  CHKFORTRANNULLREAL(val);
  *ierr = DMGetOutputSequenceNumber(*dm, num, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetoutputsequencenumber_ DMSETOUTPUTSEQUENCENUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetoutputsequencenumber_ dmsetoutputsequencenumber
#endif
PETSC_EXTERN void dmsetoutputsequencenumber_(DM *dm, PetscInt *num, PetscReal *val, PetscErrorCode *ierr)
{
  *ierr = DMSetOutputSequenceNumber(*dm, *num, *val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmoutputsequenceload_ DMOUTPUTSEQUENCELOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmoutputsequenceload_ dmoutputsequenceload
#endif
PETSC_EXTERN void dmoutputsequenceload_(DM *dm, PetscViewer *viewer, char name[], PetscInt *num, PetscReal *val, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLREAL(val);
  *ierr = DMOutputSequenceLoad(*dm, v_viewer, c_name, *num, val);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetoutputsequencelength_ DMGETOUTPUTSEQUENCELENGTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetoutputsequencelength_ dmgetoutputsequencelength
#endif
PETSC_EXTERN void dmgetoutputsequencelength_(DM *dm, PetscViewer *viewer, char name[], PetscInt *len, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(len);
  *ierr = DMGetOutputSequenceLength(*dm, v_viewer, c_name, len);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetusenatural_ DMGETUSENATURAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetusenatural_ dmgetusenatural
#endif
PETSC_EXTERN void dmgetusenatural_(DM *dm, PetscBool *useNatural, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(useNatural);
  *ierr = DMGetUseNatural(*dm, useNatural);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetusenatural_ DMSETUSENATURAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetusenatural_ dmsetusenatural
#endif
PETSC_EXTERN void dmsetusenatural_(DM *dm, PetscBool *useNatural, PetscErrorCode *ierr)
{
  *ierr = DMSetUseNatural(*dm, *useNatural ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatelabel_ DMCREATELABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatelabel_ dmcreatelabel
#endif
PETSC_EXTERN void dmcreatelabel_(DM *dm, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMCreateLabel(*dm, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatelabelatindex_ DMCREATELABELATINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatelabelatindex_ dmcreatelabelatindex
#endif
PETSC_EXTERN void dmcreatelabelatindex_(DM *dm, PetscInt *l, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMCreateLabelAtIndex(*dm, *l, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlabelvalue_ DMGETLABELVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlabelvalue_ dmgetlabelvalue
#endif
PETSC_EXTERN void dmgetlabelvalue_(DM *dm, char name[], PetscInt *point, PetscInt *value, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(value);
  *ierr = DMGetLabelValue(*dm, c_name, *point, value);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetlabelvalue_ DMSETLABELVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetlabelvalue_ dmsetlabelvalue
#endif
PETSC_EXTERN void dmsetlabelvalue_(DM *dm, char name[], PetscInt *point, PetscInt *value, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMSetLabelValue(*dm, c_name, *point, *value);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmclearlabelvalue_ DMCLEARLABELVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmclearlabelvalue_ dmclearlabelvalue
#endif
PETSC_EXTERN void dmclearlabelvalue_(DM *dm, char name[], PetscInt *point, PetscInt *value, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMClearLabelValue(*dm, c_name, *point, *value);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlabelsize_ DMGETLABELSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlabelsize_ dmgetlabelsize
#endif
PETSC_EXTERN void dmgetlabelsize_(DM *dm, char name[], PetscInt *size, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(size);
  *ierr = DMGetLabelSize(*dm, c_name, size);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlabelidis_ DMGETLABELIDIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlabelidis_ dmgetlabelidis
#endif
PETSC_EXTERN void dmgetlabelidis_(DM *dm, char name[], IS *ids, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_ids = !*(void**) ids ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(ids);
  *ierr = DMGetLabelIdIS(*dm, c_name, ids);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_ids && !*(void**) ids) *(void **) ids = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetstratumsize_ DMGETSTRATUMSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetstratumsize_ dmgetstratumsize
#endif
PETSC_EXTERN void dmgetstratumsize_(DM *dm, char name[], PetscInt *value, PetscInt *size, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(size);
  *ierr = DMGetStratumSize(*dm, c_name, *value, size);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetstratumis_ DMGETSTRATUMIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetstratumis_ dmgetstratumis
#endif
PETSC_EXTERN void dmgetstratumis_(DM *dm, char name[], PetscInt *value, IS *points, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_points = !*(void**) points ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(points);
  *ierr = DMGetStratumIS(*dm, c_name, *value, points);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_points && !*(void**) points) *(void **) points = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetstratumis_ DMSETSTRATUMIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetstratumis_ dmsetstratumis
#endif
PETSC_EXTERN void dmsetstratumis_(DM *dm, char name[], PetscInt *value, IS *points, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMSetStratumIS(*dm, c_name, *value, *points);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmclearlabelstratum_ DMCLEARLABELSTRATUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmclearlabelstratum_ dmclearlabelstratum
#endif
PETSC_EXTERN void dmclearlabelstratum_(DM *dm, char name[], PetscInt *value, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMClearLabelStratum(*dm, c_name, *value);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetnumlabels_ DMGETNUMLABELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetnumlabels_ dmgetnumlabels
#endif
PETSC_EXTERN void dmgetnumlabels_(DM *dm, PetscInt *numLabels, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numLabels);
  *ierr = DMGetNumLabels(*dm, numLabels);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlabelname_ DMGETLABELNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlabelname_ dmgetlabelname
#endif
PETSC_EXTERN void dmgetlabelname_(DM *dm, PetscInt *n, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = DMGetLabelName(*dm, *n, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmhaslabel_ DMHASLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmhaslabel_ dmhaslabel
#endif
PETSC_EXTERN void dmhaslabel_(DM *dm, char name[], PetscBool *hasLabel, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(hasLabel);
  *ierr = DMHasLabel(*dm, c_name, hasLabel);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlabel_ DMGETLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlabel_ dmgetlabel
#endif
PETSC_EXTERN void dmgetlabel_(DM *dm, char name[], DMLabel *label, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_label = !*(void**) label ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(label);
  *ierr = DMGetLabel(*dm, c_name, label);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_label && !*(void**) label) *(void **) label = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlabelbynum_ DMGETLABELBYNUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlabelbynum_ dmgetlabelbynum
#endif
PETSC_EXTERN void dmgetlabelbynum_(DM *dm, PetscInt *n, DMLabel *label, PetscErrorCode *ierr)
{
  PetscBool null_label = !*(void**) label ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(label);
  *ierr = DMGetLabelByNum(*dm, *n, label);
  if (*ierr) return;
  if (! null_label && !*(void**) label) *(void **) label = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmaddlabel_ DMADDLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmaddlabel_ dmaddlabel
#endif
PETSC_EXTERN void dmaddlabel_(DM *dm, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMAddLabel(*dm, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetlabel_ DMSETLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetlabel_ dmsetlabel
#endif
PETSC_EXTERN void dmsetlabel_(DM *dm, DMLabel *label, PetscErrorCode *ierr)
{
  *ierr = DMSetLabel(*dm, *label);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmremovelabel_ DMREMOVELABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmremovelabel_ dmremovelabel
#endif
PETSC_EXTERN void dmremovelabel_(DM *dm, char name[], DMLabel *label, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_label = !*(void**) label ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(label);
  *ierr = DMRemoveLabel(*dm, c_name, label);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_label && !*(void**) label) *(void **) label = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmremovelabelbyself_ DMREMOVELABELBYSELF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmremovelabelbyself_ dmremovelabelbyself
#endif
PETSC_EXTERN void dmremovelabelbyself_(DM *dm, DMLabel *label, PetscBool *failNotFound, PetscErrorCode *ierr)
{
  PetscBool null_label = !*(void**) label ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(label);
  *ierr = DMRemoveLabelBySelf(*dm, label, *failNotFound ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
  if (! null_label && !*(void**) label) *(void **) label = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlabeloutput_ DMGETLABELOUTPUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlabeloutput_ dmgetlabeloutput
#endif
PETSC_EXTERN void dmgetlabeloutput_(DM *dm, char name[], PetscBool *output, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(output);
  *ierr = DMGetLabelOutput(*dm, c_name, output);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetlabeloutput_ DMSETLABELOUTPUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetlabeloutput_ dmsetlabeloutput
#endif
PETSC_EXTERN void dmsetlabeloutput_(DM *dm, char name[], PetscBool *output, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMSetLabelOutput(*dm, c_name, *output ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcopylabels_ DMCOPYLABELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcopylabels_ dmcopylabels
#endif
PETSC_EXTERN void dmcopylabels_(DM *dmA, DM *dmB, PetscCopyMode *mode, PetscBool *all, DMCopyLabelsMode *emode, PetscErrorCode *ierr)
{
  *ierr = DMCopyLabels(*dmA, *dmB, *mode, *all ? PETSC_TRUE : PETSC_FALSE, *emode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoarsedm_ DMGETCOARSEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoarsedm_ dmgetcoarsedm
#endif
PETSC_EXTERN void dmgetcoarsedm_(DM *dm, DM *cdm, PetscErrorCode *ierr)
{
  PetscBool null_cdm = !*(void**) cdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(cdm);
  *ierr = DMGetCoarseDM(*dm, cdm);
  if (*ierr) return;
  if (! null_cdm && !*(void**) cdm) *(void **) cdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcoarsedm_ DMSETCOARSEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcoarsedm_ dmsetcoarsedm
#endif
PETSC_EXTERN void dmsetcoarsedm_(DM *dm, DM *cdm, PetscErrorCode *ierr)
{
  *ierr = DMSetCoarseDM(*dm, *cdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetfinedm_ DMGETFINEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetfinedm_ dmgetfinedm
#endif
PETSC_EXTERN void dmgetfinedm_(DM *dm, DM *fdm, PetscErrorCode *ierr)
{
  PetscBool null_fdm = !*(void**) fdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fdm);
  *ierr = DMGetFineDM(*dm, fdm);
  if (*ierr) return;
  if (! null_fdm && !*(void**) fdm) *(void **) fdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetfinedm_ DMSETFINEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetfinedm_ dmsetfinedm
#endif
PETSC_EXTERN void dmsetfinedm_(DM *dm, DM *fdm, PetscErrorCode *ierr)
{
  *ierr = DMSetFineDM(*dm, *fdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmisboundarypoint_ DMISBOUNDARYPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmisboundarypoint_ dmisboundarypoint
#endif
PETSC_EXTERN void dmisboundarypoint_(DM *dm, PetscInt *point, PetscBool *isBd, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isBd);
  *ierr = DMIsBoundaryPoint(*dm, *point, isBd);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmhasbound_ DMHASBOUND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmhasbound_ dmhasbound
#endif
PETSC_EXTERN void dmhasbound_(DM *dm, PetscBool *hasBound, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(hasBound);
  *ierr = DMHasBound(*dm, hasBound);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcompatibility_ DMGETCOMPATIBILITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcompatibility_ dmgetcompatibility
#endif
PETSC_EXTERN void dmgetcompatibility_(DM *dm1, DM *dm2, PetscBool *compatible, PetscBool *set, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(compatible);
  CHKFORTRANNULLBOOL(set);
  *ierr = DMGetCompatibility(*dm1, *dm2, compatible, set);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmonitorcancel_ DMMONITORCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmonitorcancel_ dmmonitorcancel
#endif
PETSC_EXTERN void dmmonitorcancel_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMMonitorCancel(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmonitor_ DMMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmonitor_ dmmonitor
#endif
PETSC_EXTERN void dmmonitor_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMMonitor(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcomputeerror_ DMCOMPUTEERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcomputeerror_ dmcomputeerror
#endif
PETSC_EXTERN void dmcomputeerror_(DM *dm, Vec *sol, PetscReal errors[], Vec *errorVec, PetscErrorCode *ierr)
{
  PetscBool null_errorVec = !*(void**) errorVec ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(errors);
  CHKFORTRANNULLOBJECT(errorVec);
  *ierr = DMComputeError(*dm, *sol, errors, errorVec);
  if (*ierr) return;
  if (! null_errorVec && !*(void**) errorVec) *(void **) errorVec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetnumauxiliaryvec_ DMGETNUMAUXILIARYVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetnumauxiliaryvec_ dmgetnumauxiliaryvec
#endif
PETSC_EXTERN void dmgetnumauxiliaryvec_(DM *dm, PetscInt *numAux, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numAux);
  *ierr = DMGetNumAuxiliaryVec(*dm, numAux);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetauxiliaryvec_ DMGETAUXILIARYVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetauxiliaryvec_ dmgetauxiliaryvec
#endif
PETSC_EXTERN void dmgetauxiliaryvec_(DM *dm, DMLabel *label, PetscInt *value, PetscInt *part, Vec *aux, PetscErrorCode *ierr)
{
  PetscBool null_aux = !*(void**) aux ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(aux);
  *ierr = DMGetAuxiliaryVec(*dm, *label, *value, *part, aux);
  if (*ierr) return;
  if (! null_aux && !*(void**) aux) *(void **) aux = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetauxiliaryvec_ DMSETAUXILIARYVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetauxiliaryvec_ dmsetauxiliaryvec
#endif
PETSC_EXTERN void dmsetauxiliaryvec_(DM *dm, DMLabel *label, PetscInt *value, PetscInt *part, Vec *aux, PetscErrorCode *ierr)
{
  *ierr = DMSetAuxiliaryVec(*dm, *label, *value, *part, *aux);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetauxiliarylabels_ DMGETAUXILIARYLABELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetauxiliarylabels_ dmgetauxiliarylabels
#endif
PETSC_EXTERN void dmgetauxiliarylabels_(DM *dm, DMLabel labels[], PetscInt values[], PetscInt parts[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(labels);
  CHKFORTRANNULLINTEGER(values);
  CHKFORTRANNULLINTEGER(parts);
  *ierr = DMGetAuxiliaryLabels(*dm, labels, values, parts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcopyauxiliaryvec_ DMCOPYAUXILIARYVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcopyauxiliaryvec_ dmcopyauxiliaryvec
#endif
PETSC_EXTERN void dmcopyauxiliaryvec_(DM *dm, DM *dmNew, PetscErrorCode *ierr)
{
  *ierr = DMCopyAuxiliaryVec(*dm, *dmNew);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmclearauxiliaryvec_ DMCLEARAUXILIARYVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmclearauxiliaryvec_ dmclearauxiliaryvec
#endif
PETSC_EXTERN void dmclearauxiliaryvec_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMClearAuxiliaryVec(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpolytopematchorientation_ DMPOLYTOPEMATCHORIENTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpolytopematchorientation_ dmpolytopematchorientation
#endif
PETSC_EXTERN void dmpolytopematchorientation_(DMPolytopeType *ct, const PetscInt sourceCone[], const PetscInt targetCone[], PetscInt *ornt, PetscBool *found, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(sourceCone);
  CHKFORTRANNULLINTEGER(targetCone);
  CHKFORTRANNULLINTEGER(ornt);
  CHKFORTRANNULLBOOL(found);
  *ierr = DMPolytopeMatchOrientation(*ct, sourceCone, targetCone, ornt, found);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpolytopegetorientation_ DMPOLYTOPEGETORIENTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpolytopegetorientation_ dmpolytopegetorientation
#endif
PETSC_EXTERN void dmpolytopegetorientation_(DMPolytopeType *ct, const PetscInt sourceCone[], const PetscInt targetCone[], PetscInt *ornt, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(sourceCone);
  CHKFORTRANNULLINTEGER(targetCone);
  CHKFORTRANNULLINTEGER(ornt);
  *ierr = DMPolytopeGetOrientation(*ct, sourceCone, targetCone, ornt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpolytopematchvertexorientation_ DMPOLYTOPEMATCHVERTEXORIENTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpolytopematchvertexorientation_ dmpolytopematchvertexorientation
#endif
PETSC_EXTERN void dmpolytopematchvertexorientation_(DMPolytopeType *ct, const PetscInt sourceVert[], const PetscInt targetVert[], PetscInt *ornt, PetscBool *found, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(sourceVert);
  CHKFORTRANNULLINTEGER(targetVert);
  CHKFORTRANNULLINTEGER(ornt);
  CHKFORTRANNULLBOOL(found);
  *ierr = DMPolytopeMatchVertexOrientation(*ct, sourceVert, targetVert, ornt, found);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpolytopegetvertexorientation_ DMPOLYTOPEGETVERTEXORIENTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpolytopegetvertexorientation_ dmpolytopegetvertexorientation
#endif
PETSC_EXTERN void dmpolytopegetvertexorientation_(DMPolytopeType *ct, const PetscInt sourceCone[], const PetscInt targetCone[], PetscInt *ornt, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(sourceCone);
  CHKFORTRANNULLINTEGER(targetCone);
  CHKFORTRANNULLINTEGER(ornt);
  *ierr = DMPolytopeGetVertexOrientation(*ct, sourceCone, targetCone, ornt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpolytopeincelltest_ DMPOLYTOPEINCELLTEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpolytopeincelltest_ dmpolytopeincelltest
#endif
PETSC_EXTERN void dmpolytopeincelltest_(DMPolytopeType *ct, const PetscReal point[], PetscBool *inside, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(point);
  CHKFORTRANNULLBOOL(inside);
  *ierr = DMPolytopeInCellTest(*ct, point, inside);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmreordersectionsetdefault_ DMREORDERSECTIONSETDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmreordersectionsetdefault_ dmreordersectionsetdefault
#endif
PETSC_EXTERN void dmreordersectionsetdefault_(DM *dm, DMReorderDefaultFlag *reorder, PetscErrorCode *ierr)
{
  *ierr = DMReorderSectionSetDefault(*dm, *reorder);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmreordersectiongetdefault_ DMREORDERSECTIONGETDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmreordersectiongetdefault_ dmreordersectiongetdefault
#endif
PETSC_EXTERN void dmreordersectiongetdefault_(DM *dm, DMReorderDefaultFlag *reorder, PetscErrorCode *ierr)
{
  *ierr = DMReorderSectionGetDefault(*dm, reorder);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmreordersectionsettype_ DMREORDERSECTIONSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmreordersectionsettype_ dmreordersectionsettype
#endif
PETSC_EXTERN void dmreordersectionsettype_(DM *dm, char *reorder, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_reorder)
{
  char* c_reorder;
  FIXCHAR(reorder, l_reorder, c_reorder);
  *ierr = DMReorderSectionSetType(*dm, c_reorder);
  if (*ierr) return;
  FREECHAR(reorder, c_reorder);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmreordersectiongettype_ DMREORDERSECTIONGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmreordersectiongettype_ dmreordersectiongettype
#endif
PETSC_EXTERN void dmreordersectiongettype_(DM *dm, char *reorder, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_reorder)
{
  char* c_reorder = PETSC_NULLPTR;
  *ierr = DMReorderSectionGetType(*dm, (const char **)&c_reorder);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)reorder, c_reorder, l_reorder);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, reorder, l_reorder);
}
