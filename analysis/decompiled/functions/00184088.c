/* Ghidra pseudocode. PS2 address: 00184088. Not validated source. */

void FUN_00184088(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x6f4) == 0) {
    *(undefined4 *)(param_1 + 0x6f4) = 0;
  }
  else {
    FUN_00216870();
    piVar1 = *(int **)(param_1 + 0x6f4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
    }
    *(undefined4 *)(param_1 + 0x6f4) = 0;
  }
  return;
}

