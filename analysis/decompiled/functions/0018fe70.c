/* Ghidra pseudocode. PS2 address: 0018fe70. Not validated source. */

long FUN_0018fe70(undefined8 param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_0018dc18();
  lVar3 = FUN_0018dd28(param_1);
  if ((lVar3 == 0) && (lVar2 == 0)) {
    lVar3 = FUN_0018dda0(param_1,8);
    iVar4 = (int)param_1;
    if (lVar3 == 0) {
      lVar3 = FUN_0018dda0(param_1,4);
      fVar7 = 0.0;
      fVar5 = *(float *)(iVar4 + 0x2c);
      if (lVar3 != 0) {
        fVar7 = 1.0;
      }
    }
    else {
      fVar7 = -1.0;
      fVar5 = *(float *)(iVar4 + 0x2c);
    }
    if (fVar7 == fVar5) {
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + 1.0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(float *)(iVar4 + 0x2c) = fVar7;
    }
    if (fVar7 != 0.0) {
      fVar6 = ((((*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) * 50.0) / 60.0) * 50.0) / 60.0
              ) / 200.0;
      fVar5 = DAT_002c2a10;
      if (1.0 <= fVar6) {
        fVar5 = fVar6 * DAT_002c2a10;
      }
      pfVar1 = *(float **)(iVar4 + 0x14);
      fVar7 = *pfVar1 + fVar7 * (*(float *)(iVar4 + 0x1c) - *(float *)(iVar4 + 0x18)) * fVar5;
      *pfVar1 = fVar7;
      if (fVar7 < *(float *)(iVar4 + 0x18)) {
        *pfVar1 = *(float *)(iVar4 + 0x18);
      }
      if (*(float *)(iVar4 + 0x1c) < *pfVar1) {
        *pfVar1 = *(float *)(iVar4 + 0x1c);
      }
      if (*(float **)(iVar4 + 0x30) == (float *)0x0) {
        iVar4 = *(int *)(iVar4 + 4);
      }
      else {
        **(float **)(iVar4 + 0x30) = *pfVar1;
        iVar4 = *(int *)(iVar4 + 4);
      }
      (**(code **)(*(int *)(iVar4 + 0x114) + 0x24))
                (iVar4 + *(short *)(*(int *)(iVar4 + 0x114) + 0x20),param_1);
    }
  }
  return lVar2;
}

