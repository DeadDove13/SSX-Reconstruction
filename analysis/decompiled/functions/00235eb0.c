/* Ghidra pseudocode. PS2 address: 00235eb0. Not validated source. */

undefined4 FUN_00235eb0(uint param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint unaff_s3_lo;
  
  FUN_0023ee58(DAT_002c5be4);
  if (((int)param_1 < 0x100) || (DAT_002c5bd0 <= (int)(param_1 & 0xff))) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar3 = (uint *)(DAT_002c5998 + (param_1 & 0xff) * 0x30);
    puVar4 = (uint *)0x0;
    if (*puVar3 == param_1) {
      puVar4 = puVar3;
    }
  }
  if ((puVar4 != (uint *)0x0) && (unaff_s3_lo = puVar4[4], unaff_s3_lo == 0)) {
    puVar4[3] = 1;
  }
  FUN_0023ea60(DAT_002c5be4);
  uVar1 = 0xffffffff;
  if ((puVar4 != (uint *)0x0) && (unaff_s3_lo == 0)) {
    if (puVar4[7] == 0) {
      uVar2 = puVar4[4];
    }
    else {
      do {
        FUN_00238f58(puVar4[7]);
      } while (puVar4[7] != 0);
      uVar2 = puVar4[4];
    }
    if (uVar2 == 0) {
      if (param_2 != 0) {
        *(int *)param_2 = puVar4[0xb] - puVar4[2];
      }
      if (param_3 != 0) {
        *(uint *)param_3 = puVar4[2];
      }
      FUN_00235688(puVar4);
      uVar1 = 1;
    }
    else {
      if (param_2 != 0) {
        *(int *)param_2 = 0;
      }
      if (param_3 != 0) {
        *(uint *)param_3 = 0;
      }
      FUN_00235688(puVar4);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

