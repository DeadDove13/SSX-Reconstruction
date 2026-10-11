/* Ghidra pseudocode. PS2 address: 001707a8. Not validated source. */

void FUN_001707a8(int param_1,long param_2,int param_3)

{
  if (param_2 == 7) {
    param_3 = 0;
  }
  if (param_3 < 0) {
    param_3 = *(int *)(*(int *)(param_1 + 0xb3c) + 0x46c);
  }
  FUN_00168470(*(undefined4 *)(param_1 + 0xb3c),param_2,param_3);
  return;
}

