/* Ghidra pseudocode. PS2 address: 0020ab48. Not validated source. */

void FUN_0020ab48(float param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x28) = 0x12;
  FUN_0023bbd0(param_2 + 0x30,0,0x240);
  *(float *)(param_2 + 0x20) = param_1 * 100.0;
  *(undefined4 *)(param_2 + 0xe0) = 0x41700000;
  *(undefined4 *)(param_2 + 0x120) = 0x41200000;
  *(undefined4 *)(param_2 + 0x160) = 0x41c80000;
  *(undefined4 *)(param_2 + 0x1e0) = 0x41f00000;
  *(undefined4 *)(param_2 + 0x260) = 0x41a00000;
  *(undefined4 *)(param_2 + 0x40) = 0x41c80000;
  *(undefined4 *)(param_2 + 0x60) = 0x41a00000;
  *(undefined4 *)(param_2 + 0x80) = 0x41700000;
  *(undefined4 *)(param_2 + 0xa0) = 0x41700000;
  *(undefined4 *)(param_2 + 0xc0) = 0x41700000;
  *(undefined4 *)(param_2 + 0x100) = 0x41200000;
  *(undefined4 *)(param_2 + 0x140) = 0x41c80000;
  *(undefined4 *)(param_2 + 0x180) = 0x41a00000;
  *(undefined4 *)(param_2 + 0x1a0) = 0x41a00000;
  *(undefined4 *)(param_2 + 0x1c0) = 0x41f00000;
  *(undefined4 *)(param_2 + 0x200) = 0x41a00000;
  *(undefined4 *)(param_2 + 0x220) = 0x41a00000;
  *(undefined4 *)(param_2 + 0x240) = 0x41a00000;
  return;
}

