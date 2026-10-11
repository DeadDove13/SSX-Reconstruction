/* Ghidra pseudocode. PS2 address: 0014a0f8. Not validated source. */

void FUN_0014a0f8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (int)param_2;
  fVar3 = *(float *)(*(int *)(iVar2 + 0x220) + 0x198);
  FUN_001478c8(param_2,0,0x65);
  *(undefined4 *)(iVar2 + 0x1e4) = 1;
  *(float *)(iVar2 + 500) = 1.0 - fVar3;
  FUN_00148120(0x3f800000,param_2);
  FUN_001478c8(param_2,1,0x8b);
  *(float *)(iVar2 + 0x1f8) = fVar3;
  uVar1 = *(uint *)(*(int *)(*(int *)(iVar2 + 0x228) + 8) + 0xc);
  fVar3 = (float)FUN_00147ce8(param_2);
  fVar3 = (float)(int)((uVar1 >> 7 & 0xff) - 1) * fVar3;
  if (fVar3 < 0.0) {
    *(undefined4 *)(iVar2 + 0x1ec) = 0;
  }
  else {
    *(float *)(iVar2 + 0x1ec) = fVar3;
  }
  *(undefined4 *)(iVar2 + 0x1e4) = 2;
  return;
}

