/* Ghidra pseudocode. PS2 address: 0022be90. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0022bf14) */

void FUN_0022be90(int param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fStack_80;
  float fStack_7c;
  
  iVar1 = param_1 * 0x14;
  iVar6 = DAT_0029a8f0 + param_1 * 0x6c;
  if (((&DAT_0029e090)[iVar1] & 8) == 0) {
    iVar5 = 0;
    if ((&DAT_0029e091)[iVar1] != '\0') {
      iVar2 = 0;
      do {
        iVar4 = (int)*(short *)(iVar6 + 4 + iVar2);
        iVar2 = iVar4 * 0x14;
        iVar5 = iVar5 + 1;
        fStack_7c = (float)(int)(char)(&DAT_0029e081)[iVar2] * 0.007874016;
        fStack_80 = (float)(int)(char)(&DAT_0029e080)[iVar2] * 0.007874016;
        FUN_0022f8c8((float)(int)*(char *)(iVar6 + 0x39) * 0.007874016,
                     iVar4 - (uint)DAT_0029a828._2_1_,&fStack_80);
        iVar2 = iVar5 * 2;
      } while (iVar5 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
    }
  }
  else {
    iVar5 = 0;
    if ((&DAT_0029e091)[iVar1] != '\0') {
      iVar2 = 0;
      do {
        psVar3 = (short *)(iVar6 + 4 + iVar2);
        iVar2 = (int)*psVar3;
        iVar5 = iVar5 + 1;
        (&DAT_0029ad17)[iVar2 * 8] =
             (char)(((int)(char)(&DAT_0029e080)[iVar2 * 0x14] * (int)*(char *)(iVar6 + 0x39)) / 0x7f
                   );
        iVar2 = (int)*psVar3;
        (&DAT_0029ad16)[iVar2 * 8] =
             (char)(((int)(char)(&DAT_0029e081)[iVar2 * 0x14] * (int)*(char *)(iVar6 + 0x39)) / 0x7f
                   );
        iVar2 = iVar5 * 2;
      } while (iVar5 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
    }
  }
  return;
}

