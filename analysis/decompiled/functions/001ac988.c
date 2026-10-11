/* Ghidra pseudocode. PS2 address: 001ac988. Not validated source. */

void FUN_001ac988(int param_1,int param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = param_1 + 0x3f0;
  if (-1 < *(int *)(param_1 + 0x3f8)) {
    iVar3 = *(int *)(iVar6 + *(int *)(param_1 + 0x3f8) * 4);
    sVar1 = *(short *)(iVar3 + 0x132);
    if (sVar1 != 0) {
      if (sVar1 < 1) {
        pcVar4 = *(code **)(iVar3 + 0x134);
        iVar3 = (int)*(short *)(iVar3 + 0x130);
      }
      else {
        uVar5 = *(undefined8 *)(sVar1 * 8 + *(int *)(param_1 + *(short *)(iVar3 + 0x134)) + -8);
        pcVar4 = (code *)((ulong)uVar5 >> 0x20);
        iVar3 = (int)(short)uVar5 + (int)*(short *)(iVar3 + 0x130);
      }
      (*pcVar4)(param_1 + iVar3,0);
    }
  }
  iVar3 = *(int *)(param_1 + 0x3f8) + 1;
  *(int *)(param_1 + 0x3f8) = iVar3;
  *(int *)(iVar6 + iVar3 * 4) = param_1 + param_2 * 0x138 + 0x180;
  if (iVar3 == 0) {
    FUN_001fd358(DAT_002c56e8);
    FUN_001fd3c8(DAT_002c56e8);
  }
  iVar3 = *(int *)(param_1 + 0x174);
  puVar2 = *(undefined4 **)(iVar6 + *(int *)(param_1 + 0x3f8) * 4);
  puVar2[5] = 0;
  *(undefined4 *)(iVar3 + 0xbc) = puVar2[3];
  *(undefined4 *)(iVar3 + 0xc0) = puVar2[2];
  *(undefined4 *)(iVar3 + 0xc4) = *puVar2;
  *(undefined4 *)(iVar3 + 200) = puVar2[1];
  sVar1 = *(short *)((int)puVar2 + 0x12a);
  if (sVar1 != 0) {
    if (sVar1 < 1) {
      pcVar4 = (code *)puVar2[0x4b];
      iVar6 = (int)*(short *)(puVar2 + 0x4a);
    }
    else {
      uVar5 = *(undefined8 *)(sVar1 * 8 + *(int *)(param_1 + *(short *)(puVar2 + 0x4b)) + -8);
      pcVar4 = (code *)((ulong)uVar5 >> 0x20);
      iVar6 = (int)(short)uVar5 + (int)*(short *)(puVar2 + 0x4a);
    }
    (*pcVar4)(param_1 + iVar6);
  }
  return;
}

