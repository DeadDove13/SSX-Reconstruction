/* Ghidra pseudocode. PS2 address: 0018e738. Not validated source. */

void FUN_0018e738(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x110) = param_2;
  if (*(int *)(iVar2 + 4) <= *(int *)(iVar2 + 8)) {
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 4) + -1;
  }
  iVar2 = *(int *)(iVar2 + *(int *)(iVar2 + 8) * 4 + 0x10);
  iVar1 = *(int *)(iVar2 + 0xc);
  (**(code **)(iVar1 + 0x34))(iVar2 + *(short *)(iVar1 + 0x30),2);
  FUN_0018de10(param_1);
  return;
}

