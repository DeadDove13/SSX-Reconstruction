/* Ghidra pseudocode. PS2 address: 001eabd8. Not validated source. */

void FUN_001eabd8(undefined8 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(param_2 + 0x1d0);
  *(undefined4 *)(*(int *)(param_2 + 0x30) + 0x34) = *(undefined4 *)(param_2 + 0x34);
  pcVar2 = *(code **)(iVar1 + 0x14);
  *(undefined4 *)(*(int *)(param_2 + 0x34) + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  (*pcVar2)(param_2 + *(short *)(iVar1 + 0x10));
  return;
}

