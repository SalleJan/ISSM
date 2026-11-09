#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadraturecreate_ PETSCQUADRATURECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadraturecreate_ petscquadraturecreate
#endif
PETSC_EXTERN void petscquadraturecreate_(MPI_Fint *comm, PetscQuadrature *q, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(q);
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscQuadratureCreate(MPI_Comm_f2c(*(comm)), q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadratureduplicate_ PETSCQUADRATUREDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadratureduplicate_ petscquadratureduplicate
#endif
PETSC_EXTERN void petscquadratureduplicate_(PetscQuadrature *q, PetscQuadrature *r, PetscErrorCode *ierr)
{
  PetscBool null_r = !*(void**) r ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(r);
  *ierr = PetscQuadratureDuplicate(*q, r);
  if (*ierr) return;
  if (! null_r && !*(void**) r) *(void **) r = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadraturedestroy_ PETSCQUADRATUREDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadraturedestroy_ petscquadraturedestroy
#endif
PETSC_EXTERN void petscquadraturedestroy_(PetscQuadrature *q, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(q);
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscQuadratureDestroy(q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadraturegetcelltype_ PETSCQUADRATUREGETCELLTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadraturegetcelltype_ petscquadraturegetcelltype
#endif
PETSC_EXTERN void petscquadraturegetcelltype_(PetscQuadrature *q, DMPolytopeType *ct, PetscErrorCode *ierr)
{
  *ierr = PetscQuadratureGetCellType(*q, ct);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadraturesetcelltype_ PETSCQUADRATURESETCELLTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadraturesetcelltype_ petscquadraturesetcelltype
#endif
PETSC_EXTERN void petscquadraturesetcelltype_(PetscQuadrature *q, DMPolytopeType *ct, PetscErrorCode *ierr)
{
  *ierr = PetscQuadratureSetCellType(*q, *ct);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadraturegetorder_ PETSCQUADRATUREGETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadraturegetorder_ petscquadraturegetorder
#endif
PETSC_EXTERN void petscquadraturegetorder_(PetscQuadrature *q, PetscInt *order, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(order);
  *ierr = PetscQuadratureGetOrder(*q, order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadraturesetorder_ PETSCQUADRATURESETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadraturesetorder_ petscquadraturesetorder
#endif
PETSC_EXTERN void petscquadraturesetorder_(PetscQuadrature *q, PetscInt *order, PetscErrorCode *ierr)
{
  *ierr = PetscQuadratureSetOrder(*q, *order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadraturegetnumcomponents_ PETSCQUADRATUREGETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadraturegetnumcomponents_ petscquadraturegetnumcomponents
#endif
PETSC_EXTERN void petscquadraturegetnumcomponents_(PetscQuadrature *q, PetscInt *Nc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Nc);
  *ierr = PetscQuadratureGetNumComponents(*q, Nc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadraturesetnumcomponents_ PETSCQUADRATURESETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadraturesetnumcomponents_ petscquadraturesetnumcomponents
#endif
PETSC_EXTERN void petscquadraturesetnumcomponents_(PetscQuadrature *q, PetscInt *Nc, PetscErrorCode *ierr)
{
  *ierr = PetscQuadratureSetNumComponents(*q, *Nc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadratureequal_ PETSCQUADRATUREEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadratureequal_ petscquadratureequal
#endif
PETSC_EXTERN void petscquadratureequal_(PetscQuadrature *A, PetscQuadrature *B, PetscBool *equal, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(equal);
  *ierr = PetscQuadratureEqual(*A, *B, equal);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadraturepushforward_ PETSCQUADRATUREPUSHFORWARD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadraturepushforward_ petscquadraturepushforward
#endif
PETSC_EXTERN void petscquadraturepushforward_(PetscQuadrature *q, PetscInt *imageDim, const PetscReal origin[], const PetscReal originImage[], const PetscReal J[], PetscInt *formDegree, PetscQuadrature *Jinvstarq, PetscErrorCode *ierr)
{
  PetscBool null_Jinvstarq = !*(void**) Jinvstarq ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(origin);
  CHKFORTRANNULLREAL(originImage);
  CHKFORTRANNULLREAL(J);
  CHKFORTRANNULLOBJECT(Jinvstarq);
  *ierr = PetscQuadraturePushForward(*q, *imageDim, origin, originImage, J, *formDegree, Jinvstarq);
  if (*ierr) return;
  if (! null_Jinvstarq && !*(void**) Jinvstarq) *(void **) Jinvstarq = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadratureview_ PETSCQUADRATUREVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadratureview_ petscquadratureview
#endif
PETSC_EXTERN void petscquadratureview_(PetscQuadrature *quad, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscQuadratureView(*quad, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscquadratureexpandcomposite_ PETSCQUADRATUREEXPANDCOMPOSITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscquadratureexpandcomposite_ petscquadratureexpandcomposite
#endif
PETSC_EXTERN void petscquadratureexpandcomposite_(PetscQuadrature *q, PetscInt *numSubelements, const PetscReal v0[], const PetscReal jac[], PetscQuadrature *qref, PetscErrorCode *ierr)
{
  PetscBool null_qref = !*(void**) qref ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(v0);
  CHKFORTRANNULLREAL(jac);
  CHKFORTRANNULLOBJECT(qref);
  *ierr = PetscQuadratureExpandComposite(*q, *numSubelements, v0, jac, qref);
  if (*ierr) return;
  if (! null_qref && !*(void**) qref) *(void **) qref = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtjacobinorm_ PETSCDTJACOBINORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtjacobinorm_ petscdtjacobinorm
#endif
PETSC_EXTERN void petscdtjacobinorm_(PetscReal *alpha, PetscReal *beta, PetscInt *n, PetscReal *norm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(norm);
  *ierr = PetscDTJacobiNorm(*alpha, *beta, *n, norm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtjacobievaljet_ PETSCDTJACOBIEVALJET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtjacobievaljet_ petscdtjacobievaljet
#endif
PETSC_EXTERN void petscdtjacobievaljet_(PetscReal *alpha, PetscReal *beta, PetscInt *npoints, const PetscReal points[], PetscInt *degree, PetscInt *k, PetscReal p[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(points);
  CHKFORTRANNULLREAL(p);
  *ierr = PetscDTJacobiEvalJet(*alpha, *beta, *npoints, points, *degree, *k, p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtjacobieval_ PETSCDTJACOBIEVAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtjacobieval_ petscdtjacobieval
#endif
PETSC_EXTERN void petscdtjacobieval_(PetscInt *npoints, PetscReal *alpha, PetscReal *beta, const PetscReal *points, PetscInt *ndegree, const PetscInt *degrees, PetscReal B[], PetscReal D[], PetscReal D2[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(points);
  CHKFORTRANNULLINTEGER(degrees);
  CHKFORTRANNULLREAL(B);
  CHKFORTRANNULLREAL(D);
  CHKFORTRANNULLREAL(D2);
  *ierr = PetscDTJacobiEval(*npoints, *alpha, *beta, points, *ndegree, degrees, B, D, D2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtlegendreeval_ PETSCDTLEGENDREEVAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtlegendreeval_ petscdtlegendreeval
#endif
PETSC_EXTERN void petscdtlegendreeval_(PetscInt *npoints, const PetscReal *points, PetscInt *ndegree, const PetscInt *degrees, PetscReal B[], PetscReal D[], PetscReal D2[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(points);
  CHKFORTRANNULLINTEGER(degrees);
  CHKFORTRANNULLREAL(B);
  CHKFORTRANNULLREAL(D);
  CHKFORTRANNULLREAL(D2);
  *ierr = PetscDTLegendreEval(*npoints, points, *ndegree, degrees, B, D, D2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtindextogradedorder_ PETSCDTINDEXTOGRADEDORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtindextogradedorder_ petscdtindextogradedorder
#endif
PETSC_EXTERN void petscdtindextogradedorder_(PetscInt *len, PetscInt *index, PetscInt degtup[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(degtup);
  *ierr = PetscDTIndexToGradedOrder(*len, *index, degtup);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtgradedordertoindex_ PETSCDTGRADEDORDERTOINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtgradedordertoindex_ petscdtgradedordertoindex
#endif
PETSC_EXTERN void petscdtgradedordertoindex_(PetscInt *len, const PetscInt degtup[], PetscInt *index, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(degtup);
  CHKFORTRANNULLINTEGER(index);
  *ierr = PetscDTGradedOrderToIndex(*len, degtup, index);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtpkdevaljet_ PETSCDTPKDEVALJET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtpkdevaljet_ petscdtpkdevaljet
#endif
PETSC_EXTERN void petscdtpkdevaljet_(PetscInt *dim, PetscInt *npoints, const PetscReal points[], PetscInt *degree, PetscInt *k, PetscReal p[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(points);
  CHKFORTRANNULLREAL(p);
  *ierr = PetscDTPKDEvalJet(*dim, *npoints, points, *degree, *k, p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtptrimmedsize_ PETSCDTPTRIMMEDSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtptrimmedsize_ petscdtptrimmedsize
#endif
PETSC_EXTERN void petscdtptrimmedsize_(PetscInt *dim, PetscInt *degree, PetscInt *formDegree, PetscInt *size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(size);
  *ierr = PetscDTPTrimmedSize(*dim, *degree, *formDegree, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtptrimmedevaljet_ PETSCDTPTRIMMEDEVALJET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtptrimmedevaljet_ petscdtptrimmedevaljet
#endif
PETSC_EXTERN void petscdtptrimmedevaljet_(PetscInt *dim, PetscInt *npoints, const PetscReal points[], PetscInt *degree, PetscInt *formDegree, PetscInt *jetDegree, PetscReal p[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(points);
  CHKFORTRANNULLREAL(p);
  *ierr = PetscDTPTrimmedEvalJet(*dim, *npoints, points, *degree, *formDegree, *jetDegree, p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtgaussjacobiquadrature_ PETSCDTGAUSSJACOBIQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtgaussjacobiquadrature_ petscdtgaussjacobiquadrature
#endif
PETSC_EXTERN void petscdtgaussjacobiquadrature_(PetscInt *npoints, PetscReal *a, PetscReal *b, PetscReal *alpha, PetscReal *beta, PetscReal x[], PetscReal w[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(w);
  *ierr = PetscDTGaussJacobiQuadrature(*npoints, *a, *b, *alpha, *beta, x, w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtgausslobattojacobiquadrature_ PETSCDTGAUSSLOBATTOJACOBIQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtgausslobattojacobiquadrature_ petscdtgausslobattojacobiquadrature
#endif
PETSC_EXTERN void petscdtgausslobattojacobiquadrature_(PetscInt *npoints, PetscReal *a, PetscReal *b, PetscReal *alpha, PetscReal *beta, PetscReal x[], PetscReal w[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(w);
  *ierr = PetscDTGaussLobattoJacobiQuadrature(*npoints, *a, *b, *alpha, *beta, x, w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtgaussquadrature_ PETSCDTGAUSSQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtgaussquadrature_ petscdtgaussquadrature
#endif
PETSC_EXTERN void petscdtgaussquadrature_(PetscInt *npoints, PetscReal *a, PetscReal *b, PetscReal x[], PetscReal w[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(w);
  *ierr = PetscDTGaussQuadrature(*npoints, *a, *b, x, w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtgausslobattolegendrequadrature_ PETSCDTGAUSSLOBATTOLEGENDREQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtgausslobattolegendrequadrature_ petscdtgausslobattolegendrequadrature
#endif
PETSC_EXTERN void petscdtgausslobattolegendrequadrature_(PetscInt *npoints, PetscGaussLobattoLegendreCreateType *type, PetscReal x[], PetscReal w[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(w);
  *ierr = PetscDTGaussLobattoLegendreQuadrature(*npoints, *type, x, w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtgausstensorquadrature_ PETSCDTGAUSSTENSORQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtgausstensorquadrature_ petscdtgausstensorquadrature
#endif
PETSC_EXTERN void petscdtgausstensorquadrature_(PetscInt *dim, PetscInt *Nc, PetscInt *npoints, PetscReal *a, PetscReal *b, PetscQuadrature *q, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscDTGaussTensorQuadrature(*dim, *Nc, *npoints, *a, *b, q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtstroudconicalquadrature_ PETSCDTSTROUDCONICALQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtstroudconicalquadrature_ petscdtstroudconicalquadrature
#endif
PETSC_EXTERN void petscdtstroudconicalquadrature_(PetscInt *dim, PetscInt *Nc, PetscInt *npoints, PetscReal *a, PetscReal *b, PetscQuadrature *q, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscDTStroudConicalQuadrature(*dim, *Nc, *npoints, *a, *b, q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtsimplexquadrature_ PETSCDTSIMPLEXQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtsimplexquadrature_ petscdtsimplexquadrature
#endif
PETSC_EXTERN void petscdtsimplexquadrature_(PetscInt *dim, PetscInt *degree, PetscDTSimplexQuadratureType *type, PetscQuadrature *quad, PetscErrorCode *ierr)
{
  PetscBool null_quad = !*(void**) quad ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(quad);
  *ierr = PetscDTSimplexQuadrature(*dim, *degree, *type, quad);
  if (*ierr) return;
  if (! null_quad && !*(void**) quad) *(void **) quad = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdttanhsinhtensorquadrature_ PETSCDTTANHSINHTENSORQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdttanhsinhtensorquadrature_ petscdttanhsinhtensorquadrature
#endif
PETSC_EXTERN void petscdttanhsinhtensorquadrature_(PetscInt *dim, PetscInt *level, PetscReal *a, PetscReal *b, PetscQuadrature *q, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscDTTanhSinhTensorQuadrature(*dim, *level, *a, *b, q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdttensorquadraturecreate_ PETSCDTTENSORQUADRATURECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdttensorquadraturecreate_ petscdttensorquadraturecreate
#endif
PETSC_EXTERN void petscdttensorquadraturecreate_(PetscQuadrature *q1, PetscQuadrature *q2, PetscQuadrature *q, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(q);
  CHKFORTRANNULLOBJECT(q);
  *ierr = PetscDTTensorQuadratureCreate(*q1, *q2, q);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtreconstructpoly_ PETSCDTRECONSTRUCTPOLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtreconstructpoly_ petscdtreconstructpoly
#endif
PETSC_EXTERN void petscdtreconstructpoly_(PetscInt *degree, PetscInt *nsource, const PetscReal sourcex[], PetscInt *ntarget, const PetscReal targetx[], PetscReal R[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(sourcex);
  CHKFORTRANNULLREAL(targetx);
  CHKFORTRANNULLREAL(R);
  *ierr = PetscDTReconstructPoly(*degree, *nsource, sourcex, *ntarget, targetx, R);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgausslobattolegendreintegrate_ PETSCGAUSSLOBATTOLEGENDREINTEGRATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgausslobattolegendreintegrate_ petscgausslobattolegendreintegrate
#endif
PETSC_EXTERN void petscgausslobattolegendreintegrate_(PetscInt *n, PetscReal nodes[], PetscReal weights[], const PetscReal f[], PetscReal *in, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(nodes);
  CHKFORTRANNULLREAL(weights);
  CHKFORTRANNULLREAL(f);
  CHKFORTRANNULLREAL(in);
  *ierr = PetscGaussLobattoLegendreIntegrate(*n, nodes, weights, f, in);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtindextobary_ PETSCDTINDEXTOBARY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtindextobary_ petscdtindextobary
#endif
PETSC_EXTERN void petscdtindextobary_(PetscInt *len, PetscInt *sum, PetscInt *index, PetscInt coord[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(coord);
  *ierr = PetscDTIndexToBary(*len, *sum, *index, coord);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtbarytoindex_ PETSCDTBARYTOINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtbarytoindex_ petscdtbarytoindex
#endif
PETSC_EXTERN void petscdtbarytoindex_(PetscInt *len, PetscInt *sum, const PetscInt coord[], PetscInt *index, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(coord);
  CHKFORTRANNULLINTEGER(index);
  *ierr = PetscDTBaryToIndex(*len, *sum, coord, index);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtcreatequadraturebycell_ PETSCDTCREATEQUADRATUREBYCELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtcreatequadraturebycell_ petscdtcreatequadraturebycell
#endif
PETSC_EXTERN void petscdtcreatequadraturebycell_(DMPolytopeType *ct, PetscInt *qorder, PetscDTSimplexQuadratureType *qtype, PetscQuadrature *q, PetscQuadrature *fq, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_fq = !*(void**) fq ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  CHKFORTRANNULLOBJECT(fq);
  *ierr = PetscDTCreateQuadratureByCell(*ct, *qorder, *qtype, q, fq);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
  if (! null_fq && !*(void**) fq) *(void **) fq = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdt.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdtcreatedefaultquadrature_ PETSCDTCREATEDEFAULTQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdtcreatedefaultquadrature_ petscdtcreatedefaultquadrature
#endif
PETSC_EXTERN void petscdtcreatedefaultquadrature_(DMPolytopeType *ct, PetscInt *qorder, PetscQuadrature *q, PetscQuadrature *fq, PetscErrorCode *ierr)
{
  PetscBool null_q = !*(void**) q ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_fq = !*(void**) fq ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(q);
  CHKFORTRANNULLOBJECT(fq);
  *ierr = PetscDTCreateDefaultQuadrature(*ct, *qorder, q, fq);
  if (*ierr) return;
  if (! null_q && !*(void**) q) *(void **) q = (void *)-2;
  if (! null_fq && !*(void**) fq) *(void **) fq = (void *)-2;
}
