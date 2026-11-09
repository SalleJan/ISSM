#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexinvertcell_ DMPLEXINVERTCELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexinvertcell_ dmplexinvertcell
#endif
PETSC_EXTERN void dmplexinvertcell_(DMPolytopeType *cellType, PetscInt cone[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cone);
  *ierr = DMPlexInvertCell(*cellType, cone);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexreordercell_ DMPLEXREORDERCELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexreordercell_ dmplexreordercell
#endif
PETSC_EXTERN void dmplexreordercell_(DM *dm, PetscInt *cell, PetscInt cone[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cone);
  *ierr = DMPlexReorderCell(*dm, *cell, cone);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextrianglesetoptions_ DMPLEXTRIANGLESETOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextrianglesetoptions_ dmplextrianglesetoptions
#endif
PETSC_EXTERN void dmplextrianglesetoptions_(DM *dm, char opts[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_opts)
{
  char* c_opts;
  FIXCHAR(opts, l_opts, c_opts);
  *ierr = DMPlexTriangleSetOptions(*dm, c_opts);
  if (*ierr) return;
  FREECHAR(opts, c_opts);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextetgensetoptions_ DMPLEXTETGENSETOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextetgensetoptions_ dmplextetgensetoptions
#endif
PETSC_EXTERN void dmplextetgensetoptions_(DM *dm, char opts[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_opts)
{
  char* c_opts;
  FIXCHAR(opts, l_opts, c_opts);
  *ierr = DMPlexTetgenSetOptions(*dm, c_opts);
  if (*ierr) return;
  FREECHAR(opts, c_opts);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgenerate_ DMPLEXGENERATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgenerate_ dmplexgenerate
#endif
PETSC_EXTERN void dmplexgenerate_(DM *boundary, char name[], PetscBool *interpolate, DM *mesh, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_mesh = !*(void**) mesh ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(mesh);
  *ierr = DMPlexGenerate(*boundary, c_name, *interpolate ? PETSC_TRUE : PETSC_FALSE, mesh);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_mesh && !*(void**) mesh) *(void **) mesh = (void *)-2;
}
