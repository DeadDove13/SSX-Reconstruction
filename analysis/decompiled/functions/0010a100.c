/* Ghidra pseudocode. PS2 address: 0010a100. Not validated source. */

bool FUN_0010a100(int param_1)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((-1 < *(int *)(param_1 + 0x348)) && (*(int *)(param_1 + 0x350) == 6)) {
    lVar1 = FUN_0013cff8(*(int *)(param_1 + 0x8584) + 0x670);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}

