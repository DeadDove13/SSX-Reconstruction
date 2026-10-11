/* Ghidra pseudocode. PS2 address: 00205a18. Not validated source. */

undefined8
FUN_00205a18(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined1 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined1 auStack_1b0 [256];
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  
  puVar9 = (undefined4 *)param_1;
  puVar9[1] = 0;
  puVar9[5] = 0;
  puVar9[0x3e] = 0;
  puVar9[0x3f] = 0;
  puVar9[0x46] = 0;
  puVar9[0x43] = 4;
  puVar9[0x41] = 4;
  *puVar9 = 0xffffffff;
  puVar9[2] = param_7;
  puVar9[3] = param_6;
  *(undefined1 *)(puVar9 + 4) = param_5;
  puVar9[0x40] = 0x42f00000;
  puVar9[0x42] = 2;
  puVar9[0x44] = 8;
  puVar9[0x45] = 0x10;
  puVar9[0x47] = 0x5a;
  puVar9[0x49] = 0x32;
  puVar9[0x4b] = 100;
  puVar9[0x48] = 100;
  puVar9[0x4a] = 100;
  uStack_b0 = param_2;
  iVar2 = FUN_00227f00(10,300);
  iVar2 = iVar2 + 0x20000;
  lVar4 = FUN_0023a448(0x2bcfa0,iVar2,0);
  if (lVar4 != 0) {
    FUN_0023bbd0(lVar4,0xffffffffdeadc0ed,iVar2);
  }
  iVar7 = DAT_002c5bc8;
  puVar9[1] = (int)lVar4;
  *(undefined4 *)(iVar7 + 0x35358) = *(undefined4 *)(iVar7 + 0x35354);
  lVar4 = FUN_00204de8(iVar7 + 0x35350,param_3);
  puStack_ac = puVar9 + 0x4c;
  if (lVar4 != 0) {
    while (lVar4 = FUN_002051a8(DAT_002c5bc8 + 0x35350), lVar4 == 0) {
      uVar5 = FUN_00204f90(DAT_002c5bc8 + 0x35350);
      FUN_00205210(DAT_002c5bc8 + 0x35350,0x2bcfb8,puVar9 + 6);
      FUN_00205210(DAT_002c5bc8 + 0x35350,0x2c5720,puVar9 + 0xe);
      FUN_00205288(DAT_002c5bc8 + 0x35350,0x2c5728,puVar9 + 0x40);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bcfc8,puVar9 + 0x41);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bcfd8,puVar9 + 0x42);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bcfe8,puVar9 + 0x43);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bcff8,puVar9 + 0x44);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bd008,puVar9 + 0x45);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bd018,puVar9 + 0x46);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bd028,puVar9 + 0x48);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bd038,puVar9 + 0x47);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bd048,puVar9 + 0x49);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bd058,puVar9 + 0x4a);
      FUN_002052f0(DAT_002c5bc8 + 0x35350,0x2bd068,puVar9 + 0x4b);
      lVar4 = FUN_00205210(DAT_002c5bc8 + 0x35350,0x2bd078,puVar9 + puVar9[0x3e] * 8 + 0x16);
      if (lVar4 != 0) {
        puVar9[0x3e] = puVar9[0x3e] + 1;
      }
      lVar4 = FUN_0025b730(0x2bd088,uVar5);
      if (lVar4 == 0) {
        puVar9[0x48] = (int)(((float)puVar9[0x40] / 60.0) * 0.0625 * 1000.0);
      }
      lVar4 = FUN_0025b730(0x2c5730,uVar5);
      if (lVar4 == 0) {
        puVar9[0x48] = (int)(((float)puVar9[0x40] / 60.0) * 0.125 * 1000.0);
      }
      lVar4 = FUN_0025b730(0x2c5738,uVar5);
      if (lVar4 == 0) {
        puVar9[0x48] = (int)(((float)puVar9[0x40] / 60.0) * 0.25 * 1000.0);
      }
      lVar4 = FUN_0025b730(0x2c5740,uVar5);
      if (lVar4 == 0) {
        puVar9[0x48] = (int)(((float)puVar9[0x40] / 60.0) * 1000.0);
      }
    }
  }
  FUN_0025b630(auStack_1b0,0x2c5748,uStack_b0,puVar9 + 6);
  iVar7 = *(int *)(DAT_002c5778 + 0x32000);
  iVar8 = DAT_002c5778 + *(short *)(iVar7 + 0x10);
  lVar4 = FUN_00236908(auStack_1b0);
  (**(code **)(iVar7 + 0x14))(iVar8,lVar4 < 0x2001,0x2bd098,0x2bd0c0,0x54);
  FUN_00236a40(auStack_1b0,puStack_ac,0x2000);
  FUN_0025b630(auStack_1b0,0x2c5748,uStack_b0,puVar9 + 0xe);
  iVar7 = param_4 + 0x320a0;
  fVar10 = (float)(int)puVar9[0x4a] / 100.0;
  piVar6 = (int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4);
  if ((((float)*(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4) * fVar10 < 127.0) &&
      (iVar8 = 0, (float)*(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4) * fVar10 < 0.0)) ||
     (iVar8 = 0x7f, 127.0 <= (float)*(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4) * fVar10)) {
    *piVar6 = iVar8;
  }
  else {
    *piVar6 = (int)((float)*(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4) * fVar10);
  }
  iVar7 = param_4 + 0x320a0;
  if ((0x7e < *(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4)) ||
     (uVar1 = 0, -1 < *(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4))) {
    if (*(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4) < 0x7f) {
      uVar1 = *(undefined1 *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4);
    }
    else {
      uVar1 = 0x7f;
    }
  }
  *(undefined1 *)(*(int *)(param_4 + 0x3201c) * 0x18 + param_4 + 0x32020) = uVar1;
  iVar7 = param_4 + 0x320a0;
  piVar6 = (int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4);
  if ((((float)*(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4) * 0.75 < 127.0) &&
      (iVar8 = 0, (float)*(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4) * 0.75 < 0.0)) ||
     (iVar8 = 0x7f, 127.0 <= (float)*(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4) * 0.75)) {
    *piVar6 = iVar8;
  }
  else {
    *piVar6 = (int)((float)*(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4) * 0.75);
  }
  iVar7 = param_4 + 0x320a0;
  if ((0x7e < *(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4)) ||
     (uVar1 = 0, -1 < *(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4))) {
    if (*(int *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4) < 0x7f) {
      uVar1 = *(undefined1 *)(iVar7 + *(int *)(param_4 + 0x3201c) * 4);
    }
    else {
      uVar1 = 0x7f;
    }
  }
  *(undefined1 *)(*(int *)(param_4 + 0x3201c) * 0x18 + param_4 + 0x32020) = uVar1;
  uVar3 = FUN_00227b10(puStack_ac,auStack_1b0,2000,
                       param_4 + *(int *)(param_4 + 0x3201c) * 0x18 + 0x32020,10,300,puVar9[1],iVar2
                      );
  *puVar9 = uVar3;
  return param_1;
}

