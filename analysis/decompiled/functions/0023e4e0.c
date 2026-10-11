/* Ghidra pseudocode. PS2 address: 0023e4e0. Not validated source. */

void FUN_0023e4e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x1f;
  puVar1 = &DAT_002a36bc;
  do {
    if ((code *)*puVar1 == (code *)0x0) {
      *puVar1 = 0;
    }
    else {
      (*(code *)*puVar1)();
      *puVar1 = 0;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  trap(0xffff);
  return;
}

