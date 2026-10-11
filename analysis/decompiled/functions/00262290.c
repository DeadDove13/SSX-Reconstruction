/* Ghidra pseudocode. PS2 address: 00262290. Not validated source. */

long FUN_00262290(int param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = FUN_00263b88(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),param_2,
                       param_3);
  if (lVar2 == -1) {
    uVar1 = *(ushort *)(param_1 + 0xc) & 0xefff;
  }
  else {
    *(int *)(param_1 + 0x50) = (int)lVar2;
    uVar1 = *(ushort *)(param_1 + 0xc) | 0x1000;
  }
  *(ushort *)(param_1 + 0xc) = uVar1;
  return lVar2;
}

