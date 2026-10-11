/* Ghidra pseudocode. PS2 address: 00178100. Not validated source. */

void FUN_00178100(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = (int *)((int)param_1 + 0xb78);
  *(undefined **)((int)param_1 + 4) = &DAT_002b1218;
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x24) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x24) + 8),3);
    }
    *piVar2 = 0;
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  FUN_0016c5d0(param_1,param_2);
  return;
}

