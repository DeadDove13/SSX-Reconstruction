/* Ghidra pseudocode. PS2 address: 001b37d8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001b37d8(undefined8 param_1,long param_2)

{
  int iVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uStack_110;
  short sStack_108;
  short sStack_d0;
  short sStack_c8;
  short sStack_c0;
  short sStack_b8;
  char acStack_a0 [8];
  char acStack_98 [8];
  char acStack_90 [8];
  char acStack_88 [8];
  char acStack_80 [8];
  char cStack_78;
  char cStack_77;
  char cStack_76;
  
  piVar10 = (int *)param_1;
  if (param_2 != 0) {
    *piVar10 = (int)(piVar10 + 0x43);
    FUN_001a9700(piVar10 + 0x43);
  }
  FUN_001ab2f0(param_1,0);
  iVar1 = *piVar10;
  *(undefined8 **)(iVar1 + 0x18) = &DAT_002b5d88;
  puVar3 = &uStack_110;
  puVar4 = &DAT_002b5d88;
  if (param_2 == 0) {
    do {
      puVar9 = puVar4;
      puVar8 = puVar3;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      sStack_c0 = DAT_002b5dd8;
      sStack_c8 = DAT_002b5dd0;
      puVar3 = puVar8 + 4;
      puVar4 = puVar9 + 4;
    } while (puVar9 + 4 != (undefined8 *)&UNK_002b5de8);
    sVar2 = (short)param_1 - ((short)iVar1 + -0x10c);
    sStack_b8 = DAT_002b5de0 + sVar2;
    sStack_108 = DAT_002b5d90 + sVar2;
    sStack_d0 = DAT_002b5dc8 + sVar2;
    uVar5 = puVar9[5];
    puVar8[4] = _UNK_002b5de8;
    sStack_c8 = sStack_c8 + sVar2;
    puVar8[5] = uVar5;
    sStack_c0 = sStack_c0 + sVar2;
    *(undefined8 **)(iVar1 + 0x18) = &uStack_110;
  }
  acStack_a0[0] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0];
  acStack_a0[1] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[1];
  acStack_a0[2] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[2];
  acStack_a0[3] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[3];
  acStack_a0[4] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[4];
  acStack_a0[5] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[5];
  acStack_a0[6] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[6];
  acStack_a0[7] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[7];
  acStack_98[0] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[8];
  acStack_98[1] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[9];
  acStack_98[2] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[10];
  acStack_98[3] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0xb];
  acStack_98[4] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0xc];
  acStack_98[5] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0xd];
  acStack_98[6] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0xe];
  acStack_98[7] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0xf];
  acStack_90[0] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x10];
  acStack_90[1] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x11];
  acStack_90[2] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x12];
  acStack_90[3] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x13];
  acStack_90[4] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x14];
  acStack_90[5] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x15];
  acStack_90[6] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x16];
  acStack_90[7] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x17];
  acStack_88[0] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x18];
  acStack_88[1] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x19];
  acStack_88[2] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x1a];
  acStack_88[3] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x1b];
  acStack_88[4] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x1c];
  acStack_88[5] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x1d];
  acStack_88[6] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x1e];
  acStack_88[7] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x1f];
  acStack_80[0] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x20];
  acStack_80[1] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x21];
  acStack_80[2] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x22];
  acStack_80[3] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x23];
  acStack_80[4] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x24];
  acStack_80[5] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x25];
  acStack_80[6] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x26];
  acStack_80[7] = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x27];
  cStack_78 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x28];
  cStack_77 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x29];
  cStack_76 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZ123456_002b5870[0x2a];
  FUN_0023bbd0(0x28af30,0,0x2a);
  FUN_0025c0c8(0x28af30,acStack_a0,0x2a);
  DAT_002c5208 = FUN_00234e80(DAT_002852fc,0x4a);
  DAT_002c520c = FUN_00234e80(DAT_002852fc,0x4b);
  return param_1;
}

