/* Ghidra pseudocode. PS2 address: 0023e9a8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0023e9bc) */

void FUN_0023e9a8(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    RotateThreadReadyQueue(0x80);
    return;
  }
  iVar1 = ((int)param_1 * DAT_002c5ab4) / 1000;
  if (1 < iVar1) {
    iVar1 = 1;
  }
  FUN_0023e8f8(iVar1);
  return;
}

