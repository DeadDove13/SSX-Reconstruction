/* Ghidra pseudocode. PS2 address: 001503f8. Not validated source. */

undefined2 FUN_001503f8(int param_1)

{
  return *(undefined2 *)
          (&DAT_00279920 +
          *(int *)(&DAT_002ac2c0 + *(int *)(param_1 + 8) * 0xc) * 6 +
          *(int *)(*(int *)(param_1 + 0x1c) + 0x344) * 2);
}

