/* Ghidra pseudocode. PS2 address: 00154920. Not validated source. */

bool FUN_00154920(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x14f0);
  bVar2 = false;
  if ((iVar1 != 6) && (iVar1 != 4)) {
    bVar2 = iVar1 != 5;
  }
  return bVar2;
}

