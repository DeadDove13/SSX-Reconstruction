/* Ghidra pseudocode. PS2 address: 001f5ca8. Not validated source. */

void FUN_001f5ca8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x3f;
  iVar1 = param_1 + 0x329c0;
  do {
    iVar2 = iVar2 + -1;
    FUN_001f5770(iVar1);
    iVar1 = iVar1 + 0xa0;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x329bc) = 0;
  return;
}

