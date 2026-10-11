/* Ghidra pseudocode. PS2 address: 001f5d68. Not validated source. */

void FUN_001f5d68(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_001f5d48(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return;
}

