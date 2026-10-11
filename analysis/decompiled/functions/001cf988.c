/* Ghidra pseudocode. PS2 address: 001cf988. Not validated source. */

void FUN_001cf988(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((DAT_002859e4 == 0) || (iVar1 = *(int *)(DAT_002859e4 + 0x24), iVar1 == 0)) ||
     (*(int *)(iVar1 + 0x68) == 0)) {
    param_1[8] = 0;
    param_1[6] = 1;
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
  }
  else {
    iVar2 = *(int *)(DAT_002859e4 + 0x298);
    *param_1 = 0;
    fVar3 = DAT_002c3634;
    fVar4 = DAT_002c3630;
    if (iVar2 == 1) {
      uVar5 = *(undefined4 *)(iVar1 + 0x6c);
      param_1[1] = *(undefined4 *)(iVar1 + 0x70);
      fVar3 = (float)FUN_00252420(uVar5);
      param_1[2] = (int)(-((fVar3 / fVar4) * (float)(1 << (param_1[1] & 0x1f))) * 16.0);
      param_1[3] = 0;
      uVar5 = *(undefined4 *)(iVar1 + 0x6c);
      param_1[4] = *(undefined4 *)(iVar1 + 0x70);
      fVar3 = (float)FUN_00252420(uVar5);
      param_1[5] = (int)(-((fVar3 / fVar4) * (float)(1 << (param_1[1] & 0x1f))) * 16.0);
      param_1[6] = 0;
      uVar6 = *(undefined4 *)(iVar1 + 0x6c);
      uVar5 = *(undefined4 *)(iVar1 + 0x70);
      fVar3 = fVar4;
    }
    else {
      uVar5 = *(undefined4 *)(iVar1 + 0x74);
      param_1[1] = *(undefined4 *)(iVar1 + 0x78);
      fVar4 = (float)FUN_00252420(uVar5);
      param_1[2] = (int)(-((fVar4 / fVar3) * (float)(1 << (param_1[1] & 0x1f))) * 16.0);
      param_1[3] = 0;
      uVar5 = *(undefined4 *)(iVar1 + 0x74);
      param_1[4] = *(undefined4 *)(iVar1 + 0x78);
      fVar4 = (float)FUN_00252420(uVar5);
      param_1[5] = (int)(-((fVar4 / fVar3) * (float)(1 << (param_1[1] & 0x1f))) * 16.0);
      param_1[6] = 0;
      uVar6 = *(undefined4 *)(iVar1 + 0x74);
      uVar5 = *(undefined4 *)(iVar1 + 0x78);
    }
    param_1[7] = uVar5;
    fVar4 = (float)FUN_00252420(uVar6);
    param_1[8] = (int)(-((fVar4 / fVar3) * (float)(1 << (param_1[7] & 0x1f))) * 16.0);
  }
  return;
}

