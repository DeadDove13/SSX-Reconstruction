/* Ghidra pseudocode. PS2 address: 00199298. Not validated source. */

void FUN_00199298(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int aiStack_90 [4];
  
  aiStack_90[0] = *(int *)(param_1 + 0x5d70);
  iVar2 = 0;
  iVar4 = 0;
  do {
    iVar6 = 0;
    piVar3 = (int *)(param_1 + 0x394c + iVar2);
    iVar7 = iVar4 + 1;
    if (0 < *piVar3) {
      puVar5 = (undefined4 *)(iVar4 * 0x40 + param_1 + 0x3e68);
      uVar1 = *puVar5;
      while( true ) {
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 1;
        FUN_00198848(uVar1,aiStack_90);
        if (*piVar3 <= iVar6) break;
        uVar1 = *puVar5;
      }
    }
    iVar2 = iVar7 * 4;
    iVar4 = iVar7;
  } while (iVar7 < 4);
  *(int *)(param_1 + 0x5d74) = *(int *)(param_1 + 0x5d70);
  *(int *)(param_1 + 0x5d78) = aiStack_90[0] - *(int *)(param_1 + 0x5d70);
  *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
  return;
}

