/* Ghidra pseudocode. PS2 address: 0016cf38. Not validated source. */

void FUN_0016cf38(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 1;
  piVar2 = (int *)(param_1 + 0x7d4);
  param_1 = param_1 + 0x550;
  do {
    iVar1 = *piVar2;
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 0xb8;
    (**(code **)(iVar1 + 0x44))(param_1 + *(short *)(iVar1 + 0x40));
    param_1 = param_1 + 0x2e0;
  } while (-1 < iVar3);
  return;
}

