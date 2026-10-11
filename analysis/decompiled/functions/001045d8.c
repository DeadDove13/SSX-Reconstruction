/* Ghidra pseudocode. PS2 address: 001045d8. Not validated source. */

void FUN_001045d8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0x6b;
  puVar3 = (undefined4 *)(param_1 + 0x36c);
  piVar2 = (int *)(param_1 + 0xc);
  do {
    iVar1 = *piVar2;
    iVar4 = iVar4 + -1;
    if (iVar1 != 0) {
      if (*(short *)((int)piVar2 + 6) == 0) {
        if ((short)piVar2[1] < 1) {
          FUN_00222d00(0x299cc8,iVar1);
          *piVar2 = 0;
          *puVar3 = 0xffffffff;
        }
      }
      else {
        FUN_00222a90(0x299cc8,iVar1);
        *(undefined2 *)((int)piVar2 + 6) = 0;
      }
    }
    piVar2 = piVar2 + 2;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar4);
  return;
}

