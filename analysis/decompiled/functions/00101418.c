/* Ghidra pseudocode. PS2 address: 00101418. Not validated source. */

undefined4 FUN_00101418(void)

{
  if (DAT_0027ba84 == 9) {
    return 0;
  }
  if (((DAT_0027ba88 != 2) && (DAT_0027ba88 != 4)) && (DAT_0027ba88 != 3)) {
    if (DAT_0027ba88 == 5) {
      return 1;
    }
    if (((DAT_0027ba88 != 0) && (DAT_0027ba88 != 6)) && (DAT_0027ba88 != 8)) {
      return 0;
    }
  }
  return 1;
}

