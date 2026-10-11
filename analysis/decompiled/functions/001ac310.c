/* Ghidra pseudocode. PS2 address: 001ac310. Not validated source. */

void FUN_001ac310(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = *(int *)(param_1 + *(int *)(param_1 + 0x3f8) * 4 + 0x3f0);
  if (*(int *)(*(int *)(param_1 + 0x174) + 0xcc) != 0) {
    FUN_001aa010();
    return;
  }
  FUN_001a99c0();
  if (*(int *)(param_1 + 0x178) != 2) {
    FUN_0011ed18(0x295e90,0xc);
    sVar1 = *(short *)(iVar3 + 0x11a);
    if (sVar1 != 0) {
      if (sVar1 < 1) {
        pcVar5 = *(code **)(iVar3 + 0x11c);
        iVar3 = (int)*(short *)(iVar3 + 0x118);
      }
      else {
        uVar4 = *(undefined8 *)(sVar1 * 8 + *(int *)(param_1 + *(short *)(iVar3 + 0x11c)) + -8);
        pcVar5 = (code *)((ulong)uVar4 >> 0x20);
        iVar3 = (int)(short)uVar4 + (int)*(short *)(iVar3 + 0x118);
      }
      (*pcVar5)(param_1 + iVar3);
    }
    uVar4 = FUN_00234e80(DAT_002852fc,0x1c8);
    iVar3 = *(int *)(param_1 + 0x174);
    iVar2 = *(int *)(DAT_002859e4 + 0x5c);
    fVar6 = (float)*(int *)(iVar2 + 0xc);
    fVar8 = *(float *)(iVar3 + 0xc0);
    fVar7 = ((*(float *)(iVar3 + 0xbc) + *(float *)(iVar3 + 200)) - fVar6) - 5.0;
    FUN_0011ed18(0x295e90,0xe);
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    FUN_001a90b8(fVar8 + 28.0,fVar7 + fVar6 * DAT_002c3334,0x3f800000,0x3f800000,
                 *(undefined4 *)(param_1 + 0x174),0x57,0x20);
    FUN_001a1368(*(float *)(*(int *)(param_1 + 0x174) + 0xc0) + 45.0,fVar7,iVar2,uVar4);
    return;
  }
  FUN_001a9810(*(undefined4 *)(param_1 + 0x174));
  return;
}

