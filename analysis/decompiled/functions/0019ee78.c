/* Ghidra pseudocode. PS2 address: 0019ee78. Not validated source. */

undefined8
FUN_0019ee78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  
  iVar2 = (int)param_1;
  FUN_0019cc48(iVar2 + 0x18,param_2,0x103,param_3,param_4,param_5,1);
  *(undefined **)(iVar2 + 0x50) = &DAT_002b52b0;
  FUN_00129150(iVar2 + 0x80);
  iVar3 = (int)param_4;
  fVar4 = *(float *)(iVar3 + 0x28);
  iVar5 = *(int *)(iVar3 + 0x24);
  *(undefined4 *)(iVar2 + 8) = 0;
  fVar6 = *(float *)(iVar2 + 8);
  *(float *)(iVar2 + 0xc) = fVar4 * DAT_002c2b00;
  if ((float)iVar5 < fVar6) {
    uVar1 = FUN_002109b0();
    fVar6 = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) * 7.0 + fVar6;
    fVar4 = (float)(int)fVar6;
    if (fVar4 < fVar6) {
      fVar4 = fVar4 + 1.0;
    }
    iVar5 = (int)fVar4;
  }
  *(int *)(iVar2 + 0x10) = iVar5;
  if ((float)*(int *)(iVar3 + 0x24) == -2.0) {
    *(undefined4 *)(iVar2 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  FUN_00129170(iVar2 + 0x80,*(undefined4 *)(iVar2 + 0x70),*(undefined4 *)(iVar2 + 0x10));
  return param_1;
}

