/* Ghidra pseudocode. PS2 address: 0023bd40. Not validated source. */

void FUN_0023bd40(int param_1,uint *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  int aiStack_c40 [255];
  int aiStack_844 [256];
  int aiStack_444 [256];
  undefined4 uStack_44;
  
  FUN_0023bbd0(aiStack_c40,0,0x800);
  iVar10 = param_1;
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    uVar2 = param_2[iVar10];
    aiStack_c40[uVar2 & 0xff] = aiStack_c40[uVar2 & 0xff] + 1;
    aiStack_c40[((uVar2 & 0xffff) >> 8) + 0x100] = aiStack_c40[((uVar2 & 0xffff) >> 8) + 0x100] + 1;
  }
  iVar10 = 0xff;
  piVar8 = aiStack_844;
  puVar7 = &uStack_44;
  puVar6 = param_3;
  do {
    iVar3 = *piVar8;
    iVar10 = iVar10 + -1;
    *puVar7 = puVar6;
    piVar8 = piVar8 + -1;
    puVar7 = puVar7 + -1;
    puVar6 = puVar6 + iVar3;
  } while (-1 < iVar10);
  puVar9 = param_2;
  iVar10 = param_1;
  if (0 < param_1) {
    do {
      uVar2 = *puVar9;
      iVar10 = iVar10 + -1;
      puVar4 = (uint *)aiStack_444[(uVar2 & 0xff) + 1];
      *puVar4 = uVar2;
      aiStack_444[(uVar2 & 0xff) + 1] = (int)(puVar4 + 1);
      puVar9 = puVar9 + 1;
    } while (iVar10 != 0);
  }
  iVar10 = 0xff;
  piVar8 = aiStack_444;
  puVar6 = &uStack_44;
  do {
    iVar3 = *piVar8;
    iVar10 = iVar10 + -1;
    *puVar6 = param_2;
    piVar8 = piVar8 + -1;
    puVar6 = puVar6 + -1;
    param_2 = param_2 + iVar3;
  } while (-1 < iVar10);
  if (0 < param_1) {
    do {
      bVar1 = *(byte *)((int)param_3 + 1);
      param_1 = param_1 + -1;
      uVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar6 = (undefined4 *)aiStack_444[bVar1 + 1];
      *puVar6 = uVar5;
      aiStack_444[bVar1 + 1] = (int)(puVar6 + 1);
    } while (param_1 != 0);
  }
  return;
}

