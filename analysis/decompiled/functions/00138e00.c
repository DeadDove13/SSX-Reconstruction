/* Ghidra pseudocode. PS2 address: 00138e00. Not validated source. */

void FUN_00138e00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = DAT_002c1d14;
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x144) = *(uint *)(iVar1 + 0x144) ^ 1;
  FUN_001129e8(fVar5,iVar1,iVar1 + 0x130);
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x144);
  fVar7 = 0.0;
  if (iVar2 != 0) {
    fVar7 = fVar5;
  }
  iVar3 = *(int *)(iVar1 + 0x6cf4);
  fVar6 = fVar7 * DAT_002c1d18 + 0.5;
  fVar5 = (float)(int)fVar6;
  if (fVar6 < fVar5) {
    fVar5 = fVar5 - 1.0;
  }
  iVar4 = *(int *)(iVar1 + 0x344);
  *(float *)(iVar3 + 0x18) = fVar7 - fVar5 * DAT_002c1d1c;
  if (iVar4 != 2) {
    *(uint *)(iVar3 + 0xc) = (uint)(iVar2 != 0);
    FUN_0014cd18(iVar3,0x35,0,5);
    return;
  }
  if (iVar2 == *(int *)(*(int *)(iVar1 + 0x394) + 0x28)) {
    FUN_0014cd18(iVar3,0x34,0,5);
    return;
  }
  FUN_0014cd18(iVar3,0x35,0,5);
  return;
}

