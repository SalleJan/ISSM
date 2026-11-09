#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetreordering_ MATSTRUMPACKSETREORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetreordering_ matstrumpacksetreordering
#endif
PETSC_EXTERN void matstrumpacksetreordering_(Mat *F, MatSTRUMPACKReordering *reordering, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetReordering(*F, *reordering);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpackgetreordering_ MATSTRUMPACKGETREORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpackgetreordering_ matstrumpackgetreordering
#endif
PETSC_EXTERN void matstrumpackgetreordering_(Mat *F, MatSTRUMPACKReordering *reordering, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKGetReordering(*F, reordering);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetcolperm_ MATSTRUMPACKSETCOLPERM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetcolperm_ matstrumpacksetcolperm
#endif
PETSC_EXTERN void matstrumpacksetcolperm_(Mat *F, PetscBool *cperm, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetColPerm(*F, *cperm ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpackgetcolperm_ MATSTRUMPACKGETCOLPERM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpackgetcolperm_ matstrumpackgetcolperm
#endif
PETSC_EXTERN void matstrumpackgetcolperm_(Mat *F, PetscBool *cperm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(cperm);
  *ierr = MatSTRUMPACKGetColPerm(*F, cperm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetgpu_ MATSTRUMPACKSETGPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetgpu_ matstrumpacksetgpu
#endif
PETSC_EXTERN void matstrumpacksetgpu_(Mat *F, PetscBool *gpu, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetGPU(*F, *gpu ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpackgetgpu_ MATSTRUMPACKGETGPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpackgetgpu_ matstrumpackgetgpu
#endif
PETSC_EXTERN void matstrumpackgetgpu_(Mat *F, PetscBool *gpu, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(gpu);
  *ierr = MatSTRUMPACKGetGPU(*F, gpu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetcompression_ MATSTRUMPACKSETCOMPRESSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetcompression_ matstrumpacksetcompression
#endif
PETSC_EXTERN void matstrumpacksetcompression_(Mat *F, MatSTRUMPACKCompressionType *comp, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetCompression(*F, *comp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpackgetcompression_ MATSTRUMPACKGETCOMPRESSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpackgetcompression_ matstrumpackgetcompression
#endif
PETSC_EXTERN void matstrumpackgetcompression_(Mat *F, MatSTRUMPACKCompressionType *comp, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKGetCompression(*F, comp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetcompreltol_ MATSTRUMPACKSETCOMPRELTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetcompreltol_ matstrumpacksetcompreltol
#endif
PETSC_EXTERN void matstrumpacksetcompreltol_(Mat *F, PetscReal *rtol, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetCompRelTol(*F, *rtol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpackgetcompreltol_ MATSTRUMPACKGETCOMPRELTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpackgetcompreltol_ matstrumpackgetcompreltol
#endif
PETSC_EXTERN void matstrumpackgetcompreltol_(Mat *F, PetscReal *rtol, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(rtol);
  *ierr = MatSTRUMPACKGetCompRelTol(*F, rtol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetcompabstol_ MATSTRUMPACKSETCOMPABSTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetcompabstol_ matstrumpacksetcompabstol
#endif
PETSC_EXTERN void matstrumpacksetcompabstol_(Mat *F, PetscReal *atol, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetCompAbsTol(*F, *atol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpackgetcompabstol_ MATSTRUMPACKGETCOMPABSTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpackgetcompabstol_ matstrumpackgetcompabstol
#endif
PETSC_EXTERN void matstrumpackgetcompabstol_(Mat *F, PetscReal *atol, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(atol);
  *ierr = MatSTRUMPACKGetCompAbsTol(*F, atol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetcompleafsize_ MATSTRUMPACKSETCOMPLEAFSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetcompleafsize_ matstrumpacksetcompleafsize
#endif
PETSC_EXTERN void matstrumpacksetcompleafsize_(Mat *F, PetscInt *leaf_size, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetCompLeafSize(*F, *leaf_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpackgetcompleafsize_ MATSTRUMPACKGETCOMPLEAFSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpackgetcompleafsize_ matstrumpackgetcompleafsize
#endif
PETSC_EXTERN void matstrumpackgetcompleafsize_(Mat *F, PetscInt *leaf_size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(leaf_size);
  *ierr = MatSTRUMPACKGetCompLeafSize(*F, leaf_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetgeometricnxyz_ MATSTRUMPACKSETGEOMETRICNXYZ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetgeometricnxyz_ matstrumpacksetgeometricnxyz
#endif
PETSC_EXTERN void matstrumpacksetgeometricnxyz_(Mat *F, PetscInt *nx, PetscInt *ny, PetscInt *nz, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetGeometricNxyz(*F, *nx, *ny, *nz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetgeometriccomponents_ MATSTRUMPACKSETGEOMETRICCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetgeometriccomponents_ matstrumpacksetgeometriccomponents
#endif
PETSC_EXTERN void matstrumpacksetgeometriccomponents_(Mat *F, PetscInt *nc, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetGeometricComponents(*F, *nc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetgeometricwidth_ MATSTRUMPACKSETGEOMETRICWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetgeometricwidth_ matstrumpacksetgeometricwidth
#endif
PETSC_EXTERN void matstrumpacksetgeometricwidth_(Mat *F, PetscInt *w, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetGeometricWidth(*F, *w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetcompminsepsize_ MATSTRUMPACKSETCOMPMINSEPSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetcompminsepsize_ matstrumpacksetcompminsepsize
#endif
PETSC_EXTERN void matstrumpacksetcompminsepsize_(Mat *F, PetscInt *min_sep_size, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetCompMinSepSize(*F, *min_sep_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpackgetcompminsepsize_ MATSTRUMPACKGETCOMPMINSEPSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpackgetcompminsepsize_ matstrumpackgetcompminsepsize
#endif
PETSC_EXTERN void matstrumpackgetcompminsepsize_(Mat *F, PetscInt *min_sep_size, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(min_sep_size);
  *ierr = MatSTRUMPACKGetCompMinSepSize(*F, min_sep_size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetcomplossyprecision_ MATSTRUMPACKSETCOMPLOSSYPRECISION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetcomplossyprecision_ matstrumpacksetcomplossyprecision
#endif
PETSC_EXTERN void matstrumpacksetcomplossyprecision_(Mat *F, PetscInt *lossy_prec, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetCompLossyPrecision(*F, *lossy_prec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpackgetcomplossyprecision_ MATSTRUMPACKGETCOMPLOSSYPRECISION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpackgetcomplossyprecision_ matstrumpackgetcomplossyprecision
#endif
PETSC_EXTERN void matstrumpackgetcomplossyprecision_(Mat *F, PetscInt *lossy_prec, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lossy_prec);
  *ierr = MatSTRUMPACKGetCompLossyPrecision(*F, lossy_prec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpacksetcompbutterflylevels_ MATSTRUMPACKSETCOMPBUTTERFLYLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpacksetcompbutterflylevels_ matstrumpacksetcompbutterflylevels
#endif
PETSC_EXTERN void matstrumpacksetcompbutterflylevels_(Mat *F, PetscInt *bfly_lvls, PetscErrorCode *ierr)
{
  *ierr = MatSTRUMPACKSetCompButterflyLevels(*F, *bfly_lvls);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstrumpackgetcompbutterflylevels_ MATSTRUMPACKGETCOMPBUTTERFLYLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstrumpackgetcompbutterflylevels_ matstrumpackgetcompbutterflylevels
#endif
PETSC_EXTERN void matstrumpackgetcompbutterflylevels_(Mat *F, PetscInt *bfly_lvls, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bfly_lvls);
  *ierr = MatSTRUMPACKGetCompButterflyLevels(*F, bfly_lvls);
  if (*ierr) return;
}
