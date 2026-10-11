/* Ghidra pseudocode. PS2 address: 00100b30. Not validated source. */

void FUN_00100b30(int param_1)

{
  FUN_00186a08(0x2c4dd8,3);
  FUN_00186a08(0x2c4dd8,0xd);
  FUN_00186a08(0x2c4dd8,4);
  DAT_0027ba8c = FUN_002109b0();
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  (**(code **)(*(int *)(param_1 + 8) + 0x7c))
            (param_1 + *(short *)(*(int *)(param_1 + 8) + 0x78),0,0);
  return;
}

