/* Ghidra pseudocode. PS2 address: 00254250. Not validated source. */

ulong FUN_00254250(ulong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar1 = (uint)(param_1 >> 0x20);
  uVar10 = uVar1 & 0x7fffffff;
  if ((uVar10 < 0x3e300000) && (lVar2 = FUN_00257bb0(param_1), lVar2 == 0)) {
    if (((param_1 & 0x7fffffff00000000) == 0 && (int)param_1 == 0) && param_3 == -1) {
      uVar3 = FUN_002552b0(param_1);
      param_1 = FUN_00257828(0x3ff0000000000000,uVar3);
    }
    else if (param_3 != 1) {
      param_1 = FUN_00257828(0xbff0000000000000,param_1);
    }
  }
  else {
    uVar5 = param_1;
    if (0x3fe59427 < uVar10) {
      if ((long)param_1 < 0) {
        param_1 = FUN_00257518(0,param_1);
        param_2 = FUN_00257518(0,param_2);
      }
      uVar3 = FUN_00257518(DAT_002bfdb8,param_1);
      uVar4 = FUN_00257518(DAT_002bfdc0,param_2);
      param_2 = 0;
      uVar5 = FUN_002574c0(uVar3,uVar4);
    }
    uVar3 = FUN_00257580(uVar5,uVar5);
    uVar4 = FUN_00257580(uVar3,uVar3);
    uVar6 = FUN_00257580(uVar4,DAT_002bfda8);
    uVar6 = FUN_002574c0(DAT_002bfd98,uVar6);
    uVar6 = FUN_00257580(uVar4,uVar6);
    uVar6 = FUN_002574c0(DAT_002bfd88,uVar6);
    uVar6 = FUN_00257580(uVar4,uVar6);
    uVar6 = FUN_002574c0(DAT_002bfd78,uVar6);
    uVar6 = FUN_00257580(uVar4,uVar6);
    uVar6 = FUN_002574c0(DAT_002bfd68,uVar6);
    uVar6 = FUN_00257580(uVar4,uVar6);
    uVar6 = FUN_002574c0(DAT_002bfd58,uVar6);
    uVar7 = FUN_00257580(uVar4,DAT_002bfdb0);
    uVar7 = FUN_002574c0(DAT_002bfda0,uVar7);
    uVar7 = FUN_00257580(uVar4,uVar7);
    uVar7 = FUN_002574c0(DAT_002bfd90,uVar7);
    uVar7 = FUN_00257580(uVar4,uVar7);
    uVar7 = FUN_002574c0(DAT_002bfd80,uVar7);
    uVar7 = FUN_00257580(uVar4,uVar7);
    uVar7 = FUN_002574c0(DAT_002bfd70,uVar7);
    uVar4 = FUN_00257580(uVar4,uVar7);
    uVar4 = FUN_002574c0(DAT_002bfd60,uVar4);
    uVar4 = FUN_00257580(uVar3,uVar4);
    uVar7 = FUN_00257580(uVar3,uVar5);
    uVar4 = FUN_002574c0(uVar6,uVar4);
    uVar4 = FUN_00257580(uVar7,uVar4);
    uVar4 = FUN_002574c0(uVar4,param_2);
    uVar3 = FUN_00257580(uVar3,uVar4);
    uVar3 = FUN_002574c0(param_2,uVar3);
    uVar4 = FUN_00257580(DAT_002bfd50,uVar7);
    uVar3 = FUN_002574c0(uVar3,uVar4);
    param_1 = FUN_002574c0(uVar5,uVar3);
    if (uVar10 < 0x3fe59428) {
      if (param_3 != 1) {
        uVar4 = FUN_00257518(param_1 & 0xffffffff00000000,uVar5);
        uVar3 = FUN_00257518(uVar3,uVar4);
        uVar5 = FUN_00257828(0xbff0000000000000,param_1);
        uVar9 = uVar5 & 0xffffffff00000000;
        uVar4 = FUN_00257580(uVar9,param_1 & 0xffffffff00000000);
        uVar4 = FUN_002574c0(uVar4,0x3ff0000000000000);
        uVar3 = FUN_00257580(uVar9,uVar3);
        uVar3 = FUN_002574c0(uVar4,uVar3);
        uVar3 = FUN_00257580(uVar5,uVar3);
        param_1 = FUN_002574c0(uVar9,uVar3);
      }
    }
    else {
      uVar4 = FUN_00257af8(param_3);
      uVar6 = FUN_00257af8(1 - ((int)uVar1 >> 0x1e & 2U));
      uVar7 = FUN_00257580(param_1,param_1);
      uVar8 = FUN_002574c0(param_1,uVar4);
      uVar7 = FUN_00257828(uVar7,uVar8);
      uVar3 = FUN_00257518(uVar7,uVar3);
      uVar3 = FUN_00257518(uVar5,uVar3);
      uVar3 = FUN_002574c0(uVar3,uVar3);
      uVar3 = FUN_00257518(uVar4,uVar3);
      param_1 = FUN_00257580(uVar6,uVar3);
    }
  }
  return param_1;
}

