/* Ghidra pseudocode. PS2 address: 001e9538. Not validated source. */

void FUN_001e9538(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 2;
  puVar4 = (undefined4 *)(param_1 + param_2 * 0x60 + 0x10);
  piVar2 = puVar4 + 4;
  do {
    if (-1 < *piVar2) {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
      (**(code **)(iVar1 + 0x34))(*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0x30));
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  piVar2 = puVar4 + 10;
  iVar3 = 6;
  do {
    if (-1 < *piVar2) {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
      (**(code **)(iVar1 + 0x34))(*(int *)(param_1 + 0xc) + (int)*(short *)(iVar1 + 0x30));
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  *puVar4 = 0;
  return;
}

