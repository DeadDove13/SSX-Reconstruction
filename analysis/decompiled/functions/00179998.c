/* Ghidra pseudocode. PS2 address: 00179998. Not validated source. */

undefined4 FUN_00179998(int param_1)

{
  int iVar1;
  
  if ((DAT_002c4a00 == 2) &&
     (iVar1 = FUN_0016de00(param_1,*(undefined4 *)(*(int *)(param_1 + 0xb50) + 0x46c)),
     (*(uint *)(iVar1 + 0x98) & 8) != 0)) {
    return 1;
  }
  return 0;
}

