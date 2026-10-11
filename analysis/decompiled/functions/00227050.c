/* Ghidra pseudocode. PS2 address: 00227050. Not validated source. */

void FUN_00227050(int *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 auStack_40 [4];
  int iStack_3c;
  int aiStack_34 [5];
  
  puVar5 = (undefined4 *)param_2;
  bVar1 = *(byte *)((int)param_1 + 0x1e);
  iStack_3c = puVar5[2];
  if (bVar1 == 0) {
    iVar6 = *param_1;
  }
  else {
    iVar6 = *param_1;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      aiStack_34[iVar3] = (int)puVar5 + puVar5[iVar3 + 3] + (uint)bVar1 * 4 + 0xc;
      iVar3 = iVar4;
    } while (iVar4 < (int)(uint)bVar1);
  }
  iVar6 = *(char *)((int)param_1 + 0x17) * 0x2c + iVar6;
  if (iStack_3c == 0) {
    *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
    FUN_0023d4a8(param_1[1],param_2);
  }
  else {
    *(undefined4 **)(aiStack_34[0] + -4) = puVar5;
    *puVar5 = *(undefined4 *)(iVar6 + 4);
    *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + iStack_3c;
    *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
    uVar2 = FUN_0022e198(param_1[3],auStack_40);
    *(undefined4 *)(iVar6 + 0xc) = uVar2;
    if (*(int *)(iVar6 + 8) < 0) {
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar6 + 0xc);
    }
  }
  return;
}

