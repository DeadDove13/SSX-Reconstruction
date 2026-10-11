/* Ghidra pseudocode. PS2 address: 00101850. Not validated source. */

void FUN_00101850(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  FUN_001a31c0(*(undefined4 *)(DAT_002859e4 + 0x30));
  FUN_00101730(param_1,param_2);
  FUN_00103700(DAT_002859e4);
  iVar3 = (int)param_2;
  if (*(int *)(iVar3 + 0xe0) == 0) {
    if (*(int *)(iVar3 + 0xe4) == 0) {
      FUN_00101d28(param_1,param_2);
    }
    else {
      FUN_00101d88(param_1,param_2);
    }
  }
  else {
    FUN_001020d0(param_1,param_2);
  }
  lVar2 = FUN_00101418(param_2);
  if (lVar2 == 0) {
    FUN_002229e8(0x299cc8,3);
    iVar1 = *(int *)(iVar3 + 8);
  }
  else {
    iVar1 = *(int *)(iVar3 + 8);
  }
  (**(code **)(iVar1 + 0x6c))(iVar3 + *(short *)(iVar1 + 0x68));
  return;
}

