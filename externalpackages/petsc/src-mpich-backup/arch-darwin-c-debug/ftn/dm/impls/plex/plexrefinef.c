#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateprocesssf_ DMPLEXCREATEPROCESSSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateprocesssf_ dmplexcreateprocesssf
#endif
PETSC_EXTERN void dmplexcreateprocesssf_(DM *dm, PetscSF *sfPoint, IS *processRanks, PetscSF *sfProcess, PetscErrorCode *ierr)
{
  PetscBool null_processRanks = !*(void**) processRanks ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_sfProcess = !*(void**) sfProcess ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(processRanks);
  CHKFORTRANNULLOBJECT(sfProcess);
  *ierr = DMPlexCreateProcessSF(*dm, *sfPoint, processRanks, sfProcess);
  if (*ierr) return;
  if (! null_processRanks && !*(void**) processRanks) *(void **) processRanks = (void *)-2;
  if (! null_sfProcess && !*(void**) sfProcess) *(void **) sfProcess = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatecoarsepointis_ DMPLEXCREATECOARSEPOINTIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatecoarsepointis_ dmplexcreatecoarsepointis
#endif
PETSC_EXTERN void dmplexcreatecoarsepointis_(DM *dm, IS *fpointIS, PetscErrorCode *ierr)
{
  PetscBool null_fpointIS = !*(void**) fpointIS ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fpointIS);
  *ierr = DMPlexCreateCoarsePointIS(*dm, fpointIS);
  if (*ierr) return;
  if (! null_fpointIS && !*(void**) fpointIS) *(void **) fpointIS = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsettransformtype_ DMPLEXSETTRANSFORMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsettransformtype_ dmplexsettransformtype
#endif
PETSC_EXTERN void dmplexsettransformtype_(DM *dm, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = DMPlexSetTransformType(*dm, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgettransformtype_ DMPLEXGETTRANSFORMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgettransformtype_ dmplexgettransformtype
#endif
PETSC_EXTERN void dmplexgettransformtype_(DM *dm, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = DMPlexGetTransformType(*dm, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsettransform_ DMPLEXSETTRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsettransform_ dmplexsettransform
#endif
PETSC_EXTERN void dmplexsettransform_(DM *dm, DMPlexTransform *tr, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetTransform(*dm, *tr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgettransform_ DMPLEXGETTRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgettransform_ dmplexgettransform
#endif
PETSC_EXTERN void dmplexgettransform_(DM *dm, DMPlexTransform *tr, PetscErrorCode *ierr)
{
  PetscBool null_tr = !*(void**) tr ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tr);
  *ierr = DMPlexGetTransform(*dm, tr);
  if (*ierr) return;
  if (! null_tr && !*(void**) tr) *(void **) tr = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetsavetransform_ DMPLEXSETSAVETRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetsavetransform_ dmplexsetsavetransform
#endif
PETSC_EXTERN void dmplexsetsavetransform_(DM *dm, PetscBool *save, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetSaveTransform(*dm, *save ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplextransform.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetsavetransform_ DMPLEXGETSAVETRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetsavetransform_ dmplexgetsavetransform
#endif
PETSC_EXTERN void dmplexgetsavetransform_(DM *dm, PetscBool *save, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(save);
  *ierr = DMPlexGetSaveTransform(*dm, save);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetrefinementuniform_ DMPLEXSETREFINEMENTUNIFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetrefinementuniform_ dmplexsetrefinementuniform
#endif
PETSC_EXTERN void dmplexsetrefinementuniform_(DM *dm, PetscBool *refinementUniform, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetRefinementUniform(*dm, *refinementUniform ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetrefinementuniform_ DMPLEXGETREFINEMENTUNIFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetrefinementuniform_ dmplexgetrefinementuniform
#endif
PETSC_EXTERN void dmplexgetrefinementuniform_(DM *dm, PetscBool *refinementUniform, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(refinementUniform);
  *ierr = DMPlexGetRefinementUniform(*dm, refinementUniform);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetrefinementlimit_ DMPLEXSETREFINEMENTLIMIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetrefinementlimit_ dmplexsetrefinementlimit
#endif
PETSC_EXTERN void dmplexsetrefinementlimit_(DM *dm, PetscReal *refinementLimit, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetRefinementLimit(*dm, *refinementLimit);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetrefinementlimit_ DMPLEXGETREFINEMENTLIMIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetrefinementlimit_ dmplexgetrefinementlimit
#endif
PETSC_EXTERN void dmplexgetrefinementlimit_(DM *dm, PetscReal *refinementLimit, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(refinementLimit);
  *ierr = DMPlexGetRefinementLimit(*dm, refinementLimit);
  if (*ierr) return;
}
