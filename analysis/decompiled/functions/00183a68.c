/* Ghidra pseudocode. PS2 address: 00183a68. Not validated source. */

void FUN_00183a68(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_0018ac08(0x2b33b0);
  puVar3 = (undefined4 *)param_1;
  puVar3[3] = param_2;
  FUN_001840e0(param_1);
  FUN_00182220(0x285290);
  FUN_001837f0(0x2c80c0);
  puVar3[0x1bd] = 0;
  puVar3[0x1ba] = 0;
  puVar3[0x1b7] = 0;
  puVar3[0x1b9] = 0;
  puVar3[0x1b8] = 0x3f800000;
  FUN_00265040(3);
  uVar2 = AddIntcHandler(3,0x183540,0);
  *puVar3 = uVar2;
  FUN_002650a8(3);
  puVar3[0x1be] = 0;
  FUN_00184218(param_1,0);
  FUN_00152400(0x27a598);
  FUN_00185178(param_1);
  lVar1 = FUN_0023a448(0x2b33c8,0x6c,0x10);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x6c);
  }
  uVar2 = FUN_00216ff8(lVar1);
  puVar3[0x1bd] = uVar2;
  FUN_001eaed8();
  FUN_00219378();
  uVar2 = DAT_002c5ac0;
  DAT_002c5ac0 = 0;
  FUN_0023a288(0x2b33d8,0,100,0x2c4dc4);
  FUN_0023a288(0x2b33f0,0,100,0x2c4dbc);
  FUN_0023a288(0x2b3408,0,100,0x2c4db4);
  FUN_0023a288(0x2b3420,0,100,0x2c4db0);
  FUN_0023a288(0x2b3438,0,100,0x2c4db8);
  FUN_0023a288(0x2b3450,0,100,0x2c4dc0);
  puVar3[0x1bc] = 0;
  puVar3[0x1bb] = 0;
  DAT_002c5ac0 = uVar2;
  lVar1 = FUN_0023a448(0x2b3468,0x5c0,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x5c0);
  }
  uVar2 = FUN_001d6440(lVar1);
  puVar3[0x1b6] = uVar2;
  FUN_0018acc8(puVar3 + 5);
  FUN_0025b630(puVar3 + 0x1bf,0x2b3478,0x2b3490,0x2b34a0);
  FUN_00146bf0(0x2795b8);
  return;
}

