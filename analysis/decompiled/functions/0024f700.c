/* Ghidra pseudocode. PS2 address: 0024f700. Not validated source. */

void FUN_0024f700(void)

{
  DAT_002a5bf0 = DAT_002a5bf4 + 1;
  *(undefined4 *)(*(int *)(DAT_002a52a4 + 0x40) + 0xe8) = 0;
  DAT_002a5bf8 = 1;
  DAT_002a54dc = FUN_0024eec8(1);
  DAT_002a54e0 = FUN_0024eec8(5);
  DAT_002a54e4 = FUN_0024eec8(6);
  FUN_0024eec8(1);
  DAT_002a54e8 = FUN_0024eec8(6);
  DAT_002a54ec = FUN_0024eec8(6);
  DAT_002a54f0 = FUN_0024eec8(1);
  DAT_002a54f4 = FUN_0024eec8(1);
  FUN_0024f308();
  return;
}

