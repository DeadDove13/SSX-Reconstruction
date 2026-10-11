/* Ghidra pseudocode. PS2 address: 0023ba74. Not validated source. */

void FUN_0023ba74(int param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  
  param_3 = param_3 + -1;
  puVar1 = (undefined1 *)(param_1 + param_3);
  for (; -1 < param_3; param_3 = param_3 + -1) {
    *puVar1 = (char)param_2;
    param_2 = param_2 >> 8;
    puVar1 = puVar1 + -1;
  }
  return;
}

