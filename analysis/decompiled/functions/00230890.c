/* Ghidra pseudocode. PS2 address: 00230890. Not validated source. */

void FUN_00230890(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *(code **)(param_1 + 4) = FUN_00230908;
  uVar3 = FUN_00234168(*(undefined4 *)(param_2 + 0x18));
  uVar2 = FUN_00234218(uVar3);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar1 = FUN_00234198(*(undefined4 *)(param_2 + 0x18));
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  return;
}

