/* Ghidra pseudocode. PS2 address: 0022bbc8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0022bc24) */

undefined8 FUN_0022bbc8(int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_1 * 0x14;
  iVar7 = DAT_0029a8f0 + param_1 * 0x6c;
  if (((&DAT_0029e090)[iVar1] & 8) == 0) {
    iVar6 = 0;
    uVar3 = FUN_00256ae0((ulong)*(ushort *)(iVar7 + 0x14) << 0x10,DAT_0029a820._6_2_);
    uVar4 = FUN_00256a78(uVar3,*(undefined2 *)(iVar7 + 0x6a));
    if ((&DAT_0029e091)[iVar1] != '\0') {
      iVar5 = 0;
      do {
        iVar6 = iVar6 + 1;
        FUN_0022fd58((int)*(short *)(iVar7 + 4 + iVar5) - (uint)DAT_0029a828._2_1_,
                     (int)(uVar4 >> 0xc));
        iVar5 = iVar6 * 2;
      } while (iVar6 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
    }
  }
  else {
    iVar6 = 0;
    uVar2 = FUN_00256a78(((uint)*(ushort *)(iVar7 + 0x14) << 0xc) / 48000,
                         *(undefined2 *)(iVar7 + 0x6a));
    uVar4 = uVar2 >> 0xc;
    if (0x3fff < uVar2 >> 0xc) {
      uVar4 = 0x3fff;
    }
    if ((&DAT_0029e091)[iVar1] != '\0') {
      iVar5 = 0;
      do {
        iVar6 = iVar6 + 1;
        *(short *)(&DAT_0029ad14 + *(short *)(iVar7 + 4 + iVar5) * 8) = (short)uVar4;
        iVar5 = iVar6 * 2;
      } while (iVar6 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
    }
  }
  return 0;
}

