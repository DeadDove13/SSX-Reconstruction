/* Ghidra pseudocode. PS2 address: 002621a8. Not validated source. */

int FUN_002621a8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00263be8(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),param_2,
                       param_3);
  if (iVar1 < 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xefff;
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  }
  return iVar1;
}

