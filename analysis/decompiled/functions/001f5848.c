/* Ghidra pseudocode. PS2 address: 001f5848. Not validated source. */

undefined8 FUN_001f5848(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x3f;
  FUN_00205540();
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x329b8) = 1;
  *(undefined **)(iVar2 + 0x32000) = &DAT_002bc8c0;
  iVar1 = iVar2 + 0x329c0;
  *(undefined4 *)(iVar2 + 0x329b0) = 0;
  *(undefined4 *)(iVar2 + 0x329b4) = 1;
  do {
    iVar3 = iVar3 + -1;
    FUN_001f4e40(iVar1);
    iVar1 = iVar1 + 0xa0;
  } while (iVar3 != -1);
  return param_1;
}

