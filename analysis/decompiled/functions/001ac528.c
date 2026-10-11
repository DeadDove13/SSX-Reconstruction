/* Ghidra pseudocode. PS2 address: 001ac528. Not validated source. */

void FUN_001ac528(int param_1)

{
  short sVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (*(int *)(*(int *)(param_1 + 0x174) + 0xcc) == 0) {
    if (*(int *)(param_1 + 0x178) == 2) {
      FUN_001d9dc8();
      return;
    }
    iVar2 = *(int *)(param_1 + *(int *)(param_1 + 0x3f8) * 4 + 0x3f0);
    sVar1 = *(short *)(iVar2 + 0x122);
    if (sVar1 != 0) {
      if (sVar1 < 1) {
        pcVar3 = *(code **)(iVar2 + 0x124);
        iVar2 = (int)*(short *)(iVar2 + 0x120);
      }
      else {
        uVar4 = *(undefined8 *)(sVar1 * 8 + *(int *)(param_1 + *(short *)(iVar2 + 0x124)) + -8);
        pcVar3 = (code *)((ulong)uVar4 >> 0x20);
        iVar2 = (int)(short)uVar4 + (int)*(short *)(iVar2 + 0x120);
      }
      (*pcVar3)(param_1 + iVar2);
    }
  }
  return;
}

