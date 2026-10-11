/* Ghidra pseudocode. PS2 address: 001bf988. Not validated source. */

void FUN_001bf988(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_002859e4 + 0x290) * 0x80 + DAT_002859e4 + 0xb0;
  if ((DAT_002859e4 != 0) || (uVar2 = DAT_002c355c, iRam00000024 != 0)) {
    if (*(int *)(DAT_002859e4 + 0x298) < 2) {
      uVar2 = *(undefined4 *)(*(int *)(DAT_002859e4 + 0x24) + 0x60);
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(DAT_002859e4 + 0x24) + 100);
    }
  }
  FUN_00222e98(0x299cc8,iVar1,4);
  FUN_00223058(uVar2,0x299cc8,iVar1);
  FUN_001d5d98(0x299cc8);
  return;
}

