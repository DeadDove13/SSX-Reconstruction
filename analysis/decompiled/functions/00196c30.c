/* Ghidra pseudocode. PS2 address: 00196c30. Not validated source. */

long FUN_00196c30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00210840(0x28ac20,0x3ec,0x28000000,0x2b5168,0,0);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0x3ec);
  }
  lVar2 = FUN_00197190(lVar2,param_1,param_2);
  if (lVar2 == 0) {
    iVar1 = *(int *)(DAT_002859e4 + 0x38);
    *(undefined4 *)(iVar1 + 0x34) = 0xb4;
    *(undefined4 *)(iVar1 + 0x38) = 1;
  }
  return lVar2;
}

