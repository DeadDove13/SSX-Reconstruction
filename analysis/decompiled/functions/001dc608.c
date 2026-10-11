/* Ghidra pseudocode. PS2 address: 001dc608. Not validated source. */

void FUN_001dc608(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_002109b0();
  *(float *)(param_1 + 0x28) = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0;
  uVar1 = FUN_002109b0();
  *(float *)(param_1 + 0x2c) = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0;
  uVar1 = FUN_002109b0();
  *(float *)(param_1 + 0x30) = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0;
  uVar1 = FUN_002109b0();
  *(float *)(param_1 + 0x34) = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0;
  uVar1 = FUN_002109b0();
  *(float *)(param_1 + 0x38) = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0;
  uVar1 = FUN_002109b0();
  *(float *)(param_1 + 0x40) = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0;
  uVar1 = FUN_002109b0();
  *(float *)(param_1 + 0x44) = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0;
  uVar1 = FUN_002109b0();
  *(float *)(param_1 + 0x48) = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0;
  uVar1 = FUN_002109b0();
  *(float *)(param_1 + 0x4c) = ((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0;
  return;
}

