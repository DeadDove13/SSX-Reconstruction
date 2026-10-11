/* Ghidra pseudocode. PS2 address: 0012ab00. Not validated source. */

undefined8 FUN_0012ab00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  FUN_00122128(param_1,param_2,0xd,param_3);
  iVar2 = 0xf;
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 8) = &DAT_002a9518;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  *(undefined4 *)(iVar3 + 0x48) = param_4;
  FUN_0012ae78(param_1);
  if (*(float *)(iVar3 + 0x34) == -1.0) {
    uVar1 = FUN_002109b0();
    *(float *)(iVar3 + 0x34) =
         (((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) * 45.0 + 5.0) * DAT_002c1b74;
    fVar4 = *(float *)(iVar3 + 0x44);
  }
  else {
    fVar4 = *(float *)(iVar3 + 0x44);
  }
  if (fVar4 == -1.0) {
    uVar1 = FUN_002109b0();
    *(float *)(iVar3 + 0x44) =
         (((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) * 1.5 + 0.5) * DAT_002c1b78;
  }
  uVar1 = FUN_002109b0();
  iVar2 = *(int *)(*(int *)((int)param_3 + 0xcc) * 8 + DAT_00299ce0);
  *(float *)(iVar3 + 0x38) = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 0.0;
  *(float *)(iVar3 + 0x34) = *(float *)(iVar3 + 0x34) * (1.0 / *(float *)(iVar2 + 0x10)) * 32768.0;
  return param_1;
}

