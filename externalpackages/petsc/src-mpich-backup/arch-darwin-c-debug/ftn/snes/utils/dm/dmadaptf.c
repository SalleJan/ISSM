#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorregisterall_ DMADAPTORREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorregisterall_ dmadaptorregisterall
#endif
PETSC_EXTERN void dmadaptorregisterall_(PetscErrorCode *ierr)
{
  *ierr = DMAdaptorRegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorregisterdestroy_ DMADAPTORREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorregisterdestroy_ dmadaptorregisterdestroy
#endif
PETSC_EXTERN void dmadaptorregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = DMAdaptorRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptormonitorregisterdestroy_ DMADAPTORMONITORREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptormonitorregisterdestroy_ dmadaptormonitorregisterdestroy
#endif
PETSC_EXTERN void dmadaptormonitorregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = DMAdaptorMonitorRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorcreate_ DMADAPTORCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorcreate_ dmadaptorcreate
#endif
PETSC_EXTERN void dmadaptorcreate_(MPI_Fint *comm, DMAdaptor *adaptor, PetscErrorCode *ierr)
{
  PetscBool null_adaptor = !*(void**) adaptor ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(adaptor);
  CHKFORTRANNULLOBJECT(adaptor);
  *ierr = DMAdaptorCreate(MPI_Comm_f2c(*(comm)), adaptor);
  if (*ierr) return;
  if (! null_adaptor && !*(void**) adaptor) *(void **) adaptor = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptordestroy_ DMADAPTORDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptordestroy_ dmadaptordestroy
#endif
PETSC_EXTERN void dmadaptordestroy_(DMAdaptor *adaptor, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(adaptor);
  PetscBool null_adaptor = !*(void**) adaptor ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(adaptor);
  *ierr = DMAdaptorDestroy(adaptor);
  if (*ierr) return;
  if (! null_adaptor && !*(void**) adaptor) *(void **) adaptor = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorsettype_ DMADAPTORSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorsettype_ dmadaptorsettype
#endif
PETSC_EXTERN void dmadaptorsettype_(DMAdaptor *adaptor, char *method, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_method)
{
  char* c_method;
  FIXCHAR(method, l_method, c_method);
  *ierr = DMAdaptorSetType(*adaptor, c_method);
  if (*ierr) return;
  FREECHAR(method, c_method);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorgettype_ DMADAPTORGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorgettype_ dmadaptorgettype
#endif
PETSC_EXTERN void dmadaptorgettype_(DMAdaptor *adaptor, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = DMAdaptorGetType(*adaptor, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptormonitorcancel_ DMADAPTORMONITORCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptormonitorcancel_ dmadaptormonitorcancel
#endif
PETSC_EXTERN void dmadaptormonitorcancel_(DMAdaptor *adaptor, PetscErrorCode *ierr)
{
  *ierr = DMAdaptorMonitorCancel(*adaptor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptormonitorsetfromoptions_ DMADAPTORMONITORSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptormonitorsetfromoptions_ dmadaptormonitorsetfromoptions
#endif
PETSC_EXTERN void dmadaptormonitorsetfromoptions_(DMAdaptor *adaptor, char opt[], char name[], PetscCtx ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_opt, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_opt;
  FIXCHAR(opt, l_opt, c_opt);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMAdaptorMonitorSetFromOptions(*adaptor, c_opt, c_name, ctx);
  if (*ierr) return;
  FREECHAR(opt, c_opt);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorsetoptionsprefix_ DMADAPTORSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorsetoptionsprefix_ dmadaptorsetoptionsprefix
#endif
PETSC_EXTERN void dmadaptorsetoptionsprefix_(DMAdaptor *adaptor, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = DMAdaptorSetOptionsPrefix(*adaptor, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorsetfromoptions_ DMADAPTORSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorsetfromoptions_ dmadaptorsetfromoptions
#endif
PETSC_EXTERN void dmadaptorsetfromoptions_(DMAdaptor *adaptor, PetscErrorCode *ierr)
{
  *ierr = DMAdaptorSetFromOptions(*adaptor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorview_ DMADAPTORVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorview_ dmadaptorview
#endif
PETSC_EXTERN void dmadaptorview_(DMAdaptor *adaptor, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMAdaptorView(*adaptor, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorgetsolver_ DMADAPTORGETSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorgetsolver_ dmadaptorgetsolver
#endif
PETSC_EXTERN void dmadaptorgetsolver_(DMAdaptor *adaptor, SNES *snes, PetscErrorCode *ierr)
{
  PetscBool null_snes = !*(void**) snes ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(snes);
  *ierr = DMAdaptorGetSolver(*adaptor, snes);
  if (*ierr) return;
  if (! null_snes && !*(void**) snes) *(void **) snes = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorsetsolver_ DMADAPTORSETSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorsetsolver_ dmadaptorsetsolver
#endif
PETSC_EXTERN void dmadaptorsetsolver_(DMAdaptor *adaptor, SNES *snes, PetscErrorCode *ierr)
{
  *ierr = DMAdaptorSetSolver(*adaptor, *snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorgetsequencelength_ DMADAPTORGETSEQUENCELENGTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorgetsequencelength_ dmadaptorgetsequencelength
#endif
PETSC_EXTERN void dmadaptorgetsequencelength_(DMAdaptor *adaptor, PetscInt *num, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(num);
  *ierr = DMAdaptorGetSequenceLength(*adaptor, num);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorsetsequencelength_ DMADAPTORSETSEQUENCELENGTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorsetsequencelength_ dmadaptorsetsequencelength
#endif
PETSC_EXTERN void dmadaptorsetsequencelength_(DMAdaptor *adaptor, PetscInt *num, PetscErrorCode *ierr)
{
  *ierr = DMAdaptorSetSequenceLength(*adaptor, *num);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorsetup_ DMADAPTORSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorsetup_ dmadaptorsetup
#endif
PETSC_EXTERN void dmadaptorsetup_(DMAdaptor *adaptor, PetscErrorCode *ierr)
{
  *ierr = DMAdaptorSetUp(*adaptor);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptormonitor_ DMADAPTORMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptormonitor_ dmadaptormonitor
#endif
PETSC_EXTERN void dmadaptormonitor_(DMAdaptor *adaptor, PetscInt *it, DM *odm, DM *adm, PetscInt *Nf, PetscReal enorms[], Vec *error, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(enorms);
  *ierr = DMAdaptorMonitor(*adaptor, *it, *odm, *adm, *Nf, enorms, *error);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptormonitorsize_ DMADAPTORMONITORSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptormonitorsize_ dmadaptormonitorsize
#endif
PETSC_EXTERN void dmadaptormonitorsize_(DMAdaptor *adaptor, PetscInt *n, DM *odm, DM *adm, PetscInt *Nf, PetscReal enorms[], Vec *error, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(enorms);
  *ierr = DMAdaptorMonitorSize(*adaptor, *n, *odm, *adm, *Nf, enorms, *error, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptormonitorerror_ DMADAPTORMONITORERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptormonitorerror_ dmadaptormonitorerror
#endif
PETSC_EXTERN void dmadaptormonitorerror_(DMAdaptor *adaptor, PetscInt *n, DM *odm, DM *adm, PetscInt *Nf, PetscReal enorms[], Vec *error, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(enorms);
  *ierr = DMAdaptorMonitorError(*adaptor, *n, *odm, *adm, *Nf, enorms, *error, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptormonitorerrordraw_ DMADAPTORMONITORERRORDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptormonitorerrordraw_ dmadaptormonitorerrordraw
#endif
PETSC_EXTERN void dmadaptormonitorerrordraw_(DMAdaptor *adaptor, PetscInt *n, DM *odm, DM *adm, PetscInt *Nf, PetscReal enorms[], Vec *error, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(enorms);
  *ierr = DMAdaptorMonitorErrorDraw(*adaptor, *n, *odm, *adm, *Nf, enorms, *error, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptormonitorerrordrawlg_ DMADAPTORMONITORERRORDRAWLG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptormonitorerrordrawlg_ dmadaptormonitorerrordrawlg
#endif
PETSC_EXTERN void dmadaptormonitorerrordrawlg_(DMAdaptor *adaptor, PetscInt *n, DM *odm, DM *adm, PetscInt *Nf, PetscReal enorms[], Vec *error, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(enorms);
  *ierr = DMAdaptorMonitorErrorDrawLG(*adaptor, *n, *odm, *adm, *Nf, enorms, *error, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptormonitorregisterall_ DMADAPTORMONITORREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptormonitorregisterall_ dmadaptormonitorregisterall
#endif
PETSC_EXTERN void dmadaptormonitorregisterall_(PetscErrorCode *ierr)
{
  *ierr = DMAdaptorMonitorRegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptoradapt_ DMADAPTORADAPT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptoradapt_ dmadaptoradapt
#endif
PETSC_EXTERN void dmadaptoradapt_(DMAdaptor *adaptor, Vec *x, DMAdaptationStrategy *strategy, DM *adm, Vec *ax, PetscErrorCode *ierr)
{
  PetscBool null_adm = !*(void**) adm ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_ax = !*(void**) ax ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(adm);
  CHKFORTRANNULLOBJECT(ax);
  *ierr = DMAdaptorAdapt(*adaptor, *x, *strategy, adm, ax);
  if (*ierr) return;
  if (! null_adm && !*(void**) adm) *(void **) adm = (void *)-2;
  if (! null_ax && !*(void**) ax) *(void **) ax = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorgetcriterion_ DMADAPTORGETCRITERION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorgetcriterion_ dmadaptorgetcriterion
#endif
PETSC_EXTERN void dmadaptorgetcriterion_(DMAdaptor *adaptor, DMAdaptationCriterion *criterion, PetscErrorCode *ierr)
{
  *ierr = DMAdaptorGetCriterion(*adaptor, criterion);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmadaptor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptorsetcriterion_ DMADAPTORSETCRITERION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptorsetcriterion_ dmadaptorsetcriterion
#endif
PETSC_EXTERN void dmadaptorsetcriterion_(DMAdaptor *adaptor, DMAdaptationCriterion *criterion, PetscErrorCode *ierr)
{
  *ierr = DMAdaptorSetCriterion(*adaptor, *criterion);
  if (*ierr) return;
}
