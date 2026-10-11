/* Ghidra pseudocode. PS2 address: 0021d2d0. Not validated source. */

void FUN_0021d2d0(float *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar4 = *(float *)((int)param_5 + 4) + *(float *)(param_5 + 1) + *(float *)((int)param_5 + 0xc);
  if (*param_1 < fVar4) {
    if (param_1[1] < fVar4) {
      *param_1 = param_1[1];
      *param_2 = param_2[2];
      param_2[1] = param_2[3];
      *param_3 = (int)*(undefined8 *)(param_3 + 4);
      param_3[1] = (int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
      param_3[2] = param_3[6];
      param_3[3] = param_3[7];
      if (param_1[2] < fVar4) {
        param_1[1] = param_1[2];
        param_2[2] = param_2[4];
        param_2[3] = param_2[5];
        param_3[4] = (int)*(undefined8 *)(param_3 + 8);
        param_3[5] = (int)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
        param_3[6] = param_3[10];
        param_3[7] = param_3[0xb];
        param_1[2] = fVar4;
        uVar3 = param_5[1];
        param_2[4] = *param_5;
        param_2[5] = uVar3;
        uVar3 = *param_4;
        uVar1 = *(undefined4 *)(param_4 + 1);
        uVar2 = *(undefined4 *)((int)param_4 + 0xc);
        param_3[8] = (int)uVar3;
        param_3[9] = (int)((ulong)uVar3 >> 0x20);
        param_3[10] = uVar1;
        param_3[0xb] = uVar2;
        return;
      }
      param_1[1] = fVar4;
      uVar3 = param_5[1];
      param_2[2] = *param_5;
      param_2[3] = uVar3;
      uVar3 = *param_4;
      uVar1 = *(undefined4 *)(param_4 + 1);
      uVar2 = *(undefined4 *)((int)param_4 + 0xc);
      param_3[4] = (int)uVar3;
      param_3[5] = (int)((ulong)uVar3 >> 0x20);
      param_3[6] = uVar1;
      param_3[7] = uVar2;
      return;
    }
    *param_1 = fVar4;
    uVar3 = param_5[1];
    *param_2 = *param_5;
    param_2[1] = uVar3;
    uVar3 = *param_4;
    uVar1 = *(undefined4 *)(param_4 + 1);
    uVar2 = *(undefined4 *)((int)param_4 + 0xc);
    *param_3 = (int)uVar3;
    param_3[1] = (int)((ulong)uVar3 >> 0x20);
    param_3[2] = uVar1;
    param_3[3] = uVar2;
  }
  return;
}

