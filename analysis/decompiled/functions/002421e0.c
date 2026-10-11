/* Ghidra pseudocode. PS2 address: 002421e0. Not validated source. */

void FUN_002421e0(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DAT_002a47d0 = 0xffffffff;
  DAT_002a47d4 = 0;
  DAT_002a47d8 = 0;
  DAT_002a495c = 0;
  puVar3 = &DAT_002a47d0;
  while( true ) {
    puVar3[100] = 0;
    *(undefined1 *)(puVar3 + 0x65) = 0;
    *(undefined1 *)((int)puVar3 + 0x195) = 0;
    *(undefined1 *)((int)puVar3 + 0x197) = 0;
    if (0x2a49af < (int)(puVar3 + 0xf)) break;
    puVar3[0x72] = 0;
    puVar3 = puVar3 + 0xf;
  }
  iVar2 = 0x2f;
  puVar1 = &DAT_002a47e2;
  do {
    puVar1[-3] = 0xffff;
    iVar2 = iVar2 + -1;
    puVar1[-2] = 0xffff;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
  } while (-1 < iVar2);
  return;
}

