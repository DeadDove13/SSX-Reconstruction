/* Ghidra pseudocode. PS2 address: 0015ff20. Not validated source. */

void FUN_0015ff20(void)

{
  int *piVar1;
  
  FUN_0015f278(0x27fea0,2);
  piVar1 = (int *)&DAT_0027fea0;
  do {
    piVar1 = piVar1 + -0x10;
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),0);
  } while (piVar1 != &DAT_0027fca0);
  return;
}

