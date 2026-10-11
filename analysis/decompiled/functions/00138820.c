/* Ghidra pseudocode. PS2 address: 00138820. Not validated source. */

bool FUN_00138820(int param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_001880f0(DAT_002859e4,*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x390));
  bVar1 = false;
  if (lVar2 != 0) {
    bVar1 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x348) < 0;
  }
  return bVar1;
}

