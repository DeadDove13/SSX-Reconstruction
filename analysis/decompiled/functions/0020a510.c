/* Ghidra pseudocode. PS2 address: 0020a510. Not validated source. */

void FUN_0020a510(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x35344));
  if (iVar1 != 0) {
    FUN_00209ba8(iVar1,param_3);
    return;
  }
  return;
}

