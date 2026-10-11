/* Ghidra pseudocode. PS2 address: 00230908. Not validated source. */

undefined4 FUN_00230908(int param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int aiStack_70 [4];
  
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_0022e880(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x25));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (param_2 < 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0x14) - iVar3;
      if (*(int *)(param_1 + 0x14) <= iVar3) {
        lVar2 = FUN_0022e2f8(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x25),
                             aiStack_70);
        *(int *)(param_1 + 0x10) = (int)lVar2;
        if (lVar2 == 0) {
          if (*(int *)(param_1 + 0x20) == 0) {
            return 0;
          }
          FUN_0022d8c8(param_4,param_2 << 2);
          return *(undefined4 *)(param_1 + 0x20);
        }
        iVar3 = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(int *)(param_1 + 0x14) = aiStack_70[0];
        iVar4 = aiStack_70[0];
      }
      if (param_2 < iVar4) {
        iVar4 = param_2;
      }
      if (*(char *)(param_1 + 0x24) != '\0') {
        FUN_0022d7d0(param_4,*(int *)(param_1 + 0x10) + iVar3 * 2,iVar4 << 1);
        iVar3 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x18) = iVar3 + iVar4;
      param_4 = param_4 + iVar4 * 2;
      param_2 = param_2 - iVar4;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar4;
    } while (0 < param_2);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  return uVar1;
}

