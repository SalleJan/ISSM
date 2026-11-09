#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsegbuffercreate_ PETSCSEGBUFFERCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsegbuffercreate_ petscsegbuffercreate
#endif
PETSC_EXTERN void petscsegbuffercreate_(size_t *unitbytes, PetscCount *expected, PetscSegBuffer *seg, PetscErrorCode *ierr)
{
  PetscBool null_seg = !*(void**) seg ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(seg);
  CHKFORTRANNULLOBJECT(seg);
  *ierr = PetscSegBufferCreate(*unitbytes, *expected, seg);
  if (*ierr) return;
  if (! null_seg && !*(void**) seg) *(void **) seg = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsegbufferget_ PETSCSEGBUFFERGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsegbufferget_ petscsegbufferget
#endif
PETSC_EXTERN void petscsegbufferget_(PetscSegBuffer *seg, PetscCount *count, void *buf, PetscErrorCode *ierr)
{
  *ierr = PetscSegBufferGet(*seg, *count, buf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsegbufferdestroy_ PETSCSEGBUFFERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsegbufferdestroy_ petscsegbufferdestroy
#endif
PETSC_EXTERN void petscsegbufferdestroy_(PetscSegBuffer *seg, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(seg);
  PetscBool null_seg = !*(void**) seg ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(seg);
  *ierr = PetscSegBufferDestroy(seg);
  if (*ierr) return;
  if (! null_seg && !*(void**) seg) *(void **) seg = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsegbufferextractto_ PETSCSEGBUFFEREXTRACTTO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsegbufferextractto_ petscsegbufferextractto
#endif
PETSC_EXTERN void petscsegbufferextractto_(PetscSegBuffer *seg, void *contig, PetscErrorCode *ierr)
{
  *ierr = PetscSegBufferExtractTo(*seg, contig);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsegbufferextractalloc_ PETSCSEGBUFFEREXTRACTALLOC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsegbufferextractalloc_ petscsegbufferextractalloc
#endif
PETSC_EXTERN void petscsegbufferextractalloc_(PetscSegBuffer *seg, void *contiguous, PetscErrorCode *ierr)
{
  *ierr = PetscSegBufferExtractAlloc(*seg, contiguous);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsegbufferextractinplace_ PETSCSEGBUFFEREXTRACTINPLACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsegbufferextractinplace_ petscsegbufferextractinplace
#endif
PETSC_EXTERN void petscsegbufferextractinplace_(PetscSegBuffer *seg, void *contig, PetscErrorCode *ierr)
{
  *ierr = PetscSegBufferExtractInPlace(*seg, contig);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsegbuffergetsize_ PETSCSEGBUFFERGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsegbuffergetsize_ petscsegbuffergetsize
#endif
PETSC_EXTERN void petscsegbuffergetsize_(PetscSegBuffer *seg, PetscCount *usedsize, PetscErrorCode *ierr)
{
  *ierr = PetscSegBufferGetSize(*seg, usedsize);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsegbufferunuse_ PETSCSEGBUFFERUNUSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsegbufferunuse_ petscsegbufferunuse
#endif
PETSC_EXTERN void petscsegbufferunuse_(PetscSegBuffer *seg, PetscCount *unused, PetscErrorCode *ierr)
{
  *ierr = PetscSegBufferUnuse(*seg, *unused);
  if (*ierr) return;
}
