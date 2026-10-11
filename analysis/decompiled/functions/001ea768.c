/* Ghidra pseudocode. PS2 address: 001ea768. Not validated source. */

void FUN_001ea768(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)(*(float *)(param_1 + 0x22c) * 32768.0);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0x7fff < (int)uVar5) {
    uVar5 = 0x7fff;
  }
  if (*(int *)(param_1 + 0x21c) != 0) {
    iVar4 = 0;
    uVar3 = *(uint *)(param_1 + 0x220);
    if (0 < *(int *)(param_1 + 0x228)) {
      iVar2 = param_1 + 0x194;
      iVar1 = param_1 + 8;
      do {
        if ((uVar3 & 1) != 0) {
          FUN_001e9d98(iVar1,iVar2,uVar5 & 0xffff);
        }
        iVar4 = iVar4 + 1;
        uVar3 = uVar3 >> 1;
        iVar2 = iVar2 + 6;
        iVar1 = iVar1 + 6;
      } while (iVar4 < *(int *)(param_1 + 0x228));
    }
  }
  return;
}

