/* Ghidra pseudocode. PS2 address: 00186648. Not validated source. */

void FUN_00186648(undefined8 param_1,int *param_2)

{
  if ((*param_2 != 0) && ((int *)param_2[1] != (int *)0x0)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
  }
  return;
}

