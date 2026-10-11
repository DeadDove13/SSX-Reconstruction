/* Ghidra pseudocode. PS2 address: 00213078. Not validated source. */

void FUN_00213078(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x4c) != 0) {
    FUN_00251638(0,0,0x2c5828);
  }
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  iVar1 = 1;
  do {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x14 + iVar2 + 0x14c) = 0;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x14 + iVar2 + 0x150) = 0;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x14 + iVar2 + 0x154) = 0;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x14 + iVar2 + 0x158) = 0;
  } while (-1 < iVar1);
  FUN_00211d38(param_1);
  return;
}

