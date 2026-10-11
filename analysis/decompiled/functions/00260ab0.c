/* Ghidra pseudocode. PS2 address: 00260ab0. Not validated source. */

ulong FUN_00260ab0(int param_1,code *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar5 = 0;
  piVar4 = (int *)(param_1 + 0x1d8);
  if (piVar4 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x1dc);
    while( true ) {
      iVar3 = piVar4[2];
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        if (*(short *)(iVar3 + 0xc) != 0) {
          uVar1 = (*param_2)(iVar3);
          uVar5 = uVar5 | uVar1;
        }
        iVar3 = iVar3 + 0x58;
      }
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) break;
      iVar2 = piVar4[1];
    }
  }
  return uVar5;
}

