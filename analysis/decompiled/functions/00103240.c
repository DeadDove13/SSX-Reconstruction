/* Ghidra pseudocode. PS2 address: 00103240. Not validated source. */

void FUN_00103240(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) <= iVar3) break;
    uVar1 = FUN_00189b78(DAT_002859e4,iVar3);
    FUN_001057d0(uVar1);
    iVar2 = (int)uVar1;
    if (*(int *)(iVar2 + 0x6c4c) != 0) {
      FUN_00113180(uVar1);
    }
    iVar3 = iVar3 + 1;
    FUN_00110e58(uVar1);
    *(undefined4 *)(iVar2 + 0x36c) = *(undefined4 *)(iVar2 + 0xf0);
  }
  FUN_00102778(*(int *)(DAT_002859e4 + 0x14));
  return;
}

