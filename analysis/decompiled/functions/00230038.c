/* Ghidra pseudocode. PS2 address: 00230038. Not validated source. */

void FUN_00230038(undefined4 *param_1,int *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    sVar1 = *(short *)(puVar3 + 3);
    while ((puVar2 = puVar3, puVar3 = puVar2, sVar1 < (short)param_2[3] &&
           (puVar3 = (undefined4 *)*puVar2, puVar4 = puVar2, puVar3 != (undefined4 *)0x0))) {
      sVar1 = *(short *)(puVar3 + 3);
    }
  }
  *param_2 = (int)puVar3;
  if (puVar4 == (undefined4 *)0x0) {
    *param_1 = param_2;
    return;
  }
  *puVar4 = param_2;
  return;
}

