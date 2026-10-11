/* Ghidra pseudocode. PS2 address: 001963e0. Not validated source. */

void FUN_001963e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x394c + param_2 * 4)) {
    piVar3 = (int *)(param_2 * 0x40 + param_1 + 0x3e68);
    piVar2 = piVar3;
    do {
      if (param_3 == *piVar2) {
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0x3964);
        iVar1 = *(int *)(param_1 + 0x394c + param_2 * 4) + -1;
        *(int *)(param_1 + 0x3964) = param_3;
        if (iVar4 < iVar1) {
          piVar3 = piVar3 + iVar4;
          do {
            iVar4 = iVar4 + 1;
            *piVar3 = piVar3[1];
            piVar3 = piVar3 + 1;
          } while (iVar4 < iVar1);
        }
        piVar2 = (int *)(param_1 + 0x394c + param_2 * 4);
        *piVar2 = *piVar2 + -1;
        return;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x394c + param_2 * 4));
  }
  return;
}

