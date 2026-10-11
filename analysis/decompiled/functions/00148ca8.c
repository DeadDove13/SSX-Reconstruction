/* Ghidra pseudocode. PS2 address: 00148ca8. Not validated source. */

undefined8 FUN_00148ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)((int)param_1 + 0x23c);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x1a6;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0xc))
                      ((int)piVar1 + (int)*(short *)(*piVar1 + 8),param_1,param_2,param_3);
  }
  return uVar2;
}

