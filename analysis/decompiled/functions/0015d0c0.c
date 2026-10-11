/* Ghidra pseudocode. PS2 address: 0015d0c0. Not validated source. */

void FUN_0015d0c0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                 )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  
  iStack_c0 = param_5;
  FUN_00160530(auStack_160,param_3,0x2c4728,0x2c4730);
  FUN_00160530(auStack_150,param_4,0x2c4728,0x2c4730);
  FUN_00160530(auStack_140,0x2af950,0x2c4728,0x2c4730);
  iVar3 = FUN_00160570(auStack_160);
  iVar4 = FUN_00160570(auStack_150);
  uVar7 = FUN_00160570(auStack_140);
  iStack_bc = FUN_00160580(auStack_140);
  iVar13 = (int)uVar7;
  puVar9 = *(undefined8 **)(iVar13 + 0x118);
  puVar8 = *(undefined8 **)(iVar3 + 0x118);
  puVar5 = puVar8 + 0x20;
  puVar14 = (undefined4 *)param_2;
  if ((((uint)puVar8 | (uint)puVar9) & 7) == 0) {
    do {
      uVar10 = puVar8[1];
      uVar11 = puVar8[2];
      uVar12 = puVar8[3];
      *puVar9 = *puVar8;
      puVar9[1] = uVar10;
      puVar9[2] = uVar11;
      puVar9[3] = uVar12;
      puVar8 = puVar8 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar8 != puVar5);
  }
  else {
    do {
      uVar10 = puVar8[1];
      uVar11 = puVar8[2];
      uVar12 = puVar8[3];
      *puVar9 = *puVar8;
      puVar9[1] = uVar10;
      puVar9[2] = uVar11;
      puVar9[3] = uVar12;
      puVar8 = puVar8 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar8 != puVar5);
  }
  puVar15 = puVar14 + 0x373;
  uVar10 = puVar8[1];
  uVar11 = puVar8[2];
  *puVar9 = *puVar8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar11;
  iVar6 = FUN_00160580(auStack_160);
  puVar9 = *(undefined8 **)(iVar6 + 0x44);
  puVar8 = *(undefined8 **)(iStack_bc + 0x44);
  puVar5 = puVar9 + 8;
  if ((((uint)puVar9 | (uint)puVar8) & 7) == 0) {
    do {
      uVar10 = puVar9[1];
      uVar11 = puVar9[2];
      uVar12 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar10;
      puVar8[2] = uVar11;
      puVar8[3] = uVar12;
      puVar9 = puVar9 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar9 != puVar5);
  }
  else {
    do {
      uVar10 = puVar9[1];
      uVar11 = puVar9[2];
      uVar12 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar10;
      puVar8[2] = uVar11;
      puVar8[3] = uVar12;
      puVar9 = puVar9 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar9 != puVar5);
  }
  *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
  fVar16 = (float)FUN_0015bec0(*(undefined4 *)(*(int *)(iVar4 + 0x118) + 0xd8),
                               *(undefined4 *)(*(int *)(iVar3 + 0x118) + 0xd8));
  if (iStack_c0 != 0) {
    if (fVar16 < 0.0) {
      fVar16 = fVar16 + DAT_002c2530;
    }
    else {
      fVar16 = fVar16 + DAT_002c252c;
    }
  }
  iVar6 = *(int *)(iVar3 + 0x118);
  iVar1 = *(int *)(iVar4 + 0x118);
  *(float *)(*(int *)(iVar13 + 0x118) + 0xd8) = *(float *)(iVar6 + 0xd8) + fVar16 * param_1;
  fVar17 = *(float *)(iVar6 + 0xfc);
  fVar16 = (float)FUN_0015bec0(*(undefined4 *)(iVar1 + 0xfc),fVar17);
  fStack_118 = (float)DAT_002c2534;
  iVar13 = *(int *)(iVar13 + 0x118);
  iVar3 = *(int *)(iVar3 + 0x118);
  iVar4 = *(int *)(iVar4 + 0x118);
  uVar2 = *puVar14;
  *(float *)(iVar13 + 0xfc) = fVar17 + fVar16 * param_1;
  uStack_100 = 0;
  fVar16 = *(float *)(iVar3 + 200);
  uStack_dc = 0;
  *(float *)(iVar13 + 200) = fVar16 + (*(float *)(iVar4 + 200) - fVar16) * param_1;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_114 = 0x42c80000;
  uStack_110 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_128 = 0;
  uStack_c8 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  FUN_00160d98(uVar7,puVar14 + 0x11d,puVar15,uVar2);
  FUN_00163f68(iStack_bc,puVar14 + 0x11d,puVar15,*puVar14,puVar14 + 3,puVar14[0x3e4],0);
  uStack_130 = puVar14[0x11d];
  uStack_100 = puVar14[0x129];
  uStack_12c = puVar14[0x11e];
  uStack_10c = puVar14[0x126];
  uStack_fc = puVar14[0x12a];
  uStack_128 = puVar14[0x11f];
  uStack_f8 = puVar14[299];
  uStack_124 = puVar14[0x120];
  uStack_f4 = puVar14[300];
  uStack_120 = puVar14[0x121];
  uStack_f0 = puVar14[0x12d];
  uStack_11c = puVar14[0x122];
  fStack_118 = (float)puVar14[0x123];
  uStack_114 = puVar14[0x124];
  uStack_110 = puVar14[0x125];
  uStack_108 = puVar14[0x127];
  uStack_104 = puVar14[0x128];
  uStack_ec = puVar14[0x12e];
  uStack_dc = puVar14[0x132];
  uStack_e8 = puVar14[0x12f];
  uStack_e4 = puVar14[0x130];
  uStack_e0 = puVar14[0x131];
  uVar7 = FUN_00160580(auStack_150);
  FUN_00163f68(uVar7,&uStack_130,puVar15,*puVar14,puVar14 + 3,puVar14[0x3e4],0);
  fVar16 = (float)FUN_0015bec0(uStack_124,puVar14[0x120]);
  puVar14[0x120] = (float)puVar14[0x120] + fVar16 * param_1;
  fVar16 = (float)FUN_0015bec0(uStack_120,puVar14[0x121]);
  puVar14[0x121] = (float)puVar14[0x121] + fVar16 * param_1;
  fVar16 = (float)FUN_0015bec0(uStack_11c,puVar14[0x122]);
  puVar14[0x122] = (float)puVar14[0x122] + fVar16 * param_1;
  puVar14[0x123] = (float)puVar14[0x123] + (fStack_118 - (float)puVar14[0x123]) * param_1;
  FUN_0015bf40(param_2);
  FUN_0015c990(param_2,auStack_160);
  FUN_0015f350(auStack_140,2);
  FUN_0015f350(auStack_150,2);
  FUN_0015f350(auStack_160,2);
  return;
}

