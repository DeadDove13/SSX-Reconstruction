/* Ghidra pseudocode. PS2 address: 001ee0d8. Not validated source. */

void FUN_001ee0d8(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < *(int *)((int)param_1 + 8)) {
    iVar2 = param_2 * 0x34 + *(int *)((int)param_1 + 0xc);
    iVar1 = *(int *)(iVar2 + 4);
    (**(code **)(iVar1 + 0x3c))(iVar2 + *(short *)(iVar1 + 0x38),param_1);
  }
  return;
}

