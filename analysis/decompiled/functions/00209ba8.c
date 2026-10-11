/* Ghidra pseudocode. PS2 address: 00209ba8. Not validated source. */

void FUN_00209ba8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
             *(int *)(param_1 + 0x50) == 0,0x2bd368,0x2bd378,0x3d);
  FUN_0025bbe4(param_1 + 0x10,param_2);
  uVar1 = FUN_00236bb8(param_1 + 0x10,0x10);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return;
}

