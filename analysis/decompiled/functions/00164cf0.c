/* Ghidra pseudocode. PS2 address: 00164cf0. Not validated source. */

void FUN_00164cf0(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xc) == 0) {
    if (param_1 != 0) {
      (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 8) + 8),3);
    }
  }
  else if ((((*(uint *)(*(int *)(iVar2 + 0xc) + 0x40) & 1) == 0) &&
           (lVar1 = FUN_00164d80(param_1), lVar1 == 0)) && (param_1 != 0)) {
    (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 8) + 8),3);
  }
  return;
}

