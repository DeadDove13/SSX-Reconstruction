/* Ghidra pseudocode. PS2 address: 00170f50. Not validated source. */

undefined8 FUN_00170f50(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_130 [32];
  int aiStack_110 [4];
  undefined1 auStack_100 [80];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  uStack_b0 = FUN_0023a448(0x2b05e0,0x152000,DAT_002c5ac0 | 0x40);
  uVar2 = FUN_0023a448(0x2c48f8,0x12c000,DAT_002c5ac0 | 0x40);
  uStack_ac = FUN_0023a448(0x2b05f0,0x12c000,DAT_002c5ac0 | 0x40);
  DAT_002c5b9c = FUN_0023a448(0x2b0600,0x32000,DAT_002c5ac0 | 0x40);
  DAT_002c5ba0 = DAT_002c5b9c & 0xfffffff | 0x30000000;
  uVar3 = FUN_0023cab0(2,2,2,uStack_ac,0x12c000);
  DAT_002c5b98 = (undefined4)uVar3;
  uVar3 = FUN_0023d938(uVar3,2);
  FUN_0023d6b8(DAT_002c5b98,1,0xffff,0x4353,2);
  uVar4 = FUN_0023ccf8(DAT_002c5b98,param_1,0,0);
  FUN_0024a290();
  FUN_0024a2e0(auStack_100,uStack_b0,0x152000);
  FUN_0024a740(auStack_100,1,0x170e30,0);
  while ((lVar5 = FUN_0023db48(DAT_002c5b98), lVar5 < 0x64000 &&
         (lVar5 = FUN_0023db90(DAT_002c5b98), lVar5 == 1))) {
    FUN_0023e608(0);
  }
  FUN_00228cc0(auStack_130);
  uVar6 = FUN_00227328(3,0x1e);
  uVar7 = FUN_0023a448(0x2b0610,uVar6,DAT_002c5ac0);
  uVar6 = FUN_00227628(uVar3,auStack_130,3,0x1e,uVar7,uVar6);
  lVar5 = FUN_0023db48(uVar3);
  if (lVar5 == 0) {
    lVar5 = -1;
  }
  else {
    lVar5 = FUN_00227600(uVar6,0,uVar4);
  }
  DAT_002c5ba4 = 0;
  while ((lVar8 = FUN_0024a678(auStack_100), lVar8 == 0 && (DAT_002c5ba4 == 0))) {
    FUN_0024a560(auStack_100,uVar2,0x4b0);
    FUN_00170d70(auStack_100,uVar2);
    if (lVar5 < 0) {
      FUN_00170d28(uVar3);
    }
    uVar1 = REG_GS_CSR;
    while ((uVar1 & 0x2000) != 0) {
      FUN_0023e608(0);
      uVar1 = REG_GS_CSR;
    }
    FUN_001712c0(0x2913b0,1);
    FUN_00170ca0();
  }
  if (-1 < lVar5) {
    do {
      FUN_00227428(lVar5,aiStack_110);
      FUN_0023e608(0);
      FUN_00170ca0();
      if (aiStack_110[0] == 3) break;
    } while (DAT_002c5ba4 == 0);
  }
  FUN_00226a20(uVar6);
  FUN_0023d770(DAT_002c5b98);
  FUN_0024a520(auStack_100);
  FUN_0023a998(uVar7);
  FUN_0023a998(DAT_002c5b9c);
  FUN_0023a998(uStack_ac);
  FUN_0023a998(uVar2);
  FUN_0023a998(uStack_b0);
  return 0;
}

