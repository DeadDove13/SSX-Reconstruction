/* Ghidra pseudocode. PS2 address: 00179d30. Not validated source. */

undefined8 FUN_00179d30(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)param_1;
  puVar7[1] = 0;
  puVar7[2] = 1;
  puVar7[0x10] = &DAT_002b1448;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[6] = &DAT_002c4a28;
  puVar7[4] = param_3;
  puVar7[5] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xe] = 0;
  puVar7[0x1b] = &DAT_002b1028;
  puVar7[0x13] = 0;
  puVar7[0x14] = 1;
  puVar7[0x15] = 0;
  puVar7[0x16] = 1;
  puVar7[0x17] = 0;
  puVar7[0x18] = 1;
  puVar7[0x19] = 1;
  puVar7[0x1a] = 0;
  puVar7[0xb] = 0xf;
  puVar7[0x11] = param_2;
  puVar7[0x12] = s_NAME__002c4ad0;
  FUN_00177718(puVar7 + 0x12);
  puVar7[0x1f] = 0;
  puVar7[0x1b] = &DAT_002b0fb8;
  puVar7[0x1e] = &DAT_002c4a28;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x29] = &DAT_002b1028;
  puVar7[0x21] = 0;
  puVar7[0x22] = 1;
  puVar7[0x23] = 0;
  puVar7[0x24] = 1;
  puVar7[0x25] = 0;
  puVar7[0x26] = 1;
  puVar7[0x27] = 1;
  puVar7[0x28] = 0;
  puVar7[0x20] = "RANKING:";
  FUN_00177718(puVar7 + 0x20);
  puVar7[0x29] = &DAT_002b0fb8;
  puVar7[0x2d] = 0;
  puVar7[0x2c] = &DAT_002c4a28;
  puVar7[0x2a] = 0;
  puVar7[0x2b] = 0;
  puVar7[0x37] = &DAT_002b1028;
  puVar7[0x2f] = 0;
  puVar7[0x30] = 1;
  puVar7[0x31] = 0;
  puVar7[0x32] = 1;
  puVar7[0x33] = 0;
  puVar7[0x34] = 1;
  puVar7[0x35] = 1;
  puVar7[0x36] = 0;
  puVar7[0x2e] = "BLOODTYPE:";
  FUN_00177718(puVar7 + 0x2e);
  puVar7[0x37] = &DAT_002b0fb8;
  puVar7[0x3b] = 0;
  puVar7[0x3a] = &DAT_002c4a28;
  puVar7[0x38] = 0;
  puVar7[0x39] = 0;
  puVar7[0x45] = &DAT_002b1028;
  puVar7[0x3d] = 0;
  puVar7[0x3e] = 1;
  puVar7[0x3f] = 0;
  puVar7[0x40] = 1;
  puVar7[0x41] = 0;
  puVar7[0x42] = 1;
  puVar7[0x43] = 1;
  puVar7[0x44] = 0;
  puVar7[0x3c] = "RIDING STYLE:";
  FUN_00177718(puVar7 + 0x3c);
  puVar7[0x48] = &DAT_002c4a28;
  puVar7[0x45] = &DAT_002b0fb8;
  puVar7[0x49] = 0;
  puVar7[0x53] = &DAT_002b1028;
  puVar7[0x51] = 1;
  puVar7[0x46] = 0;
  puVar7[0x47] = 0;
  puVar7[0x4b] = 0;
  puVar7[0x4c] = 1;
  puVar7[0x4d] = 0;
  puVar7[0x4e] = 1;
  puVar7[0x4f] = 0;
  puVar7[0x50] = 1;
  puVar7[0x52] = 0;
  puVar7[0x4a] = "TRICK STATUS:";
  FUN_00177718(puVar7 + 0x4a);
  puVar7[0x53] = &DAT_002b0fb8;
  puVar7[0x56] = "Unfinished";
  puVar7[0x54] = 0;
  puVar7[0x55] = 0;
  puVar7[0x57] = 0;
  FUN_0017a0a0(param_1);
  puVar7[0x2b] = puVar7[0x11] + 0x400;
  FUN_00174c68(param_1,puVar7 + 0x12);
  FUN_00174c68(param_1,puVar7 + 0x20);
  FUN_00174c68(param_1,puVar7 + 0x2e);
  FUN_00174c68(param_1,puVar7 + 0x3c);
  FUN_00174c68(param_1,puVar7 + 0x4a);
  iVar1 = FUN_00154a38(0x27a598,*(undefined4 *)(param_3 + 0xba0));
  iVar5 = 0;
  uVar6 = 0;
  uVar2 = 1;
  do {
    iVar4 = (uVar2 ^ 1) * 4;
    uVar3 = uVar6 - 0x1e;
    if ((uVar2 ^ 1) == 0) {
      uVar3 = uVar6;
    }
    if (((*(int *)(iVar1 + 0xc + iVar4) >> (uVar3 & 0x1f) & 1U) != 0) ||
       ((*(int *)(iVar1 + 4 + iVar4) >> (uVar3 & 0x1f) & 1U) != 0)) {
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 + 1;
    uVar2 = (uint)((int)uVar6 < 0x1f);
  } while ((int)uVar6 < 0x32);
  FUN_0025b630(puVar7 + 0x58,0x2c4ad8,iVar5,0x32);
  return param_1;
}

