/* Ghidra pseudocode. PS2 address: 0015eb90. Not validated source. */

void FUN_0015eb90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x210;
  if (*(int *)(param_1 + 0x200) != 0) {
    iVar2 = 7;
    do {
      if (*(int *)(iVar1 + 0x10) != 0) {
        FUN_001602f0(iVar1);
      }
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x40;
    } while (-1 < iVar2);
  }
  return;
}

