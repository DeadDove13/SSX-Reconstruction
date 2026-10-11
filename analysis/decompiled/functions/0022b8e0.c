/* Ghidra pseudocode. PS2 address: 0022b8e0. Not validated source. */

void FUN_0022b8e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_002d03b0 != 0) {
    DAT_0029e9ac = DAT_002d03b4;
    DAT_0029e9a0 = 0x14;
    DAT_002d03b4 = DAT_002d03b4 + 1;
    DAT_0029e9b0 = 1;
    FUN_0022d7d0(0x202d0090,0x29ad00,400);
    FUN_00266830(0,0x29e9a0,0x14,0x2d0090,DAT_002d03b0,400);
  }
  iVar3 = 0;
  if (DAT_0029a828._2_1_ != 0) {
    do {
      if ((((*(int *)(&DAT_0029ad10 + iVar3 * 8) != 0) &&
           (iVar1 = iVar3 * 0x6c + DAT_0029a8f0, *(short *)(iVar1 + 0x18) == -1)) &&
          (*(int *)(&DAT_0029ae90 + iVar3 * 4) == 0)) &&
         ((*(int *)(iVar1 + 0x1c) + 5U < DAT_0029a894 &&
          (iVar1 = 0, (&DAT_0029e091)[iVar3 * 0x14] != '\0')))) {
        do {
          iVar2 = iVar1 * 2;
          iVar1 = iVar1 + 1;
          *(undefined4 *)(&DAT_0029ad10 + *(short *)(iVar3 * 0x6c + DAT_0029a8f0 + iVar2 + 4) * 8) =
               0;
          FUN_002291c8();
        } while (iVar1 < (int)(uint)(byte)(&DAT_0029e091)[iVar3 * 0x14]);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_0029a828._2_1_);
  }
  return;
}

