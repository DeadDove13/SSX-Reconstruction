/* Ghidra pseudocode. PS2 address: 001993b0. Not validated source. */

void FUN_001993b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x5da4) == 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x5da0);
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = *(int *)(param_1 + 0x5d84);
      if (iVar2 < *(int *)(param_1 + 0x5d88)) {
        *(undefined4 *)(param_1 + 0x5da0) = 0;
        *(undefined4 *)(param_1 + 0x5da4) = 0;
        piVar5 = (int *)(param_1 + iVar2 * 4 + 0x393c);
        iVar3 = *piVar5;
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0x5d74) = 0;
          *(int *)(param_1 + 0x5d84) = iVar2 + 1;
          *(undefined4 *)(param_1 + 0x5d78) = 0;
        }
        else {
          puVar1 = *(undefined4 **)(param_1 + 0x5d70);
          uVar4 = *(undefined4 *)(iVar3 + 4);
          *puVar1 = 0x11111112;
          *(undefined4 *)(param_1 + 0x5da0) = uVar4;
          *(undefined4 **)(param_1 + 0x5da4) = puVar1;
          uVar4 = FUN_00197148();
          iVar2 = *(int *)(param_1 + 0x5da4);
          iVar3 = *piVar5;
          *(undefined4 *)(iVar2 + 0xc) = uVar4;
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar3 + 0xc);
          uVar4 = FUN_00197110(iVar3);
          *(undefined4 *)(*(int *)(param_1 + 0x5da4) + 8) = uVar4;
          *(int *)(param_1 + 0x5d84) = *(int *)(param_1 + 0x5d84) + 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x5d74) = 0;
        *(undefined4 *)(param_1 + 0x5d78) = 0;
        *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
      }
    }
    else {
      uVar4 = *puVar1;
      *(undefined4 *)(param_1 + 0x5d78) = 1000;
      *(undefined4 **)(param_1 + 0x5d74) = puVar1 + 1;
      *(undefined4 *)(param_1 + 0x5da0) = uVar4;
    }
  }
  else {
    *(int *)(param_1 + 0x5d74) = *(int *)(param_1 + 0x5da4);
    *(undefined4 *)(param_1 + 0x5d78) = 0x10;
    *(undefined4 *)(param_1 + 0x5da4) = 0;
  }
  return;
}

