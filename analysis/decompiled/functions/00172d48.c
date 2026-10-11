/* Ghidra pseudocode. PS2 address: 00172d48. Not validated source. */

undefined8 FUN_00172d48(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xb60);
  uVar2 = 0xffffffffffffffff;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x40) + 0x34))
                      (iVar1 + *(short *)(*(int *)(iVar1 + 0x40) + 0x30));
  }
  return uVar2;
}

