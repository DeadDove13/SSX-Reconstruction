/* Ghidra pseudocode. PS2 address: 0018a028. Not validated source. */

void FUN_0018a028(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if ((iVar4 != -0x3f68) && (iVar4 + 0x3f68 != iVar4 + 0x5d68)) {
    for (iVar2 = iVar4 + 0x5d2c; FUN_0018a120(iVar2,0), iVar4 + 0x3f68 != iVar2;
        iVar2 = iVar2 + -0x3c) {
    }
  }
  if (iVar4 != -0x3968) {
    iVar2 = iVar4 + 0x3e54;
    iVar3 = iVar4 + 0x3e68;
    while (iVar1 = iVar2, iVar4 + 0x3968 != iVar3) {
      FUN_0018a100(iVar1,0);
      iVar2 = iVar1 + -0x14;
      iVar3 = iVar1;
    }
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_00103778(param_1);
  return;
}

