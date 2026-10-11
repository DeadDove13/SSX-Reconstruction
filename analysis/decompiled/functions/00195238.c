/* Ghidra pseudocode. PS2 address: 00195238. Not validated source. */

undefined4 FUN_00195238(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  lVar2 = FUN_0019a168(iVar3 + *(int *)(iVar3 + 0x1c) * 0xe24 + 0x50,param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_0019a2a8(iVar3 + *(int *)(iVar3 + 0x1c) * 0xe24 + 0x50,param_2);
    uVar1 = 1;
    if (lVar2 != 0) {
      FUN_00195188(param_1);
      uVar1 = 1;
    }
  }
  return uVar1;
}

