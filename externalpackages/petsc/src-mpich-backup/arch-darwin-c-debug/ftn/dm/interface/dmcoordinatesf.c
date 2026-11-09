#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinatedm_ DMGETCOORDINATEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinatedm_ dmgetcoordinatedm
#endif
PETSC_EXTERN void dmgetcoordinatedm_(DM *dm, DM *cdm, PetscErrorCode *ierr)
{
  PetscBool null_cdm = !*(void**) cdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(cdm);
  *ierr = DMGetCoordinateDM(*dm, cdm);
  if (*ierr) return;
  if (! null_cdm && !*(void**) cdm) *(void **) cdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcoordinatedm_ DMSETCOORDINATEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcoordinatedm_ dmsetcoordinatedm
#endif
PETSC_EXTERN void dmsetcoordinatedm_(DM *dm, DM *cdm, PetscErrorCode *ierr)
{
  *ierr = DMSetCoordinateDM(*dm, *cdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcellcoordinatedm_ DMGETCELLCOORDINATEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcellcoordinatedm_ dmgetcellcoordinatedm
#endif
PETSC_EXTERN void dmgetcellcoordinatedm_(DM *dm, DM *cdm, PetscErrorCode *ierr)
{
  PetscBool null_cdm = !*(void**) cdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(cdm);
  *ierr = DMGetCellCoordinateDM(*dm, cdm);
  if (*ierr) return;
  if (! null_cdm && !*(void**) cdm) *(void **) cdm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcellcoordinatedm_ DMSETCELLCOORDINATEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcellcoordinatedm_ dmsetcellcoordinatedm
#endif
PETSC_EXTERN void dmsetcellcoordinatedm_(DM *dm, DM *cdm, PetscErrorCode *ierr)
{
  *ierr = DMSetCellCoordinateDM(*dm, *cdm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinatedim_ DMGETCOORDINATEDIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinatedim_ dmgetcoordinatedim
#endif
PETSC_EXTERN void dmgetcoordinatedim_(DM *dm, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = DMGetCoordinateDim(*dm, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcoordinatedim_ DMSETCOORDINATEDIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcoordinatedim_ dmsetcoordinatedim
#endif
PETSC_EXTERN void dmsetcoordinatedim_(DM *dm, PetscInt *dim, PetscErrorCode *ierr)
{
  *ierr = DMSetCoordinateDim(*dm, *dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinatesection_ DMGETCOORDINATESECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinatesection_ dmgetcoordinatesection
#endif
PETSC_EXTERN void dmgetcoordinatesection_(DM *dm, PetscSection *section, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(section);
  *ierr = DMGetCoordinateSection(*dm, section);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcoordinatesection_ DMSETCOORDINATESECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcoordinatesection_ dmsetcoordinatesection
#endif
PETSC_EXTERN void dmsetcoordinatesection_(DM *dm, PetscInt *dim, PetscSection *section, PetscErrorCode *ierr)
{
  *ierr = DMSetCoordinateSection(*dm, *dim, *section);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcellcoordinatesection_ DMGETCELLCOORDINATESECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcellcoordinatesection_ dmgetcellcoordinatesection
#endif
PETSC_EXTERN void dmgetcellcoordinatesection_(DM *dm, PetscSection *section, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(section);
  *ierr = DMGetCellCoordinateSection(*dm, section);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcellcoordinatesection_ DMSETCELLCOORDINATESECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcellcoordinatesection_ dmsetcellcoordinatesection
#endif
PETSC_EXTERN void dmsetcellcoordinatesection_(DM *dm, PetscInt *dim, PetscSection *section, PetscErrorCode *ierr)
{
  *ierr = DMSetCellCoordinateSection(*dm, *dim, *section);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinates_ DMGETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinates_ dmgetcoordinates
#endif
PETSC_EXTERN void dmgetcoordinates_(DM *dm, Vec *c, PetscErrorCode *ierr)
{
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(c);
  *ierr = DMGetCoordinates(*dm, c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcoordinates_ DMSETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcoordinates_ dmsetcoordinates
#endif
PETSC_EXTERN void dmsetcoordinates_(DM *dm, Vec *c, PetscErrorCode *ierr)
{
  *ierr = DMSetCoordinates(*dm, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcellcoordinates_ DMGETCELLCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcellcoordinates_ dmgetcellcoordinates
#endif
PETSC_EXTERN void dmgetcellcoordinates_(DM *dm, Vec *c, PetscErrorCode *ierr)
{
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(c);
  *ierr = DMGetCellCoordinates(*dm, c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcellcoordinates_ DMSETCELLCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcellcoordinates_ dmsetcellcoordinates
#endif
PETSC_EXTERN void dmsetcellcoordinates_(DM *dm, Vec *c, PetscErrorCode *ierr)
{
  *ierr = DMSetCellCoordinates(*dm, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinateslocalsetup_ DMGETCOORDINATESLOCALSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinateslocalsetup_ dmgetcoordinateslocalsetup
#endif
PETSC_EXTERN void dmgetcoordinateslocalsetup_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMGetCoordinatesLocalSetUp(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinateslocal_ DMGETCOORDINATESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinateslocal_ dmgetcoordinateslocal
#endif
PETSC_EXTERN void dmgetcoordinateslocal_(DM *dm, Vec *c, PetscErrorCode *ierr)
{
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(c);
  *ierr = DMGetCoordinatesLocal(*dm, c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinateslocalnoncollective_ DMGETCOORDINATESLOCALNONCOLLECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinateslocalnoncollective_ dmgetcoordinateslocalnoncollective
#endif
PETSC_EXTERN void dmgetcoordinateslocalnoncollective_(DM *dm, Vec *c, PetscErrorCode *ierr)
{
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(c);
  *ierr = DMGetCoordinatesLocalNoncollective(*dm, c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinateslocaltuple_ DMGETCOORDINATESLOCALTUPLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinateslocaltuple_ dmgetcoordinateslocaltuple
#endif
PETSC_EXTERN void dmgetcoordinateslocaltuple_(DM *dm, IS *p, PetscSection *pCoordSection, Vec *pCoord, PetscErrorCode *ierr)
{
  PetscBool null_pCoordSection = !*(void**) pCoordSection ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_pCoord = !*(void**) pCoord ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pCoordSection);
  CHKFORTRANNULLOBJECT(pCoord);
  *ierr = DMGetCoordinatesLocalTuple(*dm, *p, pCoordSection, pCoord);
  if (*ierr) return;
  if (! null_pCoordSection && !*(void**) pCoordSection) *(void **) pCoordSection = (void *)-2;
  if (! null_pCoord && !*(void**) pCoord) *(void **) pCoord = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcoordinateslocal_ DMSETCOORDINATESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcoordinateslocal_ dmsetcoordinateslocal
#endif
PETSC_EXTERN void dmsetcoordinateslocal_(DM *dm, Vec *c, PetscErrorCode *ierr)
{
  *ierr = DMSetCoordinatesLocal(*dm, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcellcoordinateslocalsetup_ DMGETCELLCOORDINATESLOCALSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcellcoordinateslocalsetup_ dmgetcellcoordinateslocalsetup
#endif
PETSC_EXTERN void dmgetcellcoordinateslocalsetup_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMGetCellCoordinatesLocalSetUp(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcellcoordinateslocal_ DMGETCELLCOORDINATESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcellcoordinateslocal_ dmgetcellcoordinateslocal
#endif
PETSC_EXTERN void dmgetcellcoordinateslocal_(DM *dm, Vec *c, PetscErrorCode *ierr)
{
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(c);
  *ierr = DMGetCellCoordinatesLocal(*dm, c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcellcoordinateslocalnoncollective_ DMGETCELLCOORDINATESLOCALNONCOLLECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcellcoordinateslocalnoncollective_ dmgetcellcoordinateslocalnoncollective
#endif
PETSC_EXTERN void dmgetcellcoordinateslocalnoncollective_(DM *dm, Vec *c, PetscErrorCode *ierr)
{
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(c);
  *ierr = DMGetCellCoordinatesLocalNoncollective(*dm, c);
  if (*ierr) return;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcellcoordinateslocal_ DMSETCELLCOORDINATESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcellcoordinateslocal_ dmsetcellcoordinateslocal
#endif
PETSC_EXTERN void dmsetcellcoordinateslocal_(DM *dm, Vec *c, PetscErrorCode *ierr)
{
  *ierr = DMSetCellCoordinatesLocal(*dm, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetcoordinatefield_ DMGETCOORDINATEFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetcoordinatefield_ dmgetcoordinatefield
#endif
PETSC_EXTERN void dmgetcoordinatefield_(DM *dm, DMField *field, PetscErrorCode *ierr)
{
  PetscBool null_field = !*(void**) field ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(field);
  *ierr = DMGetCoordinateField(*dm, field);
  if (*ierr) return;
  if (! null_field && !*(void**) field) *(void **) field = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcoordinatefield_ DMSETCOORDINATEFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcoordinatefield_ dmsetcoordinatefield
#endif
PETSC_EXTERN void dmsetcoordinatefield_(DM *dm, DMField *field, PetscErrorCode *ierr)
{
  *ierr = DMSetCoordinateField(*dm, *field);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcellcoordinatefield_ DMSETCELLCOORDINATEFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcellcoordinatefield_ dmsetcellcoordinatefield
#endif
PETSC_EXTERN void dmsetcellcoordinatefield_(DM *dm, DMField *field, PetscErrorCode *ierr)
{
  *ierr = DMSetCellCoordinateField(*dm, *field);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetlocalboundingbox_ DMGETLOCALBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetlocalboundingbox_ dmgetlocalboundingbox
#endif
PETSC_EXTERN void dmgetlocalboundingbox_(DM *dm, PetscReal lmin[], PetscReal lmax[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(lmin);
  CHKFORTRANNULLREAL(lmax);
  *ierr = DMGetLocalBoundingBox(*dm, lmin, lmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgetboundingbox_ DMGETBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgetboundingbox_ dmgetboundingbox
#endif
PETSC_EXTERN void dmgetboundingbox_(DM *dm, PetscReal gmin[], PetscReal gmax[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(gmin);
  CHKFORTRANNULLREAL(gmax);
  *ierr = DMGetBoundingBox(*dm, gmin, gmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetcoordinatedisc_ DMSETCOORDINATEDISC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetcoordinatedisc_ dmsetcoordinatedisc
#endif
PETSC_EXTERN void dmsetcoordinatedisc_(DM *dm, PetscFE *disc, PetscBool *localized, PetscBool *project, PetscErrorCode *ierr)
{
  *ierr = DMSetCoordinateDisc(*dm, *disc, *localized ? PETSC_TRUE : PETSC_FALSE, *project ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlocatepoints_ DMLOCATEPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlocatepoints_ dmlocatepoints
#endif
PETSC_EXTERN void dmlocatepoints_(DM *dm, Vec *v, DMPointLocationType *ltype, PetscSF *cellSF, PetscErrorCode *ierr)
{
  PetscBool null_cellSF = !*(void**) cellSF ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(cellSF);
  *ierr = DMLocatePoints(*dm, *v, *ltype, cellSF);
  if (*ierr) return;
  if (! null_cellSF && !*(void**) cellSF) *(void **) cellSF = (void *)-2;
}
