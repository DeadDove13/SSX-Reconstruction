/* Ghidra pseudocode. PS2 address: 001dc0c8. Not validated source. */

void FUN_001dc0c8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_002113a0(*(undefined4 *)(iVar1 + 0x16c));
  FUN_001d9670(param_1,0x12);
  (**(code **)(*(int *)(iVar1 + 0x170) + 0x2c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x170) + 0x28));
  return;
}

