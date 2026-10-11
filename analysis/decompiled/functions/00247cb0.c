/* Ghidra pseudocode. PS2 address: 00247cb0. Not validated source. */

void FUN_00247cb0(void)

{
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_3c;
  
  if ((DAT_002a5240 == -1) || (DAT_002a5244 == -1)) {
    uStack_3c = 0;
    uStack_4c = 1;
    uStack_48 = 1;
    DAT_002a5240 = CreateSema(auStack_50);
    DAT_002a5244 = CreateSema(auStack_50);
    uStack_48 = 0;
    DAT_002a5248 = CreateSema(auStack_50);
    DAT_002a524c = 0;
  }
  return;
}

