#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aoview_ AOVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aoview_ aoview
#endif
PETSC_EXTERN void aoview_(AO *ao, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = AOView(*ao, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aoviewfromoptions_ AOVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aoviewfromoptions_ aoviewfromoptions
#endif
PETSC_EXTERN void aoviewfromoptions_(AO *ao, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = AOViewFromOptions(*ao, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aodestroy_ AODESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aodestroy_ aodestroy
#endif
PETSC_EXTERN void aodestroy_(AO *ao, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ao);
  PetscBool null_ao = !*(void**) ao ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ao);
  *ierr = AODestroy(ao);
  if (*ierr) return;
  if (! null_ao && !*(void**) ao) *(void **) ao = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aopetsctoapplicationis_ AOPETSCTOAPPLICATIONIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aopetsctoapplicationis_ aopetsctoapplicationis
#endif
PETSC_EXTERN void aopetsctoapplicationis_(AO *ao, IS *is, PetscErrorCode *ierr)
{
  *ierr = AOPetscToApplicationIS(*ao, *is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aoapplicationtopetscis_ AOAPPLICATIONTOPETSCIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aoapplicationtopetscis_ aoapplicationtopetscis
#endif
PETSC_EXTERN void aoapplicationtopetscis_(AO *ao, IS *is, PetscErrorCode *ierr)
{
  *ierr = AOApplicationToPetscIS(*ao, *is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aopetsctoapplication_ AOPETSCTOAPPLICATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aopetsctoapplication_ aopetsctoapplication
#endif
PETSC_EXTERN void aopetsctoapplication_(AO *ao, PetscInt *n, PetscInt ia[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ia);
  *ierr = AOPetscToApplication(*ao, *n, ia);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aoapplicationtopetsc_ AOAPPLICATIONTOPETSC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aoapplicationtopetsc_ aoapplicationtopetsc
#endif
PETSC_EXTERN void aoapplicationtopetsc_(AO *ao, PetscInt *n, PetscInt ia[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ia);
  *ierr = AOApplicationToPetsc(*ao, *n, ia);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aopetsctoapplicationpermuteint_ AOPETSCTOAPPLICATIONPERMUTEINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aopetsctoapplicationpermuteint_ aopetsctoapplicationpermuteint
#endif
PETSC_EXTERN void aopetsctoapplicationpermuteint_(AO *ao, PetscInt *block, PetscInt array[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(array);
  *ierr = AOPetscToApplicationPermuteInt(*ao, *block, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aoapplicationtopetscpermuteint_ AOAPPLICATIONTOPETSCPERMUTEINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aoapplicationtopetscpermuteint_ aoapplicationtopetscpermuteint
#endif
PETSC_EXTERN void aoapplicationtopetscpermuteint_(AO *ao, PetscInt *block, PetscInt array[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(array);
  *ierr = AOApplicationToPetscPermuteInt(*ao, *block, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aopetsctoapplicationpermutereal_ AOPETSCTOAPPLICATIONPERMUTEREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aopetsctoapplicationpermutereal_ aopetsctoapplicationpermutereal
#endif
PETSC_EXTERN void aopetsctoapplicationpermutereal_(AO *ao, PetscInt *block, PetscReal array[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(array);
  *ierr = AOPetscToApplicationPermuteReal(*ao, *block, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aoapplicationtopetscpermutereal_ AOAPPLICATIONTOPETSCPERMUTEREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aoapplicationtopetscpermutereal_ aoapplicationtopetscpermutereal
#endif
PETSC_EXTERN void aoapplicationtopetscpermutereal_(AO *ao, PetscInt *block, PetscReal array[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(array);
  *ierr = AOApplicationToPetscPermuteReal(*ao, *block, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aosetfromoptions_ AOSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aosetfromoptions_ aosetfromoptions
#endif
PETSC_EXTERN void aosetfromoptions_(AO *ao, PetscErrorCode *ierr)
{
  *ierr = AOSetFromOptions(*ao);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aosetis_ AOSETIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aosetis_ aosetis
#endif
PETSC_EXTERN void aosetis_(AO *ao, IS *isapp, IS *ispetsc, PetscErrorCode *ierr)
{
  *ierr = AOSetIS(*ao, *isapp, *ispetsc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define aocreate_ AOCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define aocreate_ aocreate
#endif
PETSC_EXTERN void aocreate_(MPI_Fint *comm, AO *ao, PetscErrorCode *ierr)
{
  PetscBool null_ao = !*(void**) ao ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ao);
  CHKFORTRANNULLOBJECT(ao);
  *ierr = AOCreate(MPI_Comm_f2c(*(comm)), ao);
  if (*ierr) return;
  if (! null_ao && !*(void**) ao) *(void **) ao = (void *)-2;
}
