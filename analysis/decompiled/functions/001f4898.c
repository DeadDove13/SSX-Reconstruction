/* Ghidra pseudocode. PS2 address: 001f4898. Not validated source. */

void FUN_001f4898(int param_1,int param_2)

{
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
             param_2 < *(int *)(param_1 + 0x351c0),0x2bc7f0,0x2bc7b8,0x81);
  FUN_001f44c8(*(int *)(param_1 + 0x351c4) + param_2 * 0x1c);
  return;
}

