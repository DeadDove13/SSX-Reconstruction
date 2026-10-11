/* Ghidra pseudocode. PS2 address: 002171b0. Not validated source. */

undefined8 FUN_002171b0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_00216900();
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_002bd9a0;
  FUN_0019aa08(puVar4 + 0x1b);
  FUN_001fc6c0(DAT_002c56e8);
  puVar4[0x1a] = (int)param_2;
  switch(param_2) {
  default:
    puVar4[0x52e] = 0;
    goto LAB_00217260;
  case 1:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 6;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = 1;
    break;
  case 6:
    uVar1 = 4;
    break;
  case 8:
    uVar1 = 5;
    break;
  case 9:
    uVar1 = 7;
    break;
  case 10:
    uVar1 = 8;
  }
  puVar4[0x52e] = uVar1;
LAB_00217260:
  puVar5 = puVar4 + 0x1b;
  uVar2 = FUN_002369a0(*(undefined4 *)(&UNK_002bdb10 + puVar4[0x52e] * 4),0);
  uVar3 = FUN_0023c128(uVar2,0);
  uVar1 = FUN_001be538(0x295e90,uVar3,0x2c58a8,0);
  puVar4[0x52f] = uVar1;
  FUN_0023a998(uVar2);
  FUN_0019af18(puVar5,puVar4 + 1);
  FUN_0019af40(0x43480000,0x43400000,0x43aa0000,0x43780000,puVar5);
  puVar4[0x524] = 0;
  puVar4[0x523] = 0;
  puVar4[0x525] = 1;
  FUN_0019b0b8(0x3fa00000,0x3fa00000,puVar5);
  if (DAT_002c58b0 == 0) {
    uVar2 = FUN_00152ca8(0x27a598);
    FUN_0019af58(puVar5,uVar2);
  }
  else {
    puVar4[0x530] = 0;
    puVar4[0x531] = 0;
    uVar2 = FUN_00234e80(DAT_002852fc,*(undefined4 *)(&UNK_002bdb38 + puVar4[0x531] * 4));
    FUN_0019af58(puVar5,uVar2);
  }
  *(undefined8 *)(puVar4 + 0x12) = 0x3f800000;
  *(undefined8 *)(puVar4 + 0x14) = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0x3f800000;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  FUN_00216818(param_1);
  return param_1;
}

