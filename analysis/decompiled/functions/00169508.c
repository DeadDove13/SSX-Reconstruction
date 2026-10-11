/* Ghidra pseudocode. PS2 address: 00169508. Not validated source. */

void FUN_00169508(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x154) != 0) {
    uVar2 = FUN_00168f18(param_1,*(undefined4 *)(iVar5 + 0x158));
    *(undefined4 *)(iVar5 + 0x4c) = uVar2;
    FUN_00168f68(0,0xbf800000,(float)*(int *)(iVar5 + 0x160),param_1);
    uVar1 = *(uint *)(iVar5 + 0x15c);
    *(uint *)(iVar5 + 0x140) = uVar1;
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 8) != 0) {
        *(undefined4 *)(iVar5 + 0x144) = *(undefined4 *)(iVar5 + 0x150);
      }
    }
    else {
      *(undefined4 *)(iVar5 + 0x144) = 0x3f800000;
    }
    *(undefined4 *)(iVar5 + 0x280) = 1;
    iVar4 = 0;
    if (0 < *(int *)(iVar5 + 0x154)) {
      puVar3 = (undefined8 *)(iVar5 + 0x158);
      do {
        *puVar3 = *(undefined8 *)((int)puVar3 + 0xc);
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)((int)puVar3 + 0x14);
        iVar4 = iVar4 + 1;
        puVar3 = (undefined8 *)((int)puVar3 + 0xc);
      } while (iVar4 < *(int *)(iVar5 + 0x154));
    }
    iVar4 = *(int *)(iVar5 + 0x154) + -1;
    *(int *)(iVar5 + 0x154) = iVar4;
    if (iVar4 != 0) {
      return;
    }
  }
  *(undefined4 *)(iVar5 + 0x27c) = 1;
  return;
}

