/* Ghidra pseudocode. PS2 address: 00185960. Not validated source. */

void FUN_00185960(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  do {
    uVar1 = *param_2;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return;
}

