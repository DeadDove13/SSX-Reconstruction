/* Ghidra pseudocode. PS2 address: 00131400. Not validated source. */

void FUN_00131400(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),10,0xffffffffffffffff);
  FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),0xe,0xffffffffffffffff);
  FUN_0015da00(*(undefined4 *)(DAT_002859e4 + 0xa0),0x2c4138);
  FUN_00100e60(*(undefined4 *)(DAT_002859e4 + 0x14));
  puVar1 = *(undefined4 **)(*(int *)(DAT_002859e4 + 0x14) + 0x90);
  uVar2 = *puVar1;
  *(undefined4 *)(*(int *)puVar1[0x228] + 0x28) = 0;
  FUN_0010a1b8(uVar2);
  FUN_00130e70(param_2);
  return;
}

