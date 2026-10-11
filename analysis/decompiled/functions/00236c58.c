/* Ghidra pseudocode. PS2 address: 00236c58. Not validated source. */

uint FUN_00236c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uStack_160;
  undefined2 uStack_15c;
  undefined1 uStack_15a;
  
  uStack_160 = uStack_160 & 0xffffff00;
  lVar1 = FUN_0025bf10(param_1,0x2c59a8,6);
  if (lVar1 != 0) {
    uStack_15c = DAT_002c59ac;
    uStack_160 = DAT_002c59a8;
    uStack_15a = DAT_002c59ae;
  }
  FUN_0025b7e4(&uStack_160,param_1);
  lVar1 = FUN_00267a70(&uStack_160,0x603);
  if (-1 < lVar1) {
    FUN_00267f20(lVar1,param_2,param_3);
    FUN_00267bc8(lVar1);
  }
  return ~(uint)lVar1 >> 0x1f;
}

