#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5getgroup_ PETSCVIEWERHDF5GETGROUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5getgroup_ petscviewerhdf5getgroup
#endif
PETSC_EXTERN void petscviewerhdf5getgroup_(PetscViewer *viewer, char path[], char abspath[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_path, PETSC_FORTRAN_CHARLEN_T l_abspath)
{
  char* c_path;
  FIXCHAR(path, l_path, c_path);
  char* c_abspath = PETSC_NULLPTR;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5GetGroup(v_viewer, c_path, (const char **)&c_abspath);
  if (*ierr) return;
  FREECHAR(path, c_path);
  *ierr = PetscStrncpy((char *)abspath, c_abspath, l_abspath);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, abspath, l_abspath);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5setbasedimension2_ PETSCVIEWERHDF5SETBASEDIMENSION2
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5setbasedimension2_ petscviewerhdf5setbasedimension2
#endif
PETSC_EXTERN void petscviewerhdf5setbasedimension2_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5SetBaseDimension2(v_viewer, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5getbasedimension2_ PETSCVIEWERHDF5GETBASEDIMENSION2
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5getbasedimension2_ petscviewerhdf5getbasedimension2
#endif
PETSC_EXTERN void petscviewerhdf5getbasedimension2_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscViewerHDF5GetBaseDimension2(v_viewer, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5setspoutput_ PETSCVIEWERHDF5SETSPOUTPUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5setspoutput_ petscviewerhdf5setspoutput
#endif
PETSC_EXTERN void petscviewerhdf5setspoutput_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5SetSPOutput(v_viewer, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5getspoutput_ PETSCVIEWERHDF5GETSPOUTPUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5getspoutput_ petscviewerhdf5getspoutput
#endif
PETSC_EXTERN void petscviewerhdf5getspoutput_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscViewerHDF5GetSPOutput(v_viewer, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5setcollective_ PETSCVIEWERHDF5SETCOLLECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5setcollective_ petscviewerhdf5setcollective
#endif
PETSC_EXTERN void petscviewerhdf5setcollective_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5SetCollective(v_viewer, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5getcollective_ PETSCVIEWERHDF5GETCOLLECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5getcollective_ petscviewerhdf5getcollective
#endif
PETSC_EXTERN void petscviewerhdf5getcollective_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscViewerHDF5GetCollective(v_viewer, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5setdefaulttimestepping_ PETSCVIEWERHDF5SETDEFAULTTIMESTEPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5setdefaulttimestepping_ petscviewerhdf5setdefaulttimestepping
#endif
PETSC_EXTERN void petscviewerhdf5setdefaulttimestepping_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5SetDefaultTimestepping(v_viewer, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5getdefaulttimestepping_ PETSCVIEWERHDF5GETDEFAULTTIMESTEPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5getdefaulttimestepping_ petscviewerhdf5getdefaulttimestepping
#endif
PETSC_EXTERN void petscviewerhdf5getdefaulttimestepping_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscViewerHDF5GetDefaultTimestepping(v_viewer, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5setcompress_ PETSCVIEWERHDF5SETCOMPRESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5setcompress_ petscviewerhdf5setcompress
#endif
PETSC_EXTERN void petscviewerhdf5setcompress_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5SetCompress(v_viewer, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5getcompress_ PETSCVIEWERHDF5GETCOMPRESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5getcompress_ petscviewerhdf5getcompress
#endif
PETSC_EXTERN void petscviewerhdf5getcompress_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscViewerHDF5GetCompress(v_viewer, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5open_ PETSCVIEWERHDF5OPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5open_ petscviewerhdf5open
#endif
PETSC_EXTERN void petscviewerhdf5open_(MPI_Fint *comm, char name[], PetscFileMode *type, PetscViewer *hdf5v, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_hdf5v = !*(void**) hdf5v ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(hdf5v);
  *ierr = PetscViewerHDF5Open(MPI_Comm_f2c(*(comm)), c_name, *type, hdf5v);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_hdf5v && !*(void**) hdf5v) *(void **) hdf5v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5pushgroup_ PETSCVIEWERHDF5PUSHGROUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5pushgroup_ petscviewerhdf5pushgroup
#endif
PETSC_EXTERN void petscviewerhdf5pushgroup_(PetscViewer *viewer, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5PushGroup(v_viewer, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5popgroup_ PETSCVIEWERHDF5POPGROUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5popgroup_ petscviewerhdf5popgroup
#endif
PETSC_EXTERN void petscviewerhdf5popgroup_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5PopGroup(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5writegroup_ PETSCVIEWERHDF5WRITEGROUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5writegroup_ petscviewerhdf5writegroup
#endif
PETSC_EXTERN void petscviewerhdf5writegroup_(PetscViewer *viewer, char path[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_path)
{
  char* c_path;
  FIXCHAR(path, l_path, c_path);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5WriteGroup(v_viewer, c_path);
  if (*ierr) return;
  FREECHAR(path, c_path);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5pushtimestepping_ PETSCVIEWERHDF5PUSHTIMESTEPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5pushtimestepping_ petscviewerhdf5pushtimestepping
#endif
PETSC_EXTERN void petscviewerhdf5pushtimestepping_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5PushTimestepping(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5poptimestepping_ PETSCVIEWERHDF5POPTIMESTEPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5poptimestepping_ petscviewerhdf5poptimestepping
#endif
PETSC_EXTERN void petscviewerhdf5poptimestepping_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5PopTimestepping(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5istimestepping_ PETSCVIEWERHDF5ISTIMESTEPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5istimestepping_ petscviewerhdf5istimestepping
#endif
PETSC_EXTERN void petscviewerhdf5istimestepping_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscViewerHDF5IsTimestepping(v_viewer, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5incrementtimestep_ PETSCVIEWERHDF5INCREMENTTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5incrementtimestep_ petscviewerhdf5incrementtimestep
#endif
PETSC_EXTERN void petscviewerhdf5incrementtimestep_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5IncrementTimestep(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5settimestep_ PETSCVIEWERHDF5SETTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5settimestep_ petscviewerhdf5settimestep
#endif
PETSC_EXTERN void petscviewerhdf5settimestep_(PetscViewer *viewer, PetscInt *timestep, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5SetTimestep(v_viewer, *timestep);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5gettimestep_ PETSCVIEWERHDF5GETTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5gettimestep_ petscviewerhdf5gettimestep
#endif
PETSC_EXTERN void petscviewerhdf5gettimestep_(PetscViewer *viewer, PetscInt *timestep, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(timestep);
  *ierr = PetscViewerHDF5GetTimestep(v_viewer, timestep);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5writeattribute_ PETSCVIEWERHDF5WRITEATTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5writeattribute_ petscviewerhdf5writeattribute
#endif
PETSC_EXTERN void petscviewerhdf5writeattribute_(PetscViewer *viewer, char parent[], char name[], PetscDataType *datatype, const void *value, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_parent, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_parent;
  FIXCHAR(parent, l_parent, c_parent);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5WriteAttribute(v_viewer, c_parent, c_name, *datatype, value);
  if (*ierr) return;
  FREECHAR(parent, c_parent);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5writeobjectattribute_ PETSCVIEWERHDF5WRITEOBJECTATTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5writeobjectattribute_ petscviewerhdf5writeobjectattribute
#endif
PETSC_EXTERN void petscviewerhdf5writeobjectattribute_(PetscViewer *viewer, PetscObject *obj, char name[], PetscDataType *datatype, const void *value, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5WriteObjectAttribute(v_viewer, *obj, c_name, *datatype, value);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5readattribute_ PETSCVIEWERHDF5READATTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5readattribute_ petscviewerhdf5readattribute
#endif
PETSC_EXTERN void petscviewerhdf5readattribute_(PetscViewer *viewer, char parent[], char name[], PetscDataType *datatype, const void *defaultValue, void *value, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_parent, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_parent;
  FIXCHAR(parent, l_parent, c_parent);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5ReadAttribute(v_viewer, c_parent, c_name, *datatype, defaultValue, value);
  if (*ierr) return;
  FREECHAR(parent, c_parent);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5readobjectattribute_ PETSCVIEWERHDF5READOBJECTATTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5readobjectattribute_ petscviewerhdf5readobjectattribute
#endif
PETSC_EXTERN void petscviewerhdf5readobjectattribute_(PetscViewer *viewer, PetscObject *obj, char name[], PetscDataType *datatype, void *defaultValue, void *value, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerHDF5ReadObjectAttribute(v_viewer, *obj, c_name, *datatype, defaultValue, value);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5hasgroup_ PETSCVIEWERHDF5HASGROUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5hasgroup_ petscviewerhdf5hasgroup
#endif
PETSC_EXTERN void petscviewerhdf5hasgroup_(PetscViewer *viewer, char path[], PetscBool *has, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_path)
{
  char* c_path;
  FIXCHAR(path, l_path, c_path);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(has);
  *ierr = PetscViewerHDF5HasGroup(v_viewer, c_path, has);
  if (*ierr) return;
  FREECHAR(path, c_path);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5hasdataset_ PETSCVIEWERHDF5HASDATASET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5hasdataset_ petscviewerhdf5hasdataset
#endif
PETSC_EXTERN void petscviewerhdf5hasdataset_(PetscViewer *viewer, char path[], PetscBool *has, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_path)
{
  char* c_path;
  FIXCHAR(path, l_path, c_path);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(has);
  *ierr = PetscViewerHDF5HasDataset(v_viewer, c_path, has);
  if (*ierr) return;
  FREECHAR(path, c_path);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5hasobject_ PETSCVIEWERHDF5HASOBJECT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5hasobject_ petscviewerhdf5hasobject
#endif
PETSC_EXTERN void petscviewerhdf5hasobject_(PetscViewer *viewer, PetscObject *obj, PetscBool *has, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(has);
  *ierr = PetscViewerHDF5HasObject(v_viewer, *obj, has);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5hasattribute_ PETSCVIEWERHDF5HASATTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5hasattribute_ petscviewerhdf5hasattribute
#endif
PETSC_EXTERN void petscviewerhdf5hasattribute_(PetscViewer *viewer, char parent[], char name[], PetscBool *has, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_parent, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_parent;
  FIXCHAR(parent, l_parent, c_parent);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(has);
  *ierr = PetscViewerHDF5HasAttribute(v_viewer, c_parent, c_name, has);
  if (*ierr) return;
  FREECHAR(parent, c_parent);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewerhdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5hasobjectattribute_ PETSCVIEWERHDF5HASOBJECTATTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5hasobjectattribute_ petscviewerhdf5hasobjectattribute
#endif
PETSC_EXTERN void petscviewerhdf5hasobjectattribute_(PetscViewer *viewer, PetscObject *obj, char name[], PetscBool *has, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(has);
  *ierr = PetscViewerHDF5HasObjectAttribute(v_viewer, *obj, c_name, has);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
