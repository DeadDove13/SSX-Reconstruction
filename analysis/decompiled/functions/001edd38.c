/* Ghidra pseudocode. PS2 address: 001edd38. Not validated source. */

void FUN_001edd38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_6a0 [1600];
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0xc) != 0) {
    iVar1 = 0x18;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
    iVar3 = 0;
    FUN_0023bbd0(auStack_6a0,0,0x640);
    FUN_0023bac0(auStack_6a0,*(undefined4 *)(iVar5 + 0x10),
                 (int)*(short *)(*(int *)(iVar5 + 0x18) + 0x2a) << 6);
    iVar1 = *(int *)(iVar5 + 0x18);
    if (0 < *(int *)(iVar1 + 0x30)) {
      iVar2 = 0;
      puVar4 = auStack_6a0 + *(short *)(iVar1 + 0x2a) * 0x40;
      do {
        iVar3 = iVar3 + 1;
        FUN_001ee738(param_3,puVar4,*(undefined2 *)(iVar1 + iVar2 + 0x34),
                     *(undefined2 *)(iVar1 + iVar2 + 0x36));
        iVar1 = *(int *)(iVar5 + 0x18);
        iVar2 = iVar3 * 4;
        puVar4 = puVar4 + 0x40;
      } while (iVar3 < *(int *)(iVar1 + 0x30));
    }
    FUN_001ee7d8(param_3,auStack_6a0);
    FUN_001ebd88(param_1,param_2);
  }
  return;
}

