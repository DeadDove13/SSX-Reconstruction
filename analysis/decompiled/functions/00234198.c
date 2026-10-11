/* Ghidra pseudocode. PS2 address: 00234198. Not validated source. */

int FUN_00234198(int param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  sVar1 = *(short *)(DAT_0029a8f0 + (param_1 + (uint)DAT_0029a828._2_1_) * 0x6c + 0x18);
  if (sVar1 == -1) {
    return 0;
  }
  iVar3 = 1;
  psVar2 = (short *)(sVar1 * 0x6c + DAT_0029a8f0 + 6);
  do {
    if ((long)*psVar2 == (long)(int)(param_1 + (uint)DAT_0029a828._2_1_)) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 1;
  } while (iVar3 < 2);
  return 0;
}

