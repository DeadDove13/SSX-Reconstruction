/* Ghidra pseudocode. PS2 address: 00129690. Not validated source. */

undefined8 FUN_00129690(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  
  FUN_00122128(param_1,param_2,0xb,param_3);
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 8) = &DAT_002a97d0;
  FUN_00129150(iVar2 + 0x4c);
  *(int *)(iVar2 + 0x34) = (int)(*(float *)(param_4 + 0x14) * 60.0);
  fVar3 = *(float *)(param_4 + 0x10);
  iVar4 = *(int *)(param_4 + 8);
  *(undefined4 *)(iVar2 + 0x38) = 0;
  fVar5 = *(float *)(iVar2 + 0x38);
  *(float *)(iVar2 + 0x3c) = fVar3 * DAT_002c1b50;
  if ((float)iVar4 < fVar5) {
    uVar1 = FUN_002109b0();
    fVar5 = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) * 7.0 + fVar5;
    fVar3 = (float)(int)fVar5;
    if (fVar3 < fVar5) {
      fVar3 = fVar3 + 1.0;
    }
    iVar4 = (int)fVar3;
  }
  *(int *)(iVar2 + 0x40) = iVar4;
  if ((float)*(int *)(param_4 + 8) == -2.0) {
    *(undefined4 *)(iVar2 + 0x48) = 1;
  }
  else {
    *(undefined4 *)(iVar2 + 0x48) = 0;
  }
  FUN_00129170(iVar2 + 0x4c,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x40));
  *(uint *)(*(int *)(iVar2 + 0x28) + 0xe8) =
       *(uint *)(*(int *)(iVar2 + 0x28) + 0xe8) & 0xfffffffd | 4;
  return param_1;
}

