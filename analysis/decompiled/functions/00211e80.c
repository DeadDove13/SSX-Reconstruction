/* Ghidra pseudocode. PS2 address: 00211e80. Not validated source. */

undefined4 FUN_00211e80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 0x14 + param_1 + 0x154);
  if ((-6 < iVar1) && ((iVar1 < -2 || (iVar1 == -1)))) {
    return 1;
  }
  return 0;
}

