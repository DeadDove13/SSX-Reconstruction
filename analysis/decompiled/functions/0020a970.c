/* Ghidra pseudocode. PS2 address: 0020a970. Not validated source. */

void FUN_0020a970(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x35344));
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 8) = param_3;
    return;
  }
  return;
}

