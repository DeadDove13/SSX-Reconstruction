/* Ghidra pseudocode. PS2 address: 0019a428. Not validated source. */

undefined4 FUN_0019a428(int *param_1)

{
  if (*param_1 + -1 <= param_1[1]) {
    return 0;
  }
  param_1[1] = param_1[1] + 1;
  return 1;
}

