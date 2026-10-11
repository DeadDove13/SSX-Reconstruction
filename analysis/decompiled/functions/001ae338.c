/* Ghidra pseudocode. PS2 address: 001ae338. Not validated source. */

void FUN_001ae338(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  
  piVar5 = (int *)(param_1 + 0x44 + param_3 * 4);
  iVar4 = *piVar5;
  iVar4 = iVar4 - (uint)(0 < iVar4);
  uVar1 = *param_2;
  iVar2 = param_3 * 0x60 + 0x28adf0;
  puVar3 = (undefined4 *)(iVar4 * 0x10 + iVar2);
  puVar3[1] = param_2[1];
  *puVar3 = uVar1;
  fVar7 = *(float *)(param_1 + 0x24);
  fVar6 = (float)param_2[2];
  *(undefined4 *)((iVar4 + 1) * 0x10 + iVar2) = 0xffffffff;
  *piVar5 = iVar4 + 2;
  puVar3[2] = fVar6 * fVar7;
  puVar3[3] = (float)param_2[3] * *(float *)(param_1 + 0x28);
  return;
}

