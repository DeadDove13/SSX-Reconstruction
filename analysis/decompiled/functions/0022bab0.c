/* Ghidra pseudocode. PS2 address: 0022bab0. Not validated source. */

undefined8 FUN_0022bab0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  iVar1 = param_1 * 0x14;
  iVar3 = DAT_0029a8f0 + param_1 * 0x6c;
  if (((&DAT_0029e090)[iVar1] & 8) == 0) {
    iVar5 = 0;
    if ((&DAT_0029e091)[iVar1] != '\0') {
      iVar2 = 0;
      do {
        psVar4 = (short *)(iVar3 + 4 + iVar2);
        iVar5 = iVar5 + 1;
        FUN_0022f828((int)*psVar4 - (uint)DAT_0029a828._2_1_);
        FUN_002291c8(*psVar4);
        iVar2 = iVar5 * 2;
      } while (iVar5 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
    }
  }
  else {
    iVar5 = 0;
    if ((&DAT_0029e091)[iVar1] != '\0') {
      iVar2 = 0;
      do {
        iVar5 = iVar5 + 1;
        *(undefined4 *)(&DAT_0029ad10 + *(short *)(iVar3 + 4 + iVar2) * 8) = 0;
        FUN_002291c8();
        iVar2 = iVar5 * 2;
      } while (iVar5 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
    }
  }
  return 0;
}

