/* Ghidra pseudocode. PS2 address: 00233f88. Not validated source. */

undefined8
FUN_00233f88(undefined8 param_1,int param_2,undefined1 param_3,undefined8 param_4,undefined8 param_5
            ,undefined4 param_6,undefined4 param_7,undefined2 *param_8,undefined8 param_9,
            int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 * 0x14;
  iVar5 = DAT_0029a8f0 + param_2 * 0x6c;
  *(undefined2 *)(iVar5 + 0x14) = *param_8;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  (&DAT_0029e090)[iVar1] = param_3;
  (&DAT_0029e091)[iVar1] = *(undefined1 *)(param_8 + 1);
  if ((((&DAT_0029e090)[iVar1] & 8) == 0) && (((&DAT_0029e090)[iVar1] & 4) != 0)) {
    iVar4 = 0;
    if ((&DAT_0029e091)[iVar1] != '\0') {
      iVar2 = 0;
      do {
        iVar3 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        FUN_0022f5d0((int)*(short *)(iVar5 + 4 + iVar2) - (uint)DAT_0029a828._2_1_,
                     *(undefined1 *)((int)param_8 + 3),0,0,*(undefined4 *)(iVar3 + param_10),
                     (&DAT_0029e091)[iVar1],*(undefined4 *)(iVar5 + 0xc),0xffffffffffffffff);
        iVar2 = iVar4 * 2;
      } while (iVar4 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
    }
    iVar4 = 0;
    FUN_0022bbc8(*(undefined2 *)(iVar5 + 4));
    FUN_0022ca48(*(undefined2 *)(iVar5 + 4));
    FUN_0022bd38(*(undefined2 *)(iVar5 + 4),0);
    FUN_0022c2a0(*(undefined2 *)(iVar5 + 4),param_4);
    FUN_0022c368(*(undefined2 *)(iVar5 + 4),param_5);
    FUN_0022c428(*(undefined2 *)(iVar5 + 4),param_6);
    FUN_0022c520(*(undefined2 *)(iVar5 + 4),param_7);
    if ((&DAT_0029e091)[iVar1] != '\0') {
      iVar2 = 0;
      do {
        iVar4 = iVar4 + 1;
        FUN_0022f7a0((int)*(short *)(iVar5 + 4 + iVar2) - (uint)DAT_0029a828._2_1_);
        iVar2 = iVar4 * 2;
      } while (iVar4 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
    }
  }
  return 0;
}

