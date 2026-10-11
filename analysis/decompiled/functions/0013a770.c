/* Ghidra pseudocode. PS2 address: 0013a770. Not validated source. */

void FUN_0013a770(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x158) = DAT_002c1dc8;
  if (((*(float *)(iVar1 + 0x1d0) < 0.5) && (*(float *)(param_1 + 8) < DAT_002c1dcc)) &&
     (fVar2 = ((*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc)) * DAT_002c1dd0 *
              (1.0 - *(float *)(iVar1 + 0x1c8))) / (*(float *)(param_1 + 8) + 1.0),
     *(float *)(iVar1 + 0x158) = fVar2, fVar2 < 0.0)) {
    *(undefined4 *)(iVar1 + 0x158) = 0;
  }
  return;
}

