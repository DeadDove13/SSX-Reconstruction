/* Ghidra pseudocode. PS2 address: 0022c428. Not validated source. */

void FUN_0022c428(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = param_1 * 0x14;
  if (((&DAT_0029e090)[iVar1] & 4) != 0) {
    uVar4 = (uint)DAT_0029a820._6_2_;
    iVar5 = 0;
    iVar2 = DAT_0029a8f0 + param_1 * 0x6c;
    if ((&DAT_0029e091)[iVar1] != '\0') {
      iVar3 = 0;
      do {
        iVar5 = iVar5 + 1;
        FUN_0022ff78((float)param_2 * (1.0 / ((float)uVar4 * 0.5)),
                     (int)*(short *)(iVar2 + 4 + iVar3) - (uint)DAT_0029a828._2_1_);
        iVar3 = iVar5 * 2;
      } while (iVar5 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
    }
  }
  return;
}

