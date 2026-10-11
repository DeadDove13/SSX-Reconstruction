/* Ghidra pseudocode. PS2 address: 001dc130. Not validated source. */

void FUN_001dc130(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00211458(*(undefined4 *)(iVar1 + 0x16c));
  FUN_001d9670(param_1,0x20);
  (**(code **)(*(int *)(iVar1 + 0x170) + 0x54))(iVar1 + *(short *)(*(int *)(iVar1 + 0x170) + 0x50));
  return;
}

