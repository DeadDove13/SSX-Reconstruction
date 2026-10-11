/* Ghidra pseudocode. PS2 address: 00190ae0. Not validated source. */

undefined8 FUN_00190ae0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0018dbd0(param_1,0xffffffffffffffff);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined **)(iVar2 + 0xc) = &DAT_002b4728;
  FUN_0018ddc0(iVar2 + 0x14);
  iVar1 = 0x3f;
  *(undefined **)(iVar2 + 0x128) = &DAT_002b4778;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(int *)(iVar2 + 300) = iVar2;
  return param_1;
}

