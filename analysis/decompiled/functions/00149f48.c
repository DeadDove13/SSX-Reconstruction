/* Ghidra pseudocode. PS2 address: 00149f48. Not validated source. */

void FUN_00149f48(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = (int)param_2;
  iVar1 = *(int *)(iVar2 + 0x220);
  fVar5 = *(float *)(iVar1 + 0x1e0);
  fVar4 = *(float *)(iVar1 + 0x1ec);
  if ((fVar5 == 0.0) && (fVar4 == 0.0)) {
    fVar6 = 1.0;
    iVar1 = *(int *)(iVar1 + 0x144);
  }
  else {
    fVar6 = ABS(fVar5) / (ABS(fVar5) + ABS(fVar4));
    iVar1 = *(int *)(iVar1 + 0x144);
  }
  fVar3 = ABS(fVar4);
  if (iVar1 != 0) {
    fVar5 = -fVar5;
  }
  if (fVar5 < 0.0) {
    FUN_001478c8(param_2,0,0x1d);
  }
  else {
    FUN_001478c8(param_2,0,0x1e);
  }
  if (fVar4 < 0.0) {
    FUN_001478c8(param_2,1,0x1b);
    iVar1 = *(int *)(iVar2 + 0x224);
  }
  else {
    FUN_001478c8(param_2,1,0x1c);
    iVar1 = *(int *)(iVar2 + 0x224);
  }
  fVar4 = ABS(fVar5) * (float)(int)((*(uint *)(*(int *)(iVar1 + 8) + 0xc) >> 7 & 0xff) - 1);
  if (fVar4 < 0.0) {
    *(undefined4 *)(iVar2 + 0x1e8) = 0;
  }
  else {
    *(float *)(iVar2 + 0x1e8) = fVar4;
  }
  fVar3 = fVar3 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar2 + 0x228) + 8) + 0xc) >> 7 & 0xff)
                              - 1);
  if (fVar3 < 0.0) {
    *(undefined4 *)(iVar2 + 0x1ec) = 0;
  }
  else {
    *(float *)(iVar2 + 0x1ec) = fVar3;
  }
  *(float *)(iVar2 + 500) = fVar6;
  *(undefined4 *)(iVar2 + 0x1e4) = 2;
  *(float *)(iVar2 + 0x1f8) = 1.0 - fVar6;
  return;
}

