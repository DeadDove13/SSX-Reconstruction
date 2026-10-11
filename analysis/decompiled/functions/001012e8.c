/* Ghidra pseudocode. PS2 address: 001012e8. Not validated source. */

void FUN_001012e8(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x28) == *(int *)(iVar3 + 0x24)) {
    piVar1 = *(int **)(iVar3 + 0x68);
  }
  else {
    piVar1 = *(int **)(iVar3 + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),param_1);
    }
    iVar2 = **(int **)(iVar3 + 0x68);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(iVar3 + 0x68) + (int)*(short *)(iVar2 + 8),param_1);
    *(undefined4 *)(iVar3 + 100) = 0;
    *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar3 + 0x24);
    piVar1 = *(int **)(iVar3 + 0x68);
  }
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),param_1);
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
  return;
}

