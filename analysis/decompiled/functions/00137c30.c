/* Ghidra pseudocode. PS2 address: 00137c30. Not validated source. */

void FUN_00137c30(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_2;
  *(undefined8 *)((int)param_1 + 0x58) = *puVar4;
  FUN_001367f8((int)param_1 + 0x1a4,param_2);
  lVar2 = FUN_00138820(param_1);
  if (lVar2 != 0) {
    if (param_3 == 0) {
      uVar3 = FUN_00136a70(param_1);
      FUN_001f0b28(DAT_002c56e8,param_2,uVar3);
    }
    else {
      FUN_001f1708(DAT_002c56e8);
    }
  }
  if (param_3 == 0) {
    FUN_00137ea0(DAT_002c1ce0,param_1,7,0);
    uVar1 = *(uint *)((int)puVar4 + 4);
  }
  else {
    FUN_00137ea0(DAT_002c1cdc,param_1,8,0);
    uVar1 = *(uint *)((int)puVar4 + 4);
  }
  if (((((uVar1 & 0xf00000) != 0x300000) && ((uVar1 & 0xf0000) != 0x20000)) &&
      ((uVar1 & 0xf0000) != 0x30000)) && ((uVar1 & 0xc0000000) != 0x40000000)) {
    return;
  }
  FUN_00136e80(param_1);
  return;
}

