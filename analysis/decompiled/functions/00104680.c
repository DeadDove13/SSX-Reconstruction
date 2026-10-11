/* Ghidra pseudocode. PS2 address: 00104680. Not validated source. */

void FUN_00104680(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0x6b;
  puVar2 = (undefined4 *)(param_1 + 0x36c);
  piVar1 = (int *)(param_1 + 0xc);
  do {
    iVar3 = iVar3 + -1;
    if (*piVar1 != 0) {
      FUN_00222d00(0x299cc8,*piVar1);
      *piVar1 = 0;
      *puVar2 = 0xffffffff;
    }
    piVar1 = piVar1 + 2;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  return;
}

