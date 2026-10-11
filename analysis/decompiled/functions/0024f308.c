/* Ghidra pseudocode. PS2 address: 0024f308. Not validated source. */

void FUN_0024f308(void)

{
  ulong uVar1;
  long lVar2;
  
  FUN_0024f040();
  while( true ) {
    while (lVar2 = FUN_0024ec90(0x20), lVar2 == 0x1b5) {
      FUN_0024edc0(0x20);
      uVar1 = FUN_0024eec8(4);
      if (10 < uVar1) {
        uVar1 = 0;
      }
      (*(code *)(&PTR_LAB_002a5c00)[(int)uVar1])();
      FUN_0024f040();
    }
    if (lVar2 != 0x1b2) break;
    FUN_0024edc0(0x20);
    FUN_0024f040();
  }
  return;
}

