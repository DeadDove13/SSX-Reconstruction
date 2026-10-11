/* Ghidra pseudocode. PS2 address: 001f5550. Not validated source. */

void FUN_001f5550(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_80 [8];
  undefined2 uStack_78;
  undefined2 uStack_76;
  
  iVar1 = (int)param_3;
  iVar3 = (int)param_2;
  if ((*(int *)(iVar1 + 0x329b8) == 0) || (*(int *)(iVar3 + 0x68) == 0)) {
    iVar1 = *(int *)(iVar3 + 100);
  }
  else {
    fVar4 = (float)(**(code **)(*(int *)(iVar1 + 0x32000) + 0x34))
                             (iVar1 + *(short *)(*(int *)(iVar1 + 0x32000) + 0x30),param_2,
                              auStack_80);
    fVar6 = SQRT(fVar4);
    lVar2 = FUN_001f54d8(fVar6,param_2,param_3);
    if (lVar2 == 0) {
      return;
    }
    if ((*(float *)(iVar3 + 0x5c) == -1.0) || (*(int *)(iVar1 + 0x329b4) == 0)) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = (float)FUN_001f5058(*(float *)(iVar3 + 0x5c) - fVar6,param_1,param_2);
    }
    FUN_001f5110(param_2,uStack_78,uStack_76);
    FUN_001f5140(param_2,(int)(fVar5 * 4096.0));
    if (*(float *)(iVar3 + 0x88) == 0.0) {
      iVar1 = FUN_001f5038(fVar4,0x42480000,param_2,*(undefined4 *)(iVar3 + 100));
    }
    else {
      iVar1 = FUN_001f5038(fVar4,param_2,*(undefined4 *)(iVar3 + 100));
    }
    if (0x7f < iVar1) {
      iVar1 = 0x7f;
    }
    *(float *)(iVar3 + 0x5c) = fVar6;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  if (*(int *)(iVar3 + 0x54) == 0) {
    if (*(float **)(iVar3 + 0x60) != (float *)0x0) {
      iVar1 = (int)((float)iVar1 * **(float **)(iVar3 + 0x60));
    }
    FUN_001f5188(param_2,iVar1);
  }
  return;
}

