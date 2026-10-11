/* Ghidra pseudocode. PS2 address: 00230600. Not validated source. */

void FUN_00230600(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *(code **)(param_1 + 4) = FUN_00230468;
  uVar3 = FUN_00234168(*(undefined4 *)(param_2 + 0x18));
  uVar2 = FUN_00234218(uVar3);
  *(undefined4 *)(param_1 + 0xd68) = uVar2;
  uVar1 = FUN_00234198(*(undefined4 *)(param_2 + 0x18));
  *(undefined4 *)(param_1 + 0xd60) = 0;
  *(undefined4 *)(param_1 + 0xd64) = 0;
  *(undefined2 *)(param_1 + 0xd70) = 0;
  *(undefined2 *)(param_1 + 0xd72) = 0;
  *(undefined4 *)(param_1 + 0xd6c) = 0;
  *(undefined4 *)(param_1 + 0xd50) = 0;
  *(undefined1 *)(param_1 + 0xd74) = uVar1;
  FUN_00232a10(param_1 + 0xd50);
  return;
}

