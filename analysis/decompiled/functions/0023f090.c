/* Ghidra pseudocode. PS2 address: 0023f090. Not validated source. */

void FUN_0023f090(byte param_1)

{
  uint uVar1;
  
  while( true ) {
    uVar1 = (uint)param_1;
    if (*(char *)(DAT_002c5bf4 + uVar1) == '\0') break;
    FUN_0023f090(*(undefined1 *)(DAT_002c5bf8 + uVar1));
    param_1 = *(byte *)(DAT_002c5bfc + uVar1);
  }
  *DAT_002c5c04 = param_1;
  DAT_002c5c04 = DAT_002c5c04 + 1;
  return;
}

