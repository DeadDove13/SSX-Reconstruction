/* Ghidra pseudocode. PS2 address: 001efb68. Not validated source. */

void FUN_001efb68(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 auStack_40 [11];
  undefined4 uStack_14;
  
  iVar2 = 0xb;
  puVar1 = &uStack_14;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  auStack_40[0] = 0x1b;
  FUN_002407d0(auStack_40);
  return;
}

