/* Ghidra pseudocode. PS2 address: 00162938. Not validated source. */

undefined8
FUN_00162938(undefined4 param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  FUN_00162648(&uStack_e0);
  uVar3 = uStack_d8;
  uVar2 = uStack_dc;
  uVar1 = uStack_e0;
  if (*(int *)(param_3 + 4) == 0) {
    fVar5 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0xc),*(undefined4 *)(param_5 + 0xc));
    fVar6 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0x10),*(undefined4 *)(param_5 + 0x10));
    fVar7 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_5 + 0x14));
    fVar17 = *(float *)(param_6 + 0x18) - *(float *)(param_5 + 0x18);
  }
  else {
    fVar5 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0xc),*(undefined4 *)(param_4 + 0xc));
    fVar5 = fVar5 * fStack_d0;
    fVar6 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0x10),*(undefined4 *)(param_4 + 0x10));
    fVar6 = fVar6 * fStack_d0;
    fVar7 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_4 + 0x14));
    fVar7 = fVar7 * fStack_d0;
    fVar17 = *(float *)(param_6 + 0x18) - *(float *)(param_4 + 0x18);
  }
  if (*(int *)(param_3 + 4) < *(int *)(*(int *)(param_3 + 0x24) + 300) + -2) {
    fVar8 = (float)FUN_0015bec0(*(undefined4 *)(param_7 + 0xc),*(undefined4 *)(param_5 + 0xc));
    fVar8 = fVar8 * fStack_cc;
    fVar9 = (float)FUN_0015bec0(*(undefined4 *)(param_7 + 0x10),*(undefined4 *)(param_5 + 0x10));
    fVar9 = fVar9 * fStack_cc;
    fVar10 = (float)FUN_0015bec0(*(undefined4 *)(param_7 + 0x14),*(undefined4 *)(param_5 + 0x14));
    fVar10 = fVar10 * fStack_cc;
    fVar16 = *(float *)(param_7 + 0x18) - *(float *)(param_5 + 0x18);
  }
  else {
    fVar8 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0xc),*(undefined4 *)(param_5 + 0xc));
    fVar9 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0x10),*(undefined4 *)(param_5 + 0x10));
    fVar10 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_5 + 0x14));
    fVar16 = *(float *)(param_6 + 0x18) - *(float *)(param_5 + 0x18);
  }
  fVar11 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0xc),*(undefined4 *)(param_5 + 0xc));
  uVar12 = FUN_001624f8(*(float *)(param_5 + 0xc),*(float *)(param_5 + 0xc) + fVar11,fVar5,fVar8,
                        param_1);
  fVar5 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0x10),*(undefined4 *)(param_5 + 0x10));
  uVar13 = FUN_001624f8(*(float *)(param_5 + 0x10),*(float *)(param_5 + 0x10) + fVar5,fVar6,fVar9,
                        param_1);
  fVar5 = (float)FUN_0015bec0(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_5 + 0x14));
  uVar14 = FUN_001624f8(*(float *)(param_5 + 0x14),*(float *)(param_5 + 0x14) + fVar5,fVar7,fVar10,
                        param_1);
  uVar15 = FUN_001624f8(*(undefined4 *)(param_5 + 0x18),*(undefined4 *)(param_6 + 0x18),fVar17,
                        fVar16,param_1);
  puVar4 = (undefined4 *)param_2;
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  puVar4[3] = uVar12;
  puVar4[4] = uVar13;
  puVar4[5] = uVar14;
  puVar4[7] = 0x42c80000;
  puVar4[8] = 0;
  puVar4[9] = uStack_11c;
  puVar4[6] = uVar15;
  puVar4[10] = uStack_118;
  puVar4[0xb] = uStack_114;
  puVar4[0xc] = 0;
  puVar4[0xd] = uStack_10c;
  puVar4[0xe] = uStack_108;
  puVar4[0xf] = uStack_104;
  puVar4[0x10] = uStack_100;
  puVar4[0x11] = uStack_fc;
  puVar4[0x12] = uStack_f8;
  puVar4[0x13] = uStack_f4;
  puVar4[0x14] = uStack_f0;
  puVar4[0x15] = 0;
  return param_2;
}

