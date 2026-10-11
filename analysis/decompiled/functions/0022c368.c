/* Ghidra pseudocode. PS2 address: 0022c368. Not validated source. */

void FUN_0022c368(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1 * 0x14;
  if (((&DAT_0029e090)[iVar1] & 4) != 0) {
    iVar4 = 0;
    iVar3 = DAT_0029a8f0 + param_1 * 0x6c;
    if ((&DAT_0029e091)[iVar1] != '\0') {
      iVar2 = 0;
      do {
        iVar4 = iVar4 + 1;
        FUN_0022fe00((int)*(short *)(iVar3 + 4 + iVar2) - (uint)DAT_0029a828._2_1_,param_2);
        iVar2 = iVar4 * 2;
      } while (iVar4 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
    }
  }
  return;
}

