/* Ghidra pseudocode. PS2 address: 00154078. Not validated source. */

undefined4 FUN_00154078(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((3 < *(ushort *)(param_1 + 0x14fc)) && (uVar1 = 2, 5 < *(ushort *)(param_1 + 0x14fc))) {
    uVar1 = 3;
  }
  return uVar1;
}

