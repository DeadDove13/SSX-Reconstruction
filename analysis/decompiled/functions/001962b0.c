/* Ghidra pseudocode. PS2 address: 001962b0. Not validated source. */

undefined4 * FUN_001962b0(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  piVar2 = (int *)(param_1 + 0x394c + param_3 * 4);
  if (0xf < *piVar2) {
    return (undefined4 *)0x0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x3964);
  iVar4 = 0;
  if (0 < *piVar2) {
    puVar5 = (undefined4 *)(param_3 * 0x40 + param_1 + 0x3e68);
    puVar6 = puVar5;
    do {
      if (param_2 <= *(uint *)(*(int *)*puVar6 + 0x38)) {
        puVar1[4] = param_3;
        puVar1[1] = 0;
        iVar3 = *piVar2;
        *(undefined4 *)(param_1 + 0x3964) = puVar1[3];
        iVar3 = iVar3 + -1;
        puVar1[2] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        if (iVar4 <= iVar3) {
          puVar5 = puVar5 + iVar3;
          do {
            iVar3 = iVar3 + -1;
            puVar5[1] = *puVar5;
            puVar5 = puVar5 + -1;
          } while (iVar4 <= iVar3);
        }
        iVar4 = *piVar2;
        *puVar6 = puVar1;
        *piVar2 = iVar4 + 1;
        return puVar1;
      }
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 < *piVar2);
  }
  puVar1[4] = param_3;
  puVar1[1] = 0;
  piVar2 = (int *)(param_1 + 0x394c + param_3 * 4);
  iVar4 = *piVar2;
  *(undefined4 *)(param_1 + 0x3964) = puVar1[3];
  puVar1[3] = 0;
  *piVar2 = iVar4 + 1;
  *(undefined4 **)(param_1 + 0x3e68 + iVar4 * 4 + param_3 * 0x40) = puVar1;
  puVar1[2] = 0;
  *puVar1 = 0;
  return puVar1;
}

