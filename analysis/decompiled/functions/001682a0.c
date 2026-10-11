/* Ghidra pseudocode. PS2 address: 001682a0. Not validated source. */

void FUN_001682a0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(*(int *)(iVar2 + 0x488) + 0xb38);
  if (iVar1 == 4) {
    if ((*(int *)(iVar2 + 0x46c) == 0) && (*(int *)(iVar2 + 0x470) != 0)) {
      *(undefined4 *)(iVar2 + 0x470) = 0;
    }
  }
  else if (iVar1 == 5) {
    *(undefined4 *)(iVar2 + *(int *)(iVar2 + 0x46c) * 4 + 0x47c) = 0;
  }
  FUN_00168598(param_1);
  FUN_00168028(param_1);
  return;
}

