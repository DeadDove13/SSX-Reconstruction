/* Ghidra pseudocode. PS2 address: 00148cf8. Not validated source. */

void FUN_00148cf8(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x238);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),param_1);
  }
  return;
}

