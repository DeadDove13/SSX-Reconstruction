/* Ghidra pseudocode. PS2 address: 0023c4d8. Not validated source. */

void FUN_0023c4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  FUN_00239028(*(undefined4 *)(iVar2 + 0xa4));
  lVar1 = FUN_002391d0(iVar2 + 0x5c,1,*(undefined4 *)(iVar2 + 0x30),param_3);
  *(int *)(iVar2 + 0xa4) = (int)lVar1;
  if (lVar1 != 0) {
    FUN_00238ea0(lVar1,0x23c490);
    return;
  }
  return;
}

