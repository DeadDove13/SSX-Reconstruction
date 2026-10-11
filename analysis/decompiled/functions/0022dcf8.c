/* Ghidra pseudocode. PS2 address: 0022dcf8. Not validated source. */

int FUN_0022dcf8(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iStack_10;
  uint uStack_c;
  
  iVar1 = 0;
  iVar2 = 0x20;
  iStack_10 = (int)param_1;
  uStack_c = (uint)((ulong)param_1 >> 0x20);
  do {
    uStack_c = uStack_c * 2 - (iStack_10 >> 0x1f);
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 * 2;
    iStack_10 = iStack_10 << 1;
    if (param_2 <= uStack_c) {
      uStack_c = uStack_c - param_2;
      iVar1 = iVar1 + 1;
    }
  } while (iVar2 != 0);
  return iVar1;
}

