/* Ghidra pseudocode. PS2 address: 00130c18. Not validated source. */

uint FUN_00130c18(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar1 = FUN_001a3750(*(undefined4 *)(DAT_002859e4 + 0x30));
  iVar2 = DAT_002859e4;
  if (*(int *)(iVar1 + 0xcc) == 0) {
    iVar1 = **(int **)(*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x90) + 0x8a0);
    uVar5 = *(uint *)(iVar1 + 0xc) & ~*(uint *)(iVar1 + 8);
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | *(uint *)(iVar1 + 0xc) & uVar5;
    if ((uVar5 & 1) == 0) {
      if ((uVar5 & 2) == 0) {
        return uVar5;
      }
      if (*(int *)(param_1 + 0x2e8) + -1 <= *(int *)(param_1 + 0x2e4)) {
        return uVar5;
      }
      uVar4 = FUN_001a3750(*(undefined4 *)(iVar2 + 0x30));
      FUN_001a9498(uVar4);
      iVar2 = *(int *)(param_1 + 0x2e4) + 1;
    }
    else {
      if (*(int *)(param_1 + 0x2e4) < 1) {
        return uVar5;
      }
      uVar4 = FUN_001a3750(*(undefined4 *)(iVar2 + 0x30));
      FUN_001a9498(uVar4);
      iVar2 = *(int *)(param_1 + 0x2e4) + -1;
    }
    *(int *)(param_1 + 0x2e4) = iVar2;
  }
  else {
    uVar4 = FUN_001a3750(*(undefined4 *)(DAT_002859e4 + 0x30));
    lVar3 = FUN_001aad78(uVar4,0xffffffffffffffff);
    uVar5 = 0;
    if (lVar3 != 0) {
      if (lVar3 == 2) {
        uVar5 = 0;
      }
      else {
        FUN_0012ff48(*(undefined4 *)(DAT_002859e4 + 0x2c),7);
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

