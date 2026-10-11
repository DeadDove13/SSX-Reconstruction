/* Ghidra pseudocode. PS2 address: 001d8f28. Not validated source. */

void FUN_001d8f28(int param_1)

{
  undefined8 uVar1;
  undefined1 auStack_220 [512];
  
  uVar1 = FUN_0019a998(0x8a);
  FUN_0019a8a8(auStack_220,uVar1,*(int *)(*(int *)(param_1 + 0x16c) + 0xc) + 1);
  (**(code **)(*(int *)(param_1 + 0x170) + 100))
            (param_1 + *(short *)(*(int *)(param_1 + 0x170) + 0x60),auStack_220);
  (**(code **)(*(int *)(param_1 + 0x170) + 0x84))
            (param_1 + *(short *)(*(int *)(param_1 + 0x170) + 0x80));
  return;
}

