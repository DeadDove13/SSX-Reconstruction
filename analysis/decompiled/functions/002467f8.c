/* Ghidra pseudocode. PS2 address: 002467f8. Not validated source. */

void FUN_002467f8(void)

{
  undefined8 uVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [80];
  
  FUN_00266a80(0);
  uVar1 = GetThreadId();
  FUN_00267460(auStack_80,uVar1);
  FUN_002674d8(auStack_60,0xffffffff80000704,0x246860,0x2d17c0,0,0,auStack_80);
  FUN_002678a0(auStack_80);
  return;
}

