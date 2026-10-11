/* Ghidra pseudocode. PS2 address: 0019d570. Not validated source. */

undefined4 FUN_0019d570(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x58) + 0xcc) * 8 + DAT_00299ce0);
    piVar4 = piVar1 + 9;
    if (0 < *piVar1) {
      iVar5 = 0;
      do {
        if (*(int *)(*piVar4 + 0x1c) == 0) {
          iVar2 = *piVar1;
        }
        else {
          FUN_001d7e00(*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x60) + iVar5);
          iVar5 = iVar5 + 0x70;
          iVar2 = *piVar1;
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar6 < iVar2);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
  }
  return uVar3;
}

