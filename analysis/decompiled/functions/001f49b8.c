/* Ghidra pseudocode. PS2 address: 001f49b8. Not validated source. */

void FUN_001f49b8(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
             param_2 < *(int *)(param_1 + 0x351c0),0x2bc7f0,0x2bc7b8,0x8f);
  FUN_001f45e8(*(int *)(param_1 + 0x351c4) + param_2 * 0x1c,param_3,param_4);
  return;
}

