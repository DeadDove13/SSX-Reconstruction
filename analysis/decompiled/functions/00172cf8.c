/* Ghidra pseudocode. PS2 address: 00172cf8. Not validated source. */

void FUN_00172cf8(int param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_0016cf98();
  iVar1 = *(int *)(param_1 + 0xb60);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x40) + 0x24))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x40) + 0x20),param_2);
  }
  return;
}

