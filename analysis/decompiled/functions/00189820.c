/* Ghidra pseudocode. PS2 address: 00189820. Not validated source. */

void FUN_00189820(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_0018cf28(*(undefined4 *)(param_1 + 0x2a0));
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  (**(code **)(iVar1 + 0x7c))(*(int *)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x78),1,0);
  FUN_00104020(*(undefined4 *)(param_1 + 0xc));
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (FUN_00156e40(0x27a598), *(int *)(*(int *)(param_1 + 0x38) + 0x44) != 0)) {
    FUN_001fcdf0(DAT_002c56e8);
    FUN_001fd358(DAT_002c56e8);
    FUN_001a32e0(*(undefined4 *)(param_1 + 0x30),DAT_0027bc00);
    FUN_001a32b0(*(undefined4 *)(param_1 + 0x30),9,0xffffffffffffffff);
    uVar2 = FUN_001a36e8(*(undefined4 *)(param_1 + 0x30));
    FUN_001e5608(uVar2,1);
    FUN_00147088(0x2795b8);
    return;
  }
  return;
}

