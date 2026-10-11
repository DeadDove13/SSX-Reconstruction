/* Ghidra pseudocode. PS2 address: 00238ca0. Not validated source. */

undefined4 FUN_00238ca0(long param_1,long param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = 8;
  if (param_1 != 0) {
    lVar5 = param_1;
  }
  lVar4 = 1000;
  if (param_2 != 0) {
    lVar4 = param_2;
  }
  lVar3 = 0x20;
  if (param_3 != 0) {
    lVar3 = param_3;
  }
  if (DAT_002a3358 == 0) {
    DAT_002a3358 = (int)lVar3;
    DAT_002a3360 = 0xff;
    DAT_002a335c = (int)lVar5;
    DAT_002a336c = FUN_0023ee10();
    DAT_002a3374 = param_4;
    uVar2 = FUN_00238db8(lVar5,lVar4,lVar3);
    FUN_0023bbd0(DAT_002a3374,0,uVar2);
    DAT_002a3378 = DAT_002a3374 + DAT_002a3358 * 0x30;
    if (DAT_002c5a50 == 0) {
      uVar2 = FUN_0018b8a8(DAT_002a335c,lVar4,
                           DAT_002a335c * 0x4c + DAT_002a3378 + 0x3fU & 0xffffffc0,0x239628);
    }
    else {
      uVar2 = 0;
    }
    FUN_00237758(lVar5,uVar2);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

