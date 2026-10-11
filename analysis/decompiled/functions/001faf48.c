/* Ghidra pseudocode. PS2 address: 001faf48. Not validated source. */

void FUN_001faf48(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  FUN_001f5ef8(param_1,*(undefined4 *)(iVar2 + 0xa4224));
  uVar1 = (**(code **)(*(int *)(iVar2 + 0x32000) + 0x3c))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x32000) + 0x38),0,0x11);
  *(undefined4 *)(iVar2 + 0xa4224) = uVar1;
  return;
}

