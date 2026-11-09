#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionersettype_ PETSCPARTITIONERSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionersettype_ petscpartitionersettype
#endif
PETSC_EXTERN void petscpartitionersettype_(PetscPartitioner *part, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscPartitionerSetType(*part, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionergettype_ PETSCPARTITIONERGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionergettype_ petscpartitionergettype
#endif
PETSC_EXTERN void petscpartitionergettype_(PetscPartitioner *part, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscPartitionerGetType(*part, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionerviewfromoptions_ PETSCPARTITIONERVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionerviewfromoptions_ petscpartitionerviewfromoptions
#endif
PETSC_EXTERN void petscpartitionerviewfromoptions_(PetscPartitioner *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscPartitionerViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionerview_ PETSCPARTITIONERVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionerview_ petscpartitionerview
#endif
PETSC_EXTERN void petscpartitionerview_(PetscPartitioner *part, PetscViewer *v, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscPartitionerView(*part, v_v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionersetfromoptions_ PETSCPARTITIONERSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionersetfromoptions_ petscpartitionersetfromoptions
#endif
PETSC_EXTERN void petscpartitionersetfromoptions_(PetscPartitioner *part, PetscErrorCode *ierr)
{
  *ierr = PetscPartitionerSetFromOptions(*part);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionersetup_ PETSCPARTITIONERSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionersetup_ petscpartitionersetup
#endif
PETSC_EXTERN void petscpartitionersetup_(PetscPartitioner *part, PetscErrorCode *ierr)
{
  *ierr = PetscPartitionerSetUp(*part);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionerreset_ PETSCPARTITIONERRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionerreset_ petscpartitionerreset
#endif
PETSC_EXTERN void petscpartitionerreset_(PetscPartitioner *part, PetscErrorCode *ierr)
{
  *ierr = PetscPartitionerReset(*part);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionerdestroy_ PETSCPARTITIONERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionerdestroy_ petscpartitionerdestroy
#endif
PETSC_EXTERN void petscpartitionerdestroy_(PetscPartitioner *part, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(part);
  PetscBool null_part = !*(void**) part ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(part);
  *ierr = PetscPartitionerDestroy(part);
  if (*ierr) return;
  if (! null_part && !*(void**) part) *(void **) part = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionerpartition_ PETSCPARTITIONERPARTITION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionerpartition_ petscpartitionerpartition
#endif
PETSC_EXTERN void petscpartitionerpartition_(PetscPartitioner *part, PetscInt *nparts, PetscInt *numVertices, PetscInt start[], PetscInt adjacency[], PetscSection *vertexSection, PetscSection *edgeSection, PetscSection *targetSection, PetscSection *partSection, IS *partition, PetscErrorCode *ierr)
{
  PetscBool null_partition = !*(void**) partition ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(start);
  CHKFORTRANNULLINTEGER(adjacency);
  CHKFORTRANNULLOBJECT(partition);
  *ierr = PetscPartitionerPartition(*part, *nparts, *numVertices, start, adjacency, *vertexSection, *edgeSection, *targetSection, *partSection, partition);
  if (*ierr) return;
  if (! null_partition && !*(void**) partition) *(void **) partition = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionercreate_ PETSCPARTITIONERCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionercreate_ petscpartitionercreate
#endif
PETSC_EXTERN void petscpartitionercreate_(MPI_Fint *comm, PetscPartitioner *part, PetscErrorCode *ierr)
{
  PetscBool null_part = !*(void**) part ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(part);
  CHKFORTRANNULLOBJECT(part);
  *ierr = PetscPartitionerCreate(MPI_Comm_f2c(*(comm)), part);
  if (*ierr) return;
  if (! null_part && !*(void**) part) *(void **) part = (void *)-2;
}
