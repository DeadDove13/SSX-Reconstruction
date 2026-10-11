/* Ghidra pseudocode. PS2 address: 001684f8. Not validated source. */

void FUN_001684f8(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < DAT_002c48ac) {
    piVar3 = &DAT_00280e50;
    do {
      if (*piVar3 == param_2) {
        DAT_002c48ac = iVar2 + 1;
        FUN_00168598(param_1);
        FUN_001678e0(param_1);
        return;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < DAT_002c48ac);
  }
  FUN_001684a8(param_1);
  iVar1 = FUN_00167648(param_1,0);
  iVar2 = *(int *)(iVar1 + 4);
  *(int *)((int)param_1 + 0x488) = iVar1;
  (**(code **)(iVar2 + 0x5c))(iVar1 + *(short *)(iVar2 + 0x58));
  return;
}

