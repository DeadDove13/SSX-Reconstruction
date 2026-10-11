/* Ghidra pseudocode. PS2 address: 001ea570. Not validated source. */

void FUN_001ea570(float param_1,undefined2 *param_2,undefined2 *param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint uVar15;
  undefined2 auStack_f0 [8];
  undefined2 auStack_e0 [8];
  undefined2 auStack_d0 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uStack_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  uStack_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  uVar15 = (uint)(param_1 * 32768.0);
  uStack_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  uStack_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  uStack_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((int)uVar15 < 0) {
    uVar15 = 0;
  }
  else if (0x7fff < (int)uVar15) {
    uVar15 = 0x7fff;
  }
  iVar5 = 0;
  iVar14 = param_4;
  if (0 < param_4) {
    do {
      if (iVar14 < 2) {
        puVar7 = param_2;
        if (0 < iVar14) {
          do {
            param_2 = puVar7 + 3;
            FUN_001e9d98(puVar7,param_3,uVar15 & 0xffff);
            iVar14 = iVar14 + -1;
            param_3 = param_3 + 3;
            puVar7 = param_2;
          } while (iVar14 != 0);
        }
      }
      else {
        if (8 < iVar14) {
          iVar14 = 8;
        }
        puVar6 = auStack_e0;
        puVar8 = auStack_d0;
        iVar11 = iVar14;
        puVar7 = auStack_f0;
        puVar9 = param_2;
        puVar10 = param_3;
        puVar12 = puVar6;
        puVar13 = puVar8;
        if (0 < iVar14) {
          do {
            iVar11 = iVar11 + -1;
            uVar1 = puVar9[1];
            *puVar7 = *puVar9;
            uVar2 = puVar9[2];
            *puVar12 = uVar1;
            uVar1 = puVar10[1];
            uVar3 = *puVar10;
            uVar4 = puVar10[2];
            *puVar13 = uVar2;
            puVar7[0x18] = uVar3;
            puVar7[0x20] = uVar1;
            puVar7[0x28] = uVar4;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 3;
            puVar10 = puVar10 + 3;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          } while (iVar11 != 0);
        }
        FUN_001ea128(auStack_f0,puVar6,puVar8,uStack_c0,uStack_b0,uStack_a0,uVar15 & 0xffff);
        puVar7 = auStack_f0;
        if (0 < iVar14) {
          do {
            param_3 = param_3 + 3;
            uVar1 = *puVar6;
            uVar2 = *puVar8;
            puVar6 = puVar6 + 1;
            *param_2 = *puVar7;
            puVar8 = puVar8 + 1;
            param_2[1] = uVar1;
            iVar14 = iVar14 + -1;
            param_2[2] = uVar2;
            param_2 = param_2 + 3;
            puVar7 = puVar7 + 1;
          } while (iVar14 != 0);
        }
      }
      iVar5 = iVar5 + 8;
      iVar14 = param_4 - iVar5;
    } while (iVar5 < param_4);
  }
  return;
}

