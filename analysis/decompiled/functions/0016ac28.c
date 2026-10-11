/* Ghidra pseudocode. PS2 address: 0016ac28. Not validated source. */

void FUN_0016ac28(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1;
  if ((*piVar1 != 0) && ((code *)piVar1[1] != (code *)0x0)) {
    (*(code *)piVar1[1])(piVar1,param_1);
  }
  return;
}

