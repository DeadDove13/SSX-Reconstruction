/* Ghidra pseudocode. PS2 address: 0019c170. Not validated source. */

undefined4 FUN_0019c170(float param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_2) {
    piVar2 = (int *)param_2[1];
    do {
      if (((((float)piVar2[2] <= param_1) && (param_1 <= (float)piVar2[3])) && (*piVar2 == 0xf)) &&
         (piVar2[1] == 0x45)) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *param_2);
  }
  return 1;
}

