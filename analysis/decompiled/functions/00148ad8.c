/* Ghidra pseudocode. PS2 address: 00148ad8. Not validated source. */

void FUN_00148ad8(int param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  
  FUN_00219350(param_1 + 0x244,2);
  if ((param_1 != 0) && (param_1 != param_1 + 0x220)) {
    iVar2 = param_1 + 0x210;
    do {
      FUN_001491c8(iVar2,0);
      bVar1 = param_1 != iVar2;
      iVar2 = iVar2 + -0x10;
    } while (bVar1);
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_00103778(param_1);
  return;
}

