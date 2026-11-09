#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmvectordefinefield_ DMSWARMVECTORDEFINEFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmvectordefinefield_ dmswarmvectordefinefield
#endif
PETSC_EXTERN void dmswarmvectordefinefield_(DM *dm, char fieldname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldname)
{
  char* c_fieldname;
  FIXCHAR(fieldname, l_fieldname, c_fieldname);
  *ierr = DMSwarmVectorDefineField(*dm, c_fieldname);
  if (*ierr) return;
  FREECHAR(fieldname, c_fieldname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmvectordefinefields_ DMSWARMVECTORDEFINEFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmvectordefinefields_ dmswarmvectordefinefields
#endif
PETSC_EXTERN void dmswarmvectordefinefields_(DM *sw, PetscInt *Nf, char fieldnames[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldnames)
{
  char* c_fieldnames = PETSC_NULLPTR;
  *ierr = DMSwarmVectorDefineFields(*sw, *Nf, (const char **)&c_fieldnames);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)fieldnames, c_fieldnames, l_fieldnames);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, fieldnames, l_fieldnames);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcreatemassmatrixsquare_ DMSWARMCREATEMASSMATRIXSQUARE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcreatemassmatrixsquare_ dmswarmcreatemassmatrixsquare
#endif
PETSC_EXTERN void dmswarmcreatemassmatrixsquare_(DM *dmCoarse, DM *dmFine, Mat *mass, PetscErrorCode *ierr)
{
  PetscBool null_mass = !*(void**) mass ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mass);
  *ierr = DMSwarmCreateMassMatrixSquare(*dmCoarse, *dmFine, mass);
  if (*ierr) return;
  if (! null_mass && !*(void**) mass) *(void **) mass = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcreateglobalvectorfromfield_ DMSWARMCREATEGLOBALVECTORFROMFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcreateglobalvectorfromfield_ dmswarmcreateglobalvectorfromfield
#endif
PETSC_EXTERN void dmswarmcreateglobalvectorfromfield_(DM *dm, char fieldname[], Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldname)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  char* c_fieldname;
  FIXCHAR(fieldname, l_fieldname, c_fieldname);
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMSwarmCreateGlobalVectorFromField(*dm, c_fieldname, vec);
  if (*ierr) return;
  FREECHAR(fieldname, c_fieldname);
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmdestroyglobalvectorfromfield_ DMSWARMDESTROYGLOBALVECTORFROMFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmdestroyglobalvectorfromfield_ dmswarmdestroyglobalvectorfromfield
#endif
PETSC_EXTERN void dmswarmdestroyglobalvectorfromfield_(DM *dm, char fieldname[], Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldname)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  char* c_fieldname;
  FIXCHAR(fieldname, l_fieldname, c_fieldname);
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMSwarmDestroyGlobalVectorFromField(*dm, c_fieldname, vec);
  if (*ierr) return;
  FREECHAR(fieldname, c_fieldname);
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcreatelocalvectorfromfield_ DMSWARMCREATELOCALVECTORFROMFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcreatelocalvectorfromfield_ dmswarmcreatelocalvectorfromfield
#endif
PETSC_EXTERN void dmswarmcreatelocalvectorfromfield_(DM *dm, char fieldname[], Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldname)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  char* c_fieldname;
  FIXCHAR(fieldname, l_fieldname, c_fieldname);
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMSwarmCreateLocalVectorFromField(*dm, c_fieldname, vec);
  if (*ierr) return;
  FREECHAR(fieldname, c_fieldname);
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmdestroylocalvectorfromfield_ DMSWARMDESTROYLOCALVECTORFROMFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmdestroylocalvectorfromfield_ dmswarmdestroylocalvectorfromfield
#endif
PETSC_EXTERN void dmswarmdestroylocalvectorfromfield_(DM *dm, char fieldname[], Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldname)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  char* c_fieldname;
  FIXCHAR(fieldname, l_fieldname, c_fieldname);
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMSwarmDestroyLocalVectorFromField(*dm, c_fieldname, vec);
  if (*ierr) return;
  FREECHAR(fieldname, c_fieldname);
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcreateglobalvectorfromfields_ DMSWARMCREATEGLOBALVECTORFROMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcreateglobalvectorfromfields_ dmswarmcreateglobalvectorfromfields
#endif
PETSC_EXTERN void dmswarmcreateglobalvectorfromfields_(DM *dm, PetscInt *Nf, char fieldnames[], Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldnames)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  char* c_fieldnames = PETSC_NULLPTR;
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMSwarmCreateGlobalVectorFromFields(*dm, *Nf, (const char **)&c_fieldnames, vec);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)fieldnames, c_fieldnames, l_fieldnames);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, fieldnames, l_fieldnames);
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmdestroyglobalvectorfromfields_ DMSWARMDESTROYGLOBALVECTORFROMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmdestroyglobalvectorfromfields_ dmswarmdestroyglobalvectorfromfields
#endif
PETSC_EXTERN void dmswarmdestroyglobalvectorfromfields_(DM *dm, PetscInt *Nf, char fieldnames[], Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldnames)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  char* c_fieldnames = PETSC_NULLPTR;
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMSwarmDestroyGlobalVectorFromFields(*dm, *Nf, (const char **)&c_fieldnames, vec);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)fieldnames, c_fieldnames, l_fieldnames);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, fieldnames, l_fieldnames);
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcreatelocalvectorfromfields_ DMSWARMCREATELOCALVECTORFROMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcreatelocalvectorfromfields_ dmswarmcreatelocalvectorfromfields
#endif
PETSC_EXTERN void dmswarmcreatelocalvectorfromfields_(DM *dm, PetscInt *Nf, char fieldnames[], Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldnames)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  char* c_fieldnames = PETSC_NULLPTR;
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMSwarmCreateLocalVectorFromFields(*dm, *Nf, (const char **)&c_fieldnames, vec);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)fieldnames, c_fieldnames, l_fieldnames);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, fieldnames, l_fieldnames);
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmdestroylocalvectorfromfields_ DMSWARMDESTROYLOCALVECTORFROMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmdestroylocalvectorfromfields_ dmswarmdestroylocalvectorfromfields
#endif
PETSC_EXTERN void dmswarmdestroylocalvectorfromfields_(DM *dm, PetscInt *Nf, char fieldnames[], Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldnames)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  char* c_fieldnames = PETSC_NULLPTR;
  CHKFORTRANNULLOBJECT(vec);
  *ierr = DMSwarmDestroyLocalVectorFromFields(*dm, *Nf, (const char **)&c_fieldnames, vec);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)fieldnames, c_fieldnames, l_fieldnames);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, fieldnames, l_fieldnames);
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarminitializefieldregister_ DMSWARMINITIALIZEFIELDREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarminitializefieldregister_ dmswarminitializefieldregister
#endif
PETSC_EXTERN void dmswarminitializefieldregister_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMSwarmInitializeFieldRegister(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmfinalizefieldregister_ DMSWARMFINALIZEFIELDREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmfinalizefieldregister_ dmswarmfinalizefieldregister
#endif
PETSC_EXTERN void dmswarmfinalizefieldregister_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMSwarmFinalizeFieldRegister(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsetlocalsizes_ DMSWARMSETLOCALSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsetlocalsizes_ dmswarmsetlocalsizes
#endif
PETSC_EXTERN void dmswarmsetlocalsizes_(DM *sw, PetscInt *nlocal, PetscInt *buffer, PetscErrorCode *ierr)
{
  *ierr = DMSwarmSetLocalSizes(*sw, *nlocal, *buffer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsetcelldm_ DMSWARMSETCELLDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsetcelldm_ dmswarmsetcelldm
#endif
PETSC_EXTERN void dmswarmsetcelldm_(DM *sw, DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMSwarmSetCellDM(*sw, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmgetcelldm_ DMSWARMGETCELLDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmgetcelldm_ dmswarmgetcelldm
#endif
PETSC_EXTERN void dmswarmgetcelldm_(DM *sw, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMSwarmGetCellDM(*sw, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsetcelldmactive_ DMSWARMSETCELLDMACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsetcelldmactive_ dmswarmsetcelldmactive
#endif
PETSC_EXTERN void dmswarmsetcelldmactive_(DM *sw, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = DMSwarmSetCellDMActive(*sw, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmgetcelldmactive_ DMSWARMGETCELLDMACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmgetcelldmactive_ dmswarmgetcelldmactive
#endif
PETSC_EXTERN void dmswarmgetcelldmactive_(DM *sw, DMSwarmCellDM *celldm, PetscErrorCode *ierr)
{
  PetscBool null_celldm = !*(void**) celldm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(celldm);
  *ierr = DMSwarmGetCellDMActive(*sw, celldm);
  if (*ierr) return;
  if (! null_celldm && !*(void**) celldm) *(void **) celldm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmgetcelldmbyname_ DMSWARMGETCELLDMBYNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmgetcelldmbyname_ dmswarmgetcelldmbyname
#endif
PETSC_EXTERN void dmswarmgetcelldmbyname_(DM *sw, char name[], DMSwarmCellDM *celldm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_celldm = !*(void**) celldm ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(celldm);
  *ierr = DMSwarmGetCellDMByName(*sw, c_name, celldm);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_celldm && !*(void**) celldm) *(void **) celldm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmaddcelldm_ DMSWARMADDCELLDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmaddcelldm_ dmswarmaddcelldm
#endif
PETSC_EXTERN void dmswarmaddcelldm_(DM *sw, DMSwarmCellDM *celldm, PetscErrorCode *ierr)
{
  *ierr = DMSwarmAddCellDM(*sw, *celldm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmgetlocalsize_ DMSWARMGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmgetlocalsize_ dmswarmgetlocalsize
#endif
PETSC_EXTERN void dmswarmgetlocalsize_(DM *dm, PetscInt *nlocal, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nlocal);
  *ierr = DMSwarmGetLocalSize(*dm, nlocal);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmgetsize_ DMSWARMGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmgetsize_ dmswarmgetsize
#endif
PETSC_EXTERN void dmswarmgetsize_(DM *dm, PetscInt *n, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(n);
  *ierr = DMSwarmGetSize(*dm, n);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmregisterpetscdatatypefield_ DMSWARMREGISTERPETSCDATATYPEFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmregisterpetscdatatypefield_ dmswarmregisterpetscdatatypefield
#endif
PETSC_EXTERN void dmswarmregisterpetscdatatypefield_(DM *dm, char fieldname[], PetscInt *blocksize, PetscDataType *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldname)
{
  char* c_fieldname;
  FIXCHAR(fieldname, l_fieldname, c_fieldname);
  *ierr = DMSwarmRegisterPetscDatatypeField(*dm, c_fieldname, *blocksize, *type);
  if (*ierr) return;
  FREECHAR(fieldname, c_fieldname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmregisteruserstructfield_ DMSWARMREGISTERUSERSTRUCTFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmregisteruserstructfield_ dmswarmregisteruserstructfield
#endif
PETSC_EXTERN void dmswarmregisteruserstructfield_(DM *dm, char fieldname[], size_t *size, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldname)
{
  char* c_fieldname;
  FIXCHAR(fieldname, l_fieldname, c_fieldname);
  *ierr = DMSwarmRegisterUserStructField(*dm, c_fieldname, *size);
  if (*ierr) return;
  FREECHAR(fieldname, c_fieldname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmregisteruserdatatypefield_ DMSWARMREGISTERUSERDATATYPEFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmregisteruserdatatypefield_ dmswarmregisteruserdatatypefield
#endif
PETSC_EXTERN void dmswarmregisteruserdatatypefield_(DM *dm, char fieldname[], size_t *size, PetscInt *blocksize, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldname)
{
  char* c_fieldname;
  FIXCHAR(fieldname, l_fieldname, c_fieldname);
  *ierr = DMSwarmRegisterUserDatatypeField(*dm, c_fieldname, *size, *blocksize);
  if (*ierr) return;
  FREECHAR(fieldname, c_fieldname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmgetfieldinfo_ DMSWARMGETFIELDINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmgetfieldinfo_ dmswarmgetfieldinfo
#endif
PETSC_EXTERN void dmswarmgetfieldinfo_(DM *dm, char fieldname[], PetscInt *blocksize, PetscDataType *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fieldname)
{
  char* c_fieldname;
  FIXCHAR(fieldname, l_fieldname, c_fieldname);
  CHKFORTRANNULLINTEGER(blocksize);
  *ierr = DMSwarmGetFieldInfo(*dm, c_fieldname, blocksize, type);
  if (*ierr) return;
  FREECHAR(fieldname, c_fieldname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmaddpoint_ DMSWARMADDPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmaddpoint_ dmswarmaddpoint
#endif
PETSC_EXTERN void dmswarmaddpoint_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMSwarmAddPoint(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmaddnpoints_ DMSWARMADDNPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmaddnpoints_ dmswarmaddnpoints
#endif
PETSC_EXTERN void dmswarmaddnpoints_(DM *dm, PetscInt *npoints, PetscErrorCode *ierr)
{
  *ierr = DMSwarmAddNPoints(*dm, *npoints);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmremovepoint_ DMSWARMREMOVEPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmremovepoint_ dmswarmremovepoint
#endif
PETSC_EXTERN void dmswarmremovepoint_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMSwarmRemovePoint(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmremovepointatindex_ DMSWARMREMOVEPOINTATINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmremovepointatindex_ dmswarmremovepointatindex
#endif
PETSC_EXTERN void dmswarmremovepointatindex_(DM *dm, PetscInt *idx, PetscErrorCode *ierr)
{
  *ierr = DMSwarmRemovePointAtIndex(*dm, *idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcopypoint_ DMSWARMCOPYPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcopypoint_ dmswarmcopypoint
#endif
PETSC_EXTERN void dmswarmcopypoint_(DM *dm, PetscInt *pi, PetscInt *pj, PetscErrorCode *ierr)
{
  *ierr = DMSwarmCopyPoint(*dm, *pi, *pj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmmigrate_ DMSWARMMIGRATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmmigrate_ dmswarmmigrate
#endif
PETSC_EXTERN void dmswarmmigrate_(DM *dm, PetscBool *remove_sent_points, PetscErrorCode *ierr)
{
  *ierr = DMSwarmMigrate(*dm, *remove_sent_points ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcollectviewcreate_ DMSWARMCOLLECTVIEWCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcollectviewcreate_ dmswarmcollectviewcreate
#endif
PETSC_EXTERN void dmswarmcollectviewcreate_(DM *dm, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_CREATE(dm);
  *ierr = DMSwarmCollectViewCreate(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcollectviewdestroy_ DMSWARMCOLLECTVIEWDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcollectviewdestroy_ dmswarmcollectviewdestroy
#endif
PETSC_EXTERN void dmswarmcollectviewdestroy_(DM *dm, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(dm);
  *ierr = DMSwarmCollectViewDestroy(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsetpointcoordinatesrandom_ DMSWARMSETPOINTCOORDINATESRANDOM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsetpointcoordinatesrandom_ dmswarmsetpointcoordinatesrandom
#endif
PETSC_EXTERN void dmswarmsetpointcoordinatesrandom_(DM *dm, PetscInt *Npc, PetscErrorCode *ierr)
{
  *ierr = DMSwarmSetPointCoordinatesRandom(*dm, *Npc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmgettype_ DMSWARMGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmgettype_ dmswarmgettype
#endif
PETSC_EXTERN void dmswarmgettype_(DM *sw, DMSwarmType *stype, PetscErrorCode *ierr)
{
  *ierr = DMSwarmGetType(*sw, stype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmsettype_ DMSWARMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmsettype_ dmswarmsettype
#endif
PETSC_EXTERN void dmswarmsettype_(DM *sw, DMSwarmType *stype, PetscErrorCode *ierr)
{
  *ierr = DMSwarmSetType(*sw, *stype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmgetcellswarm_ DMSWARMGETCELLSWARM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmgetcellswarm_ dmswarmgetcellswarm
#endif
PETSC_EXTERN void dmswarmgetcellswarm_(DM *sw, PetscInt *cellID, DM *cellswarm, PetscErrorCode *ierr)
{
  *ierr = DMSwarmGetCellSwarm(*sw, *cellID, *cellswarm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmrestorecellswarm_ DMSWARMRESTORECELLSWARM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmrestorecellswarm_ dmswarmrestorecellswarm
#endif
PETSC_EXTERN void dmswarmrestorecellswarm_(DM *sw, PetscInt *cellID, DM *cellswarm, PetscErrorCode *ierr)
{
  *ierr = DMSwarmRestoreCellSwarm(*sw, *cellID, *cellswarm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmcomputemoments_ DMSWARMCOMPUTEMOMENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmcomputemoments_ dmswarmcomputemoments
#endif
PETSC_EXTERN void dmswarmcomputemoments_(DM *sw, char coordinate[], char weight[], PetscReal moments[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_coordinate, PETSC_FORTRAN_CHARLEN_T l_weight)
{
  char* c_coordinate;
  FIXCHAR(coordinate, l_coordinate, c_coordinate);
  char* c_weight;
  FIXCHAR(weight, l_weight, c_weight);
  CHKFORTRANNULLREAL(moments);
  *ierr = DMSwarmComputeMoments(*sw, c_coordinate, c_weight, moments);
  if (*ierr) return;
  FREECHAR(coordinate, c_coordinate);
  FREECHAR(weight, c_weight);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmreplace_ DMSWARMREPLACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmreplace_ dmswarmreplace
#endif
PETSC_EXTERN void dmswarmreplace_(DM *dm, DM *ndm, PetscErrorCode *ierr)
{
  PetscBool null_ndm = !*(void**) ndm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ndm);
  *ierr = DMSwarmReplace(*dm, ndm);
  if (*ierr) return;
  if (! null_ndm && !*(void**) ndm) *(void **) ndm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmswarm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmswarmduplicate_ DMSWARMDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmswarmduplicate_ dmswarmduplicate
#endif
PETSC_EXTERN void dmswarmduplicate_(DM *sw, DM *nsw, PetscErrorCode *ierr)
{
  PetscBool null_nsw = !*(void**) nsw ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(nsw);
  *ierr = DMSwarmDuplicate(*sw, nsw);
  if (*ierr) return;
  if (! null_nsw && !*(void**) nsw) *(void **) nsw = (void *)-2;
}
