/* Ghidra pseudocode. PS2 address: 00121cb0. Not validated source. */

/* WARNING: Switch with 1 destination removed at 0x00121d4c : 6 cases all go to same destination */

undefined4 FUN_00121cb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = DAT_002c1aa8;
  fVar4 = DAT_002c1aa0;
  uVar2 = DAT_002c1a98;
  uVar1 = DAT_002c1a90;
  if (DAT_0027ba88 == 4) {
    if ((DAT_0027ba94 & 0xffff) < 4) {
      *(undefined4 *)(param_1 + 0x8a4) = DAT_002c1a8c;
      uVar2 = uVar1;
LAB_00121d0c:
      *(undefined4 *)(param_1 + 0x8a0) = uVar2;
    }
    else {
      if ((DAT_0027ba94 & 0xffff) < 6) {
        *(undefined4 *)(param_1 + 0x8a4) = DAT_002c1a94;
        goto LAB_00121d0c;
      }
      *(undefined4 *)(param_1 + 0x8a0) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x8a4) = 0x3f800000;
    }
    fVar3 = *(float *)(param_1 + 0x8a0) * 1.0;
    fVar4 = *(float *)(param_1 + 0x8a4) * 1.0;
LAB_00121dd4:
    *(float *)(param_1 + 0x8a4) = fVar4;
  }
  else {
    if (DAT_0027ba88 != 2) {
      fVar3 = 1.0;
      fVar4 = DAT_002c1aac;
      goto LAB_00121dd4;
    }
    if (DAT_0027ba9c == 0) {
      *(undefined4 *)(param_1 + 0x8a4) = DAT_002c1a9c;
      fVar3 = fVar4;
    }
    else {
      if (DAT_0027ba9c != 1) {
        *(undefined4 *)(param_1 + 0x8a0) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x8a4) = 0x3f800000;
        goto LAB_00121ddc;
      }
      *(undefined4 *)(param_1 + 0x8a4) = DAT_002c1aa4;
    }
  }
  *(float *)(param_1 + 0x8a0) = fVar3;
LAB_00121ddc:
  if (1.0 < *(float *)(param_1 + 0x8a4)) {
    *(undefined4 *)(param_1 + 0x8a4) = 0x3f800000;
  }
  if (1.0 < *(float *)(param_1 + 0x8a0)) {
    *(undefined4 *)(param_1 + 0x8a0) = 0x3f800000;
  }
  return *(undefined4 *)(param_1 + 0x8a0);
}

