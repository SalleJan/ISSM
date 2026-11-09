#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawview_ PETSCDRAWVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawview_ petscdrawview
#endif
PETSC_EXTERN void petscdrawview_(PetscDraw *indraw, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscDrawView(*indraw, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawviewfromoptions_ PETSCDRAWVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawviewfromoptions_ petscdrawviewfromoptions
#endif
PETSC_EXTERN void petscdrawviewfromoptions_(PetscDraw *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscDrawViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawcreate_ PETSCDRAWCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawcreate_ petscdrawcreate
#endif
PETSC_EXTERN void petscdrawcreate_(MPI_Fint *comm, char display[], char title[], int *x, int *y, int *w, int *h, PetscDraw *indraw, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_display, PETSC_FORTRAN_CHARLEN_T l_title)
{
  PetscBool null_indraw = !*(void**) indraw ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(indraw);
  char* c_display;
  FIXCHAR(display, l_display, c_display);
  char* c_title;
  FIXCHAR(title, l_title, c_title);
  CHKFORTRANNULLOBJECT(indraw);
  *ierr = PetscDrawCreate(MPI_Comm_f2c(*(comm)), c_display, c_title, *x, *y, *w, *h, indraw);
  if (*ierr) return;
  FREECHAR(display, c_display);
  FREECHAR(title, c_title);
  if (! null_indraw && !*(void**) indraw) *(void **) indraw = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsettype_ PETSCDRAWSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsettype_ petscdrawsettype
#endif
PETSC_EXTERN void petscdrawsettype_(PetscDraw *draw, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PetscDrawSetType(*draw, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgettype_ PETSCDRAWGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgettype_ petscdrawgettype
#endif
PETSC_EXTERN void petscdrawgettype_(PetscDraw *draw, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = PetscDrawGetType(*draw, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetoptionsprefix_ PETSCDRAWSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetoptionsprefix_ petscdrawsetoptionsprefix
#endif
PETSC_EXTERN void petscdrawsetoptionsprefix_(PetscDraw *draw, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = PetscDrawSetOptionsPrefix(*draw, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetfromoptions_ PETSCDRAWSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetfromoptions_ petscdrawsetfromoptions
#endif
PETSC_EXTERN void petscdrawsetfromoptions_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSetFromOptions(*draw);
  if (*ierr) return;
}
