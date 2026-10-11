/* Ghidra pseudocode. PS2 address: 0019e688. Not validated source. */

void FUN_0019e688(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  
  lVar2 = FUN_00187ce8(DAT_002859e4);
  if (lVar2 == 0) {
    iVar3 = (int)param_1;
    if (*(int *)(iVar3 + 0x18) < 0) {
      iVar1 = *(int *)(iVar3 + 0x10);
    }
    else {
      if (0 < *(int *)(iVar3 + 0x1c)) {
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + -1;
      }
      iVar1 = *(int *)(iVar3 + 0x10);
    }
    if (iVar1 == 0) {
      fVar4 = *(float *)(iVar3 + 0x68);
      if (0.0 <= fVar4) {
        if ((0.0 < fVar4) &&
           (fVar4 = fVar4 - ABS(*(float *)(iVar3 + 0x20)), *(float *)(iVar3 + 0x68) = fVar4,
           fVar4 < 0.0)) {
          *(undefined4 *)(iVar3 + 0x68) = 0;
        }
        FUN_0019d348(param_1);
        if (0.0 < *(float *)(iVar3 + 0x68)) {
          *(undefined4 *)(iVar3 + 0xc) = 1;
        }
        else {
          *(undefined4 *)(iVar3 + 0xc) = 0;
        }
      }
      else if (0 < *(int *)(iVar3 + 0x14)) {
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
      }
    }
  }
  return;
}

