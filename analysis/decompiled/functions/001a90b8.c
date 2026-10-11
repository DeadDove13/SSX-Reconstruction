/* Ghidra pseudocode. PS2 address: 001a90b8. Not validated source. */

void FUN_001a90b8(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 undefined8 param_6,ulong param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = FUN_001a8df8();
  FUN_0011ecd8(0x295e90,*(undefined4 *)(iVar3 + 4),1);
  param_3 = *(float *)(iVar3 + 8) * param_3;
  param_4 = *(float *)(iVar3 + 0xc) * param_4;
  uVar5 = *(undefined4 *)(iVar3 + 0x14);
  uVar8 = *(undefined4 *)(iVar3 + 0x18);
  if ((param_7 & 1) != 0) {
    uVar8 = *(undefined4 *)(iVar3 + 0x14);
    uVar5 = *(undefined4 *)(iVar3 + 0x18);
  }
  uVar6 = *(undefined4 *)(iVar3 + 0x10);
  uVar7 = *(undefined4 *)(iVar3 + 0x1c);
  if ((param_7 & 2) != 0) {
    uVar7 = *(undefined4 *)(iVar3 + 0x10);
    uVar6 = *(undefined4 *)(iVar3 + 0x1c);
  }
  uVar4 = param_7 & 0x10;
  if ((param_7 & 4) != 0) {
    if (uVar4 == 0) {
      param_2 = param_2 - param_4;
    }
    else {
      param_2 = param_2 - param_3;
    }
  }
  if ((param_7 & 8) != 0) {
    if (uVar4 == 0) {
      param_1 = param_1 - param_3;
    }
    else {
      param_1 = param_1 - param_4;
    }
  }
  if ((param_7 & 0x20) != 0) {
    fVar1 = param_4;
    fVar2 = param_3;
    if (uVar4 != 0) {
      fVar1 = param_3;
      fVar2 = param_4;
    }
    param_2 = param_2 - fVar1 * 0.5;
    param_1 = param_1 - fVar2 * 0.5;
  }
  if (uVar4 == 0) {
    FUN_0019fb08(param_1,param_2,param_3,param_4,uVar6,uVar5,uVar8,uVar7,0x28ad30);
    return;
  }
  FUN_0019fc90(0x28ad30);
  return;
}

