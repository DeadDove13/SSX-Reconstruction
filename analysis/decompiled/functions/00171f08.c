/* Ghidra pseudocode. PS2 address: 00171f08. Not validated source. */

void FUN_00171f08(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  uVar9 = 0x40800000;
  FUN_0016f8f8();
  lVar3 = FUN_00165a30(0,uVar9,0);
  if (lVar3 != 0) {
    FUN_00165a98(&uStack_80,(uint)&uStack_80 | 4);
    uVar7 = 0;
    FUN_00165ac0(0,uVar9);
    iVar5 = (int)param_1;
    fVar8 = *(float *)(iVar5 + 0xc);
    uVar4 = FUN_0016f348(param_1,*(undefined4 *)(*(int *)(iVar5 + 0xb3c) + 0x46c));
    iVar2 = FUN_00171770(param_1,uVar4);
    piVar6 = &DAT_00280fe0;
    do {
      iVar1 = piVar6[1];
      lVar3 = FUN_0016eb38(param_1,iVar1);
      if (lVar3 != 0) {
        FUN_0016e100(param_1,iVar1);
        if (iVar2 == *piVar6) {
          FUN_0016e340(*(undefined4 *)(iVar5 + 0xc),param_1,iVar1);
        }
        FUN_0016f770((fVar8 - 1.0) * 0.5 * 5.5 + 0.5,param_1,iVar1);
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 2;
    } while (uVar7 < 8);
    FUN_00165ab0(uStack_80,uStack_7c);
  }
  return;
}

