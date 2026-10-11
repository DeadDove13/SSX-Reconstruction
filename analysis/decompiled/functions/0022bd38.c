/* Ghidra pseudocode. PS2 address: 0022bd38. Not validated source. */

undefined8 FUN_0022bd38(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1 * 0x14;
  iVar5 = DAT_0029a8f0 + param_1 * 0x6c;
  if (((&DAT_0029e090)[iVar1] & 8) == 0) {
    iVar4 = 0;
    if ((&DAT_0029e091)[iVar1] != '\0') {
      cVar2 = *(char *)(iVar5 + 0x43);
      while( true ) {
        iVar3 = iVar4 * 2;
        iVar4 = iVar4 + 1;
        FUN_0022fd38((float)(int)cVar2 * 0.007874016,
                     (int)*(short *)(iVar5 + 4 + iVar3) - (uint)DAT_0029a828._2_1_);
        if ((int)(uint)(byte)(&DAT_0029e091)[iVar1] <= iVar4) break;
        cVar2 = *(char *)(iVar5 + 0x43);
      }
    }
  }
  else {
    iVar4 = 0;
    if ((&DAT_0029e091)[iVar1] != '\0') {
      cVar2 = *(char *)(iVar5 + 0x42);
      while( true ) {
        if (cVar2 == '\0') {
          DAT_0029ad00 = DAT_0029ad00 & ~(1L << (long)*(short *)(iVar5 + 4 + iVar4 * 2));
        }
        else {
          DAT_0029ad00 = DAT_0029ad00 | 1L << (long)*(short *)(iVar5 + 4 + iVar4 * 2);
        }
        iVar4 = iVar4 + 1;
        if ((int)(uint)(byte)(&DAT_0029e091)[iVar1] <= iVar4) break;
        cVar2 = *(char *)(iVar5 + 0x42);
      }
    }
  }
  return 0;
}

