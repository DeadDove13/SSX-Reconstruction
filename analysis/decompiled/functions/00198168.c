/* Ghidra pseudocode. PS2 address: 00198168. Not validated source. */

void FUN_00198168(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 2;
  piVar1 = (int *)(param_1 + 0xc);
  FUN_001982e0();
  do {
    iVar2 = iVar2 + -1;
    if (*piVar1 != 0) {
      FUN_001987d0(*piVar1);
      FUN_001963e0(*(undefined4 *)(DAT_002859e4 + 0x38),*(undefined4 *)(param_1 + 4),*piVar1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while (-1 < iVar2);
  return;
}

