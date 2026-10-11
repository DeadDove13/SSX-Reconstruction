/* Ghidra pseudocode. PS2 address: 001cb3d8. Not validated source. */

void FUN_001cb3d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_0023a448(0x2b73b0,0x4800,0);
  if (iVar1 != 0) {
    FUN_0023bbd0(iVar1,0xffffffffdeadc0ed,0x4800);
  }
  *(int *)(param_1 + 0x4ad0) = iVar1;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    piVar4 = (int *)(iVar5 * 0xa00 + param_1 + 0x1508);
    *(undefined4 *)(param_1 + 0x14b8 + iVar5 * 4) = 0;
    *(undefined4 *)(param_1 + 0x14c0 + iVar5 * 4) = 0;
    iVar2 = 9;
    do {
      *piVar4 = iVar1;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x180;
      piVar4 = piVar4 + 0x40;
    } while (-1 < iVar2);
    piVar4 = (int *)(iVar5 * 0xa00 + param_1 + 0x2908);
    iVar2 = 9;
    do {
      iVar3 = iVar1;
      *piVar4 = iVar3;
      iVar2 = iVar2 + -1;
      piVar4 = piVar4 + 0x40;
      iVar1 = iVar3 + 0x180;
    } while (-1 < iVar2);
    iVar1 = iVar5 * 0x380 + param_1;
    *(int *)(iVar1 + 0x3cf0) = iVar3 + 0x180;
    *(int *)(iVar1 + 0x43f0) = iVar3 + 0x480;
    iVar1 = iVar3 + 0x780;
    iVar5 = iVar6;
  } while (iVar6 < 2);
  return;
}

