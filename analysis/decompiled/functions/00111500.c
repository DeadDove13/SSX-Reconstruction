/* Ghidra pseudocode. PS2 address: 00111500. Not validated source. */

void FUN_00111500(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  FUN_00115308();
  iVar3 = (int)param_1;
  iVar2 = *(int *)(*(int *)(iVar3 + 0x6cf4) + 8);
  if (0xa1 < iVar2) {
    if (iVar2 < 0xac) {
      if (iVar2 < 0xaa) {
        iVar2 = *(int *)(iVar3 + 0x394);
        goto LAB_001115a8;
      }
      *(float *)(iVar3 + 0x1bc) = -*(float *)(iVar3 + 0x1bc);
    }
    iVar2 = *(int *)(iVar3 + 0x394);
LAB_001115a8:
    fVar4 = ((float)*(byte *)(iVar2 + 0x1a) * DAT_002c13b4 * DAT_002c13b8 + DAT_002c13bc) *
            DAT_002c13c0;
    fVar5 = fVar4 * *(float *)(iVar3 + 0x1b0);
    fVar4 = fVar4 * DAT_002c13c4 * *(float *)(iVar3 + 0x1bc);
    if (*(int *)(iVar3 + 0x344) == 2) {
      fVar5 = fVar5 * DAT_002c13c4;
    }
    if (*(int *)(iVar3 + 0x144) != 0) {
      fVar4 = -fVar4;
    }
    iVar2 = *(int *)(iVar3 + 0x8584);
    uVar1 = *(undefined4 *)(iVar3 + 0x6cf4);
    *(float *)(iVar2 + 0x780) = fVar4;
    *(float *)(iVar2 + 0x77c) = fVar5;
    *(undefined4 *)(iVar3 + 0x1b8) = 0;
    *(undefined4 *)(iVar3 + 0x1b0) = 0;
    *(undefined4 *)(iVar3 + 0x1b4) = 0;
    *(undefined4 *)(iVar3 + 0x1c4) = 0;
    *(undefined4 *)(iVar3 + 0x1bc) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 0x8584) + 0x7a0) = 0;
    *(undefined4 *)(iVar3 + 0x1c0) = 0;
    FUN_00150848(uVar1);
    FUN_0010b330(param_1,0x10);
    return;
  }
  if (iVar2 < 0xa0) {
    if (iVar2 != 0x47) {
      iVar2 = *(int *)(iVar3 + 0x394);
      goto LAB_001115a8;
    }
    fVar4 = *(float *)(iVar3 + 0x198);
  }
  else {
    fVar4 = *(float *)(iVar3 + 0x198);
  }
  *(float *)(iVar3 + 0x188) = 1.0 - fVar4;
  *(float *)(iVar3 + 0x180) = 1.0 - fVar4;
  *(undefined4 *)(iVar3 + 0x184) = 0;
  FUN_00150460(*(undefined4 *)(iVar3 + 0x6cf4));
  FUN_0010b330(param_1,0x13);
  return;
}

