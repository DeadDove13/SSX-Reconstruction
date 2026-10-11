/* Ghidra pseudocode. PS2 address: 00146c50. Not validated source. */

int FUN_00146c50(int param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 1;
  if ((*(uint *)(param_1 + 0x240) & 0x40) != 0) {
    piVar2 = (int *)(param_1 + 600);
    iVar4 = 0x21;
    iVar3 = param_1;
    do {
      if (*piVar2 != 0) {
        lVar1 = FUN_00146828(iVar3,param_1 + 0x244);
        if (lVar1 == 0) {
          iVar5 = 0;
        }
        else {
          *piVar2 = 0;
        }
      }
      iVar3 = iVar3 + 0x10;
      iVar4 = iVar4 + -1;
      piVar2 = piVar2 + 1;
    } while (-1 < iVar4);
    if (iVar5 != 0) {
      FUN_002193f8(param_1 + 0x244);
      *(uint *)(param_1 + 0x240) = *(uint *)(param_1 + 0x240) & 0xffffffbf;
    }
  }
  return iVar5;
}

