/* Ghidra pseudocode. PS2 address: 00183490. Not validated source. */

float FUN_00183490(int param_1,int param_2)

{
  (**(code **)(*(int *)(param_1 + 0x34) + 0x14))
            (param_1 + *(short *)(*(int *)(param_1 + 0x34) + 0x10));
  return (float)*(byte *)(param_1 + param_2 + 100) / 255.0;
}

