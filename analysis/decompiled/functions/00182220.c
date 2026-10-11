/* Ghidra pseudocode. PS2 address: 00182220. Not validated source. */

void FUN_00182220(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = param_1 + 6;
  param_1[5] = 0;
  lVar5 = FUN_0023a448(0x2b3200,0x1c0,0x40);
  if (lVar5 != 0) {
    FUN_0023bbd0(lVar5,0xffffffffdeadc0de,0x1c0);
  }
  uVar2 = FUN_00182a48(lVar5,0,0,1,1);
  iVar4 = param_1[5];
  param_1[6] = uVar2;
  param_1[5] = iVar4 + 1;
  lVar5 = FUN_0023a448(0x2b3210,0x1c0,0x40);
  if (lVar5 != 0) {
    FUN_0023bbd0(lVar5,0xffffffffdeadc0de,0x1c0);
  }
  iVar3 = FUN_00182a48(lVar5,1,0,1,1);
  iVar7 = 0;
  iVar1 = param_1[5];
  piVar6[iVar4 + 1] = iVar3;
  param_1[2] = 8;
  param_1[5] = iVar1 + 1;
  param_1[1] = 0;
  if (0 < iVar1 + 1) {
    do {
      iVar4 = *piVar6;
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      iVar1 = *(int *)(iVar4 + 0x34);
      iVar4 = (**(code **)(iVar1 + 0x3c))(iVar4 + *(short *)(iVar1 + 0x38));
      param_1[1] = param_1[1] + iVar4;
    } while (iVar7 < (int)param_1[5]);
  }
  iVar4 = param_1[1];
  iVar1 = param_1[2];
  lVar5 = FUN_0023a448(0x2b3220,iVar4 * iVar1,0);
  if (lVar5 != 0) {
    FUN_0023bbd0(lVar5,0xffffffffdeadc0ed,iVar4 * iVar1);
  }
  *param_1 = (int)lVar5;
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}

