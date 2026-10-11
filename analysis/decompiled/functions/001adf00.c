/* Ghidra pseudocode. PS2 address: 001adf00. Not validated source. */

void FUN_001adf00(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = FUN_001a3260(*(undefined4 *)(DAT_002859e4 + 0x30));
  iVar1 = DAT_002859e4;
  if (lVar3 == 0) {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x24) == 3) {
      fVar5 = *(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14) * DAT_002c3360;
      fVar4 = 1.0 - fVar5;
      iVar1 = -(int)fVar5;
      fVar5 = (float)iVar1;
      *(int *)(param_1 + 0x20) = iVar1 + 1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c) + -1;
      *(int *)(param_1 + 0x1c) = iVar2;
      if (iVar2 < 0) {
        FUN_001a32c8(*(undefined4 *)(iVar1 + 0x30),4,0xffffffffffffffff);
        return;
      }
      fVar4 = 1.0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      fVar5 = (float)iVar2 / 90.0;
    }
    *(float *)(param_1 + 0x24) = fVar4 - fVar5;
  }
  return;
}

