/* Ghidra pseudocode. PS2 address: 00246510. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00246510(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_30 = param_3;
  uStack_18 = param_6;
  puVar4 = &DAT_002d0684;
  uStack_10 = param_7;
  uStack_8 = param_8;
  iVar2 = 5;
  uStack_28 = param_4;
  uStack_20 = param_5;
  DAT_002d0680 = &DAT_002d0680;
  puVar3 = &uStack_30;
  do {
    iVar2 = iVar2 + -1;
    *puVar4 = *(undefined4 *)puVar3;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar2);
  bVar1 = param_1 == 0;
  uVar7 = 0;
  if (bVar1) {
    uVar7 = ram0x002a5180;
  }
  if (param_2 == 0x8110) {
    if (DAT_002d0684 == 0) {
      DAT_002a51b0 = DAT_002d0688;
    }
    else {
      DAT_002a51b4 = DAT_002d0688;
    }
  }
  else if (param_2 == 0x8120) {
    DAT_002a51b8 = DAT_002d0684;
  }
  else if (param_2 == 0x8160) {
    if (DAT_002d0684 == 0) {
      DAT_002a51c8 = DAT_002d068c;
      DAT_002a51bc = DAT_002d0688;
    }
    else {
      DAT_002a51cc = DAT_002d068c;
      DAT_002a51c0 = DAT_002d0688;
    }
  }
  else if (param_2 == 0x8170) {
    DAT_002a51d0 = DAT_002d0688;
    DAT_002a51c4 = DAT_002d0684;
  }
  if (param_2 == 0x8130) {
    param_2 = DAT_002d0684 | 0x8130;
    uVar6 = 0;
    puVar4 = DAT_002d0688;
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar4 = &DAT_002d0680;
    if (param_2 == 0x8140) {
      FUN_00267268(0x2a5188,DAT_002d0684 | 0x8140,bVar1,0x2d0680,0x40,DAT_002d0688,0x40,uVar7);
      return;
    }
    uVar6 = 0x10;
    puVar5 = puVar4;
  }
  FUN_00267268(0x2a5188,param_2,bVar1,puVar4,0x40,puVar5,uVar6,uVar7);
  return;
}

