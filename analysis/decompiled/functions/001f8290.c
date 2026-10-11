/* Ghidra pseudocode. PS2 address: 001f8290. Not validated source. */

void FUN_001f8290(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  while( true ) {
    while( true ) {
      iVar2 = DAT_002859e4;
      if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) <= iVar5) {
        FUN_00189b78(DAT_002859e4,0);
        return;
      }
      if ((*(int *)(DAT_002859e4 + 0x38) != 0) &&
         (iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18), iVar1 != 0 && iVar1 < 10)) break;
      lVar4 = FUN_001880f0(DAT_002859e4,iVar5);
      if (lVar4 != 0) {
        FUN_00189b78(DAT_002859e4,iVar5);
        return;
      }
      iVar5 = iVar5 + 1;
    }
    uVar3 = FUN_00189b78(DAT_002859e4,iVar5);
    lVar4 = FUN_00198a28(*(undefined4 *)(iVar2 + 0x38),uVar3);
    if (lVar4 != 0) break;
    iVar5 = iVar5 + 1;
  }
  FUN_00189b78(DAT_002859e4,iVar5);
  return;
}

