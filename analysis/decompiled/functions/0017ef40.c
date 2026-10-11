/* Ghidra pseudocode. PS2 address: 0017ef40. Not validated source. */

void FUN_0017ef40(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0xc94) == 0) {
    iVar2 = 0;
    puVar3 = &DAT_00285048;
    do {
      uVar1 = FUN_0023c128(*(undefined4 *)(param_1 + 0xc84),*(int *)(param_1 + 0xbac) + iVar2);
      iVar2 = iVar2 + 1;
      FUN_001be3c0(0x295e90,uVar1,*puVar3);
      puVar3 = puVar3 + 1;
    } while (iVar2 < 10);
  }
  return;
}

