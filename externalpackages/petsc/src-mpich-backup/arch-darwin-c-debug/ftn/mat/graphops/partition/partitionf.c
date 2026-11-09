#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioninggettype_ MATPARTITIONINGGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioninggettype_ matpartitioninggettype
#endif
PETSC_EXTERN void matpartitioninggettype_(MatPartitioning *partitioning, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = MatPartitioningGetType(*partitioning, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningsetnparts_ MATPARTITIONINGSETNPARTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningsetnparts_ matpartitioningsetnparts
#endif
PETSC_EXTERN void matpartitioningsetnparts_(MatPartitioning *part, PetscInt *n, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningSetNParts(*part, *n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningapplynd_ MATPARTITIONINGAPPLYND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningapplynd_ matpartitioningapplynd
#endif
PETSC_EXTERN void matpartitioningapplynd_(MatPartitioning *matp, IS *partitioning, PetscErrorCode *ierr)
{
  PetscBool null_partitioning = !*(void**) partitioning ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(partitioning);
  *ierr = MatPartitioningApplyND(*matp, partitioning);
  if (*ierr) return;
  if (! null_partitioning && !*(void**) partitioning) *(void **) partitioning = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningapply_ MATPARTITIONINGAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningapply_ matpartitioningapply
#endif
PETSC_EXTERN void matpartitioningapply_(MatPartitioning *matp, IS *partitioning, PetscErrorCode *ierr)
{
  PetscBool null_partitioning = !*(void**) partitioning ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(partitioning);
  *ierr = MatPartitioningApply(*matp, partitioning);
  if (*ierr) return;
  if (! null_partitioning && !*(void**) partitioning) *(void **) partitioning = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningimprove_ MATPARTITIONINGIMPROVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningimprove_ matpartitioningimprove
#endif
PETSC_EXTERN void matpartitioningimprove_(MatPartitioning *matp, IS *partitioning, PetscErrorCode *ierr)
{
  PetscBool null_partitioning = !*(void**) partitioning ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(partitioning);
  *ierr = MatPartitioningImprove(*matp, partitioning);
  if (*ierr) return;
  if (! null_partitioning && !*(void**) partitioning) *(void **) partitioning = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningviewimbalance_ MATPARTITIONINGVIEWIMBALANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningviewimbalance_ matpartitioningviewimbalance
#endif
PETSC_EXTERN void matpartitioningviewimbalance_(MatPartitioning *matp, IS *partitioning, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningViewImbalance(*matp, *partitioning);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningsetadjacency_ MATPARTITIONINGSETADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningsetadjacency_ matpartitioningsetadjacency
#endif
PETSC_EXTERN void matpartitioningsetadjacency_(MatPartitioning *part, Mat *adj, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningSetAdjacency(*part, *adj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningdestroy_ MATPARTITIONINGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningdestroy_ matpartitioningdestroy
#endif
PETSC_EXTERN void matpartitioningdestroy_(MatPartitioning *part, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(part);
  PetscBool null_part = !*(void**) part ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(part);
  *ierr = MatPartitioningDestroy(part);
  if (*ierr) return;
  if (! null_part && !*(void**) part) *(void **) part = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningsetvertexweights_ MATPARTITIONINGSETVERTEXWEIGHTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningsetvertexweights_ matpartitioningsetvertexweights
#endif
PETSC_EXTERN void matpartitioningsetvertexweights_(MatPartitioning *part, const PetscInt weights[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(weights);
  *ierr = MatPartitioningSetVertexWeights(*part, weights);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningsetpartitionweights_ MATPARTITIONINGSETPARTITIONWEIGHTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningsetpartitionweights_ matpartitioningsetpartitionweights
#endif
PETSC_EXTERN void matpartitioningsetpartitionweights_(MatPartitioning *part, const PetscReal weights[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(weights);
  *ierr = MatPartitioningSetPartitionWeights(*part, weights);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningsetuseedgeweights_ MATPARTITIONINGSETUSEEDGEWEIGHTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningsetuseedgeweights_ matpartitioningsetuseedgeweights
#endif
PETSC_EXTERN void matpartitioningsetuseedgeweights_(MatPartitioning *part, PetscBool *use_edge_weights, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningSetUseEdgeWeights(*part, *use_edge_weights ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioninggetuseedgeweights_ MATPARTITIONINGGETUSEEDGEWEIGHTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioninggetuseedgeweights_ matpartitioninggetuseedgeweights
#endif
PETSC_EXTERN void matpartitioninggetuseedgeweights_(MatPartitioning *part, PetscBool *use_edge_weights, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(use_edge_weights);
  *ierr = MatPartitioningGetUseEdgeWeights(*part, use_edge_weights);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningcreate_ MATPARTITIONINGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningcreate_ matpartitioningcreate
#endif
PETSC_EXTERN void matpartitioningcreate_(MPI_Fint *comm, MatPartitioning *newp, PetscErrorCode *ierr)
{
  PetscBool null_newp = !*(void**) newp ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(newp);
  CHKFORTRANNULLOBJECT(newp);
  *ierr = MatPartitioningCreate(MPI_Comm_f2c(*(comm)), newp);
  if (*ierr) return;
  if (! null_newp && !*(void**) newp) *(void **) newp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningviewfromoptions_ MATPARTITIONINGVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningviewfromoptions_ matpartitioningviewfromoptions
#endif
PETSC_EXTERN void matpartitioningviewfromoptions_(MatPartitioning *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = MatPartitioningViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningview_ MATPARTITIONINGVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningview_ matpartitioningview
#endif
PETSC_EXTERN void matpartitioningview_(MatPartitioning *part, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = MatPartitioningView(*part, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningsettype_ MATPARTITIONINGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningsettype_ matpartitioningsettype
#endif
PETSC_EXTERN void matpartitioningsettype_(MatPartitioning *part, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = MatPartitioningSetType(*part, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningsetfromoptions_ MATPARTITIONINGSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningsetfromoptions_ matpartitioningsetfromoptions
#endif
PETSC_EXTERN void matpartitioningsetfromoptions_(MatPartitioning *part, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningSetFromOptions(*part);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpartitioningsetnumbervertexweights_ MATPARTITIONINGSETNUMBERVERTEXWEIGHTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpartitioningsetnumbervertexweights_ matpartitioningsetnumbervertexweights
#endif
PETSC_EXTERN void matpartitioningsetnumbervertexweights_(MatPartitioning *partitioning, PetscInt *ncon, PetscErrorCode *ierr)
{
  *ierr = MatPartitioningSetNumberVertexWeights(*partitioning, *ncon);
  if (*ierr) return;
}
