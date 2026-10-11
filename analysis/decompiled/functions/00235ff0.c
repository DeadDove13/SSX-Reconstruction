/* Ghidra pseudocode. PS2 address: 00235ff0. Not validated source. */

undefined4 FUN_00235ff0(uint param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint unaff_s1_lo;
  uint unaff_s2_lo;
  uint unaff_s3_lo;
  
  FUN_0023ee58(DAT_002c5be4);
  if (((int)param_1 < 0x100) || (DAT_002c5bd0 <= (int)(param_1 & 0xff))) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)(DAT_002c5998 + (param_1 & 0xff) * 0x30);
    puVar3 = (uint *)0x0;
    if (*puVar2 == param_1) {
      puVar3 = puVar2;
    }
  }
  if (puVar3 != (uint *)0x0) {
    unaff_s1_lo = puVar3[7];
    unaff_s3_lo = puVar3[4];
    unaff_s2_lo = puVar3[3];
    if ((unaff_s1_lo != 0) || (unaff_s2_lo == 0)) {
      puVar3[4] = 1;
    }
  }
  FUN_0023ea60(DAT_002c5be4);
  uVar1 = 0xffffffff;
  if (((puVar3 != (uint *)0x0) && (unaff_s3_lo == 0)) && (uVar1 = 0xffffffff, puVar3[4] != 0)) {
    if (unaff_s1_lo == 0) {
      uVar1 = 1;
      if (unaff_s2_lo == 0) {
        FUN_00235688(puVar3);
        uVar1 = 1;
      }
    }
    else {
      FUN_00238ef0(unaff_s1_lo);
      uVar1 = 1;
    }
  }
  return uVar1;
}

