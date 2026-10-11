/* Ghidra pseudocode. PS2 address: 001b2100. Not validated source. */

void FUN_001b2100(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char **ppcVar5;
  char *apcStack_b0 [4];
  
  ppcVar5 = apcStack_b0;
  DAT_0028b248 = 0x42dc0000;
  DAT_0028b24c = 0x43cd0000;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = FUN_00153f58(0x27a598,1,DAT_0027ba84);
  uVar4 = FUN_00234e80(DAT_002852fc,0x4f);
  FUN_0019a8a8(param_1 + 0x44,uVar4,*(undefined4 *)(iVar1 + 0x14));
  iVar2 = FUN_001a0a88(DAT_002c33a8,*(undefined4 *)(DAT_002859e4 + 0x5c),param_1 + 0x44,0);
  iVar1 = DAT_0027ba88;
  *(undefined4 *)(param_1 + 0x1d0) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x1cc) = 1;
  *(float *)(param_1 + 0x104) = 320.0 - (float)iVar2 * 0.5;
  if (iVar1 == 3) {
    uVar4 = FUN_00234e80(DAT_002852fc,0x5c);
    FUN_0019a7f8(0x28f670,uVar4);
    if (DAT_0027b810 != 1) {
      uVar3 = FUN_00234e80(DAT_002852fc,0x53);
      *(undefined4 *)(param_1 + 0x108) = uVar3;
      *(undefined4 *)(param_1 + 0x1d0) = 0x433e0000;
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      goto LAB_001b2294;
    }
    uVar3 = 0x54;
  }
  else {
    uVar4 = FUN_00234e80(DAT_002852fc,0x5b);
    FUN_0019a7f8(0x28f670,uVar4);
    uVar3 = 0x58;
  }
  uVar3 = FUN_00234e80(DAT_002852fc,uVar3);
  *(undefined4 *)(param_1 + 0x108) = uVar3;
LAB_001b2294:
  iVar1 = DAT_0027ba84;
  uVar4 = FUN_00234e80(DAT_002852fc,0x59);
  if (iVar1 == 0) {
    apcStack_b0[0] = s_100000_002c51a0;
    apcStack_b0[1] = s_50000_002c51a8;
    apcStack_b0[2] = s_10000_002c51b0;
  }
  if (iVar1 == 5) {
    apcStack_b0[0] = s_150000_002c51b8;
    apcStack_b0[1] = s_100000_002c51a0;
    apcStack_b0[2] = s_50000_002c51a8;
  }
  if (iVar1 == 8) {
    apcStack_b0[0] = s_90000_002c51c0;
    apcStack_b0[1] = s_60000_002c51c8;
    apcStack_b0[2] = s_40000_002c51d0;
  }
  if (iVar1 == 1) {
    apcStack_b0[0] = s_90000_002c51c0;
    apcStack_b0[1] = s_60000_002c51c8;
    apcStack_b0[2] = s_30000_002c51d8;
  }
  if (iVar1 == 4) {
    apcStack_b0[0] = s_120000_002c51e0;
    apcStack_b0[1] = s_80000_002c51e8;
    apcStack_b0[2] = s_50000_002c51a8;
  }
  param_1 = param_1 + 0x10c;
  if (iVar1 == 3) {
    apcStack_b0[0] = s_150000_002c51b8;
    apcStack_b0[1] = s_100000_002c51a0;
    apcStack_b0[2] = s_75000_002c51f0;
  }
  iVar1 = 2;
  do {
    uVar3 = *ppcVar5;
    ppcVar5 = ppcVar5 + 1;
    FUN_0019a8a8(param_1,uVar4,uVar3);
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 0x40;
  } while (-1 < iVar1);
  return;
}

