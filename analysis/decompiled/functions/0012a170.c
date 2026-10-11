/* Ghidra pseudocode. PS2 address: 0012a170. Not validated source. */

void FUN_0012a170(int param_1,long param_2)

{
  FUN_0012a628();
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
      *(undefined4 *)(param_1 + 0x44) = 4;
    }
  }
  else if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  return;
}

