/* Ghidra pseudocode. PS2 address: 0023ee10. Not validated source. */

void FUN_0023ee10(void)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = 1;
  uStack_2c = 1;
  iVar1 = CreateSema(auStack_30);
  *(undefined4 *)(&DAT_002a3ec4 + iVar1 * 8) = 0;
  *(undefined4 *)(&DAT_002a3ec0 + iVar1 * 8) = 0;
  return;
}

