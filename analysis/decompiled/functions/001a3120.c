/* Ghidra pseudocode. PS2 address: 001a3120. Not validated source. */

void FUN_001a3120(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xe;
  piVar2 = (int *)((int)param_1 + 0xc);
  *(undefined **)((int)param_1 + 8) = &DAT_002b61d8;
  do {
    if (*piVar2 != 0) {
      FUN_001a3880(*piVar2,0xffffffffffffffff);
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x18) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x18) + 8),3);
      }
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  FUN_00185f70(param_1,param_2);
  return;
}

