/* Ghidra pseudocode. PS2 address: 0019d348. Not validated source. */

void FUN_0019d348(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_00187ce8(DAT_002859e4);
  if (lVar2 != 0) {
    return;
  }
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 100) == 0) {
    iVar1 = *(int *)(iVar4 + 0x10);
  }
  else {
    FUN_0019d2d0(param_1);
    iVar1 = *(int *)(iVar4 + 0x10);
  }
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(iVar4 + 0x18) < 0) {
    iVar1 = *(int *)(iVar4 + 0xc);
  }
  else {
    if (0 < *(int *)(iVar4 + 0x1c)) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + -1;
    }
    iVar1 = *(int *)(iVar4 + 0xc);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar4 + 0x38);
    goto LAB_0019d4d0;
  }
  iVar1 = *(int *)(iVar4 + 0x14);
  if ((float)iVar1 <= 0.0) {
    fVar5 = *(float *)(iVar4 + 0x20);
    fVar6 = *(float *)(iVar4 + 0x24) + fVar5;
    *(float *)(iVar4 + 0x24) = fVar6;
    if (0.0 <= fVar5) {
      fVar7 = *(float *)(iVar4 + 0x2c);
      if (fVar7 <= fVar6) {
        sVar3 = *(short *)(iVar4 + 8);
        if (*(short *)(iVar4 + 8) == 2) {
          fVar7 = fVar7 - (fVar6 - fVar7);
          goto LAB_0019d470;
        }
        if (*(short *)(iVar4 + 8) == 1) {
          *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x28) + (fVar6 - fVar7);
        }
        else {
          *(float *)(iVar4 + 0x24) = fVar7;
        }
        goto LAB_0019d498;
      }
    }
    else {
      fVar7 = *(float *)(iVar4 + 0x28);
      if (fVar6 <= fVar7) {
        sVar3 = *(short *)(iVar4 + 8);
        if (*(short *)(iVar4 + 8) == 2) {
          fVar7 = fVar7 + (fVar7 - fVar6);
LAB_0019d470:
          *(float *)(iVar4 + 0x20) = -fVar5;
          *(float *)(iVar4 + 0x24) = fVar7;
        }
        else if (*(short *)(iVar4 + 8) == 1) {
          *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x2c) - (fVar7 - fVar6);
        }
        else {
          *(float *)(iVar4 + 0x24) = fVar7;
        }
LAB_0019d498:
        if (sVar3 == 0) {
          *(undefined4 *)(iVar4 + 0x10) = 1;
        }
      }
    }
  }
  if (0.0 < (float)iVar1) {
    *(int *)(iVar4 + 0x14) = iVar1 + -1;
  }
  iVar1 = *(int *)(iVar4 + 0x38);
LAB_0019d4d0:
  (**(code **)(iVar1 + 0xec))(iVar4 + *(short *)(iVar1 + 0xe8));
  if (*(int *)(iVar4 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar4 + 0x38) + 0xb4))
              (iVar4 + 0x30 + (int)*(short *)(*(int *)(iVar4 + 0x38) + 0xb0),1);
  }
  return;
}

