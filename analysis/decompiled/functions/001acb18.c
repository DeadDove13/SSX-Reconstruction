/* Ghidra pseudocode. PS2 address: 001acb18. Not validated source. */

void FUN_001acb18(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x3f0 + *(int *)(param_1 + 0x3f8) * 4);
  sVar1 = *(short *)(iVar3 + 0x132);
  if (sVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x3f8);
  }
  else {
    if (sVar1 < 1) {
      pcVar4 = *(code **)(iVar3 + 0x134);
      iVar3 = (int)*(short *)(iVar3 + 0x130);
    }
    else {
      uVar5 = *(undefined8 *)(sVar1 * 8 + *(int *)(param_1 + *(short *)(iVar3 + 0x134)) + -8);
      pcVar4 = (code *)((ulong)uVar5 >> 0x20);
      iVar3 = (int)(short)uVar5 + (int)*(short *)(iVar3 + 0x130);
    }
    (*pcVar4)(param_1 + iVar3,1);
    iVar3 = *(int *)(param_1 + 0x3f8);
  }
  *(int *)(param_1 + 0x3f8) = iVar3 + -1;
  if (iVar3 + -1 < 0) {
    FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),6,0xffffffffffffffff);
    if (*(int *)(DAT_002859e4 + 0x44) != 1) {
      FUN_001fd400(DAT_002c56e8);
      return;
    }
  }
  else {
    FUN_00206fb8(DAT_002c56e8);
    iVar3 = *(int *)(param_1 + 0x174);
    puVar2 = *(undefined4 **)(param_1 + 0x3f0 + *(int *)(param_1 + 0x3f8) * 4);
    *(undefined4 *)(iVar3 + 0xbc) = puVar2[3];
    *(undefined4 *)(iVar3 + 0xc0) = puVar2[2];
    *(undefined4 *)(iVar3 + 0xc4) = *puVar2;
    *(undefined4 *)(iVar3 + 200) = puVar2[1];
  }
  return;
}

