/* Ghidra pseudocode. PS2 address: 001ee398. Not validated source. */

void FUN_001ee398(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < *(int *)((int)param_1 + 8)) {
    iVar2 = param_2 * 0x34 + *(int *)((int)param_1 + 0xc);
    iVar1 = *(int *)(iVar2 + 4);
    (**(code **)(iVar1 + 0x4c))(iVar2 + *(short *)(iVar1 + 0x48),param_1);
  }
  return;
}

