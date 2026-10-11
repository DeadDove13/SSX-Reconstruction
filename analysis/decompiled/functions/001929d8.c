/* Ghidra pseudocode. PS2 address: 001929d8. Not validated source. */

void FUN_001929d8(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 auStack_120 [4];
  undefined4 auStack_110 [4];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  iStack_160 = *param_2;
  iStack_15c = param_2[1];
  iStack_158 = param_2[2];
  iStack_154 = param_2[3];
  iVar9 = (int)param_1;
  lVar7 = FUN_0018e708(*(undefined4 *)(iVar9 + 4));
  if (param_1 == lVar7) {
    puVar5 = (undefined8 *)&DAT_002cc230;
  }
  else {
    puVar5 = (undefined8 *)&DAT_002cc240;
  }
  uStack_150 = *(undefined4 *)puVar5;
  uStack_14c = *(undefined4 *)((int)puVar5 + 4);
  uStack_140 = *puVar5;
  uStack_148 = *(undefined4 *)(puVar5 + 1);
  uStack_138 = uStack_148;
  FUN_001915b0(&iStack_160,&uStack_140,1);
  iVar1 = *param_2;
  iVar2 = param_2[2];
  iVar10 = iVar1 + iVar2 + -0xc0;
  lVar7 = FUN_0018e708(*(undefined4 *)(iVar9 + 4));
  if (param_1 == lVar7) {
    piVar8 = &DAT_002cc200;
  }
  else {
    piVar8 = &DAT_002cc210;
  }
  iStack_160 = *piVar8;
  iStack_15c = piVar8[1];
  iStack_158 = piVar8[2];
  FUN_00168720(0x28ad30,&iStack_160);
  FUN_001a0fc0(*(undefined4 *)(*(int *)(*(int *)(iVar9 + 4) + 0x110) + 0x38),*param_2 + 10,
               param_2[1] + 1,(&PTR_DAT_002b4b38)[*(int *)(iVar9 + 0x14)]);
  FUN_0023e498(&uStack_150,0x2c4f40,
               (int)(*(float *)(*(int *)(iVar9 + 0x10) + *(int *)(iVar9 + 0x14) * 4) * DAT_002c2a34)
              );
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar9 + 4) + 0x110) + 0x38);
  fVar11 = 7.0;
  iVar6 = FUN_001a0840(0x3f800000,uVar3,&uStack_150,0);
  fVar13 = 2.0;
  FUN_001a0fc0(uVar3,(iVar1 + iVar2 + -0xd4) - iVar6,param_2[1] + 1,&uStack_150);
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  FUN_0011ed48(0x295e90,0);
  puVar4 = *(undefined4 **)(iVar9 + 0x10);
  auStack_120[0] = *puVar4;
  iVar1 = *(int *)(iVar9 + 0x14);
  auStack_120[1] = puVar4[1];
  iStack_12c = param_2[1] + param_2[3] + -0xd;
  uStack_124 = 0xb;
  auStack_120[2] = puVar4[2];
  iStack_128 = 0xb6;
  auStack_110[0] = *puVar4;
  auStack_110[1] = puVar4[1];
  auStack_110[2] = puVar4[2];
  auStack_120[iVar1] = 0;
  auStack_110[iVar1] = 0x3f800000;
  uStack_f0 = 0x3f800000;
  uStack_fc = auStack_120[0];
  uStack_f8 = auStack_120[1];
  uStack_100 = 0x3f800000;
  uStack_f4 = auStack_120[2];
  uStack_ec = auStack_110[0];
  uStack_e8 = auStack_110[1];
  uStack_e4 = auStack_110[2];
  uStack_e0 = CONCAT44(auStack_120[0],0x3f800000);
  uStack_d8 = CONCAT44(auStack_120[2],auStack_120[1]);
  uStack_d0 = CONCAT44(auStack_110[0],0x3f800000);
  uStack_c8 = CONCAT44(auStack_110[2],auStack_110[1]);
  uStack_c0 = CONCAT44(auStack_110[0],0x3f800000);
  uStack_b8 = CONCAT44(auStack_110[2],auStack_110[1]);
  uStack_b0 = CONCAT44(auStack_120[0],0x3f800000);
  uStack_a8 = CONCAT44(auStack_120[2],auStack_120[1]);
  iStack_130 = iVar10;
  FUN_0019f868((float)iVar10,(float)iStack_12c,0x43360000,0x41300000,0x28ad30,&uStack_e0,&uStack_d0,
               &uStack_c0,&uStack_b0);
  fVar12 = (float)(int)((float)iStack_130 +
                       (float)iStack_128 *
                       *(float *)(*(int *)(iVar9 + 0x10) + *(int *)(iVar9 + 0x14) * 4));
  FUN_0019fe18(fVar12,(float)iStack_12c - fVar13,fVar12 - 5.0,(float)iStack_12c - fVar11,0x28ad30);
  FUN_0019fe18(fVar12,(float)iStack_12c - fVar13,fVar12 + 5.0,(float)iStack_12c - fVar11,0x28ad30);
  return;
}

