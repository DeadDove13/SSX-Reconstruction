/* Ghidra pseudocode. PS2 address: 00265ba0. Not validated source. */

void FUN_00265ba0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  lVar1 = FUN_00257aa8(param_1,0);
  if (lVar1 < 0) {
    param_1 = FUN_00257518(0,param_1);
    (*(code *)PTR_FUN_002a6aa4)(0x2d);
  }
  lVar1 = FUN_00257aa8(param_1,DAT_002c0b58);
  uVar2 = DAT_002c0b60;
  if (lVar1 < 0) {
    while (lVar1 = FUN_00257aa8(param_1,DAT_002c0b68), lVar1 < 0) {
      param_1 = FUN_00257580(param_1,0x4024000000000000);
      iVar3 = iVar3 + -1;
    }
  }
  else {
    lVar1 = FUN_00257aa8(param_1,0x3ff0000000000000);
    uVar2 = DAT_002c0b70;
    if (-1 < lVar1) {
      while (lVar1 = FUN_00257aa8(param_1,0x3ff0000000000000), -1 < lVar1) {
        param_1 = FUN_00257828(param_1,0x4024000000000000);
        iVar3 = iVar3 + 1;
      }
    }
  }
  uVar2 = FUN_00257580(param_1,uVar2);
  uVar2 = FUN_00269520(uVar2);
  uVar2 = FUN_00265a48(uVar2);
  FUN_00266298(0x2c0b40,uVar2);
  if (iVar3 < 0) {
    FUN_00266298(0x2c0b50,iVar3);
    return;
  }
  FUN_00266298(0x2c0b48,iVar3);
  return;
}

