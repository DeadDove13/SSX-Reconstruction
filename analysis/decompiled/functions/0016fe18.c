/* Ghidra pseudocode. PS2 address: 0016fe18. Not validated source. */

void FUN_0016fe18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  (**(code **)(*(int *)(iVar2 + 4) + 0xa4))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0xa0));
  uVar1 = FUN_0016f348(param_1,param_3);
  FUN_0016eec0(param_1,uVar1,param_3);
  if ((*(int *)(iVar2 + 0xb1c) != 0) && (*(int *)(iVar2 + 0xb38) != 3)) {
    *(undefined4 *)(iVar2 + 0xb1c) = 0;
    uVar1 = FUN_0016f160(param_1);
    FUN_001ef8f0(DAT_002c56e8,uVar1,0);
    return;
  }
  return;
}

