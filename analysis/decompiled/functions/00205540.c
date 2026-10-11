/* Ghidra pseudocode. PS2 address: 00205540. Not validated source. */

undefined8 FUN_00205540(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x2f;
  FUN_00207840();
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x32160) = 0;
  *(undefined4 *)(iVar2 + 0x32164) = 0;
  *(undefined **)(iVar2 + 0x32000) = &DAT_002bcf68;
  iVar1 = iVar2 + 0x32170;
  *(undefined4 *)(iVar2 + 0x32168) = 0;
  do {
    iVar3 = iVar3 + -1;
    FUN_002053c0(iVar1);
    iVar1 = iVar1 + 0x2c;
  } while (iVar3 != -1);
  DAT_002c5bc4 = iVar2;
  FUN_002251e0(0x205508);
  return param_1;
}

