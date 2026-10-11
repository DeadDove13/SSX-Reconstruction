/* Ghidra pseudocode. PS2 address: 0010a150. Not validated source. */

undefined4 FUN_0010a150(int param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x348) < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x350) != 1) {
    if (*(int *)(param_1 + 0x350) != 6) {
      return 0;
    }
    lVar1 = FUN_0013d020(*(int *)(param_1 + 0x8584) + 0x670);
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

