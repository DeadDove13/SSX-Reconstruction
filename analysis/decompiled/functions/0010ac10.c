/* Ghidra pseudocode. PS2 address: 0010ac10. Not validated source. */

void FUN_0010ac10(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((DAT_0027ba88 == 3) || (DAT_0027ba88 == 5)) {
    if ((*(int *)(param_2 + 0x34c) == 1) || (*(int *)(param_2 + 0x34c) == 3)) {
      FUN_00136ec8(param_1,param_2 + 0x8370);
      iVar1 = *(int *)(param_2 + 0x340);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x340);
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0x340);
  }
  if (iVar1 != 1) {
    return;
  }
  FUN_00201dc0(param_1,DAT_002c56e8);
  return;
}

