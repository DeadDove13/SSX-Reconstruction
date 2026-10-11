/* Ghidra pseudocode. PS2 address: 00107bc8. Not validated source. */

void FUN_00107bc8(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x6cf4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar2 + 0x6cf8);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x3d4) + 0x14))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x3d4) + 0x10));
    iVar1 = *(int *)(iVar2 + 0x6cf8);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar2 + 0x394);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x3d4) + 0x14))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x3d4) + 0x10));
    iVar1 = *(int *)(iVar2 + 0x394);
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_0010b330(param_1,1);
  FUN_0010b340(param_1,4);
  if (param_2 == 0) {
    *(undefined4 *)(iVar2 + 0x370) = 0;
  }
  return;
}

