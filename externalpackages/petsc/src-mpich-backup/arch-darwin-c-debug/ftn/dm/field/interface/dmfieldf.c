#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfielddestroy_ DMFIELDDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfielddestroy_ dmfielddestroy
#endif
PETSC_EXTERN void dmfielddestroy_(DMField *field, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(field);
  PetscBool null_field = !*(void**) field ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(field);
  *ierr = DMFieldDestroy(field);
  if (*ierr) return;
  if (! null_field && !*(void**) field) *(void **) field = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldview_ DMFIELDVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldview_ dmfieldview
#endif
PETSC_EXTERN void dmfieldview_(DMField *field, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMFieldView(*field, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldsettype_ DMFIELDSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldsettype_ dmfieldsettype
#endif
PETSC_EXTERN void dmfieldsettype_(DMField *field, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = DMFieldSetType(*field, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldgettype_ DMFIELDGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldgettype_ dmfieldgettype
#endif
PETSC_EXTERN void dmfieldgettype_(DMField *field, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = DMFieldGetType(*field, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldgetnumcomponents_ DMFIELDGETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldgetnumcomponents_ dmfieldgetnumcomponents
#endif
PETSC_EXTERN void dmfieldgetnumcomponents_(DMField *field, PetscInt *nc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nc);
  *ierr = DMFieldGetNumComponents(*field, nc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldgetdm_ DMFIELDGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldgetdm_ dmfieldgetdm
#endif
PETSC_EXTERN void dmfieldgetdm_(DMField *field, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMFieldGetDM(*field, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldevaluate_ DMFIELDEVALUATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldevaluate_ dmfieldevaluate
#endif
PETSC_EXTERN void dmfieldevaluate_(DMField *field, Vec *points, PetscDataType *datatype, void *B, void *D, void *H, PetscErrorCode *ierr)
{
  *ierr = DMFieldEvaluate(*field, *points, *datatype, B, D, H);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldevaluatefe_ DMFIELDEVALUATEFE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldevaluatefe_ dmfieldevaluatefe
#endif
PETSC_EXTERN void dmfieldevaluatefe_(DMField *field, IS *cellIS, PetscQuadrature *points, PetscDataType *datatype, void *B, void *D, void *H, PetscErrorCode *ierr)
{
  *ierr = DMFieldEvaluateFE(*field, *cellIS, *points, *datatype, B, D, H);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldevaluatefv_ DMFIELDEVALUATEFV
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldevaluatefv_ dmfieldevaluatefv
#endif
PETSC_EXTERN void dmfieldevaluatefv_(DMField *field, IS *cellIS, PetscDataType *datatype, void *B, void *D, void *H, PetscErrorCode *ierr)
{
  *ierr = DMFieldEvaluateFV(*field, *cellIS, *datatype, B, D, H);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldgetdegree_ DMFIELDGETDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldgetdegree_ dmfieldgetdegree
#endif
PETSC_EXTERN void dmfieldgetdegree_(DMField *field, IS *cellIS, PetscInt *minDegree, PetscInt *maxDegree, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(minDegree);
  CHKFORTRANNULLINTEGER(maxDegree);
  *ierr = DMFieldGetDegree(*field, *cellIS, minDegree, maxDegree);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldcreatedefaultquadrature_ DMFIELDCREATEDEFAULTQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldcreatedefaultquadrature_ dmfieldcreatedefaultquadrature
#endif
PETSC_EXTERN void dmfieldcreatedefaultquadrature_(DMField *field, IS *pointIS, PetscQuadrature *quad, PetscErrorCode *ierr)
{
  PetscBool null_quad = !*(void**) quad ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(quad);
  *ierr = DMFieldCreateDefaultQuadrature(*field, *pointIS, quad);
  if (*ierr) return;
  if (! null_quad && !*(void**) quad) *(void **) quad = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldcreatedefaultfacequadrature_ DMFIELDCREATEDEFAULTFACEQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldcreatedefaultfacequadrature_ dmfieldcreatedefaultfacequadrature
#endif
PETSC_EXTERN void dmfieldcreatedefaultfacequadrature_(DMField *field, IS *pointIS, PetscQuadrature *quad, PetscErrorCode *ierr)
{
  PetscBool null_quad = !*(void**) quad ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(quad);
  *ierr = DMFieldCreateDefaultFaceQuadrature(*field, *pointIS, quad);
  if (*ierr) return;
  if (! null_quad && !*(void**) quad) *(void **) quad = (void *)-2;
}
