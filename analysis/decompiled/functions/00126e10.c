/* Ghidra pseudocode. PS2 address: 00126e10. Not validated source. */

void FUN_00126e10(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  if ((((param_2 == 0) || (lVar1 = FUN_001222f0(), lVar1 == 0)) &&
      (iVar2 = (int)param_1, -1 < *(int *)(iVar2 + 0x34))) && (param_1 != 0)) {
    (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 8) + 8),3);
  }
  return;
}

