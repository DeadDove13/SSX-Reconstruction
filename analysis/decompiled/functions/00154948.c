/* Ghidra pseudocode. PS2 address: 00154948. Not validated source. */

undefined1 FUN_00154948(int param_1,int param_2)

{
  if (-1 < *(char *)(param_1 + 0x1508)) {
    if (*(int *)(param_1 + 0x14f0) == 4) {
      return *(undefined1 *)(*(int *)(param_1 + 0x1524) + param_2 * 4 + 0x31);
    }
    if (*(int *)(param_1 + 0x14f0) == 5) {
      return *(undefined1 *)(*(int *)(param_1 + 0x1524) + param_2 * 4 + 0x30);
    }
  }
  return 3;
}

