/* Ghidra pseudocode. PS2 address: 001fb050. Not validated source. */

undefined4 FUN_001fb050(int param_1,int param_2)

{
  if (param_2 == 3) {
    return *(undefined4 *)(param_1 + 0x8b6e0);
  }
  if (param_2 < 4) {
    if (param_2 == 2) {
      return *(undefined4 *)(param_1 + 0x8b6d8);
    }
  }
  else {
    if (param_2 == 4) {
      return *(undefined4 *)(param_1 + 0x8b6e4);
    }
    if (param_2 == 5) {
      return *(undefined4 *)(param_1 + 0x8b6dc);
    }
  }
  return 0;
}

