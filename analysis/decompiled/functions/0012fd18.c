/* Ghidra pseudocode. PS2 address: 0012fd18. Not validated source. */

void FUN_0012fd18(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 8) = &DAT_002aa158;
  FUN_00104fa8(*(undefined4 *)(iVar2 + 0x40));
  piVar1 = *(int **)(iVar2 + 0x40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  FUN_00131a48(iVar2 + 0x4c,2);
  FUN_00185f70(param_1,param_2);
  return;
}

