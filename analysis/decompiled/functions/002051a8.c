/* Ghidra pseudocode. PS2 address: 002051a8. Not validated source. */

undefined4 FUN_002051a8(undefined8 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  uVar1 = 1;
  if (piVar2[2] - piVar2[1] < *piVar2) {
    FUN_00204b20(param_1);
    if ((*(char *)piVar2[2] == '\0') || (uVar1 = 0, *(char *)piVar2[2] == '[')) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

