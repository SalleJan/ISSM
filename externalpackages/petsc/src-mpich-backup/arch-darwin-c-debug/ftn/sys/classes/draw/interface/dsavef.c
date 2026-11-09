#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetsave_ PETSCDRAWSETSAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetsave_ petscdrawsetsave
#endif
PETSC_EXTERN void petscdrawsetsave_(PetscDraw *draw, char filename[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  *ierr = PetscDrawSetSave(*draw, c_filename);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetsavemovie_ PETSCDRAWSETSAVEMOVIE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetsavemovie_ petscdrawsetsavemovie
#endif
PETSC_EXTERN void petscdrawsetsavemovie_(PetscDraw *draw, char movieext[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_movieext)
{
  char* c_movieext;
  FIXCHAR(movieext, l_movieext, c_movieext);
  *ierr = PetscDrawSetSaveMovie(*draw, c_movieext);
  if (*ierr) return;
  FREECHAR(movieext, c_movieext);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetsavefinalimage_ PETSCDRAWSETSAVEFINALIMAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetsavefinalimage_ petscdrawsetsavefinalimage
#endif
PETSC_EXTERN void petscdrawsetsavefinalimage_(PetscDraw *draw, char filename[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  *ierr = PetscDrawSetSaveFinalImage(*draw, c_filename);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsave_ PETSCDRAWSAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsave_ petscdrawsave
#endif
PETSC_EXTERN void petscdrawsave_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSave(*draw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsavemovie_ PETSCDRAWSAVEMOVIE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsavemovie_ petscdrawsavemovie
#endif
PETSC_EXTERN void petscdrawsavemovie_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSaveMovie(*draw);
  if (*ierr) return;
}
