/* Ghidra pseudocode. PS2 address: 00207178. Not validated source. */

int FUN_00207178(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = *(uint *)(param_1 + 0x35f84); uVar1 != 0; uVar1 = uVar1 >> 1) {
    iVar2 = iVar2 + (uVar1 & 1);
  }
  return iVar2;
}

