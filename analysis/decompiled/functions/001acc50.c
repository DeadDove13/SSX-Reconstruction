/* Ghidra pseudocode. PS2 address: 001acc50. Not validated source. */

bool FUN_001acc50(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar6 = DAT_0027ba88;
  iVar9 = (int)param_1;
  iVar10 = iVar9 + 0x180;
  uVar1 = FUN_00234e80(DAT_002852fc,0x1d2);
  uVar2 = FUN_00234e80(DAT_002852fc,0x1d3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x1d4);
  uVar4 = FUN_00234e80(DAT_002852fc,0x1d5);
  uVar5 = FUN_00234e80(DAT_002852fc,0x1d6);
  *(undefined4 *)(iVar9 + 0x28c) = uVar1;
  *(undefined4 *)(iVar9 + 0x19c) = 1;
  *(undefined4 *)(iVar9 + 0x1b0) = uVar2;
  iVar8 = 1;
  *(undefined4 *)(iVar9 + 0x1ac) = 0;
  *(undefined4 *)(iVar9 + 0x1a0) = 0;
  *(undefined4 *)(iVar9 + 0x1a8) = 0;
  *(undefined4 *)(iVar9 + 0x1a4) = 0;
  if (1 < iVar6 - 4U) {
    *(undefined4 *)(iVar9 + 0x1b4) = 3;
    iVar8 = 2;
    *(undefined4 *)(iVar9 + 0x1c8) = uVar3;
    *(undefined4 *)(iVar9 + 0x1c4) = 0;
    *(undefined4 *)(iVar9 + 0x1b8) = 0;
    *(undefined4 *)(iVar9 + 0x1c0) = 0;
    *(undefined4 *)(iVar9 + 0x1bc) = 0;
  }
  iVar6 = iVar8 * 0x18 + iVar10;
  iVar7 = (iVar8 + 1) * 0x18 + iVar10;
  *(undefined4 *)(iVar6 + 0x1c) = 5;
  *(undefined4 *)(iVar6 + 0x28) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  *(undefined4 *)(iVar6 + 0x30) = uVar4;
  *(undefined4 *)(iVar6 + 0x2c) = 0;
  *(undefined4 *)(iVar7 + 0x1c) = 4;
  *(undefined4 *)(iVar6 + 0x20) = 0;
  *(undefined4 *)(iVar7 + 0x28) = 0;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined4 *)(iVar7 + 0x30) = uVar5;
  *(undefined4 *)(iVar7 + 0x2c) = 0;
  *(int *)(iVar9 + 0x198) = iVar8 + 2;
  *(undefined4 *)(iVar7 + 0x20) = 0;
  *(undefined8 *)(iVar9 + 0x290) = DAT_002c5168;
  *(undefined8 *)(iVar9 + 0x298) = DAT_002c5170;
  FUN_001ac838(param_1,iVar10);
  return *(int *)(iVar9 + 0x198) < 0xb;
}

