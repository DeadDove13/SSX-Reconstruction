/* Ghidra pseudocode. PS2 address: 0023bcd0. Not validated source. */

void FUN_0023bcd0(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_2 + param_3;
  if ((param_2 < param_1) && (param_1 < puVar1)) {
    param_1 = param_1 + param_3;
    while (param_3 = param_3 + -1, param_3 != -1) {
      puVar1 = puVar1 + -1;
      param_1 = param_1 + -1;
      *param_1 = *puVar1;
    }
    return;
  }
  FUN_0023bac0();
  return;
}

