/* Ghidra pseudocode. PS2 address: 00230098. Not validated source. */

void FUN_00230098(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (param_2 == piVar3) {
    *param_1 = *piVar3;
    return;
  }
  puVar2 = (undefined4 *)*piVar3;
  while( true ) {
    puVar1 = puVar2;
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    if (puVar1 == param_2) break;
    puVar2 = (undefined4 *)*puVar1;
    piVar3 = puVar1;
  }
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (puVar1 != param_2) {
    return;
  }
  *piVar3 = *param_2;
  return;
}

