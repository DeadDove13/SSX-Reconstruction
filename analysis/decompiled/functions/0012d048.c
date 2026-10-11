/* Ghidra pseudocode. PS2 address: 0012d048. Not validated source. */

undefined8 FUN_0012d048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  
  iVar3 = (int)param_1;
  FUN_00128748(iVar3 + 0x18,param_2,0x13,param_3,param_4);
  *(undefined **)(iVar3 + 0x20) = &DAT_002a96e8;
  FUN_00129150(iVar3 + 0x7c);
  iVar2 = (int)param_4;
  fVar4 = *(float *)(iVar2 + 0x24);
  iVar5 = *(int *)(iVar2 + 0x20);
  *(undefined4 *)(iVar3 + 8) = 0;
  fVar6 = *(float *)(iVar3 + 8);
  *(float *)(iVar3 + 0xc) = fVar4 * DAT_002c1b94;
  if ((float)iVar5 < fVar6) {
    uVar1 = FUN_002109b0();
    fVar6 = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) * 7.0 + fVar6;
    fVar4 = (float)(int)fVar6;
    if (fVar4 < fVar6) {
      fVar4 = fVar4 + 1.0;
    }
    iVar5 = (int)fVar4;
  }
  *(int *)(iVar3 + 0x10) = iVar5;
  if ((float)*(int *)(iVar2 + 0x20) == -2.0) {
    *(undefined4 *)(iVar3 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(iVar3 + 0x14) = 0;
  }
  FUN_00129170(iVar3 + 0x7c,*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x10));
  FUN_00129308(iVar3 + 0x7c,iVar3 + 0xb0,iVar3 + 0xac);
  return param_1;
}

