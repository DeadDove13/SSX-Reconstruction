/* Ghidra pseudocode. PS2 address: 00177e40. Not validated source. */

void FUN_00177e40(int param_1,undefined8 param_2)

{
  FUN_0016cf98();
  if (*(int *)(param_1 + 0xb50) != 0) {
    FUN_0016af98(*(int *)(param_1 + 0xb50),param_2);
    return;
  }
  return;
}

