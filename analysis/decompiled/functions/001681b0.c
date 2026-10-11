/* Ghidra pseudocode. PS2 address: 001681b0. Not validated source. */

void FUN_001681b0(int param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00154920(0x27a598);
  if ((((lVar2 != 0) && (*(int *)(param_1 + 0x470) == 0)) && (1 < DAT_002852a4)) &&
     (iVar1 = FUN_00182670(0x285290,1),
     (*(uint *)(iVar1 + 0xc) & ~*(uint *)(iVar1 + 8) & 0x880) != 0)) {
    FUN_001faea0(DAT_002c56e8);
    *(undefined4 *)(param_1 + 0x470) = 1;
    FUN_001540a8(0x27a598,1,1);
    return;
  }
  return;
}

