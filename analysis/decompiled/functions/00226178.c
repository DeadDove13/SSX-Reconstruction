/* Ghidra pseudocode. PS2 address: 00226178. Not validated source. */

undefined4 FUN_00226178(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_60 [4];
  int iStack_5c;
  int aiStack_54 [5];
  
  piVar7 = (int *)param_2;
  iVar5 = *piVar7;
  piVar2 = (int *)(&DAT_0029a7c0)[(int)param_1];
  if (iVar5 == 0x6c444353) {
    iStack_5c = piVar7[2];
    iVar5 = 0;
    bVar1 = *(byte *)((int)piVar2 + 0x1e);
    if (bVar1 == 0) {
      iVar6 = *piVar2;
    }
    else {
      iVar6 = *piVar2;
      iVar4 = 0;
      do {
        iVar5 = iVar5 + 1;
        *(uint *)((int)aiStack_54 + iVar4) =
             (int)piVar7 + *(int *)((int)piVar7 + iVar4 + 0xc) + (uint)bVar1 * 4 + 0xc;
        iVar4 = iVar5 * 4;
      } while (iVar5 < (int)(uint)*(byte *)((int)piVar2 + 0x1e));
    }
    iVar6 = *(char *)((int)piVar2 + 0x17) * 0x2c + iVar6;
    if (iStack_5c == 0) {
      *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
      FUN_0023d4a8(piVar2[1],param_2);
      uVar3 = 1;
    }
    else {
      *(int **)(aiStack_54[0] + -4) = piVar7;
      *piVar7 = *(int *)(iVar6 + 4);
      *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + iStack_5c;
      *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
      uVar3 = FUN_0022e198(piVar2[3],auStack_60);
      *(undefined4 *)(iVar6 + 0xc) = uVar3;
      uVar3 = 1;
      if (*(int *)(iVar6 + 8) < 0) {
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar6 + 0xc);
        uVar3 = 1;
      }
    }
  }
  else if (iVar5 == 0x6c484353) {
    FUN_00225e30(param_1,param_2);
    uVar3 = 0;
  }
  else if (iVar5 == 0x6c454353) {
    FUN_0023d4a8(piVar2[1],param_2);
    *(char *)((int)piVar2 + 0x17) = *(char *)((int)piVar2 + 0x17) + '\x01';
    uVar3 = 1;
  }
  else if (iVar5 == 0x6c434353) {
    FUN_0023d4a8(piVar2[1],param_2);
    *(int *)(*(char *)((int)piVar2 + 0x17) * 0x2c + *piVar2 + 0x24) = piVar7[2];
    uVar3 = 1;
  }
  else {
    FUN_0023d4a8(piVar2[1],param_2);
    uVar3 = 1;
  }
  return uVar3;
}

