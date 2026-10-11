/* Ghidra pseudocode. PS2 address: 0024a740. Not validated source. */

undefined4 FUN_0024a740(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x40) + 0xc + param_2 * 8);
  *(undefined4 *)(*(int *)(param_1 + 0x40) + param_2 * 8 + 0x10) = param_4;
  uVar1 = *puVar2;
  *puVar2 = param_3;
  return uVar1;
}

