/* Ghidra pseudocode. PS2 address: 001c1a88. Not validated source. */

void FUN_001c1a88(int param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0x10000007;
  puVar1[2] = 0x1000000000000000;
  puVar1[3] = 0x6c06000000000000;
  puVar1[1] = 0;
  *param_2 = puVar1 + 0x10;
  puVar1[4] = *(undefined8 *)(param_1 + 0x110);
  puVar1[5] = *(undefined8 *)(param_1 + 0x118);
  puVar1[6] = *(undefined8 *)(param_1 + 0x120);
  puVar1[7] = *(undefined8 *)(param_1 + 0x128);
  puVar1[8] = *(undefined8 *)(param_1 + 0x130);
  puVar1[9] = *(undefined8 *)(param_1 + 0x138);
  puVar1[10] = *(undefined8 *)(param_1 + 0x140);
  puVar1[0xb] = *(undefined8 *)(param_1 + 0x148);
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x150);
  puVar1[0xd] = *(undefined8 *)(param_1 + 0x158);
  puVar1[0xe] = *(undefined8 *)(param_1 + 0x160);
  puVar1[0xf] = *(undefined8 *)(param_1 + 0x168);
  return;
}

