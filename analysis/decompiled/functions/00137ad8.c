/* Ghidra pseudocode. PS2 address: 00137ad8. Not validated source. */

void FUN_00137ad8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (-1 < *(int *)(param_1 + 0x40)) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  if (-1 < *(int *)(param_1 + 0x34)) {
    fVar4 = *(float *)(param_1 + 0x28) * DAT_002c1cd0;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fVar4;
  }
  fVar4 = DAT_002c1cd4;
  if (-1 < *(int *)(param_1 + 0x38)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fVar4;
  }
  if (0 < *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  fVar4 = DAT_002c1cd8;
  iVar1 = *(int *)(param_1 + 0xc);
  piVar2 = (int *)(param_1 + 0x100);
  iVar3 = 9;
  do {
    if (((*piVar2 != 0) && (0.0 < (float)piVar2[2])) &&
       (fVar5 = (float)piVar2[3], piVar2[3] = (int)(fVar5 + fVar4),
       (float)piVar2[2] <= fVar5 + fVar4)) {
      *piVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 4;
  } while (-1 < iVar3);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  return;
}

