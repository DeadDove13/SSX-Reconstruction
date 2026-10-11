/* Ghidra pseudocode. PS2 address: 00173b30. Not validated source. */

void FUN_00173b30(int param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = ((undefined8 *)param_2)[1];
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  if (param_3 != 0) {
    uVar1 = ((undefined8 *)param_3)[1];
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0x60) = uVar1;
  }
  if (param_4 != 0) {
    uVar1 = ((undefined8 *)param_4)[1];
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)param_4;
    *(undefined8 *)(param_1 + 0x70) = uVar1;
  }
  if (param_5 != 0) {
    uVar1 = ((undefined8 *)param_5)[1];
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)param_5;
    *(undefined8 *)(param_1 + 0x80) = uVar1;
  }
  return;
}

