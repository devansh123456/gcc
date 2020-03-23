/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

int8x16_t
foo (int8_t a)
{
  return vdupq_n_s8 (a);
}

/* { dg-final { scan-assembler "vdup.8"  }  } */
