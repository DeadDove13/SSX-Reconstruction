/* Ghidra pseudocode. PS2 address: 00231478. Not validated source. */

void FUN_00231478(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *(code **)(param_1 + 4) = FUN_002311d0;
  uVar3 = FUN_00234168(*(undefined4 *)(param_2 + 0x18));
  uVar2 = FUN_00234218(uVar3);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar1 = FUN_00234198(*(undefined4 *)(param_2 + 0x18));
  *(undefined1 *)(param_1 + 0x39) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(code **)(param_1 + 0x34) = FUN_00231580;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  return;
}

