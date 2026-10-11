/* Ghidra pseudocode. PS2 address: 0022e958. Not validated source. */

int FUN_0022e958(uint param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  if ((-1 < (int)param_1) && (lVar2 = FUN_00226df0(param_1 & 0xff), lVar2 != 0)) {
    piVar4 = (int *)lVar2;
    iVar3 = 0;
    if (0 < (int)((uint)*(byte *)((int)piVar4 + 0x16) << 0x18)) {
      do {
        iVar1 = iVar3 * 0x2c + *piVar4;
        if (*(uint *)(iVar1 + 4) == param_1) {
          return iVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(char *)((int)piVar4 + 0x16));
    }
  }
  return 0;
}

