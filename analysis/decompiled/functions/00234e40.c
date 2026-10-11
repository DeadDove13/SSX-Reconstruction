/* Ghidra pseudocode. PS2 address: 00234e40. Not validated source. */

uint FUN_00234e40(undefined2 param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined2 auStack_20 [8];
  
  auStack_20[0] = param_1;
  lVar2 = FUN_002599d8(auStack_20,param_2 + 0x10,*(undefined4 *)(param_2 + 8),4,0x234e30);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)((int)lVar2 + 2);
  }
  return uVar1;
}

