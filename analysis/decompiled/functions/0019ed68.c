/* Ghidra pseudocode. PS2 address: 0019ed68. Not validated source. */

undefined4 FUN_0019ed68(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      if ((*(char *)(param_1 + 0x1b) == '\0') || (*(char *)(param_1 + 0x19) == '\0')) {
        uVar3 = FUN_0019d570(param_1 + 0x1c);
        return uVar3;
      }
      iVar6 = *(int *)(param_1 + 0x74);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x74);
    }
    iVar8 = 0;
    iVar5 = 0;
    piVar1 = *(int **)(*(int *)(iVar6 + 0xcc) * 8 + DAT_00299ce0);
    piVar7 = piVar1 + 9;
    if (0 < *piVar1) {
      iVar6 = 0;
      do {
        if (*(int *)(*piVar7 + 0x1c) == 0) {
          iVar2 = *piVar1;
        }
        else {
          FUN_001d7e00(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x7c) + iVar6);
          iVar2 = iVar5 * 0x40;
          iVar5 = iVar5 + 1;
          iVar4 = *(int *)(param_1 + 0x7c) + iVar6;
          iVar6 = iVar6 + 0x70;
          FUN_001d84b0(iVar4,*(int *)(param_1 + 0x84) + iVar2);
          iVar2 = *piVar1;
        }
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar8 < iVar2);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x78);
  }
  return uVar3;
}

