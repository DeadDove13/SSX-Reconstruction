/* Ghidra pseudocode. PS2 address: 0012f708. Not validated source. */

void FUN_0012f708(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x1c);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*piVar2 == 0) {
      *piVar2 = param_2;
      piVar2[-1] = 0;
      piVar2[-4] = 0;
      piVar2[-3] = 0;
      piVar2[-2] = 0;
      return;
    }
    piVar2 = piVar2 + 5;
  } while (iVar1 < 0x20);
  return;
}

