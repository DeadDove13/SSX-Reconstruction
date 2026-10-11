/* Ghidra pseudocode. PS2 address: 002454a8. Not validated source. */

bool FUN_002454a8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  uVar3 = REG_VIF0_CYCLE;
  uVar7 = FUN_00245458();
  if (uVar7 < 2) {
    uVar1 = REG_VIF0_ROW0;
    *param_1 = uVar1;
    uVar1 = REG_VIF0_ROW1;
    param_1[1] = uVar1;
    uVar1 = REG_VIF0_ROW2;
    param_1[2] = uVar1;
    uVar1 = REG_VIF0_ROW3;
    param_1[3] = uVar1;
    uVar1 = REG_VIF0_COL0;
    param_1[4] = uVar1;
    uVar1 = REG_VIF0_COL1;
    param_1[5] = uVar1;
    uVar1 = REG_VIF0_COL2;
    param_1[6] = uVar1;
    uVar1 = REG_VIF0_COL3;
    param_1[7] = uVar1;
    uVar1 = REG_VIF0_MASK;
    param_1[8] = uVar1;
    uVar1 = REG_VIF0_CODE;
    param_1[9] = uVar1;
    uVar1 = REG_VIF0_STAT;
    param_1[10] = uVar1;
    uVar6 = REG_VIF0_ITOP;
    uVar5 = REG_VIF0_ITOPS;
    uVar2 = REG_VIF0_MARK;
    uVar4 = REG_VIF0_NUM;
    uVar1 = REG_VIF0_ERR;
    *(short *)((int)param_1 + 0x2e) = (short)uVar5;
    *(short *)(param_1 + 0xb) = (short)uVar6;
    *(short *)(param_1 + 0xc) = (short)uVar2;
    *(short *)((int)param_1 + 0x32) = (short)uVar4;
    *(char *)(param_1 + 0xd) = (char)uVar1;
    *(char *)((int)param_1 + 0x35) = (char)uVar3;
    *(char *)((int)param_1 + 0x36) = (char)((uint)uVar3 >> 8);
    uVar3 = REG_VIF0_MODE;
    *(char *)((int)param_1 + 0x37) = (char)uVar3;
  }
  return uVar7 < 2;
}

