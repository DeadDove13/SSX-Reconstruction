/* Ghidra pseudocode. PS2 address: 00172448. Not validated source. */

void FUN_00172448(undefined8 param_1)

{
  FUN_00170030(param_1,1,0x1f);
  FUN_0016eca0(param_1,0x281170,0,0xffffffffffffffff);
  *(undefined4 *)((int)param_1 + 0xb28) = 0;
  *(undefined **)((int)param_1 + 0xb2c) = &DAT_002811b0;
  FUN_0016e858(param_1,0x170,8);
  FUN_0016e990(param_1,0x164,8);
  FUN_0016e990(param_1,0x165,8);
  FUN_0016e990(param_1,0x16b,4);
  FUN_0016e990(param_1,0x16a,4);
  FUN_0016e990(param_1,0x34c,4);
  FUN_0016e990(param_1,0x34d,4);
  FUN_0016e990(param_1,0x361,7);
  FUN_0016e990(param_1,0x360,7);
  FUN_0016e990(param_1,0x1af,7);
  FUN_0016e990(param_1,0x1ae,7);
  FUN_00172550(param_1);
  return;
}

