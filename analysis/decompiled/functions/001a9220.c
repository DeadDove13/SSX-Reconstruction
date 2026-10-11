/* Ghidra pseudocode. PS2 address: 001a9220. Not validated source. */

void FUN_001a9220(float param_1,float param_2,undefined8 param_3,int *param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = 0.0;
  uVar3 = param_5 & 0x10;
  if ((param_5 & 0x2c) != 0) {
    iVar1 = *param_4;
    fVar5 = 0.0;
    fVar7 = param_1;
    piVar2 = param_4;
    while (iVar1 != -1) {
      if (iVar1 == -2) {
        fVar6 = fVar6 + (float)piVar2[2] * 10.0;
        fVar4 = fVar5;
      }
      else {
        iVar1 = FUN_001a8df8(param_3,iVar1);
        fVar4 = ((float)piVar2[1] + *(float *)(iVar1 + 0xc)) * (float)piVar2[3];
        fVar6 = fVar6 + *(float *)(iVar1 + 8) * (float)piVar2[2];
        if (fVar4 <= fVar5) {
          fVar4 = fVar5;
        }
      }
      piVar2 = piVar2 + 4;
      fVar5 = fVar4;
      iVar1 = *piVar2;
    }
    if ((param_5 & 4) != 0) {
      if (uVar3 == 0) {
        param_2 = param_2 - fVar5;
      }
      else {
        param_2 = param_2 - fVar6;
      }
    }
    if ((param_5 & 8) != 0) {
      if (uVar3 == 0) {
        param_1 = fVar7 - fVar6;
      }
      else {
        param_1 = fVar7 - fVar5;
      }
    }
    if ((param_5 & 0x20) != 0) {
      fVar7 = fVar5;
      if (uVar3 != 0) {
        fVar7 = fVar6;
        fVar6 = fVar5;
      }
      param_2 = param_2 - fVar7 * 0.5;
      param_1 = param_1 - fVar6 * 0.5;
    }
  }
  iVar1 = *param_4;
  do {
    if (iVar1 == -1) {
      return;
    }
    if (iVar1 == -2) {
      if (uVar3 == 0) {
        fVar6 = (float)param_4[2] * 10.0;
        goto LAB_001a9430;
      }
      param_2 = param_2 + (float)param_4[2] * 10.0;
    }
    else {
      FUN_001a90b8(param_1,param_2 + (float)param_4[1] * (float)param_4[3],param_4[2],param_4[3],
                   param_3,iVar1,uVar3);
      iVar1 = FUN_001a8df8(param_3,iVar1);
      if (uVar3 == 0) {
        fVar6 = *(float *)(iVar1 + 8) * (float)param_4[2];
LAB_001a9430:
        param_1 = param_1 + fVar6;
      }
      else {
        param_2 = param_2 + *(float *)(iVar1 + 8) * (float)param_4[2];
      }
    }
    param_4 = param_4 + 4;
    iVar1 = *param_4;
  } while( true );
}

