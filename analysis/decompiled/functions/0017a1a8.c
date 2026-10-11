/* Ghidra pseudocode. PS2 address: 0017a1a8. Not validated source. */

undefined8
FUN_0017a1a8(undefined8 param_1,int param_2,undefined4 param_3,long param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [4];
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  
  uStack_148 = DAT_002c289c;
  uStack_14c = DAT_002c28a0;
  uStack_144 = DAT_002c28a4;
  uStack_150 = 0x3f800000;
  uStack_140 = 0x3f800000;
  uStack_13c = DAT_002c28a8;
  uStack_138 = DAT_002c28ac;
  uStack_134 = DAT_002c28b0;
  uStack_130 = DAT_002c28b4;
  uStack_128 = DAT_002c28b8;
  uStack_12c = 0x3f800000;
  uStack_120 = DAT_002c28b4;
  uStack_124 = 0;
  puVar8 = (undefined4 *)param_1;
  puVar8[0x1f] = param_2;
  puVar8[2] = 1;
  puVar8[4] = param_3;
  puVar8[6] = &DAT_002c4a28;
  puVar8[0xb] = 0xf;
  puVar8[0x10] = &DAT_002b1578;
  puVar8[0x20] = param_5;
  uStack_11c = 0x3f800000;
  *puVar8 = 0;
  puVar8[7] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xe] = 0;
  puVar8[1] = 0;
  puVar8[3] = 0;
  puVar8[5] = 0;
  puVar8[8] = 0;
  puVar8[0x19] = 0;
  puVar8[0x22] = param_7;
  puVar8[0x21] = param_6;
  uStack_118 = 0x3f800000;
  uStack_114 = 0;
  uStack_c0 = param_6;
  FUN_00154f60(0x27a598,*(undefined4 *)(param_2 + 0x46c),auStack_110);
  puVar8[0x15] = (float)iStack_104;
  puVar8[0x11] = (float)(iStack_10c + iStack_108);
  lVar4 = FUN_0023a448(0x2b1330,0x8c,0);
  if (lVar4 != 0) {
    FUN_0023bbd0(lVar4,0xffffffffdeadc0de,0x8c);
  }
  uVar9 = 0x420c0000;
  uVar5 = FUN_001738a0(lVar4,0x2c4ae0,puVar8 + 0x15,0,0,1);
  puVar6 = &uStack_130;
  if (param_4 == 0) {
    puVar6 = &uStack_120;
  }
  iVar7 = (int)uVar5;
  *(undefined4 **)(iVar7 + 0x30) = puVar8 + 0x11;
  *(float *)(iVar7 + 0x40) = (float)iStack_100;
  puVar8[0x1a] = iVar7;
  *(undefined4 *)(iVar7 + 0x3c) = uVar9;
  FUN_00173b30(uVar5,&uStack_150,&uStack_140,&uStack_130,puVar6);
  *(undefined4 *)(puVar8[0x1a] + 0x44) = 0x40800000;
  puVar8[0x16] = (float)iStack_f0;
  puVar8[0x12] = (float)(iStack_f8 + iStack_f4);
  lVar4 = FUN_0023a448(0x2b1340,0x8c,0);
  if (lVar4 != 0) {
    FUN_0023bbd0(lVar4,0xffffffffdeadc0de,0x8c);
  }
  uVar5 = FUN_001738a0(lVar4,0x2c4ae8,puVar8 + 0x16,0,0,1);
  iVar7 = (int)uVar5;
  *(undefined4 **)(iVar7 + 0x30) = puVar8 + 0x12;
  *(float *)(iVar7 + 0x40) = (float)iStack_ec;
  puVar8[0x1b] = iVar7;
  *(undefined4 *)(iVar7 + 0x3c) = uVar9;
  FUN_00173b30(uVar5,&uStack_150,&uStack_140,&uStack_130,puVar6);
  *(undefined4 *)(puVar8[0x1b] + 0x44) = 0x40800000;
  puVar8[0x17] = (float)iStack_dc;
  puVar8[0x13] = (float)(iStack_e4 + iStack_e0);
  lVar4 = FUN_0023a448(0x2b1350,0x8c,0);
  if (lVar4 != 0) {
    FUN_0023bbd0(lVar4,0xffffffffdeadc0de,0x8c);
  }
  uVar5 = FUN_001738a0(lVar4,0x2b1360,puVar8 + 0x17,0,0,1);
  iVar7 = (int)uVar5;
  *(undefined4 **)(iVar7 + 0x30) = puVar8 + 0x13;
  *(float *)(iVar7 + 0x40) = (float)iStack_d8;
  puVar8[0x1c] = iVar7;
  *(undefined4 *)(iVar7 + 0x3c) = uVar9;
  FUN_00173b30(uVar5,&uStack_150,&uStack_140,&uStack_130,puVar6);
  *(undefined4 *)(puVar8[0x1c] + 0x44) = 0x40800000;
  puVar8[0x18] = (float)iStack_c8;
  puVar8[0x14] = (float)(iStack_d0 + iStack_cc);
  lVar4 = FUN_0023a448(0x2b1370,0x8c,0);
  if (lVar4 != 0) {
    FUN_0023bbd0(lVar4,0xffffffffdeadc0de,0x8c);
  }
  uVar5 = FUN_001738a0(lVar4,0x2c4af0,puVar8 + 0x18,0,0,1);
  iVar7 = (int)uVar5;
  *(undefined4 **)(iVar7 + 0x30) = puVar8 + 0x14;
  *(float *)(iVar7 + 0x40) = (float)iStack_c4;
  puVar8[0x1d] = iVar7;
  *(undefined4 *)(iVar7 + 0x3c) = uVar9;
  FUN_00173b30(uVar5,&uStack_150,&uStack_140,&uStack_130,puVar6);
  *(undefined4 *)(puVar8[0x1d] + 0x44) = 0x40800000;
  lVar4 = FUN_0023a448(0x2b1380,0x8c,0);
  if (lVar4 != 0) {
    FUN_0023bbd0(lVar4,0xffffffffdeadc0de,0x8c);
  }
  uVar2 = FUN_001738a0(lVar4,0x2c4af8,puVar8 + 0x19,0,0,0);
  puVar8[0x1e] = uVar2;
  iVar3 = FUN_00154c98(0x27a598,*(undefined4 *)(puVar8[0x1f] + 0x46c));
  iVar7 = puVar8[0x1e];
  iVar1 = puVar8[0x20];
  puVar8[0x19] = (float)iVar3;
  *(undefined4 *)(iVar7 + 0x3c) = uVar9;
  *(undefined4 *)(iVar7 + 0x40) = puVar8[0x19];
  if (iVar1 == 0) {
    (**(code **)(*(int *)(iVar7 + 0x24) + 0x2c))(iVar7 + *(short *)(*(int *)(iVar7 + 0x24) + 0x28));
  }
  else {
    (**(code **)(*(int *)(iVar7 + 0x24) + 0x34))(iVar7 + *(short *)(*(int *)(iVar7 + 0x24) + 0x30));
  }
  puVar8[10] = param_7 + param_8;
  puVar6 = puVar8 + 0x1a;
  puVar8[9] = uStack_c0;
  iVar7 = 3;
  puVar8[0xb] = param_8;
  uVar9 = *puVar6;
  while( true ) {
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
    FUN_00174c68(param_1,uVar9);
    if (iVar7 < 0) break;
    uVar9 = *puVar6;
  }
  return param_1;
}

