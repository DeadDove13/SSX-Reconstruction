/* Ghidra pseudocode. PS2 address: 001c5310. Not validated source. */

void FUN_001c5310(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == param_2) {
    if (*(int *)(param_1 + 0x10) == param_3) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  *(int *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  FUN_001d3828(uVar1,param_1 + 0xc);
  return;
}

