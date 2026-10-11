/* Ghidra pseudocode. PS2 address: 00262210. Not validated source. */

undefined4 FUN_00262210(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0xc) & 0x100) != 0) {
    FUN_00263b88(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),0,2);
  }
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xefff;
  uVar1 = FUN_002639b0(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),param_2,
                       param_3);
  return uVar1;
}

