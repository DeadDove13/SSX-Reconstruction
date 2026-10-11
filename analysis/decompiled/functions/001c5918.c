/* Ghidra pseudocode. PS2 address: 001c5918. Not validated source. */

void FUN_001c5918(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = DAT_00296264;
  iVar2 = param_1 + 0x60;
  *(undefined8 *)(param_1 + 0x60) = *DAT_00296264;
  *(undefined8 *)(param_1 + 0x68) = puVar1[1];
  *(undefined8 *)(param_1 + 0x70) = puVar1[2];
  *(undefined8 *)(param_1 + 0x78) = puVar1[3];
  *(undefined8 *)(param_1 + 0x80) = puVar1[4];
  *(undefined8 *)(param_1 + 0x88) = puVar1[5];
  *(undefined8 *)(param_1 + 0x90) = puVar1[6];
  *(undefined8 *)(param_1 + 0x98) = puVar1[7];
  FUN_002456b8(param_1 + 0xe0,param_1 + 0xa0,iVar2);
  FUN_002456b8(param_1 + 0x180,param_1 + 0x140,iVar2);
  FUN_001d3530(*(undefined4 *)(param_1 + 8),iVar2);
  FUN_001d3748(*(undefined4 *)(param_1 + 8),param_1 + 0x1e0);
  return;
}

