/* Ghidra pseudocode. PS2 address: 0015f700. Not validated source. */

void FUN_0015f700(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  DAT_002c473c = (undefined4)param_1;
  FUN_0015b980(0x27fea0);
  DAT_002c4738 = 0;
  if (param_1 != 0) {
    iVar4 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c); iVar3 = iVar3 + 1) {
      lVar1 = FUN_00189b78(DAT_002859e4,iVar3);
      lVar2 = FUN_0015bd28(DAT_00280e40);
      if (lVar1 == lVar2) {
        iVar4 = iVar3;
      }
    }
    FUN_0015fba0(0,0,0x41200000,0x3f800000,iVar4,0);
    FUN_0015f830(7);
    return;
  }
  return;
}

